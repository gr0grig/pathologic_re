task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	var_0_bool = 1; // 0x38 TMovB
	func_145(); // 0x3a NEW_2
	func_10297(); // 0x3d NEW_2
	TaskCall(0); // 0x40 TaskCall
	func_0(); // 0x41 NEW_2
	TaskReturn(); // 0x42 TaskReturn
	return 0; // 0x44 Return
}


task_1_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_float, var_73_float, var_74_int)
{
	var_75_bool = 0; var_76_bool = 0; // 0x45 PushV
	IsOverrideActive(var_76_bool); // 0x46 Func
	var_77_bool = var_76_bool == 0; // 0x48 Not
	if(var_77_bool == 0) goto Label_88; // 0x49 JumpB
	func_145(); // 0x4b NEW_2
	EventDisable(0); // 0x4d EventDisable
	var_78_bool = 0; var_79_object = Obj(); // 0x4e PushV
	var_79_object = var_74_int; // 0x4f Mov
	func_9747(var_79_object); // 0x50 NEW_2
	EventEnable(0); // 0x52 EventEnable
	var_92_object = Obj(); // 0x53 PushV
	var_92_object = var_74_int; // 0x54 Mov
	func_12078(var_92_object); // 0x55 NEW_2
	var_0_bool = 0; // 0x57 TMovB
	
Label_88:
	return 2; // 0x58 Return
}


	task_1_event_10(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_float, var_73_float, var_74_int, var_75_object, var_76_object, var_96_object)
	{
	var_97_bool = 0; var_98_bool = 0; // 0x59 PushV
	IsPlayerActor(var_96_object, var_98_bool); // 0x5a Func
	var_99_bool = var_98_bool; // 0x5c Push
	if(var_99_bool == 0) goto Label_108; // 0x5d JumpB
	func_145(); // 0x5f NEW_2
	var_100_object = Obj(); // 0x61 PushV
	var_100_object = var_96_object; // 0x62 Mov
	TaskCall(2); // 0x63 TaskCall
	func_148(var_100_object); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_0_bool = 0; // 0x67 TMovB
	var_114_int = 20; // 0x68 PushI
	var_115_float = 10.0; // 0x69 PushF
	SetTimer(var_114_int, var_115_float); // 0x6a Func
	
Label_108:
	return 2; // 0x6c Return
	}


task_1_event_7(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_float, var_73_float, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x6d PushV
	var_77_int = 20; // 0x6e PushI
	var_78_bool = var_74_int == var_77_int; // 0x6f Eq
	if(var_78_bool == 0) goto Label_118; // 0x70 JumpB
	var_0_bool = 1; // 0x71 TMovB
	var_79_int = 20; // 0x72 PushI
	KillTimer(var_79_int); // 0x73 Func
	goto Label_144; // 0x75 Jump
	
Label_144:
	return 2; // 0x90 Return
	
Label_118:
	var_80_int = 21; // 0x76 PushI
	var_81_bool = var_74_int == var_80_int; // 0x77 Eq
	if(var_81_bool == 0) goto Label_144; // 0x78 JumpB
	var_82_bool = var_0_bool; // 0x79 PushT
	if(var_82_bool == 0) goto Label_144; // 0x7a JumpB
	var_83_string = "player"; // 0x7b PushS
	FindActor(var_76_object, var_83_string); // 0x7c Func
	var_84_bool = 0; // 0x7e PushV
	var_84_bool = 0; // 0x7f MovB
	var_85_object = var_76_object; // 0x80 Push
	if(var_85_object == 0) goto Label_138; // 0x81 JumpB
	var_86_float = 0; var_87_object = Obj(); // 0x82 PushV
	var_87_object = var_76_object; // 0x83 Mov
	func_9688(var_87_object); // 0x84 NEW_2
	var_94_float = 62500.0; // 0x86 PushF
	var_95_bool = var_86_float <= var_94_float; // 0x87 LE
	if(var_95_bool == 0) goto Label_138; // 0x88 JumpB
	var_84_bool = 1; // 0x89 MovB
	
Label_138:
	if(var_84_bool == 0) goto Label_143; // 0x8a JumpB
	var_96_object = Obj(); // 0x8b PushV
	var_96_object = var_76_object; // 0x8c Mov
	func_89(); // 0x8d NEW_2
	
Label_143:
	var_76_object = 0; // 0x8f SetNull
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	func_193(); // 0xa3 NEW_2
	func_10297(); // 0xa6 NEW_2
	TaskCall(0); // 0xa9 TaskCall
	func_0(); // 0xaa NEW_2
	TaskReturn(); // 0xab TaskReturn
	return 0; // 0xad Return
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_float, var_73_float, var_74_int)
{
	var_75_bool = 0; var_76_bool = 0; // 0xae PushV
	IsOverrideActive(var_76_bool); // 0xaf Func
	var_77_bool = var_76_bool == 0; // 0xb1 Not
	if(var_77_bool == 0) goto Label_192; // 0xb2 JumpB
	func_193(); // 0xb4 NEW_2
	EventDisable(0); // 0xb6 EventDisable
	var_78_bool = 0; var_79_object = Obj(); // 0xb7 PushV
	var_79_object = var_74_int; // 0xb8 Mov
	func_9747(var_79_object); // 0xb9 NEW_2
	EventEnable(0); // 0xbb EventEnable
	var_92_object = Obj(); // 0xbc PushV
	var_92_object = var_74_int; // 0xbd Mov
	func_12078(var_92_object); // 0xbe NEW_2
	
Label_192:
	return 2; // 0xc0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	func_10297(); // 0xf8 NEW_2
	TaskCall(0); // 0xfb TaskCall
	func_0(); // 0xfc NEW_2
	TaskReturn(); // 0xfd TaskReturn
	return 0; // 0xff Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x235 PushI
	if(var_76_int == 0) goto Label_1530; // 0x236 JumpB
	func_10041(); // 0x238 NEW_2
	var_78_int = 34118; // 0x23a PushI
	var_79_bool = var_75_int == var_78_int; // 0x23b Eq
	if(var_79_bool == 0) goto Label_583; // 0x23c JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x23d PushV
	var_80_object = var_1_object; // 0x23e MovT
	var_81_object = var_0_bool; // 0x23f MovT
	func_10356(); // 0x240 NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x242 PushV
	var_139_object = var_1_object; // 0x243 MovT
	var_140_object = var_0_bool; // 0x244 MovT
	func_10606(); // 0x245 NEW_2
	
Label_583:
	var_165_int = 34177; // 0x247 PushI
	var_166_bool = var_75_int == var_165_int; // 0x248 Eq
	if(var_166_bool == 0) goto Label_591; // 0x249 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x24a PushV
	var_167_object = var_1_object; // 0x24b MovT
	var_168_object = var_0_bool; // 0x24c MovT
	func_10438(); // 0x24d NEW_2
	
Label_591:
	var_171_int = 33363; // 0x24f PushI
	var_172_bool = var_75_int == var_171_int; // 0x250 Eq
	if(var_172_bool == 0) goto Label_599; // 0x251 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x252 PushV
	var_173_object = var_1_object; // 0x253 MovT
	var_174_object = var_0_bool; // 0x254 MovT
	func_10418(); // 0x255 NEW_2
	
Label_599:
	var_191_int = 33362; // 0x257 PushI
	var_192_bool = var_75_int == var_191_int; // 0x258 Eq
	if(var_192_bool == 0) goto Label_607; // 0x259 JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x25a PushV
	var_193_object = var_1_object; // 0x25b MovT
	var_194_object = var_0_bool; // 0x25c MovT
	func_10418(); // 0x25d NEW_2
	
Label_607:
	var_195_int = 35191; // 0x25f PushI
	var_196_bool = var_75_int == var_195_int; // 0x260 Eq
	if(var_196_bool == 0) goto Label_615; // 0x261 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0x262 PushV
	var_197_object = var_1_object; // 0x263 MovT
	var_198_object = var_0_bool; // 0x264 MovT
	func_10418(); // 0x265 NEW_2
	
Label_615:
	var_199_int = 34176; // 0x267 PushI
	var_200_bool = var_75_int == var_199_int; // 0x268 Eq
	if(var_200_bool == 0) goto Label_628; // 0x269 JumpB
	var_201_object = Obj(); var_202_object = Obj(); // 0x26a PushV
	var_201_object = var_1_object; // 0x26b MovT
	var_202_object = var_0_bool; // 0x26c MovT
	func_10356(); // 0x26d NEW_2
	var_203_object = Obj(); var_204_object = Obj(); // 0x26f PushV
	var_203_object = var_1_object; // 0x270 MovT
	var_204_object = var_0_bool; // 0x271 MovT
	func_10606(); // 0x272 NEW_2
	
Label_628:
	var_205_int = 34165; // 0x274 PushI
	var_206_bool = var_75_int == var_205_int; // 0x275 Eq
	if(var_206_bool == 0) goto Label_636; // 0x276 JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x277 PushV
	var_207_object = var_1_object; // 0x278 MovT
	var_208_object = var_0_bool; // 0x279 MovT
	func_10444(); // 0x27a NEW_2
	
Label_636:
	var_211_int = 34169; // 0x27c PushI
	var_212_bool = var_75_int == var_211_int; // 0x27d Eq
	if(var_212_bool == 0) goto Label_649; // 0x27e JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x27f PushV
	var_213_object = var_1_object; // 0x280 MovT
	var_214_object = var_0_bool; // 0x281 MovT
	func_10396(); // 0x282 NEW_2
	var_217_object = Obj(); var_218_object = Obj(); // 0x284 PushV
	var_217_object = var_1_object; // 0x285 MovT
	var_218_object = var_0_bool; // 0x286 MovT
	func_10346(var_218_object); // 0x287 NEW_2
	
Label_649:
	var_238_int = 34170; // 0x289 PushI
	var_239_bool = var_75_int == var_238_int; // 0x28a Eq
	if(var_239_bool == 0) goto Label_662; // 0x28b JumpB
	var_240_object = Obj(); var_241_object = Obj(); // 0x28c PushV
	var_240_object = var_1_object; // 0x28d MovT
	var_241_object = var_0_bool; // 0x28e MovT
	func_10396(); // 0x28f NEW_2
	var_242_object = Obj(); var_243_object = Obj(); // 0x291 PushV
	var_242_object = var_1_object; // 0x292 MovT
	var_243_object = var_0_bool; // 0x293 MovT
	func_10638(var_243_object); // 0x294 NEW_2
	
Label_662:
	var_247_int = 34103; // 0x296 PushI
	var_248_bool = var_74_float == var_247_int; // 0x297 Eq
	if(var_248_bool == 0) goto Label_806; // 0x298 JumpB
	var_249_bool = 0; // 0x299 PushV
	var_249_bool = 0; // 0x29a MovB
	var_250_bool = 0; // 0x29b PushV
	var_250_bool = 0; // 0x29c MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x29d PushV
	var_252_object = var_1_object; // 0x29e MovT
	func_11145(var_252_object); // 0x29f NEW_2
	if(var_251_bool == 0) goto Label_680; // 0x2a1 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x2a2 PushV
	var_260_object = var_1_object; // 0x2a3 MovT
	func_11097(var_260_object); // 0x2a4 NEW_2
	if(var_259_bool == 0) goto Label_680; // 0x2a6 JumpB
	var_250_bool = 1; // 0x2a7 MovB
	
Label_680:
	if(var_250_bool == 0) goto Label_687; // 0x2a8 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x2a9 PushV
	var_266_object = var_1_object; // 0x2aa MovT
	func_11637(var_266_object); // 0x2ab NEW_2
	if(var_265_bool == 0) goto Label_687; // 0x2ad JumpB
	var_249_bool = 1; // 0x2ae MovB
	
Label_687:
	if(var_249_bool == 0) goto Label_713; // 0x2af JumpB
	var_281_object = Obj(); var_282_object = Obj(); // 0x2b0 PushV
	var_281_object = var_1_object; // 0x2b1 MovT
	var_282_object = var_0_bool; // 0x2b2 MovT
	func_10432(); // 0x2b3 NEW_2
	var_285_string = ""; // 0x2b5 PushV
	var_285_string = "Untrust"; // 0x2b6 MovS
	func_542(var_75_int, var_285_string); // 0x2b7 NEW_2
	var_302_int = 532641; // 0x2b9 PushI
	SetMessage(var_302_int); // 0x2ba TObjFunc
	ClearReplies(); // 0x2bc TObjFunc
	var_303_int = 532642; // 0x2be PushI
	var_304_int = 34105; // 0x2bf PushI
	var_305_int = 34104; // 0x2c0 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x2c1 TObjFunc
	var_306_int = 532687; // 0x2c3 PushI
	var_307_int = 34161; // 0x2c4 PushI
	var_308_int = 34160; // 0x2c5 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x2c6 TObjFunc
	return 0; // 0x2c8 Return
	
Label_713:
	var_309_string = ""; // 0x2c9 PushV
	var_309_string = "Neutral"; // 0x2ca MovS
	func_542(var_75_int, var_309_string); // 0x2cb NEW_2
	var_310_int = 531953; // 0x2cd PushI
	SetMessage(var_310_int); // 0x2ce TObjFunc
	ClearReplies(); // 0x2d0 TObjFunc
	var_311_bool = 0; // 0x2d2 PushV
	var_311_bool = 0; // 0x2d3 MovB
	var_312_bool = 0; var_313_object = Obj(); // 0x2d4 PushV
	var_313_object = var_1_object; // 0x2d5 MovT
	func_11157(var_313_object); // 0x2d6 NEW_2
	if(var_312_bool == 0) goto Label_735; // 0x2d8 JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x2d9 PushV
	var_319_object = var_1_object; // 0x2da MovT
	func_11637(var_319_object); // 0x2db NEW_2
	if(var_318_bool == 0) goto Label_735; // 0x2dd JumpB
	var_311_bool = 1; // 0x2de MovB
	
Label_735:
	if(var_311_bool == 0) goto Label_741; // 0x2df JumpB
	var_320_int = 532702; // 0x2e0 PushI
	var_321_int = 34178; // 0x2e1 PushI
	var_322_int = 34177; // 0x2e2 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x2e3 TObjFunc
	
Label_741:
	var_323_bool = 0; var_324_object = Obj(); // 0x2e5 PushV
	var_324_object = var_1_object; // 0x2e6 MovT
	func_11133(var_324_object); // 0x2e7 NEW_2
	if(var_323_bool == 0) goto Label_751; // 0x2e9 JumpB
	var_329_int = 531954; // 0x2ea PushI
	var_330_int = 33359; // 0x2eb PushI
	var_331_int = 33358; // 0x2ec PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x2ed TObjFunc
	
Label_751:
	var_332_bool = 0; // 0x2ef PushV
	var_332_bool = 0; // 0x2f0 MovB
	var_333_bool = 0; var_334_object = Obj(); // 0x2f1 PushV
	var_334_object = var_1_object; // 0x2f2 MovT
	func_11097(var_334_object); // 0x2f3 NEW_2
	if(var_333_bool == 0) goto Label_765; // 0x2f5 JumpB
	var_335_bool = 0; var_336_object = Obj(); // 0x2f6 PushV
	var_336_object = var_1_object; // 0x2f7 MovT
	func_11145(var_336_object); // 0x2f8 NEW_2
	var_337_bool = var_335_bool == 0; // 0x2fa Not
	if(var_337_bool == 0) goto Label_765; // 0x2fb JumpB
	var_332_bool = 1; // 0x2fc MovB
	
Label_765:
	if(var_332_bool == 0) goto Label_771; // 0x2fd JumpB
	var_338_int = 532699; // 0x2fe PushI
	var_339_int = 34175; // 0x2ff PushI
	var_340_int = 34174; // 0x300 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x301 TObjFunc
	
Label_771:
	var_341_bool = 0; // 0x303 PushV
	var_341_bool = 0; // 0x304 MovB
	var_342_bool = 0; // 0x305 PushV
	var_342_bool = 0; // 0x306 MovB
	var_343_bool = 0; var_344_object = Obj(); // 0x307 PushV
	var_344_object = var_1_object; // 0x308 MovT
	func_11121(var_344_object); // 0x309 NEW_2
	var_349_bool = var_343_bool == 0; // 0x30b Not
	if(var_349_bool == 0) goto Label_787; // 0x30c JumpB
	var_350_bool = 0; var_351_object = Obj(); // 0x30d PushV
	var_351_object = var_1_object; // 0x30e MovT
	func_11169(var_351_object); // 0x30f NEW_2
	if(var_350_bool == 0) goto Label_787; // 0x311 JumpB
	var_342_bool = 1; // 0x312 MovB
	
Label_787:
	if(var_342_bool == 0) goto Label_794; // 0x313 JumpB
	var_356_bool = 0; var_357_object = Obj(); // 0x314 PushV
	var_357_object = var_1_object; // 0x315 MovT
	func_11109(var_357_object); // 0x316 NEW_2
	if(var_356_bool == 0) goto Label_794; // 0x318 JumpB
	var_341_bool = 1; // 0x319 MovB
	
Label_794:
	if(var_341_bool == 0) goto Label_800; // 0x31a JumpB
	var_362_int = 532691; // 0x31b PushI
	var_363_int = 34166; // 0x31c PushI
	var_364_int = 34165; // 0x31d PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x31e TObjFunc
	
Label_800:
	var_365_int = 531960; // 0x320 PushI
	var_366_int = -1; // 0x321 PushI
	var_367_int = 33364; // 0x322 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x323 TObjFunc
	return 0; // 0x325 Return
	
Label_806:
	var_368_int = 34166; // 0x326 PushI
	var_369_bool = var_74_float == var_368_int; // 0x327 Eq
	if(var_369_bool == 0) goto Label_829; // 0x328 JumpB
	var_370_string = ""; // 0x329 PushV
	var_370_string = "Neutral"; // 0x32a MovS
	func_542(var_75_int, var_370_string); // 0x32b NEW_2
	var_371_int = 532692; // 0x32d PushI
	SetMessage(var_371_int); // 0x32e TObjFunc
	ClearReplies(); // 0x330 TObjFunc
	var_372_int = 532693; // 0x332 PushI
	var_373_int = 34168; // 0x333 PushI
	var_374_int = 34167; // 0x334 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x335 TObjFunc
	var_375_int = 532698; // 0x337 PushI
	var_376_int = 34168; // 0x338 PushI
	var_377_int = 34172; // 0x339 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x33a TObjFunc
	return 0; // 0x33c Return
	
Label_829:
	var_378_int = 34168; // 0x33d PushI
	var_379_bool = var_74_float == var_378_int; // 0x33e Eq
	if(var_379_bool == 0) goto Label_857; // 0x33f JumpB
	var_380_string = ""; // 0x340 PushV
	var_380_string = "Neutral"; // 0x341 MovS
	func_542(var_75_int, var_380_string); // 0x342 NEW_2
	var_381_int = 532694; // 0x344 PushI
	SetMessage(var_381_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_382_int = 532695; // 0x349 PushI
	var_383_int = -1; // 0x34a PushI
	var_384_int = 34169; // 0x34b PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x34c TObjFunc
	var_385_int = 532696; // 0x34e PushI
	var_386_int = -1; // 0x34f PushI
	var_387_int = 34170; // 0x350 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x351 TObjFunc
	var_388_int = 532697; // 0x353 PushI
	var_389_int = -1; // 0x354 PushI
	var_390_int = 34171; // 0x355 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x356 TObjFunc
	return 0; // 0x358 Return
	
Label_857:
	var_391_int = 34175; // 0x359 PushI
	var_392_bool = var_74_float == var_391_int; // 0x35a Eq
	if(var_392_bool == 0) goto Label_875; // 0x35b JumpB
	var_393_string = ""; // 0x35c PushV
	var_393_string = "Neutral"; // 0x35d MovS
	func_542(var_75_int, var_393_string); // 0x35e NEW_2
	var_394_int = 532700; // 0x360 PushI
	SetMessage(var_394_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_395_int = 532701; // 0x365 PushI
	var_396_int = -1; // 0x366 PushI
	var_397_int = 34176; // 0x367 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x368 TObjFunc
	return 0; // 0x36a Return
	
Label_875:
	var_398_int = 33359; // 0x36b PushI
	var_399_bool = var_74_float == var_398_int; // 0x36c Eq
	if(var_399_bool == 0) goto Label_898; // 0x36d JumpB
	var_400_string = ""; // 0x36e PushV
	var_400_string = "Sly"; // 0x36f MovS
	func_542(var_75_int, var_400_string); // 0x370 NEW_2
	var_401_int = 531955; // 0x372 PushI
	SetMessage(var_401_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_402_int = 533638; // 0x377 PushI
	var_403_int = 35163; // 0x378 PushI
	var_404_int = 35162; // 0x379 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x37a TObjFunc
	var_405_int = 533643; // 0x37c PushI
	var_406_int = 35168; // 0x37d PushI
	var_407_int = 35167; // 0x37e PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x37f TObjFunc
	return 0; // 0x381 Return
	
Label_898:
	var_408_int = 35168; // 0x382 PushI
	var_409_bool = var_74_float == var_408_int; // 0x383 Eq
	if(var_409_bool == 0) goto Label_921; // 0x384 JumpB
	var_410_string = ""; // 0x385 PushV
	var_410_string = "Sly"; // 0x386 MovS
	func_542(var_75_int, var_410_string); // 0x387 NEW_2
	var_411_int = 533644; // 0x389 PushI
	SetMessage(var_411_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_412_int = 533645; // 0x38e PushI
	var_413_int = 35170; // 0x38f PushI
	var_414_int = 35169; // 0x390 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x391 TObjFunc
	var_415_int = 533647; // 0x393 PushI
	var_416_int = 35170; // 0x394 PushI
	var_417_int = 35171; // 0x395 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x396 TObjFunc
	return 0; // 0x398 Return
	
Label_921:
	var_418_int = 35170; // 0x399 PushI
	var_419_bool = var_74_float == var_418_int; // 0x39a Eq
	if(var_419_bool == 0) goto Label_944; // 0x39b JumpB
	var_420_string = ""; // 0x39c PushV
	var_420_string = "Fear"; // 0x39d MovS
	func_542(var_75_int, var_420_string); // 0x39e NEW_2
	var_421_int = 533646; // 0x3a0 PushI
	SetMessage(var_421_int); // 0x3a1 TObjFunc
	ClearReplies(); // 0x3a3 TObjFunc
	var_422_int = 533648; // 0x3a5 PushI
	var_423_int = 35165; // 0x3a6 PushI
	var_424_int = 35173; // 0x3a7 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x3a8 TObjFunc
	var_425_int = 533649; // 0x3aa PushI
	var_426_int = 35165; // 0x3ab PushI
	var_427_int = 35174; // 0x3ac PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x3ad TObjFunc
	return 0; // 0x3af Return
	
Label_944:
	var_428_int = 35163; // 0x3b0 PushI
	var_429_bool = var_74_float == var_428_int; // 0x3b1 Eq
	if(var_429_bool == 0) goto Label_962; // 0x3b2 JumpB
	var_430_string = ""; // 0x3b3 PushV
	var_430_string = "Sly"; // 0x3b4 MovS
	func_542(var_75_int, var_430_string); // 0x3b5 NEW_2
	var_431_int = 533639; // 0x3b7 PushI
	SetMessage(var_431_int); // 0x3b8 TObjFunc
	ClearReplies(); // 0x3ba TObjFunc
	var_432_int = 533640; // 0x3bc PushI
	var_433_int = 35165; // 0x3bd PushI
	var_434_int = 35164; // 0x3be PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x3bf TObjFunc
	return 0; // 0x3c1 Return
	
Label_962:
	var_435_int = 35165; // 0x3c2 PushI
	var_436_bool = var_74_float == var_435_int; // 0x3c3 Eq
	if(var_436_bool == 0) goto Label_985; // 0x3c4 JumpB
	var_437_string = ""; // 0x3c5 PushV
	var_437_string = "Sly"; // 0x3c6 MovS
	func_542(var_75_int, var_437_string); // 0x3c7 NEW_2
	var_438_int = 533641; // 0x3c9 PushI
	SetMessage(var_438_int); // 0x3ca TObjFunc
	ClearReplies(); // 0x3cc TObjFunc
	var_439_int = 533642; // 0x3ce PushI
	var_440_int = 35175; // 0x3cf PushI
	var_441_int = 35166; // 0x3d0 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x3d1 TObjFunc
	var_442_int = 533655; // 0x3d3 PushI
	var_443_int = 35183; // 0x3d4 PushI
	var_444_int = 35182; // 0x3d5 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x3d6 TObjFunc
	return 0; // 0x3d8 Return
	
Label_985:
	var_445_int = 35183; // 0x3d9 PushI
	var_446_bool = var_74_float == var_445_int; // 0x3da Eq
	if(var_446_bool == 0) goto Label_1008; // 0x3db JumpB
	var_447_string = ""; // 0x3dc PushV
	var_447_string = "Sly"; // 0x3dd MovS
	func_542(var_75_int, var_447_string); // 0x3de NEW_2
	var_448_int = 533656; // 0x3e0 PushI
	SetMessage(var_448_int); // 0x3e1 TObjFunc
	ClearReplies(); // 0x3e3 TObjFunc
	var_449_int = 533657; // 0x3e5 PushI
	var_450_int = 35188; // 0x3e6 PushI
	var_451_int = 35184; // 0x3e7 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x3e8 TObjFunc
	var_452_int = 533658; // 0x3ea PushI
	var_453_int = 35177; // 0x3eb PushI
	var_454_int = 35185; // 0x3ec PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x3ed TObjFunc
	return 0; // 0x3ef Return
	
Label_1008:
	var_455_int = 35188; // 0x3f0 PushI
	var_456_bool = var_74_float == var_455_int; // 0x3f1 Eq
	if(var_456_bool == 0) goto Label_1026; // 0x3f2 JumpB
	var_457_string = ""; // 0x3f3 PushV
	var_457_string = "Rage"; // 0x3f4 MovS
	func_542(var_75_int, var_457_string); // 0x3f5 NEW_2
	var_458_int = 533659; // 0x3f7 PushI
	SetMessage(var_458_int); // 0x3f8 TObjFunc
	ClearReplies(); // 0x3fa TObjFunc
	var_459_int = 533660; // 0x3fc PushI
	var_460_int = 35177; // 0x3fd PushI
	var_461_int = 35189; // 0x3fe PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x3ff TObjFunc
	return 0; // 0x401 Return
	
Label_1026:
	var_462_int = 35175; // 0x402 PushI
	var_463_bool = var_74_float == var_462_int; // 0x403 Eq
	if(var_463_bool == 0) goto Label_1049; // 0x404 JumpB
	var_464_string = ""; // 0x405 PushV
	var_464_string = "Sly"; // 0x406 MovS
	func_542(var_75_int, var_464_string); // 0x407 NEW_2
	var_465_int = 533650; // 0x409 PushI
	SetMessage(var_465_int); // 0x40a TObjFunc
	ClearReplies(); // 0x40c TObjFunc
	var_466_int = 533651; // 0x40e PushI
	var_467_int = 35177; // 0x40f PushI
	var_468_int = 35176; // 0x410 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x411 TObjFunc
	var_469_int = 533654; // 0x413 PushI
	var_470_int = 35177; // 0x414 PushI
	var_471_int = 35179; // 0x415 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x416 TObjFunc
	return 0; // 0x418 Return
	
Label_1049:
	var_472_int = 35177; // 0x419 PushI
	var_473_bool = var_74_float == var_472_int; // 0x41a Eq
	if(var_473_bool == 0) goto Label_1067; // 0x41b JumpB
	var_474_string = ""; // 0x41c PushV
	var_474_string = "Fear"; // 0x41d MovS
	func_542(var_75_int, var_474_string); // 0x41e NEW_2
	var_475_int = 533652; // 0x420 PushI
	SetMessage(var_475_int); // 0x421 TObjFunc
	ClearReplies(); // 0x423 TObjFunc
	var_476_int = 533653; // 0x425 PushI
	var_477_int = 33361; // 0x426 PushI
	var_478_int = 35178; // 0x427 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x428 TObjFunc
	return 0; // 0x42a Return
	
Label_1067:
	var_479_int = 33361; // 0x42b PushI
	var_480_bool = var_74_float == var_479_int; // 0x42c Eq
	if(var_480_bool == 0) goto Label_1095; // 0x42d JumpB
	var_481_string = ""; // 0x42e PushV
	var_481_string = "Fear"; // 0x42f MovS
	func_542(var_75_int, var_481_string); // 0x430 NEW_2
	var_482_int = 531957; // 0x432 PushI
	SetMessage(var_482_int); // 0x433 TObjFunc
	ClearReplies(); // 0x435 TObjFunc
	var_483_int = 531959; // 0x437 PushI
	var_484_int = -1; // 0x438 PushI
	var_485_int = 33363; // 0x439 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x43a TObjFunc
	var_486_int = 531958; // 0x43c PushI
	var_487_int = -1; // 0x43d PushI
	var_488_int = 33362; // 0x43e PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x43f TObjFunc
	var_489_int = 533661; // 0x441 PushI
	var_490_int = -1; // 0x442 PushI
	var_491_int = 35191; // 0x443 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x444 TObjFunc
	return 0; // 0x446 Return
	
Label_1095:
	var_492_int = 34178; // 0x447 PushI
	var_493_bool = var_74_float == var_492_int; // 0x448 Eq
	if(var_493_bool == 0) goto Label_1118; // 0x449 JumpB
	var_494_string = ""; // 0x44a PushV
	var_494_string = "Untrust"; // 0x44b MovS
	func_542(var_75_int, var_494_string); // 0x44c NEW_2
	var_495_int = 532703; // 0x44e PushI
	SetMessage(var_495_int); // 0x44f TObjFunc
	ClearReplies(); // 0x451 TObjFunc
	var_496_int = 532704; // 0x453 PushI
	var_497_int = 34180; // 0x454 PushI
	var_498_int = 34179; // 0x455 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x456 TObjFunc
	var_499_int = 533589; // 0x458 PushI
	var_500_int = 35104; // 0x459 PushI
	var_501_int = 35107; // 0x45a PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x45b TObjFunc
	return 0; // 0x45d Return
	
Label_1118:
	var_502_int = 34180; // 0x45e PushI
	var_503_bool = var_74_float == var_502_int; // 0x45f Eq
	if(var_503_bool == 0) goto Label_1146; // 0x460 JumpB
	var_504_string = ""; // 0x461 PushV
	var_504_string = "Untrust"; // 0x462 MovS
	func_542(var_75_int, var_504_string); // 0x463 NEW_2
	var_505_int = 532705; // 0x465 PushI
	SetMessage(var_505_int); // 0x466 TObjFunc
	ClearReplies(); // 0x468 TObjFunc
	var_506_int = 532706; // 0x46a PushI
	var_507_int = 34182; // 0x46b PushI
	var_508_int = 34181; // 0x46c PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x46d TObjFunc
	var_509_int = 532712; // 0x46f PushI
	var_510_int = 34182; // 0x470 PushI
	var_511_int = 34187; // 0x471 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x472 TObjFunc
	var_512_int = 533586; // 0x474 PushI
	var_513_int = 35104; // 0x475 PushI
	var_514_int = 35103; // 0x476 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x477 TObjFunc
	return 0; // 0x479 Return
	
Label_1146:
	var_515_int = 35104; // 0x47a PushI
	var_516_bool = var_74_float == var_515_int; // 0x47b Eq
	if(var_516_bool == 0) goto Label_1164; // 0x47c JumpB
	var_517_string = ""; // 0x47d PushV
	var_517_string = "Neutral"; // 0x47e MovS
	func_542(var_75_int, var_517_string); // 0x47f NEW_2
	var_518_int = 533587; // 0x481 PushI
	SetMessage(var_518_int); // 0x482 TObjFunc
	ClearReplies(); // 0x484 TObjFunc
	var_519_int = 533588; // 0x486 PushI
	var_520_int = 34182; // 0x487 PushI
	var_521_int = 35105; // 0x488 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x489 TObjFunc
	return 0; // 0x48b Return
	
Label_1164:
	var_522_int = 34182; // 0x48c PushI
	var_523_bool = var_74_float == var_522_int; // 0x48d Eq
	if(var_523_bool == 0) goto Label_1182; // 0x48e JumpB
	var_524_string = ""; // 0x48f PushV
	var_524_string = "Neutral"; // 0x490 MovS
	func_542(var_75_int, var_524_string); // 0x491 NEW_2
	var_525_int = 532707; // 0x493 PushI
	SetMessage(var_525_int); // 0x494 TObjFunc
	ClearReplies(); // 0x496 TObjFunc
	var_526_int = 532708; // 0x498 PushI
	var_527_int = 34184; // 0x499 PushI
	var_528_int = 34183; // 0x49a PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x49b TObjFunc
	return 0; // 0x49d Return
	
Label_1182:
	var_529_int = 34184; // 0x49e PushI
	var_530_bool = var_74_float == var_529_int; // 0x49f Eq
	if(var_530_bool == 0) goto Label_1205; // 0x4a0 JumpB
	var_531_string = ""; // 0x4a1 PushV
	var_531_string = "Neutral"; // 0x4a2 MovS
	func_542(var_75_int, var_531_string); // 0x4a3 NEW_2
	var_532_int = 532709; // 0x4a5 PushI
	SetMessage(var_532_int); // 0x4a6 TObjFunc
	ClearReplies(); // 0x4a8 TObjFunc
	var_533_int = 532710; // 0x4aa PushI
	var_534_int = -1; // 0x4ab PushI
	var_535_int = 34185; // 0x4ac PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x4ad TObjFunc
	var_536_int = 532711; // 0x4af PushI
	var_537_int = -1; // 0x4b0 PushI
	var_538_int = 34186; // 0x4b1 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x4b2 TObjFunc
	return 0; // 0x4b4 Return
	
Label_1205:
	var_539_int = 34161; // 0x4b5 PushI
	var_540_bool = var_74_float == var_539_int; // 0x4b6 Eq
	if(var_540_bool == 0) goto Label_1228; // 0x4b7 JumpB
	var_541_string = ""; // 0x4b8 PushV
	var_541_string = "Neutral"; // 0x4b9 MovS
	func_542(var_75_int, var_541_string); // 0x4ba NEW_2
	var_542_int = 532688; // 0x4bc PushI
	SetMessage(var_542_int); // 0x4bd TObjFunc
	ClearReplies(); // 0x4bf TObjFunc
	var_543_int = 532689; // 0x4c1 PushI
	var_544_int = 34105; // 0x4c2 PushI
	var_545_int = 34162; // 0x4c3 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x4c4 TObjFunc
	var_546_int = 532690; // 0x4c6 PushI
	var_547_int = -1; // 0x4c7 PushI
	var_548_int = 34164; // 0x4c8 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x4c9 TObjFunc
	return 0; // 0x4cb Return
	
Label_1228:
	var_549_int = 34105; // 0x4cc PushI
	var_550_bool = var_74_float == var_549_int; // 0x4cd Eq
	if(var_550_bool == 0) goto Label_1256; // 0x4ce JumpB
	var_551_string = ""; // 0x4cf PushV
	var_551_string = "Untrust"; // 0x4d0 MovS
	func_542(var_75_int, var_551_string); // 0x4d1 NEW_2
	var_552_int = 532643; // 0x4d3 PushI
	SetMessage(var_552_int); // 0x4d4 TObjFunc
	ClearReplies(); // 0x4d6 TObjFunc
	var_553_int = 532644; // 0x4d8 PushI
	var_554_int = 34107; // 0x4d9 PushI
	var_555_int = 34106; // 0x4da PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x4db TObjFunc
	var_556_int = 532680; // 0x4dd PushI
	var_557_int = 34151; // 0x4de PushI
	var_558_int = 34150; // 0x4df PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x4e0 TObjFunc
	var_559_int = 532686; // 0x4e2 PushI
	var_560_int = 34151; // 0x4e3 PushI
	var_561_int = 34158; // 0x4e4 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x4e5 TObjFunc
	return 0; // 0x4e7 Return
	
Label_1256:
	var_562_int = 34151; // 0x4e8 PushI
	var_563_bool = var_74_float == var_562_int; // 0x4e9 Eq
	if(var_563_bool == 0) goto Label_1279; // 0x4ea JumpB
	var_564_string = ""; // 0x4eb PushV
	var_564_string = "Neutral"; // 0x4ec MovS
	func_542(var_75_int, var_564_string); // 0x4ed NEW_2
	var_565_int = 532681; // 0x4ef PushI
	SetMessage(var_565_int); // 0x4f0 TObjFunc
	ClearReplies(); // 0x4f2 TObjFunc
	var_566_int = 532682; // 0x4f4 PushI
	var_567_int = 34107; // 0x4f5 PushI
	var_568_int = 34152; // 0x4f6 PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x4f7 TObjFunc
	var_569_int = 532683; // 0x4f9 PushI
	var_570_int = 34155; // 0x4fa PushI
	var_571_int = 34154; // 0x4fb PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x4fc TObjFunc
	return 0; // 0x4fe Return
	
Label_1279:
	var_572_int = 34155; // 0x4ff PushI
	var_573_bool = var_74_float == var_572_int; // 0x500 Eq
	if(var_573_bool == 0) goto Label_1297; // 0x501 JumpB
	var_574_string = ""; // 0x502 PushV
	var_574_string = "Neutral"; // 0x503 MovS
	func_542(var_75_int, var_574_string); // 0x504 NEW_2
	var_575_int = 532684; // 0x506 PushI
	SetMessage(var_575_int); // 0x507 TObjFunc
	ClearReplies(); // 0x509 TObjFunc
	var_576_int = 532685; // 0x50b PushI
	var_577_int = 34107; // 0x50c PushI
	var_578_int = 34156; // 0x50d PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x50e TObjFunc
	return 0; // 0x510 Return
	
Label_1297:
	var_579_int = 34107; // 0x511 PushI
	var_580_bool = var_74_float == var_579_int; // 0x512 Eq
	if(var_580_bool == 0) goto Label_1320; // 0x513 JumpB
	var_581_string = ""; // 0x514 PushV
	var_581_string = "Neutral"; // 0x515 MovS
	func_542(var_75_int, var_581_string); // 0x516 NEW_2
	var_582_int = 532645; // 0x518 PushI
	SetMessage(var_582_int); // 0x519 TObjFunc
	ClearReplies(); // 0x51b TObjFunc
	var_583_int = 532646; // 0x51d PushI
	var_584_int = 34109; // 0x51e PushI
	var_585_int = 34108; // 0x51f PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x520 TObjFunc
	var_586_int = 532677; // 0x522 PushI
	var_587_int = 34147; // 0x523 PushI
	var_588_int = 34146; // 0x524 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x525 TObjFunc
	return 0; // 0x527 Return
	
Label_1320:
	var_589_int = 34147; // 0x528 PushI
	var_590_bool = var_74_float == var_589_int; // 0x529 Eq
	if(var_590_bool == 0) goto Label_1338; // 0x52a JumpB
	var_591_string = ""; // 0x52b PushV
	var_591_string = "Neutral"; // 0x52c MovS
	func_542(var_75_int, var_591_string); // 0x52d NEW_2
	var_592_int = 532678; // 0x52f PushI
	SetMessage(var_592_int); // 0x530 TObjFunc
	ClearReplies(); // 0x532 TObjFunc
	var_593_int = 532679; // 0x534 PushI
	var_594_int = 34109; // 0x535 PushI
	var_595_int = 34148; // 0x536 PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x537 TObjFunc
	return 0; // 0x539 Return
	
Label_1338:
	var_596_int = 34109; // 0x53a PushI
	var_597_bool = var_74_float == var_596_int; // 0x53b Eq
	if(var_597_bool == 0) goto Label_1356; // 0x53c JumpB
	var_598_string = ""; // 0x53d PushV
	var_598_string = "Neutral"; // 0x53e MovS
	func_542(var_75_int, var_598_string); // 0x53f NEW_2
	var_599_int = 532647; // 0x541 PushI
	SetMessage(var_599_int); // 0x542 TObjFunc
	ClearReplies(); // 0x544 TObjFunc
	var_600_int = 532648; // 0x546 PushI
	var_601_int = 34111; // 0x547 PushI
	var_602_int = 34110; // 0x548 PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x549 TObjFunc
	return 0; // 0x54b Return
	
Label_1356:
	var_603_int = 34143; // 0x54c PushI
	var_604_bool = var_74_float == var_603_int; // 0x54d Eq
	if(var_604_bool == 0) goto Label_1359; // 0x54e JumpB
	
Label_1359:
	var_605_int = 34111; // 0x54f PushI
	var_606_bool = var_74_float == var_605_int; // 0x550 Eq
	if(var_606_bool == 0) goto Label_1377; // 0x551 JumpB
	var_607_string = ""; // 0x552 PushV
	var_607_string = "Neutral"; // 0x553 MovS
	func_542(var_75_int, var_607_string); // 0x554 NEW_2
	var_608_int = 532649; // 0x556 PushI
	SetMessage(var_608_int); // 0x557 TObjFunc
	ClearReplies(); // 0x559 TObjFunc
	var_609_int = 532650; // 0x55b PushI
	var_610_int = 34113; // 0x55c PushI
	var_611_int = 34112; // 0x55d PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x55e TObjFunc
	return 0; // 0x560 Return
	
Label_1377:
	var_612_int = 34133; // 0x561 PushI
	var_613_bool = var_74_float == var_612_int; // 0x562 Eq
	if(var_613_bool == 0) goto Label_1380; // 0x563 JumpB
	
Label_1380:
	var_614_int = 34137; // 0x564 PushI
	var_615_bool = var_74_float == var_614_int; // 0x565 Eq
	if(var_615_bool == 0) goto Label_1403; // 0x566 JumpB
	var_616_string = ""; // 0x567 PushV
	var_616_string = "Neutral"; // 0x568 MovS
	func_542(var_75_int, var_616_string); // 0x569 NEW_2
	var_617_int = 532671; // 0x56b PushI
	SetMessage(var_617_int); // 0x56c TObjFunc
	ClearReplies(); // 0x56e TObjFunc
	var_618_int = 532672; // 0x570 PushI
	var_619_int = 34113; // 0x571 PushI
	var_620_int = 34138; // 0x572 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x573 TObjFunc
	var_621_int = 532673; // 0x575 PushI
	var_622_int = 34113; // 0x576 PushI
	var_623_int = 34140; // 0x577 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x578 TObjFunc
	return 0; // 0x57a Return
	
Label_1403:
	var_624_int = 34113; // 0x57b PushI
	var_625_bool = var_74_float == var_624_int; // 0x57c Eq
	if(var_625_bool == 0) goto Label_1426; // 0x57d JumpB
	var_626_string = ""; // 0x57e PushV
	var_626_string = "Sly"; // 0x57f MovS
	func_542(var_75_int, var_626_string); // 0x580 NEW_2
	var_627_int = 532651; // 0x582 PushI
	SetMessage(var_627_int); // 0x583 TObjFunc
	ClearReplies(); // 0x585 TObjFunc
	var_628_int = 532652; // 0x587 PushI
	var_629_int = 34115; // 0x588 PushI
	var_630_int = 34114; // 0x589 PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x58a TObjFunc
	var_631_int = 532663; // 0x58c PushI
	var_632_int = 34127; // 0x58d PushI
	var_633_int = 34126; // 0x58e PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0x58f TObjFunc
	return 0; // 0x591 Return
	
Label_1426:
	var_634_int = 34127; // 0x592 PushI
	var_635_bool = var_74_float == var_634_int; // 0x593 Eq
	if(var_635_bool == 0) goto Label_1449; // 0x594 JumpB
	var_636_string = ""; // 0x595 PushV
	var_636_string = "Untrust"; // 0x596 MovS
	func_542(var_75_int, var_636_string); // 0x597 NEW_2
	var_637_int = 532664; // 0x599 PushI
	SetMessage(var_637_int); // 0x59a TObjFunc
	ClearReplies(); // 0x59c TObjFunc
	var_638_int = 532665; // 0x59e PushI
	var_639_int = 34115; // 0x59f PushI
	var_640_int = 34128; // 0x5a0 PushI
	AddReply(var_638_int, var_639_int, var_640_int); // 0x5a1 TObjFunc
	var_641_int = 532666; // 0x5a3 PushI
	var_642_int = 34117; // 0x5a4 PushI
	var_643_int = 34130; // 0x5a5 PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0x5a6 TObjFunc
	return 0; // 0x5a8 Return
	
Label_1449:
	var_644_int = 34115; // 0x5a9 PushI
	var_645_bool = var_74_float == var_644_int; // 0x5aa Eq
	if(var_645_bool == 0) goto Label_1472; // 0x5ab JumpB
	var_646_string = ""; // 0x5ac PushV
	var_646_string = "Untrust"; // 0x5ad MovS
	func_542(var_75_int, var_646_string); // 0x5ae NEW_2
	var_647_int = 532653; // 0x5b0 PushI
	SetMessage(var_647_int); // 0x5b1 TObjFunc
	ClearReplies(); // 0x5b3 TObjFunc
	var_648_int = 532654; // 0x5b5 PushI
	var_649_int = 34117; // 0x5b6 PushI
	var_650_int = 34116; // 0x5b7 PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x5b8 TObjFunc
	var_651_int = 532658; // 0x5ba PushI
	var_652_int = 34121; // 0x5bb PushI
	var_653_int = 34120; // 0x5bc PushI
	AddReply(var_651_int, var_652_int, var_653_int); // 0x5bd TObjFunc
	return 0; // 0x5bf Return
	
Label_1472:
	var_654_int = 34121; // 0x5c0 PushI
	var_655_bool = var_74_float == var_654_int; // 0x5c1 Eq
	if(var_655_bool == 0) goto Label_1495; // 0x5c2 JumpB
	var_656_string = ""; // 0x5c3 PushV
	var_656_string = "Sly"; // 0x5c4 MovS
	func_542(var_75_int, var_656_string); // 0x5c5 NEW_2
	var_657_int = 532659; // 0x5c7 PushI
	SetMessage(var_657_int); // 0x5c8 TObjFunc
	ClearReplies(); // 0x5ca TObjFunc
	var_658_int = 532660; // 0x5cc PushI
	var_659_int = 34117; // 0x5cd PushI
	var_660_int = 34122; // 0x5ce PushI
	AddReply(var_658_int, var_659_int, var_660_int); // 0x5cf TObjFunc
	var_661_int = 532662; // 0x5d1 PushI
	var_662_int = -1; // 0x5d2 PushI
	var_663_int = 34125; // 0x5d3 PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x5d4 TObjFunc
	return 0; // 0x5d6 Return
	
Label_1495:
	var_664_int = 34117; // 0x5d7 PushI
	var_665_bool = var_74_float == var_664_int; // 0x5d8 Eq
	if(var_665_bool == 0) goto Label_1518; // 0x5d9 JumpB
	var_666_string = ""; // 0x5da PushV
	var_666_string = "Untrust"; // 0x5db MovS
	func_542(var_75_int, var_666_string); // 0x5dc NEW_2
	var_667_int = 532655; // 0x5de PushI
	SetMessage(var_667_int); // 0x5df TObjFunc
	ClearReplies(); // 0x5e1 TObjFunc
	var_668_int = 532656; // 0x5e3 PushI
	var_669_int = -1; // 0x5e4 PushI
	var_670_int = 34118; // 0x5e5 PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0x5e6 TObjFunc
	var_671_int = 532657; // 0x5e8 PushI
	var_672_int = -1; // 0x5e9 PushI
	var_673_int = 34119; // 0x5ea PushI
	AddReply(var_671_int, var_672_int, var_673_int); // 0x5eb TObjFunc
	return 0; // 0x5ed Return
	
Label_1518:
	var_3_object = 1; // 0x5ee TMovB
	var_674_bool = 0; // 0x5ef PushV
	func_10306(var_674_bool); // 0x5f0 NEW_2
	if(var_674_bool == 0) goto Label_1526; // 0x5f2 JumpB
	lshStopAnimation(); // 0x5f3 Func
	goto Label_1528; // 0x5f5 Jump
	
Label_1528:
	return 0; // 0x5f8 Return
	
Label_1526:
	StopAnimation(); // 0x5f6 Func
	
Label_1530:
	return 0; // 0x5fa Return
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x69d PushI
	if(var_76_int == 0) goto Label_1851; // 0x69e JumpB
	func_10041(); // 0x6a0 NEW_2
	var_78_int = 37363; // 0x6a2 PushI
	var_79_bool = var_74_float == var_78_int; // 0x6a3 Eq
	if(var_79_bool == 0) goto Label_1721; // 0x6a4 JumpB
	var_80_string = ""; // 0x6a5 PushV
	var_80_string = "Neutral"; // 0x6a6 MovS
	func_1670(var_75_int, var_80_string); // 0x6a7 NEW_2
	var_97_int = 535677; // 0x6a9 PushI
	SetMessage(var_97_int); // 0x6aa TObjFunc
	ClearReplies(); // 0x6ac TObjFunc
	var_98_int = 535678; // 0x6ae PushI
	var_99_int = 42150; // 0x6af PushI
	var_100_int = 37364; // 0x6b0 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x6b1 TObjFunc
	var_101_int = 540005; // 0x6b3 PushI
	var_102_int = -1; // 0x6b4 PushI
	var_103_int = 41976; // 0x6b5 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x6b6 TObjFunc
	return 0; // 0x6b8 Return
	
Label_1721:
	var_104_int = 42150; // 0x6b9 PushI
	var_105_bool = var_74_float == var_104_int; // 0x6ba Eq
	if(var_105_bool == 0) goto Label_1744; // 0x6bb JumpB
	var_106_string = ""; // 0x6bc PushV
	var_106_string = "Sly"; // 0x6bd MovS
	func_1670(var_75_int, var_106_string); // 0x6be NEW_2
	var_107_int = 540173; // 0x6c0 PushI
	SetMessage(var_107_int); // 0x6c1 TObjFunc
	ClearReplies(); // 0x6c3 TObjFunc
	var_108_int = 540174; // 0x6c5 PushI
	var_109_int = 42153; // 0x6c6 PushI
	var_110_int = 42151; // 0x6c7 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x6c8 TObjFunc
	var_111_int = 540175; // 0x6ca PushI
	var_112_int = 42154; // 0x6cb PushI
	var_113_int = 42152; // 0x6cc PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x6cd TObjFunc
	return 0; // 0x6cf Return
	
Label_1744:
	var_114_int = 42154; // 0x6d0 PushI
	var_115_bool = var_74_float == var_114_int; // 0x6d1 Eq
	if(var_115_bool == 0) goto Label_1762; // 0x6d2 JumpB
	var_116_string = ""; // 0x6d3 PushV
	var_116_string = "Sly"; // 0x6d4 MovS
	func_1670(var_75_int, var_116_string); // 0x6d5 NEW_2
	var_117_int = 540177; // 0x6d7 PushI
	SetMessage(var_117_int); // 0x6d8 TObjFunc
	ClearReplies(); // 0x6da TObjFunc
	var_118_int = 540181; // 0x6dc PushI
	var_119_int = 42159; // 0x6dd PushI
	var_120_int = 42158; // 0x6de PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x6df TObjFunc
	return 0; // 0x6e1 Return
	
Label_1762:
	var_121_int = 42159; // 0x6e2 PushI
	var_122_bool = var_74_float == var_121_int; // 0x6e3 Eq
	if(var_122_bool == 0) goto Label_1780; // 0x6e4 JumpB
	var_123_string = ""; // 0x6e5 PushV
	var_123_string = "Sly"; // 0x6e6 MovS
	func_1670(var_75_int, var_123_string); // 0x6e7 NEW_2
	var_124_int = 540182; // 0x6e9 PushI
	SetMessage(var_124_int); // 0x6ea TObjFunc
	ClearReplies(); // 0x6ec TObjFunc
	var_125_int = 540183; // 0x6ee PushI
	var_126_int = 42161; // 0x6ef PushI
	var_127_int = 42160; // 0x6f0 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x6f1 TObjFunc
	return 0; // 0x6f3 Return
	
Label_1780:
	var_128_int = 42153; // 0x6f4 PushI
	var_129_bool = var_74_float == var_128_int; // 0x6f5 Eq
	if(var_129_bool == 0) goto Label_1798; // 0x6f6 JumpB
	var_130_string = ""; // 0x6f7 PushV
	var_130_string = "Untrust"; // 0x6f8 MovS
	func_1670(var_75_int, var_130_string); // 0x6f9 NEW_2
	var_131_int = 540176; // 0x6fb PushI
	SetMessage(var_131_int); // 0x6fc TObjFunc
	ClearReplies(); // 0x6fe TObjFunc
	var_132_int = 540178; // 0x700 PushI
	var_133_int = 42156; // 0x701 PushI
	var_134_int = 42155; // 0x702 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x703 TObjFunc
	return 0; // 0x705 Return
	
Label_1798:
	var_135_int = 42156; // 0x706 PushI
	var_136_bool = var_74_float == var_135_int; // 0x707 Eq
	if(var_136_bool == 0) goto Label_1816; // 0x708 JumpB
	var_137_string = ""; // 0x709 PushV
	var_137_string = "Untrust"; // 0x70a MovS
	func_1670(var_75_int, var_137_string); // 0x70b NEW_2
	var_138_int = 540179; // 0x70d PushI
	SetMessage(var_138_int); // 0x70e TObjFunc
	ClearReplies(); // 0x710 TObjFunc
	var_139_int = 540180; // 0x712 PushI
	var_140_int = 42161; // 0x713 PushI
	var_141_int = 42157; // 0x714 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x715 TObjFunc
	return 0; // 0x717 Return
	
Label_1816:
	var_142_int = 42161; // 0x718 PushI
	var_143_bool = var_74_float == var_142_int; // 0x719 Eq
	if(var_143_bool == 0) goto Label_1839; // 0x71a JumpB
	var_144_string = ""; // 0x71b PushV
	var_144_string = "Untrust"; // 0x71c MovS
	func_1670(var_75_int, var_144_string); // 0x71d NEW_2
	var_145_int = 540184; // 0x71f PushI
	SetMessage(var_145_int); // 0x720 TObjFunc
	ClearReplies(); // 0x722 TObjFunc
	var_146_int = 540185; // 0x724 PushI
	var_147_int = -1; // 0x725 PushI
	var_148_int = 42163; // 0x726 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x727 TObjFunc
	var_149_int = 540186; // 0x729 PushI
	var_150_int = -1; // 0x72a PushI
	var_151_int = 42164; // 0x72b PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x72c TObjFunc
	return 0; // 0x72e Return
	
Label_1839:
	var_3_object = 1; // 0x72f TMovB
	var_152_bool = 0; // 0x730 PushV
	func_10306(var_152_bool); // 0x731 NEW_2
	if(var_152_bool == 0) goto Label_1847; // 0x733 JumpB
	lshStopAnimation(); // 0x734 Func
	goto Label_1849; // 0x736 Jump
	
Label_1849:
	return 0; // 0x739 Return
	
Label_1847:
	StopAnimation(); // 0x737 Func
	
Label_1851:
	return 0; // 0x73b Return
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x7e3 PushI
	if(var_76_int == 0) goto Label_2133; // 0x7e4 JumpB
	func_10041(); // 0x7e6 NEW_2
	var_78_int = 484; // 0x7e8 PushI
	var_79_bool = var_74_float == var_78_int; // 0x7e9 Eq
	if(var_79_bool == 0) goto Label_2052; // 0x7ea JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x7eb PushV
	var_80_object = var_1_object; // 0x7ec MovT
	var_81_object = var_0_bool; // 0x7ed MovT
	func_11030(); // 0x7ee NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x7f0 PushV
	var_84_object = var_1_object; // 0x7f1 MovT
	var_85_object = var_0_bool; // 0x7f2 MovT
	func_10556(); // 0x7f3 NEW_2
	var_88_string = ""; // 0x7f5 PushV
	var_88_string = "Neutral"; // 0x7f6 MovS
	func_1996(var_75_int, var_88_string); // 0x7f7 NEW_2
	var_105_int = 500416; // 0x7f9 PushI
	SetMessage(var_105_int); // 0x7fa TObjFunc
	ClearReplies(); // 0x7fc TObjFunc
	var_106_int = 533500; // 0x7fe PushI
	var_107_int = 35031; // 0x7ff PushI
	var_108_int = 35030; // 0x800 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x801 TObjFunc
	return 0; // 0x803 Return
	
Label_2052:
	var_109_int = 35031; // 0x804 PushI
	var_110_bool = var_74_float == var_109_int; // 0x805 Eq
	if(var_110_bool == 0) goto Label_2075; // 0x806 JumpB
	var_111_string = ""; // 0x807 PushV
	var_111_string = "Neutral"; // 0x808 MovS
	func_1996(var_75_int, var_111_string); // 0x809 NEW_2
	var_112_int = 533501; // 0x80b PushI
	SetMessage(var_112_int); // 0x80c TObjFunc
	ClearReplies(); // 0x80e TObjFunc
	var_113_int = 500417; // 0x810 PushI
	var_114_int = 487; // 0x811 PushI
	var_115_int = 485; // 0x812 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x813 TObjFunc
	var_116_int = 500418; // 0x815 PushI
	var_117_int = 9271; // 0x816 PushI
	var_118_int = 486; // 0x817 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x818 TObjFunc
	return 0; // 0x81a Return
	
Label_2075:
	var_119_int = 487; // 0x81b PushI
	var_120_bool = var_74_float == var_119_int; // 0x81c Eq
	if(var_120_bool == 0) goto Label_2098; // 0x81d JumpB
	var_121_string = ""; // 0x81e PushV
	var_121_string = "Neutral"; // 0x81f MovS
	func_1996(var_75_int, var_121_string); // 0x820 NEW_2
	var_122_int = 500419; // 0x822 PushI
	SetMessage(var_122_int); // 0x823 TObjFunc
	ClearReplies(); // 0x825 TObjFunc
	var_123_int = 500420; // 0x827 PushI
	var_124_int = 9271; // 0x828 PushI
	var_125_int = 488; // 0x829 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x82a TObjFunc
	var_126_int = 500422; // 0x82c PushI
	var_127_int = 9271; // 0x82d PushI
	var_128_int = 490; // 0x82e PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x82f TObjFunc
	return 0; // 0x831 Return
	
Label_2098:
	var_129_int = 9271; // 0x832 PushI
	var_130_bool = var_74_float == var_129_int; // 0x833 Eq
	if(var_130_bool == 0) goto Label_2121; // 0x834 JumpB
	var_131_string = ""; // 0x835 PushV
	var_131_string = "Neutral"; // 0x836 MovS
	func_1996(var_75_int, var_131_string); // 0x837 NEW_2
	var_132_int = 508445; // 0x839 PushI
	SetMessage(var_132_int); // 0x83a TObjFunc
	ClearReplies(); // 0x83c TObjFunc
	var_133_int = 508446; // 0x83e PushI
	var_134_int = -1; // 0x83f PushI
	var_135_int = 9275; // 0x840 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x841 TObjFunc
	var_136_int = 508447; // 0x843 PushI
	var_137_int = -1; // 0x844 PushI
	var_138_int = 9276; // 0x845 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x846 TObjFunc
	return 0; // 0x848 Return
	
Label_2121:
	var_3_object = 1; // 0x849 TMovB
	var_139_bool = 0; // 0x84a PushV
	func_10306(var_139_bool); // 0x84b NEW_2
	if(var_139_bool == 0) goto Label_2129; // 0x84d JumpB
	lshStopAnimation(); // 0x84e Func
	goto Label_2131; // 0x850 Jump
	
Label_2131:
	return 0; // 0x853 Return
	
Label_2129:
	StopAnimation(); // 0x851 Func
	
Label_2133:
	return 0; // 0x855 Return
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x906 PushI
	if(var_76_int == 0) goto Label_2613; // 0x907 JumpB
	func_10041(); // 0x909 NEW_2
	var_78_int = 8297; // 0x90b PushI
	var_79_bool = var_75_int == var_78_int; // 0x90c Eq
	if(var_79_bool == 0) goto Label_2333; // 0x90d JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x90e PushV
	var_80_object = var_1_object; // 0x90f MovT
	var_81_object = var_0_bool; // 0x910 MovT
	func_10562(); // 0x911 NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x913 PushV
	var_84_object = var_1_object; // 0x914 MovT
	var_85_object = var_0_bool; // 0x915 MovT
	func_10396(); // 0x916 NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x918 PushV
	var_88_object = var_1_object; // 0x919 MovT
	var_89_object = var_0_bool; // 0x91a MovT
	func_10308(var_89_object); // 0x91b NEW_2
	
Label_2333:
	var_109_int = 8298; // 0x91d PushI
	var_110_bool = var_75_int == var_109_int; // 0x91e Eq
	if(var_110_bool == 0) goto Label_2351; // 0x91f JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x920 PushV
	var_111_object = var_1_object; // 0x921 MovT
	var_112_object = var_0_bool; // 0x922 MovT
	func_10562(); // 0x923 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x925 PushV
	var_113_object = var_1_object; // 0x926 MovT
	var_114_object = var_0_bool; // 0x927 MovT
	func_10396(); // 0x928 NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0x92a PushV
	var_115_object = var_1_object; // 0x92b MovT
	var_116_object = var_0_bool; // 0x92c MovT
	func_10308(var_116_object); // 0x92d NEW_2
	
Label_2351:
	var_117_int = 8553; // 0x92f PushI
	var_118_bool = var_75_int == var_117_int; // 0x930 Eq
	if(var_118_bool == 0) goto Label_2369; // 0x931 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x932 PushV
	var_119_object = var_1_object; // 0x933 MovT
	var_120_object = var_0_bool; // 0x934 MovT
	func_10562(); // 0x935 NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0x937 PushV
	var_121_object = var_1_object; // 0x938 MovT
	var_122_object = var_0_bool; // 0x939 MovT
	func_10396(); // 0x93a NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x93c PushV
	var_123_object = var_1_object; // 0x93d MovT
	var_124_object = var_0_bool; // 0x93e MovT
	func_10308(var_124_object); // 0x93f NEW_2
	
Label_2369:
	var_125_int = 7635; // 0x941 PushI
	var_126_bool = var_74_float == var_125_int; // 0x942 Eq
	if(var_126_bool == 0) goto Label_2406; // 0x943 JumpB
	var_127_string = ""; // 0x944 PushV
	var_127_string = "Neutral"; // 0x945 MovS
	func_2287(var_75_int, var_127_string); // 0x946 NEW_2
	var_144_int = 506929; // 0x948 PushI
	SetMessage(var_144_int); // 0x949 TObjFunc
	ClearReplies(); // 0x94b TObjFunc
	var_145_bool = 0; // 0x94d PushV
	var_145_bool = 0; // 0x94e MovB
	var_146_bool = 0; var_147_object = Obj(); // 0x94f PushV
	var_147_object = var_1_object; // 0x950 MovT
	func_11241(var_147_object); // 0x951 NEW_2
	if(var_146_bool == 0) goto Label_2394; // 0x953 JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x954 PushV
	var_155_object = var_1_object; // 0x955 MovT
	func_11229(var_155_object); // 0x956 NEW_2
	if(var_154_bool == 0) goto Label_2394; // 0x958 JumpB
	var_145_bool = 1; // 0x959 MovB
	
Label_2394:
	if(var_145_bool == 0) goto Label_2400; // 0x95a JumpB
	var_160_int = 506930; // 0x95b PushI
	var_161_int = 7637; // 0x95c PushI
	var_162_int = 7636; // 0x95d PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x95e TObjFunc
	
Label_2400:
	var_163_int = 507746; // 0x960 PushI
	var_164_int = -1; // 0x961 PushI
	var_165_int = 8547; // 0x962 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x963 TObjFunc
	return 0; // 0x965 Return
	
Label_2406:
	var_166_int = 10443; // 0x966 PushI
	var_167_bool = var_74_float == var_166_int; // 0x967 Eq
	if(var_167_bool == 0) goto Label_2409; // 0x968 JumpB
	
Label_2409:
	var_168_int = 10458; // 0x969 PushI
	var_169_bool = var_74_float == var_168_int; // 0x96a Eq
	if(var_169_bool == 0) goto Label_2427; // 0x96b JumpB
	var_170_string = ""; // 0x96c PushV
	var_170_string = "Neutral"; // 0x96d MovS
	func_2287(var_75_int, var_170_string); // 0x96e NEW_2
	var_171_int = 509515; // 0x970 PushI
	SetMessage(var_171_int); // 0x971 TObjFunc
	ClearReplies(); // 0x973 TObjFunc
	var_172_int = 509516; // 0x975 PushI
	var_173_int = 10445; // 0x976 PushI
	var_174_int = 10459; // 0x977 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x978 TObjFunc
	return 0; // 0x97a Return
	
Label_2427:
	var_175_int = 10445; // 0x97b PushI
	var_176_bool = var_74_float == var_175_int; // 0x97c Eq
	if(var_176_bool == 0) goto Label_2455; // 0x97d JumpB
	var_177_string = ""; // 0x97e PushV
	var_177_string = "Fear"; // 0x97f MovS
	func_2287(var_75_int, var_177_string); // 0x980 NEW_2
	var_178_int = 509502; // 0x982 PushI
	SetMessage(var_178_int); // 0x983 TObjFunc
	ClearReplies(); // 0x985 TObjFunc
	var_179_int = 509503; // 0x987 PushI
	var_180_int = 10447; // 0x988 PushI
	var_181_int = 10446; // 0x989 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x98a TObjFunc
	var_182_int = 509510; // 0x98c PushI
	var_183_int = -1; // 0x98d PushI
	var_184_int = 10453; // 0x98e PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x98f TObjFunc
	var_185_int = 509511; // 0x991 PushI
	var_186_int = 10455; // 0x992 PushI
	var_187_int = 10454; // 0x993 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x994 TObjFunc
	return 0; // 0x996 Return
	
Label_2455:
	var_188_int = 10455; // 0x997 PushI
	var_189_bool = var_74_float == var_188_int; // 0x998 Eq
	if(var_189_bool == 0) goto Label_2473; // 0x999 JumpB
	var_190_string = ""; // 0x99a PushV
	var_190_string = "Neutral"; // 0x99b MovS
	func_2287(var_75_int, var_190_string); // 0x99c NEW_2
	var_191_int = 509512; // 0x99e PushI
	SetMessage(var_191_int); // 0x99f TObjFunc
	ClearReplies(); // 0x9a1 TObjFunc
	var_192_int = 509513; // 0x9a3 PushI
	var_193_int = -1; // 0x9a4 PushI
	var_194_int = 10456; // 0x9a5 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x9a6 TObjFunc
	return 0; // 0x9a8 Return
	
Label_2473:
	var_195_int = 10447; // 0x9a9 PushI
	var_196_bool = var_74_float == var_195_int; // 0x9aa Eq
	if(var_196_bool == 0) goto Label_2496; // 0x9ab JumpB
	var_197_string = ""; // 0x9ac PushV
	var_197_string = "Fear"; // 0x9ad MovS
	func_2287(var_75_int, var_197_string); // 0x9ae NEW_2
	var_198_int = 509504; // 0x9b0 PushI
	SetMessage(var_198_int); // 0x9b1 TObjFunc
	ClearReplies(); // 0x9b3 TObjFunc
	var_199_int = 509505; // 0x9b5 PushI
	var_200_int = 10449; // 0x9b6 PushI
	var_201_int = 10448; // 0x9b7 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x9b8 TObjFunc
	var_202_int = 509509; // 0x9ba PushI
	var_203_int = -1; // 0x9bb PushI
	var_204_int = 10452; // 0x9bc PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x9bd TObjFunc
	return 0; // 0x9bf Return
	
Label_2496:
	var_205_int = 10449; // 0x9c0 PushI
	var_206_bool = var_74_float == var_205_int; // 0x9c1 Eq
	if(var_206_bool == 0) goto Label_2519; // 0x9c2 JumpB
	var_207_string = ""; // 0x9c3 PushV
	var_207_string = "Fear"; // 0x9c4 MovS
	func_2287(var_75_int, var_207_string); // 0x9c5 NEW_2
	var_208_int = 509506; // 0x9c7 PushI
	SetMessage(var_208_int); // 0x9c8 TObjFunc
	ClearReplies(); // 0x9ca TObjFunc
	var_209_int = 509507; // 0x9cc PushI
	var_210_int = -1; // 0x9cd PushI
	var_211_int = 10450; // 0x9ce PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x9cf TObjFunc
	var_212_int = 509508; // 0x9d1 PushI
	var_213_int = -1; // 0x9d2 PushI
	var_214_int = 10451; // 0x9d3 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x9d4 TObjFunc
	return 0; // 0x9d6 Return
	
Label_2519:
	var_215_int = 7637; // 0x9d7 PushI
	var_216_bool = var_74_float == var_215_int; // 0x9d8 Eq
	if(var_216_bool == 0) goto Label_2542; // 0x9d9 JumpB
	var_217_string = ""; // 0x9da PushV
	var_217_string = "Untrust"; // 0x9db MovS
	func_2287(var_75_int, var_217_string); // 0x9dc NEW_2
	var_218_int = 506931; // 0x9de PushI
	SetMessage(var_218_int); // 0x9df TObjFunc
	ClearReplies(); // 0x9e1 TObjFunc
	var_219_int = 506932; // 0x9e3 PushI
	var_220_int = 7639; // 0x9e4 PushI
	var_221_int = 7638; // 0x9e5 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x9e6 TObjFunc
	var_222_int = 507752; // 0x9e8 PushI
	var_223_int = -1; // 0x9e9 PushI
	var_224_int = 8553; // 0x9ea PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x9eb TObjFunc
	return 0; // 0x9ed Return
	
Label_2542:
	var_225_int = 7639; // 0x9ee PushI
	var_226_bool = var_74_float == var_225_int; // 0x9ef Eq
	if(var_226_bool == 0) goto Label_2560; // 0x9f0 JumpB
	var_227_string = ""; // 0x9f1 PushV
	var_227_string = "Untrust"; // 0x9f2 MovS
	func_2287(var_75_int, var_227_string); // 0x9f3 NEW_2
	var_228_int = 506933; // 0x9f5 PushI
	SetMessage(var_228_int); // 0x9f6 TObjFunc
	ClearReplies(); // 0x9f8 TObjFunc
	var_229_int = 507753; // 0x9fa PushI
	var_230_int = 8555; // 0x9fb PushI
	var_231_int = 8554; // 0x9fc PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x9fd TObjFunc
	return 0; // 0x9ff Return
	
Label_2560:
	var_232_int = 8555; // 0xa00 PushI
	var_233_bool = var_74_float == var_232_int; // 0xa01 Eq
	if(var_233_bool == 0) goto Label_2578; // 0xa02 JumpB
	var_234_string = ""; // 0xa03 PushV
	var_234_string = "Untrust"; // 0xa04 MovS
	func_2287(var_75_int, var_234_string); // 0xa05 NEW_2
	var_235_int = 507754; // 0xa07 PushI
	SetMessage(var_235_int); // 0xa08 TObjFunc
	ClearReplies(); // 0xa0a TObjFunc
	var_236_int = 506934; // 0xa0c PushI
	var_237_int = 8296; // 0xa0d PushI
	var_238_int = 7640; // 0xa0e PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xa0f TObjFunc
	return 0; // 0xa11 Return
	
Label_2578:
	var_239_int = 8296; // 0xa12 PushI
	var_240_bool = var_74_float == var_239_int; // 0xa13 Eq
	if(var_240_bool == 0) goto Label_2601; // 0xa14 JumpB
	var_241_string = ""; // 0xa15 PushV
	var_241_string = "Sly"; // 0xa16 MovS
	func_2287(var_75_int, var_241_string); // 0xa17 NEW_2
	var_242_int = 507515; // 0xa19 PushI
	SetMessage(var_242_int); // 0xa1a TObjFunc
	ClearReplies(); // 0xa1c TObjFunc
	var_243_int = 507516; // 0xa1e PushI
	var_244_int = -1; // 0xa1f PushI
	var_245_int = 8297; // 0xa20 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xa21 TObjFunc
	var_246_int = 507517; // 0xa23 PushI
	var_247_int = -1; // 0xa24 PushI
	var_248_int = 8298; // 0xa25 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xa26 TObjFunc
	return 0; // 0xa28 Return
	
Label_2601:
	var_3_object = 1; // 0xa29 TMovB
	var_249_bool = 0; // 0xa2a PushV
	func_10306(var_249_bool); // 0xa2b NEW_2
	if(var_249_bool == 0) goto Label_2609; // 0xa2d JumpB
	lshStopAnimation(); // 0xa2e Func
	goto Label_2611; // 0xa30 Jump
	
Label_2611:
	return 0; // 0xa33 Return
	
Label_2609:
	StopAnimation(); // 0xa31 Func
	
Label_2613:
	return 0; // 0xa35 Return
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0xb16 PushI
	if(var_76_int == 0) goto Label_3577; // 0xb17 JumpB
	func_10041(); // 0xb19 NEW_2
	var_78_int = 11259; // 0xb1b PushI
	var_79_bool = var_75_int == var_78_int; // 0xb1c Eq
	if(var_79_bool == 0) goto Label_2851; // 0xb1d JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xb1e PushV
	var_80_object = var_1_object; // 0xb1f MovT
	var_81_object = var_0_bool; // 0xb20 MovT
	func_10648(); // 0xb21 NEW_2
	
Label_2851:
	var_84_int = 35907; // 0xb23 PushI
	var_85_bool = var_75_int == var_84_int; // 0xb24 Eq
	if(var_85_bool == 0) goto Label_2859; // 0xb25 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0xb26 PushV
	var_86_object = var_1_object; // 0xb27 MovT
	var_87_object = var_0_bool; // 0xb28 MovT
	func_10654(); // 0xb29 NEW_2
	
Label_2859:
	var_129_int = 35908; // 0xb2b PushI
	var_130_bool = var_75_int == var_129_int; // 0xb2c Eq
	if(var_130_bool == 0) goto Label_2867; // 0xb2d JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0xb2e PushV
	var_131_object = var_1_object; // 0xb2f MovT
	var_132_object = var_0_bool; // 0xb30 MovT
	func_10654(); // 0xb31 NEW_2
	
Label_2867:
	var_133_int = 11394; // 0xb33 PushI
	var_134_bool = var_75_int == var_133_int; // 0xb34 Eq
	if(var_134_bool == 0) goto Label_2875; // 0xb35 JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0xb36 PushV
	var_135_object = var_1_object; // 0xb37 MovT
	var_136_object = var_0_bool; // 0xb38 MovT
	func_10522(); // 0xb39 NEW_2
	
Label_2875:
	var_139_int = 11404; // 0xb3b PushI
	var_140_bool = var_75_int == var_139_int; // 0xb3c Eq
	if(var_140_bool == 0) goto Label_2888; // 0xb3d JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0xb3e PushV
	var_141_object = var_1_object; // 0xb3f MovT
	var_142_object = var_0_bool; // 0xb40 MovT
	func_10677(); // 0xb41 NEW_2
	var_159_object = Obj(); var_160_object = Obj(); // 0xb43 PushV
	var_159_object = var_1_object; // 0xb44 MovT
	var_160_object = var_0_bool; // 0xb45 MovT
	func_10491(); // 0xb46 NEW_2
	
Label_2888:
	var_185_int = 11407; // 0xb48 PushI
	var_186_bool = var_75_int == var_185_int; // 0xb49 Eq
	if(var_186_bool == 0) goto Label_2901; // 0xb4a JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0xb4b PushV
	var_187_object = var_1_object; // 0xb4c MovT
	var_188_object = var_0_bool; // 0xb4d MovT
	func_10677(); // 0xb4e NEW_2
	var_189_object = Obj(); var_190_object = Obj(); // 0xb50 PushV
	var_189_object = var_1_object; // 0xb51 MovT
	var_190_object = var_0_bool; // 0xb52 MovT
	func_10491(); // 0xb53 NEW_2
	
Label_2901:
	var_191_int = 22116; // 0xb55 PushI
	var_192_bool = var_75_int == var_191_int; // 0xb56 Eq
	if(var_192_bool == 0) goto Label_2919; // 0xb57 JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0xb58 PushV
	var_193_object = var_1_object; // 0xb59 MovT
	var_194_object = var_0_bool; // 0xb5a MovT
	func_10328(); // 0xb5b NEW_2
	var_206_object = Obj(); var_207_object = Obj(); // 0xb5d PushV
	var_206_object = var_1_object; // 0xb5e MovT
	var_207_object = var_0_bool; // 0xb5f MovT
	func_10600(); // 0xb60 NEW_2
	var_210_object = Obj(); var_211_object = Obj(); // 0xb62 PushV
	var_210_object = var_1_object; // 0xb63 MovT
	var_211_object = var_0_bool; // 0xb64 MovT
	func_10339(var_211_object); // 0xb65 NEW_2
	
Label_2919:
	var_230_int = 11258; // 0xb67 PushI
	var_231_bool = var_74_float == var_230_int; // 0xb68 Eq
	if(var_231_bool == 0) goto Label_3004; // 0xb69 JumpB
	var_232_string = ""; // 0xb6a PushV
	var_232_string = "Neutral"; // 0xb6b MovS
	func_2815(var_75_int, var_232_string); // 0xb6c NEW_2
	var_249_int = 510212; // 0xb6e PushI
	SetMessage(var_249_int); // 0xb6f TObjFunc
	ClearReplies(); // 0xb71 TObjFunc
	var_250_bool = 0; // 0xb73 PushV
	var_250_bool = 0; // 0xb74 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0xb75 PushV
	var_252_object = var_1_object; // 0xb76 MovT
	func_11253(var_252_object); // 0xb77 NEW_2
	if(var_251_bool == 0) goto Label_2944; // 0xb79 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0xb7a PushV
	var_260_object = var_1_object; // 0xb7b MovT
	func_11265(var_260_object); // 0xb7c NEW_2
	if(var_259_bool == 0) goto Label_2944; // 0xb7e JumpB
	var_250_bool = 1; // 0xb7f MovB
	
Label_2944:
	if(var_250_bool == 0) goto Label_2950; // 0xb80 JumpB
	var_265_int = 510213; // 0xb81 PushI
	var_266_int = 11260; // 0xb82 PushI
	var_267_int = 11259; // 0xb83 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xb84 TObjFunc
	
Label_2950:
	var_268_bool = 0; // 0xb86 PushV
	var_268_bool = 1; // 0xb87 MovB
	var_269_bool = 0; // 0xb88 PushV
	var_269_bool = 0; // 0xb89 MovB
	var_270_bool = 0; var_271_object = Obj(); // 0xb8a PushV
	var_271_object = var_1_object; // 0xb8b MovT
	func_11277(var_271_object); // 0xb8c NEW_2
	if(var_270_bool == 0) goto Label_2965; // 0xb8e JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0xb8f PushV
	var_277_object = var_1_object; // 0xb90 MovT
	func_11217(var_277_object); // 0xb91 NEW_2
	if(var_276_bool == 0) goto Label_2965; // 0xb93 JumpB
	var_269_bool = 1; // 0xb94 MovB
	
Label_2965:
	if(var_269_bool == 0) goto Label_2981; // 0xb95 JumpB
	var_282_bool = 0; // 0xb96 PushV
	var_282_bool = 0; // 0xb97 MovB
	var_283_bool = 0; var_284_object = Obj(); // 0xb98 PushV
	var_284_object = var_1_object; // 0xb99 MovT
	func_11289(var_284_object); // 0xb9a NEW_2
	if(var_283_bool == 0) goto Label_2979; // 0xb9c JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0xb9d PushV
	var_290_object = var_1_object; // 0xb9e MovT
	func_11217(var_290_object); // 0xb9f NEW_2
	if(var_289_bool == 0) goto Label_2979; // 0xba1 JumpB
	var_282_bool = 1; // 0xba2 MovB
	
Label_2979:
	if(var_282_bool == 0) goto Label_2981; // 0xba3 JumpB
	var_268_bool = 0; // 0xba4 MovB
	
Label_2981:
	if(var_268_bool == 0) goto Label_2987; // 0xba5 JumpB
	var_291_int = 510334; // 0xba6 PushI
	var_292_int = 11395; // 0xba7 PushI
	var_293_int = 11394; // 0xba8 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xba9 TObjFunc
	
Label_2987:
	var_294_bool = 0; var_295_object = Obj(); // 0xbab PushV
	var_295_object = var_1_object; // 0xbac MovT
	func_11671(var_294_bool, var_295_object); // 0xbad NEW_2
	var_306_bool = var_294_bool == 0; // 0xbaf Not
	if(var_306_bool == 0) goto Label_2998; // 0xbb0 JumpB
	var_307_int = 520897; // 0xbb1 PushI
	var_308_int = 22115; // 0xbb2 PushI
	var_309_int = 22114; // 0xbb3 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xbb4 TObjFunc
	
Label_2998:
	var_310_int = 520896; // 0xbb6 PushI
	var_311_int = -1; // 0xbb7 PushI
	var_312_int = 22113; // 0xbb8 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0xbb9 TObjFunc
	return 0; // 0xbbb Return
	
Label_3004:
	var_313_int = 22115; // 0xbbc PushI
	var_314_bool = var_74_float == var_313_int; // 0xbbd Eq
	if(var_314_bool == 0) goto Label_3032; // 0xbbe JumpB
	var_315_string = ""; // 0xbbf PushV
	var_315_string = "Neutral"; // 0xbc0 MovS
	func_2815(var_75_int, var_315_string); // 0xbc1 NEW_2
	var_316_int = 520898; // 0xbc3 PushI
	SetMessage(var_316_int); // 0xbc4 TObjFunc
	ClearReplies(); // 0xbc6 TObjFunc
	var_317_bool = 0; var_318_object = Obj(); // 0xbc8 PushV
	var_318_object = var_1_object; // 0xbc9 MovT
	func_11681(var_317_bool, var_318_object); // 0xbca NEW_2
	if(var_317_bool == 0) goto Label_3026; // 0xbcc JumpB
	var_325_int = 520899; // 0xbcd PushI
	var_326_int = -1; // 0xbce PushI
	var_327_int = 22116; // 0xbcf PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0xbd0 TObjFunc
	
Label_3026:
	var_328_int = 520900; // 0xbd2 PushI
	var_329_int = -1; // 0xbd3 PushI
	var_330_int = 22117; // 0xbd4 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0xbd5 TObjFunc
	return 0; // 0xbd7 Return
	
Label_3032:
	var_331_int = 11395; // 0xbd8 PushI
	var_332_bool = var_74_float == var_331_int; // 0xbd9 Eq
	if(var_332_bool == 0) goto Label_3055; // 0xbda JumpB
	var_333_string = ""; // 0xbdb PushV
	var_333_string = "Fear"; // 0xbdc MovS
	func_2815(var_75_int, var_333_string); // 0xbdd NEW_2
	var_334_int = 510335; // 0xbdf PushI
	SetMessage(var_334_int); // 0xbe0 TObjFunc
	ClearReplies(); // 0xbe2 TObjFunc
	var_335_int = 510336; // 0xbe4 PushI
	var_336_int = 11399; // 0xbe5 PushI
	var_337_int = 11396; // 0xbe6 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0xbe7 TObjFunc
	var_338_int = 510337; // 0xbe9 PushI
	var_339_int = 11398; // 0xbea PushI
	var_340_int = 11397; // 0xbeb PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0xbec TObjFunc
	return 0; // 0xbee Return
	
Label_3055:
	var_341_int = 11398; // 0xbef PushI
	var_342_bool = var_74_float == var_341_int; // 0xbf0 Eq
	if(var_342_bool == 0) goto Label_3073; // 0xbf1 JumpB
	var_343_string = ""; // 0xbf2 PushV
	var_343_string = "Fear"; // 0xbf3 MovS
	func_2815(var_75_int, var_343_string); // 0xbf4 NEW_2
	var_344_int = 510338; // 0xbf6 PushI
	SetMessage(var_344_int); // 0xbf7 TObjFunc
	ClearReplies(); // 0xbf9 TObjFunc
	var_345_int = 510341; // 0xbfb PushI
	var_346_int = 11402; // 0xbfc PushI
	var_347_int = 11401; // 0xbfd PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xbfe TObjFunc
	return 0; // 0xc00 Return
	
Label_3073:
	var_348_int = 11399; // 0xc01 PushI
	var_349_bool = var_74_float == var_348_int; // 0xc02 Eq
	if(var_349_bool == 0) goto Label_3096; // 0xc03 JumpB
	var_350_string = ""; // 0xc04 PushV
	var_350_string = "Fear"; // 0xc05 MovS
	func_2815(var_75_int, var_350_string); // 0xc06 NEW_2
	var_351_int = 510339; // 0xc08 PushI
	SetMessage(var_351_int); // 0xc09 TObjFunc
	ClearReplies(); // 0xc0b TObjFunc
	var_352_int = 510340; // 0xc0d PushI
	var_353_int = 11402; // 0xc0e PushI
	var_354_int = 11400; // 0xc0f PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xc10 TObjFunc
	var_355_int = 534414; // 0xc12 PushI
	var_356_int = 36040; // 0xc13 PushI
	var_357_int = 36039; // 0xc14 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xc15 TObjFunc
	return 0; // 0xc17 Return
	
Label_3096:
	var_358_int = 36040; // 0xc18 PushI
	var_359_bool = var_74_float == var_358_int; // 0xc19 Eq
	if(var_359_bool == 0) goto Label_3114; // 0xc1a JumpB
	var_360_string = ""; // 0xc1b PushV
	var_360_string = "Fear"; // 0xc1c MovS
	func_2815(var_75_int, var_360_string); // 0xc1d NEW_2
	var_361_int = 534415; // 0xc1f PushI
	SetMessage(var_361_int); // 0xc20 TObjFunc
	ClearReplies(); // 0xc22 TObjFunc
	var_362_int = 534416; // 0xc24 PushI
	var_363_int = 11402; // 0xc25 PushI
	var_364_int = 36041; // 0xc26 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xc27 TObjFunc
	return 0; // 0xc29 Return
	
Label_3114:
	var_365_int = 11402; // 0xc2a PushI
	var_366_bool = var_74_float == var_365_int; // 0xc2b Eq
	if(var_366_bool == 0) goto Label_3137; // 0xc2c JumpB
	var_367_string = ""; // 0xc2d PushV
	var_367_string = "Sly"; // 0xc2e MovS
	func_2815(var_75_int, var_367_string); // 0xc2f NEW_2
	var_368_int = 510342; // 0xc31 PushI
	SetMessage(var_368_int); // 0xc32 TObjFunc
	ClearReplies(); // 0xc34 TObjFunc
	var_369_int = 510343; // 0xc36 PushI
	var_370_int = -1; // 0xc37 PushI
	var_371_int = 11404; // 0xc38 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xc39 TObjFunc
	var_372_int = 510344; // 0xc3b PushI
	var_373_int = 11406; // 0xc3c PushI
	var_374_int = 11405; // 0xc3d PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xc3e TObjFunc
	return 0; // 0xc40 Return
	
Label_3137:
	var_375_int = 11406; // 0xc41 PushI
	var_376_bool = var_74_float == var_375_int; // 0xc42 Eq
	if(var_376_bool == 0) goto Label_3155; // 0xc43 JumpB
	var_377_string = ""; // 0xc44 PushV
	var_377_string = "Sly"; // 0xc45 MovS
	func_2815(var_75_int, var_377_string); // 0xc46 NEW_2
	var_378_int = 510345; // 0xc48 PushI
	SetMessage(var_378_int); // 0xc49 TObjFunc
	ClearReplies(); // 0xc4b TObjFunc
	var_379_int = 510346; // 0xc4d PushI
	var_380_int = -1; // 0xc4e PushI
	var_381_int = 11407; // 0xc4f PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xc50 TObjFunc
	return 0; // 0xc52 Return
	
Label_3155:
	var_382_int = 11359; // 0xc53 PushI
	var_383_bool = var_74_float == var_382_int; // 0xc54 Eq
	if(var_383_bool == 0) goto Label_3158; // 0xc55 JumpB
	
Label_3158:
	var_384_int = 11039; // 0xc56 PushI
	var_385_bool = var_74_float == var_384_int; // 0xc57 Eq
	if(var_385_bool == 0) goto Label_3181; // 0xc58 JumpB
	var_386_string = ""; // 0xc59 PushV
	var_386_string = "Neutral"; // 0xc5a MovS
	func_2815(var_75_int, var_386_string); // 0xc5b NEW_2
	var_387_int = 510017; // 0xc5d PushI
	SetMessage(var_387_int); // 0xc5e TObjFunc
	ClearReplies(); // 0xc60 TObjFunc
	var_388_int = 510018; // 0xc62 PushI
	var_389_int = 11041; // 0xc63 PushI
	var_390_int = 11040; // 0xc64 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xc65 TObjFunc
	var_391_int = 510028; // 0xc67 PushI
	var_392_int = -1; // 0xc68 PushI
	var_393_int = 11050; // 0xc69 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0xc6a TObjFunc
	return 0; // 0xc6c Return
	
Label_3181:
	var_394_int = 11041; // 0xc6d PushI
	var_395_bool = var_74_float == var_394_int; // 0xc6e Eq
	if(var_395_bool == 0) goto Label_3204; // 0xc6f JumpB
	var_396_string = ""; // 0xc70 PushV
	var_396_string = "Neutral"; // 0xc71 MovS
	func_2815(var_75_int, var_396_string); // 0xc72 NEW_2
	var_397_int = 510019; // 0xc74 PushI
	SetMessage(var_397_int); // 0xc75 TObjFunc
	ClearReplies(); // 0xc77 TObjFunc
	var_398_int = 510020; // 0xc79 PushI
	var_399_int = 11043; // 0xc7a PushI
	var_400_int = 11042; // 0xc7b PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0xc7c TObjFunc
	var_401_int = 510027; // 0xc7e PushI
	var_402_int = -1; // 0xc7f PushI
	var_403_int = 11049; // 0xc80 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xc81 TObjFunc
	return 0; // 0xc83 Return
	
Label_3204:
	var_404_int = 11043; // 0xc84 PushI
	var_405_bool = var_74_float == var_404_int; // 0xc85 Eq
	if(var_405_bool == 0) goto Label_3227; // 0xc86 JumpB
	var_406_string = ""; // 0xc87 PushV
	var_406_string = "Untrust"; // 0xc88 MovS
	func_2815(var_75_int, var_406_string); // 0xc89 NEW_2
	var_407_int = 510021; // 0xc8b PushI
	SetMessage(var_407_int); // 0xc8c TObjFunc
	ClearReplies(); // 0xc8e TObjFunc
	var_408_int = 510022; // 0xc90 PushI
	var_409_int = 11045; // 0xc91 PushI
	var_410_int = 11044; // 0xc92 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xc93 TObjFunc
	var_411_int = 510026; // 0xc95 PushI
	var_412_int = -1; // 0xc96 PushI
	var_413_int = 11048; // 0xc97 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xc98 TObjFunc
	return 0; // 0xc9a Return
	
Label_3227:
	var_414_int = 11045; // 0xc9b PushI
	var_415_bool = var_74_float == var_414_int; // 0xc9c Eq
	if(var_415_bool == 0) goto Label_3250; // 0xc9d JumpB
	var_416_string = ""; // 0xc9e PushV
	var_416_string = "Untrust"; // 0xc9f MovS
	func_2815(var_75_int, var_416_string); // 0xca0 NEW_2
	var_417_int = 510023; // 0xca2 PushI
	SetMessage(var_417_int); // 0xca3 TObjFunc
	ClearReplies(); // 0xca5 TObjFunc
	var_418_int = 510024; // 0xca7 PushI
	var_419_int = -1; // 0xca8 PushI
	var_420_int = 11046; // 0xca9 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xcaa TObjFunc
	var_421_int = 510025; // 0xcac PushI
	var_422_int = -1; // 0xcad PushI
	var_423_int = 11047; // 0xcae PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xcaf TObjFunc
	return 0; // 0xcb1 Return
	
Label_3250:
	var_424_int = 11260; // 0xcb2 PushI
	var_425_bool = var_74_float == var_424_int; // 0xcb3 Eq
	if(var_425_bool == 0) goto Label_3273; // 0xcb4 JumpB
	var_426_string = ""; // 0xcb5 PushV
	var_426_string = "Untrust"; // 0xcb6 MovS
	func_2815(var_75_int, var_426_string); // 0xcb7 NEW_2
	var_427_int = 510214; // 0xcb9 PushI
	SetMessage(var_427_int); // 0xcba TObjFunc
	ClearReplies(); // 0xcbc TObjFunc
	var_428_int = 510305; // 0xcbe PushI
	var_429_int = 11364; // 0xcbf PushI
	var_430_int = 11361; // 0xcc0 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xcc1 TObjFunc
	var_431_int = 510306; // 0xcc3 PushI
	var_432_int = 11363; // 0xcc4 PushI
	var_433_int = 11362; // 0xcc5 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0xcc6 TObjFunc
	return 0; // 0xcc8 Return
	
Label_3273:
	var_434_int = 11363; // 0xcc9 PushI
	var_435_bool = var_74_float == var_434_int; // 0xcca Eq
	if(var_435_bool == 0) goto Label_3296; // 0xccb JumpB
	var_436_string = ""; // 0xccc PushV
	var_436_string = "Neutral"; // 0xccd MovS
	func_2815(var_75_int, var_436_string); // 0xcce NEW_2
	var_437_int = 510307; // 0xcd0 PushI
	SetMessage(var_437_int); // 0xcd1 TObjFunc
	ClearReplies(); // 0xcd3 TObjFunc
	var_438_int = 534368; // 0xcd5 PushI
	var_439_int = 11364; // 0xcd6 PushI
	var_440_int = 35974; // 0xcd7 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xcd8 TObjFunc
	var_441_int = 534369; // 0xcda PushI
	var_442_int = 11366; // 0xcdb PushI
	var_443_int = 35975; // 0xcdc PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0xcdd TObjFunc
	return 0; // 0xcdf Return
	
Label_3296:
	var_444_int = 11364; // 0xce0 PushI
	var_445_bool = var_74_float == var_444_int; // 0xce1 Eq
	if(var_445_bool == 0) goto Label_3319; // 0xce2 JumpB
	var_446_string = ""; // 0xce3 PushV
	var_446_string = "Untrust"; // 0xce4 MovS
	func_2815(var_75_int, var_446_string); // 0xce5 NEW_2
	var_447_int = 510308; // 0xce7 PushI
	SetMessage(var_447_int); // 0xce8 TObjFunc
	ClearReplies(); // 0xcea TObjFunc
	var_448_int = 510309; // 0xcec PushI
	var_449_int = 11370; // 0xced PushI
	var_450_int = 11365; // 0xcee PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0xcef TObjFunc
	var_451_int = 510311; // 0xcf1 PushI
	var_452_int = 11366; // 0xcf2 PushI
	var_453_int = 11367; // 0xcf3 PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0xcf4 TObjFunc
	return 0; // 0xcf6 Return
	
Label_3319:
	var_454_int = 11366; // 0xcf7 PushI
	var_455_bool = var_74_float == var_454_int; // 0xcf8 Eq
	if(var_455_bool == 0) goto Label_3342; // 0xcf9 JumpB
	var_456_string = ""; // 0xcfa PushV
	var_456_string = "Neutral"; // 0xcfb MovS
	func_2815(var_75_int, var_456_string); // 0xcfc NEW_2
	var_457_int = 510310; // 0xcfe PushI
	SetMessage(var_457_int); // 0xcff TObjFunc
	ClearReplies(); // 0xd01 TObjFunc
	var_458_int = 510312; // 0xd03 PushI
	var_459_int = 35894; // 0xd04 PushI
	var_460_int = 11369; // 0xd05 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0xd06 TObjFunc
	var_461_int = 534370; // 0xd08 PushI
	var_462_int = 11371; // 0xd09 PushI
	var_463_int = 35978; // 0xd0a PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0xd0b TObjFunc
	return 0; // 0xd0d Return
	
Label_3342:
	var_464_int = 11370; // 0xd0e PushI
	var_465_bool = var_74_float == var_464_int; // 0xd0f Eq
	if(var_465_bool == 0) goto Label_3360; // 0xd10 JumpB
	var_466_string = ""; // 0xd11 PushV
	var_466_string = "Neutral"; // 0xd12 MovS
	func_2815(var_75_int, var_466_string); // 0xd13 NEW_2
	var_467_int = 510313; // 0xd15 PushI
	SetMessage(var_467_int); // 0xd16 TObjFunc
	ClearReplies(); // 0xd18 TObjFunc
	var_468_int = 510315; // 0xd1a PushI
	var_469_int = 11371; // 0xd1b PushI
	var_470_int = 11372; // 0xd1c PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0xd1d TObjFunc
	return 0; // 0xd1f Return
	
Label_3360:
	var_471_int = 11371; // 0xd20 PushI
	var_472_bool = var_74_float == var_471_int; // 0xd21 Eq
	if(var_472_bool == 0) goto Label_3383; // 0xd22 JumpB
	var_473_string = ""; // 0xd23 PushV
	var_473_string = "Sly"; // 0xd24 MovS
	func_2815(var_75_int, var_473_string); // 0xd25 NEW_2
	var_474_int = 510314; // 0xd27 PushI
	SetMessage(var_474_int); // 0xd28 TObjFunc
	ClearReplies(); // 0xd2a TObjFunc
	var_475_int = 510317; // 0xd2c PushI
	var_476_int = 35894; // 0xd2d PushI
	var_477_int = 11375; // 0xd2e PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0xd2f TObjFunc
	var_478_int = 510323; // 0xd31 PushI
	var_479_int = 35894; // 0xd32 PushI
	var_480_int = 11381; // 0xd33 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0xd34 TObjFunc
	return 0; // 0xd36 Return
	
Label_3383:
	var_481_int = 35894; // 0xd37 PushI
	var_482_bool = var_74_float == var_481_int; // 0xd38 Eq
	if(var_482_bool == 0) goto Label_3406; // 0xd39 JumpB
	var_483_string = ""; // 0xd3a PushV
	var_483_string = "Sly"; // 0xd3b MovS
	func_2815(var_75_int, var_483_string); // 0xd3c NEW_2
	var_484_int = 534299; // 0xd3e PushI
	SetMessage(var_484_int); // 0xd3f TObjFunc
	ClearReplies(); // 0xd41 TObjFunc
	var_485_int = 534300; // 0xd43 PushI
	var_486_int = 35896; // 0xd44 PushI
	var_487_int = 35895; // 0xd45 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0xd46 TObjFunc
	var_488_int = 534317; // 0xd48 PushI
	var_489_int = 35914; // 0xd49 PushI
	var_490_int = 35913; // 0xd4a PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0xd4b TObjFunc
	return 0; // 0xd4d Return
	
Label_3406:
	var_491_int = 35914; // 0xd4e PushI
	var_492_bool = var_74_float == var_491_int; // 0xd4f Eq
	if(var_492_bool == 0) goto Label_3424; // 0xd50 JumpB
	var_493_string = ""; // 0xd51 PushV
	var_493_string = "Untrust"; // 0xd52 MovS
	func_2815(var_75_int, var_493_string); // 0xd53 NEW_2
	var_494_int = 534318; // 0xd55 PushI
	SetMessage(var_494_int); // 0xd56 TObjFunc
	ClearReplies(); // 0xd58 TObjFunc
	var_495_int = 534319; // 0xd5a PushI
	var_496_int = 35902; // 0xd5b PushI
	var_497_int = 35915; // 0xd5c PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0xd5d TObjFunc
	return 0; // 0xd5f Return
	
Label_3424:
	var_498_int = 35896; // 0xd60 PushI
	var_499_bool = var_74_float == var_498_int; // 0xd61 Eq
	if(var_499_bool == 0) goto Label_3447; // 0xd62 JumpB
	var_500_string = ""; // 0xd63 PushV
	var_500_string = "Rage"; // 0xd64 MovS
	func_2815(var_75_int, var_500_string); // 0xd65 NEW_2
	var_501_int = 534301; // 0xd67 PushI
	SetMessage(var_501_int); // 0xd68 TObjFunc
	ClearReplies(); // 0xd6a TObjFunc
	var_502_int = 534413; // 0xd6c PushI
	var_503_int = 35902; // 0xd6d PushI
	var_504_int = 36037; // 0xd6e PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0xd6f TObjFunc
	var_505_int = 534302; // 0xd71 PushI
	var_506_int = 35898; // 0xd72 PushI
	var_507_int = 35897; // 0xd73 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0xd74 TObjFunc
	return 0; // 0xd76 Return
	
Label_3447:
	var_508_int = 35898; // 0xd77 PushI
	var_509_bool = var_74_float == var_508_int; // 0xd78 Eq
	if(var_509_bool == 0) goto Label_3465; // 0xd79 JumpB
	var_510_string = ""; // 0xd7a PushV
	var_510_string = "Rage"; // 0xd7b MovS
	func_2815(var_75_int, var_510_string); // 0xd7c NEW_2
	var_511_int = 534303; // 0xd7e PushI
	SetMessage(var_511_int); // 0xd7f TObjFunc
	ClearReplies(); // 0xd81 TObjFunc
	var_512_int = 534304; // 0xd83 PushI
	var_513_int = 35900; // 0xd84 PushI
	var_514_int = 35899; // 0xd85 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0xd86 TObjFunc
	return 0; // 0xd88 Return
	
Label_3465:
	var_515_int = 35900; // 0xd89 PushI
	var_516_bool = var_74_float == var_515_int; // 0xd8a Eq
	if(var_516_bool == 0) goto Label_3483; // 0xd8b JumpB
	var_517_string = ""; // 0xd8c PushV
	var_517_string = "Neutral"; // 0xd8d MovS
	func_2815(var_75_int, var_517_string); // 0xd8e NEW_2
	var_518_int = 534305; // 0xd90 PushI
	SetMessage(var_518_int); // 0xd91 TObjFunc
	ClearReplies(); // 0xd93 TObjFunc
	var_519_int = 534306; // 0xd95 PushI
	var_520_int = 35902; // 0xd96 PushI
	var_521_int = 35901; // 0xd97 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0xd98 TObjFunc
	return 0; // 0xd9a Return
	
Label_3483:
	var_522_int = 35902; // 0xd9b PushI
	var_523_bool = var_74_float == var_522_int; // 0xd9c Eq
	if(var_523_bool == 0) goto Label_3506; // 0xd9d JumpB
	var_524_string = ""; // 0xd9e PushV
	var_524_string = "Rage"; // 0xd9f MovS
	func_2815(var_75_int, var_524_string); // 0xda0 NEW_2
	var_525_int = 534307; // 0xda2 PushI
	SetMessage(var_525_int); // 0xda3 TObjFunc
	ClearReplies(); // 0xda5 TObjFunc
	var_526_int = 534308; // 0xda7 PushI
	var_527_int = 35904; // 0xda8 PushI
	var_528_int = 35903; // 0xda9 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0xdaa TObjFunc
	var_529_int = 534314; // 0xdac PushI
	var_530_int = 35910; // 0xdad PushI
	var_531_int = 35909; // 0xdae PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0xdaf TObjFunc
	return 0; // 0xdb1 Return
	
Label_3506:
	var_532_int = 35910; // 0xdb2 PushI
	var_533_bool = var_74_float == var_532_int; // 0xdb3 Eq
	if(var_533_bool == 0) goto Label_3524; // 0xdb4 JumpB
	var_534_string = ""; // 0xdb5 PushV
	var_534_string = "Neutral"; // 0xdb6 MovS
	func_2815(var_75_int, var_534_string); // 0xdb7 NEW_2
	var_535_int = 534315; // 0xdb9 PushI
	SetMessage(var_535_int); // 0xdba TObjFunc
	ClearReplies(); // 0xdbc TObjFunc
	var_536_int = 534316; // 0xdbe PushI
	var_537_int = 35906; // 0xdbf PushI
	var_538_int = 35911; // 0xdc0 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0xdc1 TObjFunc
	return 0; // 0xdc3 Return
	
Label_3524:
	var_539_int = 35904; // 0xdc4 PushI
	var_540_bool = var_74_float == var_539_int; // 0xdc5 Eq
	if(var_540_bool == 0) goto Label_3542; // 0xdc6 JumpB
	var_541_string = ""; // 0xdc7 PushV
	var_541_string = "Neutral"; // 0xdc8 MovS
	func_2815(var_75_int, var_541_string); // 0xdc9 NEW_2
	var_542_int = 534309; // 0xdcb PushI
	SetMessage(var_542_int); // 0xdcc TObjFunc
	ClearReplies(); // 0xdce TObjFunc
	var_543_int = 534310; // 0xdd0 PushI
	var_544_int = 35906; // 0xdd1 PushI
	var_545_int = 35905; // 0xdd2 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0xdd3 TObjFunc
	return 0; // 0xdd5 Return
	
Label_3542:
	var_546_int = 35906; // 0xdd6 PushI
	var_547_bool = var_74_float == var_546_int; // 0xdd7 Eq
	if(var_547_bool == 0) goto Label_3565; // 0xdd8 JumpB
	var_548_string = ""; // 0xdd9 PushV
	var_548_string = "Neutral"; // 0xdda MovS
	func_2815(var_75_int, var_548_string); // 0xddb NEW_2
	var_549_int = 534311; // 0xddd PushI
	SetMessage(var_549_int); // 0xdde TObjFunc
	ClearReplies(); // 0xde0 TObjFunc
	var_550_int = 534312; // 0xde2 PushI
	var_551_int = -1; // 0xde3 PushI
	var_552_int = 35907; // 0xde4 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0xde5 TObjFunc
	var_553_int = 534313; // 0xde7 PushI
	var_554_int = -1; // 0xde8 PushI
	var_555_int = 35908; // 0xde9 PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0xdea TObjFunc
	return 0; // 0xdec Return
	
Label_3565:
	var_3_object = 1; // 0xded TMovB
	var_556_bool = 0; // 0xdee PushV
	func_10306(var_556_bool); // 0xdef NEW_2
	if(var_556_bool == 0) goto Label_3573; // 0xdf1 JumpB
	lshStopAnimation(); // 0xdf2 Func
	goto Label_3575; // 0xdf4 Jump
	
Label_3575:
	return 0; // 0xdf7 Return
	
Label_3573:
	StopAnimation(); // 0xdf5 Func
	
Label_3577:
	return 0; // 0xdf9 Return
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0xeeb PushI
	if(var_76_int == 0) goto Label_4756; // 0xeec JumpB
	func_10041(); // 0xeee NEW_2
	var_78_int = 12610; // 0xef0 PushI
	var_79_bool = var_75_int == var_78_int; // 0xef1 Eq
	if(var_79_bool == 0) goto Label_3842; // 0xef2 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xef3 PushV
	var_80_object = var_1_object; // 0xef4 MovT
	var_81_object = var_0_bool; // 0xef5 MovT
	func_10745(); // 0xef6 NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0xef8 PushV
	var_84_object = var_1_object; // 0xef9 MovT
	var_85_object = var_0_bool; // 0xefa MovT
	func_10751(); // 0xefb NEW_2
	var_151_object = Obj(); var_152_object = Obj(); // 0xefd PushV
	var_151_object = var_1_object; // 0xefe MovT
	var_152_object = var_0_bool; // 0xeff MovT
	func_10584(); // 0xf00 NEW_2
	
Label_3842:
	var_177_int = 12613; // 0xf02 PushI
	var_178_bool = var_75_int == var_177_int; // 0xf03 Eq
	if(var_178_bool == 0) goto Label_3860; // 0xf04 JumpB
	var_179_object = Obj(); var_180_object = Obj(); // 0xf05 PushV
	var_179_object = var_1_object; // 0xf06 MovT
	var_180_object = var_0_bool; // 0xf07 MovT
	func_10745(); // 0xf08 NEW_2
	var_181_object = Obj(); var_182_object = Obj(); // 0xf0a PushV
	var_181_object = var_1_object; // 0xf0b MovT
	var_182_object = var_0_bool; // 0xf0c MovT
	func_10751(); // 0xf0d NEW_2
	var_183_object = Obj(); var_184_object = Obj(); // 0xf0f PushV
	var_183_object = var_1_object; // 0xf10 MovT
	var_184_object = var_0_bool; // 0xf11 MovT
	func_10584(); // 0xf12 NEW_2
	
Label_3860:
	var_185_int = 11955; // 0xf14 PushI
	var_186_bool = var_75_int == var_185_int; // 0xf15 Eq
	if(var_186_bool == 0) goto Label_3868; // 0xf16 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0xf17 PushV
	var_187_object = var_1_object; // 0xf18 MovT
	var_188_object = var_0_bool; // 0xf19 MovT
	func_10696(); // 0xf1a NEW_2
	
Label_3868:
	var_191_int = 12243; // 0xf1c PushI
	var_192_bool = var_75_int == var_191_int; // 0xf1d Eq
	if(var_192_bool == 0) goto Label_3886; // 0xf1e JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0xf1f PushV
	var_193_object = var_1_object; // 0xf20 MovT
	var_194_object = var_0_bool; // 0xf21 MovT
	func_10702(); // 0xf22 NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0xf24 PushV
	var_213_object = var_1_object; // 0xf25 MovT
	var_214_object = var_0_bool; // 0xf26 MovT
	func_10725(); // 0xf27 NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0xf29 PushV
	var_225_object = var_1_object; // 0xf2a MovT
	var_226_object = var_0_bool; // 0xf2b MovT
	func_10622(); // 0xf2c NEW_2
	
Label_3886:
	var_232_int = 12244; // 0xf2e PushI
	var_233_bool = var_75_int == var_232_int; // 0xf2f Eq
	if(var_233_bool == 0) goto Label_3904; // 0xf30 JumpB
	var_234_object = Obj(); var_235_object = Obj(); // 0xf31 PushV
	var_234_object = var_1_object; // 0xf32 MovT
	var_235_object = var_0_bool; // 0xf33 MovT
	func_10702(); // 0xf34 NEW_2
	var_236_object = Obj(); var_237_object = Obj(); // 0xf36 PushV
	var_236_object = var_1_object; // 0xf37 MovT
	var_237_object = var_0_bool; // 0xf38 MovT
	func_10725(); // 0xf39 NEW_2
	var_238_object = Obj(); var_239_object = Obj(); // 0xf3b PushV
	var_238_object = var_1_object; // 0xf3c MovT
	var_239_object = var_0_bool; // 0xf3d MovT
	func_10622(); // 0xf3e NEW_2
	
Label_3904:
	var_240_int = 13075; // 0xf40 PushI
	var_241_bool = var_75_int == var_240_int; // 0xf41 Eq
	if(var_241_bool == 0) goto Label_3912; // 0xf42 JumpB
	var_242_object = Obj(); var_243_object = Obj(); // 0xf43 PushV
	var_242_object = var_1_object; // 0xf44 MovT
	var_243_object = var_0_bool; // 0xf45 MovT
	func_10795(); // 0xf46 NEW_2
	
Label_3912:
	var_246_int = 37888; // 0xf48 PushI
	var_247_bool = var_75_int == var_246_int; // 0xf49 Eq
	if(var_247_bool == 0) goto Label_3930; // 0xf4a JumpB
	var_248_object = Obj(); var_249_object = Obj(); // 0xf4b PushV
	var_248_object = var_1_object; // 0xf4c MovT
	var_249_object = var_0_bool; // 0xf4d MovT
	func_10638(var_249_object); // 0xf4e NEW_2
	var_269_object = Obj(); var_270_object = Obj(); // 0xf50 PushV
	var_269_object = var_1_object; // 0xf51 MovT
	var_270_object = var_0_bool; // 0xf52 MovT
	func_10396(); // 0xf53 NEW_2
	var_273_object = Obj(); var_274_object = Obj(); // 0xf55 PushV
	var_273_object = var_1_object; // 0xf56 MovT
	var_274_object = var_0_bool; // 0xf57 MovT
	func_10545(var_274_object); // 0xf58 NEW_2
	
Label_3930:
	var_294_int = 13077; // 0xf5a PushI
	var_295_bool = var_75_int == var_294_int; // 0xf5b Eq
	if(var_295_bool == 0) goto Label_3948; // 0xf5c JumpB
	var_296_object = Obj(); var_297_object = Obj(); // 0xf5d PushV
	var_296_object = var_1_object; // 0xf5e MovT
	var_297_object = var_0_bool; // 0xf5f MovT
	func_10638(var_297_object); // 0xf60 NEW_2
	var_298_object = Obj(); var_299_object = Obj(); // 0xf62 PushV
	var_298_object = var_1_object; // 0xf63 MovT
	var_299_object = var_0_bool; // 0xf64 MovT
	func_10396(); // 0xf65 NEW_2
	var_300_object = Obj(); var_301_object = Obj(); // 0xf67 PushV
	var_300_object = var_1_object; // 0xf68 MovT
	var_301_object = var_0_bool; // 0xf69 MovT
	func_10545(var_301_object); // 0xf6a NEW_2
	
Label_3948:
	var_302_int = 22120; // 0xf6c PushI
	var_303_bool = var_75_int == var_302_int; // 0xf6d Eq
	if(var_303_bool == 0) goto Label_3966; // 0xf6e JumpB
	var_304_object = Obj(); var_305_object = Obj(); // 0xf6f PushV
	var_304_object = var_1_object; // 0xf70 MovT
	var_305_object = var_0_bool; // 0xf71 MovT
	func_10600(); // 0xf72 NEW_2
	var_308_object = Obj(); var_309_object = Obj(); // 0xf74 PushV
	var_308_object = var_1_object; // 0xf75 MovT
	var_309_object = var_0_bool; // 0xf76 MovT
	func_10328(); // 0xf77 NEW_2
	var_321_object = Obj(); var_322_object = Obj(); // 0xf79 PushV
	var_321_object = var_1_object; // 0xf7a MovT
	var_322_object = var_0_bool; // 0xf7b MovT
	func_10339(var_322_object); // 0xf7c NEW_2
	
Label_3966:
	var_325_int = 12592; // 0xf7e PushI
	var_326_bool = var_74_float == var_325_int; // 0xf7f Eq
	if(var_326_bool == 0) goto Label_4068; // 0xf80 JumpB
	var_327_bool = 0; // 0xf81 PushV
	var_327_bool = 0; // 0xf82 MovB
	var_328_bool = 0; var_329_object = Obj(); // 0xf83 PushV
	var_329_object = var_1_object; // 0xf84 MovT
	func_11325(var_329_object); // 0xf85 NEW_2
	if(var_328_bool == 0) goto Label_3983; // 0xf87 JumpB
	var_336_bool = 0; var_337_object = Obj(); // 0xf88 PushV
	var_337_object = var_1_object; // 0xf89 MovT
	func_11301(var_337_object); // 0xf8a NEW_2
	var_342_bool = var_336_bool == 0; // 0xf8c Not
	if(var_342_bool == 0) goto Label_3983; // 0xf8d JumpB
	var_327_bool = 1; // 0xf8e MovB
	
Label_3983:
	if(var_327_bool == 0) goto Label_4004; // 0xf8f JumpB
	var_343_object = Obj(); var_344_object = Obj(); // 0xf90 PushV
	var_343_object = var_1_object; // 0xf91 MovT
	var_344_object = var_0_bool; // 0xf92 MovT
	func_10450(); // 0xf93 NEW_2
	var_347_string = ""; // 0xf95 PushV
	var_347_string = "Neutral"; // 0xf96 MovS
	func_3796(var_75_int, var_347_string); // 0xf97 NEW_2
	var_364_int = 511395; // 0xf99 PushI
	SetMessage(var_364_int); // 0xf9a TObjFunc
	ClearReplies(); // 0xf9c TObjFunc
	var_365_int = 511396; // 0xf9e PushI
	var_366_int = 12594; // 0xf9f PushI
	var_367_int = 12593; // 0xfa0 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xfa1 TObjFunc
	return 0; // 0xfa3 Return
	
Label_4004:
	var_368_string = ""; // 0xfa4 PushV
	var_368_string = "Neutral"; // 0xfa5 MovS
	func_3796(var_75_int, var_368_string); // 0xfa6 NEW_2
	var_369_int = 510814; // 0xfa8 PushI
	SetMessage(var_369_int); // 0xfa9 TObjFunc
	ClearReplies(); // 0xfab TObjFunc
	var_370_bool = 0; // 0xfad PushV
	var_370_bool = 0; // 0xfae MovB
	var_371_bool = 0; var_372_object = Obj(); // 0xfaf PushV
	var_372_object = var_1_object; // 0xfb0 MovT
	func_11313(var_372_object); // 0xfb1 NEW_2
	if(var_371_bool == 0) goto Label_4026; // 0xfb3 JumpB
	var_377_bool = 0; var_378_object = Obj(); // 0xfb4 PushV
	var_378_object = var_1_object; // 0xfb5 MovT
	func_11301(var_378_object); // 0xfb6 NEW_2
	if(var_377_bool == 0) goto Label_4026; // 0xfb8 JumpB
	var_370_bool = 1; // 0xfb9 MovB
	
Label_4026:
	if(var_370_bool == 0) goto Label_4032; // 0xfba JumpB
	var_379_int = 510815; // 0xfbb PushI
	var_380_int = 11956; // 0xfbc PushI
	var_381_int = 11955; // 0xfbd PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xfbe TObjFunc
	
Label_4032:
	var_382_bool = 0; // 0xfc0 PushV
	var_382_bool = 0; // 0xfc1 MovB
	var_383_bool = 0; var_384_object = Obj(); // 0xfc2 PushV
	var_384_object = var_1_object; // 0xfc3 MovT
	func_11349(var_384_object); // 0xfc4 NEW_2
	if(var_383_bool == 0) goto Label_4045; // 0xfc6 JumpB
	var_389_bool = 0; var_390_object = Obj(); // 0xfc7 PushV
	var_390_object = var_1_object; // 0xfc8 MovT
	func_11337(var_390_object); // 0xfc9 NEW_2
	if(var_389_bool == 0) goto Label_4045; // 0xfcb JumpB
	var_382_bool = 1; // 0xfcc MovB
	
Label_4045:
	if(var_382_bool == 0) goto Label_4051; // 0xfcd JumpB
	var_395_int = 511862; // 0xfce PushI
	var_396_int = 37886; // 0xfcf PushI
	var_397_int = 13075; // 0xfd0 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xfd1 TObjFunc
	
Label_4051:
	var_398_bool = 0; var_399_object = Obj(); // 0xfd3 PushV
	var_399_object = var_1_object; // 0xfd4 MovT
	func_11671(var_398_bool, var_399_object); // 0xfd5 NEW_2
	var_410_bool = var_398_bool == 0; // 0xfd7 Not
	if(var_410_bool == 0) goto Label_4062; // 0xfd8 JumpB
	var_411_int = 520901; // 0xfd9 PushI
	var_412_int = 22119; // 0xfda PushI
	var_413_int = 22118; // 0xfdb PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xfdc TObjFunc
	
Label_4062:
	var_414_int = 511408; // 0xfde PushI
	var_415_int = -1; // 0xfdf PushI
	var_416_int = 12605; // 0xfe0 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xfe1 TObjFunc
	return 0; // 0xfe3 Return
	
Label_4068:
	var_417_int = 22119; // 0xfe4 PushI
	var_418_bool = var_74_float == var_417_int; // 0xfe5 Eq
	if(var_418_bool == 0) goto Label_4096; // 0xfe6 JumpB
	var_419_string = ""; // 0xfe7 PushV
	var_419_string = "Neutral"; // 0xfe8 MovS
	func_3796(var_75_int, var_419_string); // 0xfe9 NEW_2
	var_420_int = 520902; // 0xfeb PushI
	SetMessage(var_420_int); // 0xfec TObjFunc
	ClearReplies(); // 0xfee TObjFunc
	var_421_bool = 0; var_422_object = Obj(); // 0xff0 PushV
	var_422_object = var_1_object; // 0xff1 MovT
	func_11681(var_421_bool, var_422_object); // 0xff2 NEW_2
	if(var_421_bool == 0) goto Label_4090; // 0xff4 JumpB
	var_429_int = 520903; // 0xff5 PushI
	var_430_int = -1; // 0xff6 PushI
	var_431_int = 22120; // 0xff7 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0xff8 TObjFunc
	
Label_4090:
	var_432_int = 520904; // 0xffa PushI
	var_433_int = -1; // 0xffb PushI
	var_434_int = 22121; // 0xffc PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0xffd TObjFunc
	return 0; // 0xfff Return
	
Label_4096:
	var_435_int = 37886; // 0x1000 PushI
	var_436_bool = var_74_float == var_435_int; // 0x1001 Eq
	if(var_436_bool == 0) goto Label_4119; // 0x1002 JumpB
	var_437_string = ""; // 0x1003 PushV
	var_437_string = "Neutral"; // 0x1004 MovS
	func_3796(var_75_int, var_437_string); // 0x1005 NEW_2
	var_438_int = 536127; // 0x1007 PushI
	SetMessage(var_438_int); // 0x1008 TObjFunc
	ClearReplies(); // 0x100a TObjFunc
	var_439_int = 536128; // 0x100c PushI
	var_440_int = 13076; // 0x100d PushI
	var_441_int = 37887; // 0x100e PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x100f TObjFunc
	var_442_int = 511864; // 0x1011 PushI
	var_443_int = -1; // 0x1012 PushI
	var_444_int = 13077; // 0x1013 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x1014 TObjFunc
	return 0; // 0x1016 Return
	
Label_4119:
	var_445_int = 13076; // 0x1017 PushI
	var_446_bool = var_74_float == var_445_int; // 0x1018 Eq
	if(var_446_bool == 0) goto Label_4137; // 0x1019 JumpB
	var_447_string = ""; // 0x101a PushV
	var_447_string = "Neutral"; // 0x101b MovS
	func_3796(var_75_int, var_447_string); // 0x101c NEW_2
	var_448_int = 511863; // 0x101e PushI
	SetMessage(var_448_int); // 0x101f TObjFunc
	ClearReplies(); // 0x1021 TObjFunc
	var_449_int = 536129; // 0x1023 PushI
	var_450_int = -1; // 0x1024 PushI
	var_451_int = 37888; // 0x1025 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x1026 TObjFunc
	return 0; // 0x1028 Return
	
Label_4137:
	var_452_int = 11956; // 0x1029 PushI
	var_453_bool = var_74_float == var_452_int; // 0x102a Eq
	if(var_453_bool == 0) goto Label_4160; // 0x102b JumpB
	var_454_string = ""; // 0x102c PushV
	var_454_string = "Rage"; // 0x102d MovS
	func_3796(var_75_int, var_454_string); // 0x102e NEW_2
	var_455_int = 510816; // 0x1030 PushI
	SetMessage(var_455_int); // 0x1031 TObjFunc
	ClearReplies(); // 0x1033 TObjFunc
	var_456_int = 510817; // 0x1035 PushI
	var_457_int = 11958; // 0x1036 PushI
	var_458_int = 11957; // 0x1037 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x1038 TObjFunc
	var_459_int = 511019; // 0x103a PushI
	var_460_int = 12191; // 0x103b PushI
	var_461_int = 12190; // 0x103c PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x103d TObjFunc
	return 0; // 0x103f Return
	
Label_4160:
	var_462_int = 12191; // 0x1040 PushI
	var_463_bool = var_74_float == var_462_int; // 0x1041 Eq
	if(var_463_bool == 0) goto Label_4178; // 0x1042 JumpB
	var_464_string = ""; // 0x1043 PushV
	var_464_string = "Neutral"; // 0x1044 MovS
	func_3796(var_75_int, var_464_string); // 0x1045 NEW_2
	var_465_int = 511020; // 0x1047 PushI
	SetMessage(var_465_int); // 0x1048 TObjFunc
	ClearReplies(); // 0x104a TObjFunc
	var_466_int = 511021; // 0x104c PushI
	var_467_int = 12193; // 0x104d PushI
	var_468_int = 12192; // 0x104e PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x104f TObjFunc
	return 0; // 0x1051 Return
	
Label_4178:
	var_469_int = 12193; // 0x1052 PushI
	var_470_bool = var_74_float == var_469_int; // 0x1053 Eq
	if(var_470_bool == 0) goto Label_4201; // 0x1054 JumpB
	var_471_string = ""; // 0x1055 PushV
	var_471_string = "Neutral"; // 0x1056 MovS
	func_3796(var_75_int, var_471_string); // 0x1057 NEW_2
	var_472_int = 511022; // 0x1059 PushI
	SetMessage(var_472_int); // 0x105a TObjFunc
	ClearReplies(); // 0x105c TObjFunc
	var_473_int = 511023; // 0x105e PushI
	var_474_int = 12202; // 0x105f PushI
	var_475_int = 12194; // 0x1060 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x1061 TObjFunc
	var_476_int = 511024; // 0x1063 PushI
	var_477_int = 12196; // 0x1064 PushI
	var_478_int = 12195; // 0x1065 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x1066 TObjFunc
	return 0; // 0x1068 Return
	
Label_4201:
	var_479_int = 12196; // 0x1069 PushI
	var_480_bool = var_74_float == var_479_int; // 0x106a Eq
	if(var_480_bool == 0) goto Label_4219; // 0x106b JumpB
	var_481_string = ""; // 0x106c PushV
	var_481_string = "Neutral"; // 0x106d MovS
	func_3796(var_75_int, var_481_string); // 0x106e NEW_2
	var_482_int = 511025; // 0x1070 PushI
	SetMessage(var_482_int); // 0x1071 TObjFunc
	ClearReplies(); // 0x1073 TObjFunc
	var_483_int = 511026; // 0x1075 PushI
	var_484_int = 12198; // 0x1076 PushI
	var_485_int = 12197; // 0x1077 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x1078 TObjFunc
	return 0; // 0x107a Return
	
Label_4219:
	var_486_int = 12198; // 0x107b PushI
	var_487_bool = var_74_float == var_486_int; // 0x107c Eq
	if(var_487_bool == 0) goto Label_4237; // 0x107d JumpB
	var_488_string = ""; // 0x107e PushV
	var_488_string = "Fear"; // 0x107f MovS
	func_3796(var_75_int, var_488_string); // 0x1080 NEW_2
	var_489_int = 511027; // 0x1082 PushI
	SetMessage(var_489_int); // 0x1083 TObjFunc
	ClearReplies(); // 0x1085 TObjFunc
	var_490_int = 511029; // 0x1087 PushI
	var_491_int = 12202; // 0x1088 PushI
	var_492_int = 12201; // 0x1089 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x108a TObjFunc
	return 0; // 0x108c Return
	
Label_4237:
	var_493_int = 12202; // 0x108d PushI
	var_494_bool = var_74_float == var_493_int; // 0x108e Eq
	if(var_494_bool == 0) goto Label_4260; // 0x108f JumpB
	var_495_string = ""; // 0x1090 PushV
	var_495_string = "Neutral"; // 0x1091 MovS
	func_3796(var_75_int, var_495_string); // 0x1092 NEW_2
	var_496_int = 511030; // 0x1094 PushI
	SetMessage(var_496_int); // 0x1095 TObjFunc
	ClearReplies(); // 0x1097 TObjFunc
	var_497_int = 511031; // 0x1099 PushI
	var_498_int = 12205; // 0x109a PushI
	var_499_int = 12203; // 0x109b PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x109c TObjFunc
	var_500_int = 511032; // 0x109e PushI
	var_501_int = 12205; // 0x109f PushI
	var_502_int = 12204; // 0x10a0 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x10a1 TObjFunc
	return 0; // 0x10a3 Return
	
Label_4260:
	var_503_int = 12205; // 0x10a4 PushI
	var_504_bool = var_74_float == var_503_int; // 0x10a5 Eq
	if(var_504_bool == 0) goto Label_4283; // 0x10a6 JumpB
	var_505_string = ""; // 0x10a7 PushV
	var_505_string = "Untrust"; // 0x10a8 MovS
	func_3796(var_75_int, var_505_string); // 0x10a9 NEW_2
	var_506_int = 511033; // 0x10ab PushI
	SetMessage(var_506_int); // 0x10ac TObjFunc
	ClearReplies(); // 0x10ae TObjFunc
	var_507_int = 511034; // 0x10b0 PushI
	var_508_int = 12208; // 0x10b1 PushI
	var_509_int = 12207; // 0x10b2 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x10b3 TObjFunc
	var_510_int = 511037; // 0x10b5 PushI
	var_511_int = 12211; // 0x10b6 PushI
	var_512_int = 12210; // 0x10b7 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x10b8 TObjFunc
	return 0; // 0x10ba Return
	
Label_4283:
	var_513_int = 12211; // 0x10bb PushI
	var_514_bool = var_74_float == var_513_int; // 0x10bc Eq
	if(var_514_bool == 0) goto Label_4306; // 0x10bd JumpB
	var_515_string = ""; // 0x10be PushV
	var_515_string = "Neutral"; // 0x10bf MovS
	func_3796(var_75_int, var_515_string); // 0x10c0 NEW_2
	var_516_int = 511038; // 0x10c2 PushI
	SetMessage(var_516_int); // 0x10c3 TObjFunc
	ClearReplies(); // 0x10c5 TObjFunc
	var_517_int = 511039; // 0x10c7 PushI
	var_518_int = 12213; // 0x10c8 PushI
	var_519_int = 12212; // 0x10c9 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x10ca TObjFunc
	var_520_int = 511054; // 0x10cc PushI
	var_521_int = 12222; // 0x10cd PushI
	var_522_int = 12231; // 0x10ce PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x10cf TObjFunc
	return 0; // 0x10d1 Return
	
Label_4306:
	var_523_int = 12213; // 0x10d2 PushI
	var_524_bool = var_74_float == var_523_int; // 0x10d3 Eq
	if(var_524_bool == 0) goto Label_4324; // 0x10d4 JumpB
	var_525_string = ""; // 0x10d5 PushV
	var_525_string = "Neutral"; // 0x10d6 MovS
	func_3796(var_75_int, var_525_string); // 0x10d7 NEW_2
	var_526_int = 511040; // 0x10d9 PushI
	SetMessage(var_526_int); // 0x10da TObjFunc
	ClearReplies(); // 0x10dc TObjFunc
	var_527_int = 511041; // 0x10de PushI
	var_528_int = 12215; // 0x10df PushI
	var_529_int = 12214; // 0x10e0 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x10e1 TObjFunc
	return 0; // 0x10e3 Return
	
Label_4324:
	var_530_int = 12215; // 0x10e4 PushI
	var_531_bool = var_74_float == var_530_int; // 0x10e5 Eq
	if(var_531_bool == 0) goto Label_4342; // 0x10e6 JumpB
	var_532_string = ""; // 0x10e7 PushV
	var_532_string = "Neutral"; // 0x10e8 MovS
	func_3796(var_75_int, var_532_string); // 0x10e9 NEW_2
	var_533_int = 511042; // 0x10eb PushI
	SetMessage(var_533_int); // 0x10ec TObjFunc
	ClearReplies(); // 0x10ee TObjFunc
	var_534_int = 511043; // 0x10f0 PushI
	var_535_int = 12222; // 0x10f1 PushI
	var_536_int = 12216; // 0x10f2 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x10f3 TObjFunc
	return 0; // 0x10f5 Return
	
Label_4342:
	var_537_int = 12208; // 0x10f6 PushI
	var_538_bool = var_74_float == var_537_int; // 0x10f7 Eq
	if(var_538_bool == 0) goto Label_4360; // 0x10f8 JumpB
	var_539_string = ""; // 0x10f9 PushV
	var_539_string = "Sly"; // 0x10fa MovS
	func_3796(var_75_int, var_539_string); // 0x10fb NEW_2
	var_540_int = 511035; // 0x10fd PushI
	SetMessage(var_540_int); // 0x10fe TObjFunc
	ClearReplies(); // 0x1100 TObjFunc
	var_541_int = 511036; // 0x1102 PushI
	var_542_int = 12217; // 0x1103 PushI
	var_543_int = 12209; // 0x1104 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x1105 TObjFunc
	return 0; // 0x1107 Return
	
Label_4360:
	var_544_int = 12217; // 0x1108 PushI
	var_545_bool = var_74_float == var_544_int; // 0x1109 Eq
	if(var_545_bool == 0) goto Label_4383; // 0x110a JumpB
	var_546_string = ""; // 0x110b PushV
	var_546_string = "Neutral"; // 0x110c MovS
	func_3796(var_75_int, var_546_string); // 0x110d NEW_2
	var_547_int = 511044; // 0x110f PushI
	SetMessage(var_547_int); // 0x1110 TObjFunc
	ClearReplies(); // 0x1112 TObjFunc
	var_548_int = 511045; // 0x1114 PushI
	var_549_int = 12222; // 0x1115 PushI
	var_550_int = 12218; // 0x1116 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x1117 TObjFunc
	var_551_int = 511046; // 0x1119 PushI
	var_552_int = 12220; // 0x111a PushI
	var_553_int = 12219; // 0x111b PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x111c TObjFunc
	return 0; // 0x111e Return
	
Label_4383:
	var_554_int = 12220; // 0x111f PushI
	var_555_bool = var_74_float == var_554_int; // 0x1120 Eq
	if(var_555_bool == 0) goto Label_4401; // 0x1121 JumpB
	var_556_string = ""; // 0x1122 PushV
	var_556_string = "Neutral"; // 0x1123 MovS
	func_3796(var_75_int, var_556_string); // 0x1124 NEW_2
	var_557_int = 511047; // 0x1126 PushI
	SetMessage(var_557_int); // 0x1127 TObjFunc
	ClearReplies(); // 0x1129 TObjFunc
	var_558_int = 511048; // 0x112b PushI
	var_559_int = 12222; // 0x112c PushI
	var_560_int = 12221; // 0x112d PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x112e TObjFunc
	return 0; // 0x1130 Return
	
Label_4401:
	var_561_int = 11958; // 0x1131 PushI
	var_562_bool = var_74_float == var_561_int; // 0x1132 Eq
	if(var_562_bool == 0) goto Label_4424; // 0x1133 JumpB
	var_563_string = ""; // 0x1134 PushV
	var_563_string = "Rage"; // 0x1135 MovS
	func_3796(var_75_int, var_563_string); // 0x1136 NEW_2
	var_564_int = 510818; // 0x1138 PushI
	SetMessage(var_564_int); // 0x1139 TObjFunc
	ClearReplies(); // 0x113b TObjFunc
	var_565_int = 510819; // 0x113d PushI
	var_566_int = 12222; // 0x113e PushI
	var_567_int = 11959; // 0x113f PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0x1140 TObjFunc
	var_568_int = 510830; // 0x1142 PushI
	var_569_int = 11971; // 0x1143 PushI
	var_570_int = 11970; // 0x1144 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x1145 TObjFunc
	return 0; // 0x1147 Return
	
Label_4424:
	var_571_int = 11971; // 0x1148 PushI
	var_572_bool = var_74_float == var_571_int; // 0x1149 Eq
	if(var_572_bool == 0) goto Label_4447; // 0x114a JumpB
	var_573_string = ""; // 0x114b PushV
	var_573_string = "Rage"; // 0x114c MovS
	func_3796(var_75_int, var_573_string); // 0x114d NEW_2
	var_574_int = 510831; // 0x114f PushI
	SetMessage(var_574_int); // 0x1150 TObjFunc
	ClearReplies(); // 0x1152 TObjFunc
	var_575_int = 510832; // 0x1154 PushI
	var_576_int = 12222; // 0x1155 PushI
	var_577_int = 11972; // 0x1156 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x1157 TObjFunc
	var_578_int = 510833; // 0x1159 PushI
	var_579_int = 12227; // 0x115a PushI
	var_580_int = 11974; // 0x115b PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x115c TObjFunc
	return 0; // 0x115e Return
	
Label_4447:
	var_581_int = 12227; // 0x115f PushI
	var_582_bool = var_74_float == var_581_int; // 0x1160 Eq
	if(var_582_bool == 0) goto Label_4465; // 0x1161 JumpB
	var_583_string = ""; // 0x1162 PushV
	var_583_string = "Sly"; // 0x1163 MovS
	func_3796(var_75_int, var_583_string); // 0x1164 NEW_2
	var_584_int = 511052; // 0x1166 PushI
	SetMessage(var_584_int); // 0x1167 TObjFunc
	ClearReplies(); // 0x1169 TObjFunc
	var_585_int = 511053; // 0x116b PushI
	var_586_int = 12198; // 0x116c PushI
	var_587_int = 12228; // 0x116d PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x116e TObjFunc
	return 0; // 0x1170 Return
	
Label_4465:
	var_588_int = 12222; // 0x1171 PushI
	var_589_bool = var_74_float == var_588_int; // 0x1172 Eq
	if(var_589_bool == 0) goto Label_4493; // 0x1173 JumpB
	var_590_string = ""; // 0x1174 PushV
	var_590_string = "Rage"; // 0x1175 MovS
	func_3796(var_75_int, var_590_string); // 0x1176 NEW_2
	var_591_int = 511049; // 0x1178 PushI
	SetMessage(var_591_int); // 0x1179 TObjFunc
	ClearReplies(); // 0x117b TObjFunc
	var_592_int = 511050; // 0x117d PushI
	var_593_int = 12233; // 0x117e PushI
	var_594_int = 12223; // 0x117f PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x1180 TObjFunc
	var_595_int = 511051; // 0x1182 PushI
	var_596_int = 12233; // 0x1183 PushI
	var_597_int = 12224; // 0x1184 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0x1185 TObjFunc
	var_598_int = 511059; // 0x1187 PushI
	var_599_int = 12240; // 0x1188 PushI
	var_600_int = 12239; // 0x1189 PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0x118a TObjFunc
	return 0; // 0x118c Return
	
Label_4493:
	var_601_int = 12240; // 0x118d PushI
	var_602_bool = var_74_float == var_601_int; // 0x118e Eq
	if(var_602_bool == 0) goto Label_4511; // 0x118f JumpB
	var_603_string = ""; // 0x1190 PushV
	var_603_string = "Neutral"; // 0x1191 MovS
	func_3796(var_75_int, var_603_string); // 0x1192 NEW_2
	var_604_int = 511060; // 0x1194 PushI
	SetMessage(var_604_int); // 0x1195 TObjFunc
	ClearReplies(); // 0x1197 TObjFunc
	var_605_int = 511061; // 0x1199 PushI
	var_606_int = 12233; // 0x119a PushI
	var_607_int = 12241; // 0x119b PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0x119c TObjFunc
	return 0; // 0x119e Return
	
Label_4511:
	var_608_int = 12233; // 0x119f PushI
	var_609_bool = var_74_float == var_608_int; // 0x11a0 Eq
	if(var_609_bool == 0) goto Label_4534; // 0x11a1 JumpB
	var_610_string = ""; // 0x11a2 PushV
	var_610_string = "Rage"; // 0x11a3 MovS
	func_3796(var_75_int, var_610_string); // 0x11a4 NEW_2
	var_611_int = 511055; // 0x11a6 PushI
	SetMessage(var_611_int); // 0x11a7 TObjFunc
	ClearReplies(); // 0x11a9 TObjFunc
	var_612_int = 511056; // 0x11ab PushI
	var_613_int = 12237; // 0x11ac PushI
	var_614_int = 12235; // 0x11ad PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x11ae TObjFunc
	var_615_int = 511057; // 0x11b0 PushI
	var_616_int = 12237; // 0x11b1 PushI
	var_617_int = 12236; // 0x11b2 PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0x11b3 TObjFunc
	return 0; // 0x11b5 Return
	
Label_4534:
	var_618_int = 12237; // 0x11b6 PushI
	var_619_bool = var_74_float == var_618_int; // 0x11b7 Eq
	if(var_619_bool == 0) goto Label_4557; // 0x11b8 JumpB
	var_620_string = ""; // 0x11b9 PushV
	var_620_string = "Sly"; // 0x11ba MovS
	func_3796(var_75_int, var_620_string); // 0x11bb NEW_2
	var_621_int = 511058; // 0x11bd PushI
	SetMessage(var_621_int); // 0x11be TObjFunc
	ClearReplies(); // 0x11c0 TObjFunc
	var_622_int = 511062; // 0x11c2 PushI
	var_623_int = -1; // 0x11c3 PushI
	var_624_int = 12243; // 0x11c4 PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0x11c5 TObjFunc
	var_625_int = 511063; // 0x11c7 PushI
	var_626_int = -1; // 0x11c8 PushI
	var_627_int = 12244; // 0x11c9 PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0x11ca TObjFunc
	return 0; // 0x11cc Return
	
Label_4557:
	var_628_int = 12594; // 0x11cd PushI
	var_629_bool = var_74_float == var_628_int; // 0x11ce Eq
	if(var_629_bool == 0) goto Label_4575; // 0x11cf JumpB
	var_630_string = ""; // 0x11d0 PushV
	var_630_string = "Sly"; // 0x11d1 MovS
	func_3796(var_75_int, var_630_string); // 0x11d2 NEW_2
	var_631_int = 511397; // 0x11d4 PushI
	SetMessage(var_631_int); // 0x11d5 TObjFunc
	ClearReplies(); // 0x11d7 TObjFunc
	var_632_int = 511398; // 0x11d9 PushI
	var_633_int = 12596; // 0x11da PushI
	var_634_int = 12595; // 0x11db PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x11dc TObjFunc
	return 0; // 0x11de Return
	
Label_4575:
	var_635_int = 12596; // 0x11df PushI
	var_636_bool = var_74_float == var_635_int; // 0x11e0 Eq
	if(var_636_bool == 0) goto Label_4598; // 0x11e1 JumpB
	var_637_string = ""; // 0x11e2 PushV
	var_637_string = "Fear"; // 0x11e3 MovS
	func_3796(var_75_int, var_637_string); // 0x11e4 NEW_2
	var_638_int = 511399; // 0x11e6 PushI
	SetMessage(var_638_int); // 0x11e7 TObjFunc
	ClearReplies(); // 0x11e9 TObjFunc
	var_639_int = 511400; // 0x11eb PushI
	var_640_int = 12598; // 0x11ec PushI
	var_641_int = 12597; // 0x11ed PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x11ee TObjFunc
	var_642_int = 536121; // 0x11f0 PushI
	var_643_int = 37879; // 0x11f1 PushI
	var_644_int = 37878; // 0x11f2 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x11f3 TObjFunc
	return 0; // 0x11f5 Return
	
Label_4598:
	var_645_int = 37879; // 0x11f6 PushI
	var_646_bool = var_74_float == var_645_int; // 0x11f7 Eq
	if(var_646_bool == 0) goto Label_4621; // 0x11f8 JumpB
	var_647_string = ""; // 0x11f9 PushV
	var_647_string = "Untrust"; // 0x11fa MovS
	func_3796(var_75_int, var_647_string); // 0x11fb NEW_2
	var_648_int = 536122; // 0x11fd PushI
	SetMessage(var_648_int); // 0x11fe TObjFunc
	ClearReplies(); // 0x1200 TObjFunc
	var_649_int = 538494; // 0x1202 PushI
	var_650_int = 40382; // 0x1203 PushI
	var_651_int = 40381; // 0x1204 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x1205 TObjFunc
	var_652_int = 538496; // 0x1207 PushI
	var_653_int = 12607; // 0x1208 PushI
	var_654_int = 40383; // 0x1209 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x120a TObjFunc
	return 0; // 0x120c Return
	
Label_4621:
	var_655_int = 40382; // 0x120d PushI
	var_656_bool = var_74_float == var_655_int; // 0x120e Eq
	if(var_656_bool == 0) goto Label_4639; // 0x120f JumpB
	var_657_string = ""; // 0x1210 PushV
	var_657_string = "Untrust"; // 0x1211 MovS
	func_3796(var_75_int, var_657_string); // 0x1212 NEW_2
	var_658_int = 538495; // 0x1214 PushI
	SetMessage(var_658_int); // 0x1215 TObjFunc
	ClearReplies(); // 0x1217 TObjFunc
	var_659_int = 536123; // 0x1219 PushI
	var_660_int = 12607; // 0x121a PushI
	var_661_int = 37880; // 0x121b PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x121c TObjFunc
	return 0; // 0x121e Return
	
Label_4639:
	var_662_int = 12598; // 0x121f PushI
	var_663_bool = var_74_float == var_662_int; // 0x1220 Eq
	if(var_663_bool == 0) goto Label_4662; // 0x1221 JumpB
	var_664_string = ""; // 0x1222 PushV
	var_664_string = "Fear"; // 0x1223 MovS
	func_3796(var_75_int, var_664_string); // 0x1224 NEW_2
	var_665_int = 511401; // 0x1226 PushI
	SetMessage(var_665_int); // 0x1227 TObjFunc
	ClearReplies(); // 0x1229 TObjFunc
	var_666_int = 511409; // 0x122b PushI
	var_667_int = 12607; // 0x122c PushI
	var_668_int = 12606; // 0x122d PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x122e TObjFunc
	var_669_int = 538497; // 0x1230 PushI
	var_670_int = 12607; // 0x1231 PushI
	var_671_int = 40384; // 0x1232 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x1233 TObjFunc
	return 0; // 0x1235 Return
	
Label_4662:
	var_672_int = 12607; // 0x1236 PushI
	var_673_bool = var_74_float == var_672_int; // 0x1237 Eq
	if(var_673_bool == 0) goto Label_4685; // 0x1238 JumpB
	var_674_string = ""; // 0x1239 PushV
	var_674_string = "Untrust"; // 0x123a MovS
	func_3796(var_75_int, var_674_string); // 0x123b NEW_2
	var_675_int = 511410; // 0x123d PushI
	SetMessage(var_675_int); // 0x123e TObjFunc
	ClearReplies(); // 0x1240 TObjFunc
	var_676_int = 511411; // 0x1242 PushI
	var_677_int = 12609; // 0x1243 PushI
	var_678_int = 12608; // 0x1244 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x1245 TObjFunc
	var_679_int = 536124; // 0x1247 PushI
	var_680_int = 37884; // 0x1248 PushI
	var_681_int = 37882; // 0x1249 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0x124a TObjFunc
	return 0; // 0x124c Return
	
Label_4685:
	var_682_int = 12609; // 0x124d PushI
	var_683_bool = var_74_float == var_682_int; // 0x124e Eq
	if(var_683_bool == 0) goto Label_4703; // 0x124f JumpB
	var_684_string = ""; // 0x1250 PushV
	var_684_string = "Sly"; // 0x1251 MovS
	func_3796(var_75_int, var_684_string); // 0x1252 NEW_2
	var_685_int = 511412; // 0x1254 PushI
	SetMessage(var_685_int); // 0x1255 TObjFunc
	ClearReplies(); // 0x1257 TObjFunc
	var_686_int = 536125; // 0x1259 PushI
	var_687_int = 37884; // 0x125a PushI
	var_688_int = 37883; // 0x125b PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x125c TObjFunc
	return 0; // 0x125e Return
	
Label_4703:
	var_689_int = 37884; // 0x125f PushI
	var_690_bool = var_74_float == var_689_int; // 0x1260 Eq
	if(var_690_bool == 0) goto Label_4726; // 0x1261 JumpB
	var_691_string = ""; // 0x1262 PushV
	var_691_string = "Sly"; // 0x1263 MovS
	func_3796(var_75_int, var_691_string); // 0x1264 NEW_2
	var_692_int = 536126; // 0x1266 PushI
	SetMessage(var_692_int); // 0x1267 TObjFunc
	ClearReplies(); // 0x1269 TObjFunc
	var_693_int = 511413; // 0x126b PushI
	var_694_int = -1; // 0x126c PushI
	var_695_int = 12610; // 0x126d PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x126e TObjFunc
	var_696_int = 511414; // 0x1270 PushI
	var_697_int = 12612; // 0x1271 PushI
	var_698_int = 12611; // 0x1272 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x1273 TObjFunc
	return 0; // 0x1275 Return
	
Label_4726:
	var_699_int = 12612; // 0x1276 PushI
	var_700_bool = var_74_float == var_699_int; // 0x1277 Eq
	if(var_700_bool == 0) goto Label_4744; // 0x1278 JumpB
	var_701_string = ""; // 0x1279 PushV
	var_701_string = "Sly"; // 0x127a MovS
	func_3796(var_75_int, var_701_string); // 0x127b NEW_2
	var_702_int = 511415; // 0x127d PushI
	SetMessage(var_702_int); // 0x127e TObjFunc
	ClearReplies(); // 0x1280 TObjFunc
	var_703_int = 511416; // 0x1282 PushI
	var_704_int = -1; // 0x1283 PushI
	var_705_int = 12613; // 0x1284 PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x1285 TObjFunc
	return 0; // 0x1287 Return
	
Label_4744:
	var_3_object = 1; // 0x1288 TMovB
	var_706_bool = 0; // 0x1289 PushV
	func_10306(var_706_bool); // 0x128a NEW_2
	if(var_706_bool == 0) goto Label_4752; // 0x128c JumpB
	lshStopAnimation(); // 0x128d Func
	goto Label_4754; // 0x128f Jump
	
Label_4754:
	return 0; // 0x1292 Return
	
Label_4752:
	StopAnimation(); // 0x1290 Func
	
Label_4756:
	return 0; // 0x1294 Return
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x139b PushI
	if(var_76_int == 0) goto Label_5494; // 0x139c JumpB
	func_10041(); // 0x139e NEW_2
	var_78_int = 12969; // 0x13a0 PushI
	var_79_bool = var_75_int == var_78_int; // 0x13a1 Eq
	if(var_79_bool == 0) goto Label_5032; // 0x13a2 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x13a3 PushV
	var_80_object = var_1_object; // 0x13a4 MovT
	var_81_object = var_0_bool; // 0x13a5 MovT
	func_11036(); // 0x13a6 NEW_2
	
Label_5032:
	var_151_int = 12970; // 0x13a8 PushI
	var_152_bool = var_75_int == var_151_int; // 0x13a9 Eq
	if(var_152_bool == 0) goto Label_5040; // 0x13aa JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x13ab PushV
	var_153_object = var_1_object; // 0x13ac MovT
	var_154_object = var_0_bool; // 0x13ad MovT
	func_11036(); // 0x13ae NEW_2
	
Label_5040:
	var_155_int = 13743; // 0x13b0 PushI
	var_156_bool = var_75_int == var_155_int; // 0x13b1 Eq
	if(var_156_bool == 0) goto Label_5048; // 0x13b2 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x13b3 PushV
	var_157_object = var_1_object; // 0x13b4 MovT
	var_158_object = var_0_bool; // 0x13b5 MovT
	func_10882(); // 0x13b6 NEW_2
	
Label_5048:
	var_161_int = 13745; // 0x13b8 PushI
	var_162_bool = var_75_int == var_161_int; // 0x13b9 Eq
	if(var_162_bool == 0) goto Label_5061; // 0x13ba JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x13bb PushV
	var_163_object = var_1_object; // 0x13bc MovT
	var_164_object = var_0_bool; // 0x13bd MovT
	func_10396(); // 0x13be NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x13c0 PushV
	var_167_object = var_1_object; // 0x13c1 MovT
	var_168_object = var_0_bool; // 0x13c2 MovT
	func_10318(var_168_object); // 0x13c3 NEW_2
	
Label_5061:
	var_188_int = 13746; // 0x13c5 PushI
	var_189_bool = var_75_int == var_188_int; // 0x13c6 Eq
	if(var_189_bool == 0) goto Label_5069; // 0x13c7 JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x13c8 PushV
	var_190_object = var_1_object; // 0x13c9 MovT
	var_191_object = var_0_bool; // 0x13ca MovT
	func_10888(); // 0x13cb NEW_2
	
Label_5069:
	var_194_int = 13748; // 0x13cd PushI
	var_195_bool = var_75_int == var_194_int; // 0x13ce Eq
	if(var_195_bool == 0) goto Label_5082; // 0x13cf JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0x13d0 PushV
	var_196_object = var_1_object; // 0x13d1 MovT
	var_197_object = var_0_bool; // 0x13d2 MovT
	func_10875(var_197_object); // 0x13d3 NEW_2
	var_236_object = Obj(); var_237_object = Obj(); // 0x13d5 PushV
	var_236_object = var_1_object; // 0x13d6 MovT
	var_237_object = var_0_bool; // 0x13d7 MovT
	func_10894(); // 0x13d8 NEW_2
	
Label_5082:
	var_238_int = 22124; // 0x13da PushI
	var_239_bool = var_75_int == var_238_int; // 0x13db Eq
	if(var_239_bool == 0) goto Label_5100; // 0x13dc JumpB
	var_240_object = Obj(); var_241_object = Obj(); // 0x13dd PushV
	var_240_object = var_1_object; // 0x13de MovT
	var_241_object = var_0_bool; // 0x13df MovT
	func_10328(); // 0x13e0 NEW_2
	var_253_object = Obj(); var_254_object = Obj(); // 0x13e2 PushV
	var_253_object = var_1_object; // 0x13e3 MovT
	var_254_object = var_0_bool; // 0x13e4 MovT
	func_10339(var_254_object); // 0x13e5 NEW_2
	var_257_object = Obj(); var_258_object = Obj(); // 0x13e7 PushV
	var_257_object = var_1_object; // 0x13e8 MovT
	var_258_object = var_0_bool; // 0x13e9 MovT
	func_10600(); // 0x13ea NEW_2
	
Label_5100:
	var_261_int = 12947; // 0x13ec PushI
	var_262_bool = var_74_float == var_261_int; // 0x13ed Eq
	if(var_262_bool == 0) goto Label_5223; // 0x13ee JumpB
	var_263_bool = 0; // 0x13ef PushV
	var_263_bool = 0; // 0x13f0 MovB
	var_264_bool = 0; // 0x13f1 PushV
	var_264_bool = 0; // 0x13f2 MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x13f3 PushV
	var_266_object = var_1_object; // 0x13f4 MovT
	func_11481(var_266_object); // 0x13f5 NEW_2
	if(var_265_bool == 0) goto Label_5119; // 0x13f7 JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x13f8 PushV
	var_272_object = var_1_object; // 0x13f9 MovT
	func_11421(var_272_object); // 0x13fa NEW_2
	var_277_bool = var_271_bool == 0; // 0x13fc Not
	if(var_277_bool == 0) goto Label_5119; // 0x13fd JumpB
	var_264_bool = 1; // 0x13fe MovB
	
Label_5119:
	if(var_264_bool == 0) goto Label_5127; // 0x13ff JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0x1400 PushV
	var_279_object = var_1_object; // 0x1401 MovT
	func_11433(var_279_object); // 0x1402 NEW_2
	var_284_bool = var_278_bool == 0; // 0x1404 Not
	if(var_284_bool == 0) goto Label_5127; // 0x1405 JumpB
	var_263_bool = 1; // 0x1406 MovB
	
Label_5127:
	if(var_263_bool == 0) goto Label_5159; // 0x1407 JumpB
	var_285_object = Obj(); var_286_object = Obj(); // 0x1408 PushV
	var_285_object = var_1_object; // 0x1409 MovT
	var_286_object = var_0_bool; // 0x140a MovT
	func_10896(); // 0x140b NEW_2
	var_289_string = ""; // 0x140d PushV
	var_289_string = "Rage"; // 0x140e MovS
	func_4996(var_75_int, var_289_string); // 0x140f NEW_2
	var_306_int = 511741; // 0x1411 PushI
	SetMessage(var_306_int); // 0x1412 TObjFunc
	ClearReplies(); // 0x1414 TObjFunc
	var_307_int = 511743; // 0x1416 PushI
	var_308_int = 12951; // 0x1417 PushI
	var_309_int = 12949; // 0x1418 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x1419 TObjFunc
	var_310_bool = 0; var_311_object = Obj(); // 0x141b PushV
	var_311_object = var_1_object; // 0x141c MovT
	func_11409(var_311_object); // 0x141d NEW_2
	var_316_bool = var_310_bool == 0; // 0x141f Not
	if(var_316_bool == 0) goto Label_5158; // 0x1420 JumpB
	var_317_int = 512586; // 0x1421 PushI
	var_318_int = 13766; // 0x1422 PushI
	var_319_int = 13753; // 0x1423 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x1424 TObjFunc
	
Label_5158:
	return 0; // 0x1426 Return
	
Label_5159:
	var_320_string = ""; // 0x1427 PushV
	var_320_string = "Neutral"; // 0x1428 MovS
	func_4996(var_75_int, var_320_string); // 0x1429 NEW_2
	var_321_int = 512573; // 0x142b PushI
	SetMessage(var_321_int); // 0x142c TObjFunc
	ClearReplies(); // 0x142e TObjFunc
	var_322_bool = 0; // 0x1430 PushV
	var_322_bool = 0; // 0x1431 MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x1432 PushV
	var_324_object = var_1_object; // 0x1433 MovT
	func_11445(var_324_object); // 0x1434 NEW_2
	if(var_323_bool == 0) goto Label_5181; // 0x1436 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x1437 PushV
	var_330_object = var_1_object; // 0x1438 MovT
	func_11457(var_330_object); // 0x1439 NEW_2
	if(var_329_bool == 0) goto Label_5181; // 0x143b JumpB
	var_322_bool = 1; // 0x143c MovB
	
Label_5181:
	if(var_322_bool == 0) goto Label_5187; // 0x143d JumpB
	var_335_int = 512574; // 0x143e PushI
	var_336_int = 13744; // 0x143f PushI
	var_337_int = 13743; // 0x1440 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x1441 TObjFunc
	
Label_5187:
	var_338_bool = 0; // 0x1443 PushV
	var_338_bool = 0; // 0x1444 MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x1445 PushV
	var_340_object = var_1_object; // 0x1446 MovT
	func_11421(var_340_object); // 0x1447 NEW_2
	if(var_339_bool == 0) goto Label_5200; // 0x1449 JumpB
	var_341_bool = 0; var_342_object = Obj(); // 0x144a PushV
	var_342_object = var_1_object; // 0x144b MovT
	func_11469(var_342_object); // 0x144c NEW_2
	if(var_341_bool == 0) goto Label_5200; // 0x144e JumpB
	var_338_bool = 1; // 0x144f MovB
	
Label_5200:
	if(var_338_bool == 0) goto Label_5206; // 0x1450 JumpB
	var_347_int = 512577; // 0x1451 PushI
	var_348_int = 13747; // 0x1452 PushI
	var_349_int = 13746; // 0x1453 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x1454 TObjFunc
	
Label_5206:
	var_350_bool = 0; var_351_object = Obj(); // 0x1456 PushV
	var_351_object = var_1_object; // 0x1457 MovT
	func_11671(var_350_bool, var_351_object); // 0x1458 NEW_2
	var_362_bool = var_350_bool == 0; // 0x145a Not
	if(var_362_bool == 0) goto Label_5217; // 0x145b JumpB
	var_363_int = 520905; // 0x145c PushI
	var_364_int = 22123; // 0x145d PushI
	var_365_int = 22122; // 0x145e PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x145f TObjFunc
	
Label_5217:
	var_366_int = 512580; // 0x1461 PushI
	var_367_int = -1; // 0x1462 PushI
	var_368_int = 13749; // 0x1463 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x1464 TObjFunc
	return 0; // 0x1466 Return
	
Label_5223:
	var_369_int = 22123; // 0x1467 PushI
	var_370_bool = var_74_float == var_369_int; // 0x1468 Eq
	if(var_370_bool == 0) goto Label_5251; // 0x1469 JumpB
	var_371_string = ""; // 0x146a PushV
	var_371_string = "Neutral"; // 0x146b MovS
	func_4996(var_75_int, var_371_string); // 0x146c NEW_2
	var_372_int = 520906; // 0x146e PushI
	SetMessage(var_372_int); // 0x146f TObjFunc
	ClearReplies(); // 0x1471 TObjFunc
	var_373_bool = 0; var_374_object = Obj(); // 0x1473 PushV
	var_374_object = var_1_object; // 0x1474 MovT
	func_11681(var_373_bool, var_374_object); // 0x1475 NEW_2
	if(var_373_bool == 0) goto Label_5245; // 0x1477 JumpB
	var_381_int = 520907; // 0x1478 PushI
	var_382_int = -1; // 0x1479 PushI
	var_383_int = 22124; // 0x147a PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x147b TObjFunc
	
Label_5245:
	var_384_int = 520908; // 0x147d PushI
	var_385_int = -1; // 0x147e PushI
	var_386_int = 22125; // 0x147f PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x1480 TObjFunc
	return 0; // 0x1482 Return
	
Label_5251:
	var_387_int = 13747; // 0x1483 PushI
	var_388_bool = var_74_float == var_387_int; // 0x1484 Eq
	if(var_388_bool == 0) goto Label_5274; // 0x1485 JumpB
	var_389_string = ""; // 0x1486 PushV
	var_389_string = "Neutral"; // 0x1487 MovS
	func_4996(var_75_int, var_389_string); // 0x1488 NEW_2
	var_390_int = 512578; // 0x148a PushI
	SetMessage(var_390_int); // 0x148b TObjFunc
	ClearReplies(); // 0x148d TObjFunc
	var_391_int = 512598; // 0x148f PushI
	var_392_int = 13770; // 0x1490 PushI
	var_393_int = 13769; // 0x1491 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x1492 TObjFunc
	var_394_int = 512603; // 0x1494 PushI
	var_395_int = 13772; // 0x1495 PushI
	var_396_int = 13775; // 0x1496 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x1497 TObjFunc
	return 0; // 0x1499 Return
	
Label_5274:
	var_397_int = 13770; // 0x149a PushI
	var_398_bool = var_74_float == var_397_int; // 0x149b Eq
	if(var_398_bool == 0) goto Label_5297; // 0x149c JumpB
	var_399_string = ""; // 0x149d PushV
	var_399_string = "Rage"; // 0x149e MovS
	func_4996(var_75_int, var_399_string); // 0x149f NEW_2
	var_400_int = 512599; // 0x14a1 PushI
	SetMessage(var_400_int); // 0x14a2 TObjFunc
	ClearReplies(); // 0x14a4 TObjFunc
	var_401_int = 512600; // 0x14a6 PushI
	var_402_int = 13772; // 0x14a7 PushI
	var_403_int = 13771; // 0x14a8 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x14a9 TObjFunc
	var_404_int = 512602; // 0x14ab PushI
	var_405_int = 13772; // 0x14ac PushI
	var_406_int = 13773; // 0x14ad PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x14ae TObjFunc
	return 0; // 0x14b0 Return
	
Label_5297:
	var_407_int = 13772; // 0x14b1 PushI
	var_408_bool = var_74_float == var_407_int; // 0x14b2 Eq
	if(var_408_bool == 0) goto Label_5315; // 0x14b3 JumpB
	var_409_string = ""; // 0x14b4 PushV
	var_409_string = "Rage"; // 0x14b5 MovS
	func_4996(var_75_int, var_409_string); // 0x14b6 NEW_2
	var_410_int = 512601; // 0x14b8 PushI
	SetMessage(var_410_int); // 0x14b9 TObjFunc
	ClearReplies(); // 0x14bb TObjFunc
	var_411_int = 512579; // 0x14bd PushI
	var_412_int = -1; // 0x14be PushI
	var_413_int = 13748; // 0x14bf PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x14c0 TObjFunc
	return 0; // 0x14c2 Return
	
Label_5315:
	var_414_int = 13744; // 0x14c3 PushI
	var_415_bool = var_74_float == var_414_int; // 0x14c4 Eq
	if(var_415_bool == 0) goto Label_5338; // 0x14c5 JumpB
	var_416_string = ""; // 0x14c6 PushV
	var_416_string = "Neutral"; // 0x14c7 MovS
	func_4996(var_75_int, var_416_string); // 0x14c8 NEW_2
	var_417_int = 512575; // 0x14ca PushI
	SetMessage(var_417_int); // 0x14cb TObjFunc
	ClearReplies(); // 0x14cd TObjFunc
	var_418_int = 512576; // 0x14cf PushI
	var_419_int = -1; // 0x14d0 PushI
	var_420_int = 13745; // 0x14d1 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x14d2 TObjFunc
	var_421_int = 515778; // 0x14d4 PushI
	var_422_int = 16850; // 0x14d5 PushI
	var_423_int = 16849; // 0x14d6 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x14d7 TObjFunc
	return 0; // 0x14d9 Return
	
Label_5338:
	var_424_int = 16850; // 0x14da PushI
	var_425_bool = var_74_float == var_424_int; // 0x14db Eq
	if(var_425_bool == 0) goto Label_5356; // 0x14dc JumpB
	var_426_string = ""; // 0x14dd PushV
	var_426_string = "Neutral"; // 0x14de MovS
	func_4996(var_75_int, var_426_string); // 0x14df NEW_2
	var_427_int = 515779; // 0x14e1 PushI
	SetMessage(var_427_int); // 0x14e2 TObjFunc
	ClearReplies(); // 0x14e4 TObjFunc
	var_428_int = 515780; // 0x14e6 PushI
	var_429_int = -1; // 0x14e7 PushI
	var_430_int = 16851; // 0x14e8 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x14e9 TObjFunc
	return 0; // 0x14eb Return
	
Label_5356:
	var_431_int = 13766; // 0x14ec PushI
	var_432_bool = var_74_float == var_431_int; // 0x14ed Eq
	if(var_432_bool == 0) goto Label_5374; // 0x14ee JumpB
	var_433_string = ""; // 0x14ef PushV
	var_433_string = "Neutral"; // 0x14f0 MovS
	func_4996(var_75_int, var_433_string); // 0x14f1 NEW_2
	var_434_int = 512596; // 0x14f3 PushI
	SetMessage(var_434_int); // 0x14f4 TObjFunc
	ClearReplies(); // 0x14f6 TObjFunc
	var_435_int = 512597; // 0x14f8 PushI
	var_436_int = 12960; // 0x14f9 PushI
	var_437_int = 13767; // 0x14fa PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x14fb TObjFunc
	return 0; // 0x14fd Return
	
Label_5374:
	var_438_int = 12950; // 0x14fe PushI
	var_439_bool = var_74_float == var_438_int; // 0x14ff Eq
	if(var_439_bool == 0) goto Label_5377; // 0x1500 JumpB
	
Label_5377:
	var_440_int = 12954; // 0x1501 PushI
	var_441_bool = var_74_float == var_440_int; // 0x1502 Eq
	if(var_441_bool == 0) goto Label_5395; // 0x1503 JumpB
	var_442_string = ""; // 0x1504 PushV
	var_442_string = "Neutral"; // 0x1505 MovS
	func_4996(var_75_int, var_442_string); // 0x1506 NEW_2
	var_443_int = 511748; // 0x1508 PushI
	SetMessage(var_443_int); // 0x1509 TObjFunc
	ClearReplies(); // 0x150b TObjFunc
	var_444_int = 511749; // 0x150d PushI
	var_445_int = 12951; // 0x150e PushI
	var_446_int = 12955; // 0x150f PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x1510 TObjFunc
	return 0; // 0x1512 Return
	
Label_5395:
	var_447_int = 12951; // 0x1513 PushI
	var_448_bool = var_74_float == var_447_int; // 0x1514 Eq
	if(var_448_bool == 0) goto Label_5413; // 0x1515 JumpB
	var_449_string = ""; // 0x1516 PushV
	var_449_string = "Rage"; // 0x1517 MovS
	func_4996(var_75_int, var_449_string); // 0x1518 NEW_2
	var_450_int = 511745; // 0x151a PushI
	SetMessage(var_450_int); // 0x151b TObjFunc
	ClearReplies(); // 0x151d TObjFunc
	var_451_int = 511747; // 0x151f PushI
	var_452_int = 12957; // 0x1520 PushI
	var_453_int = 12953; // 0x1521 PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x1522 TObjFunc
	return 0; // 0x1524 Return
	
Label_5413:
	var_454_int = 12957; // 0x1525 PushI
	var_455_bool = var_74_float == var_454_int; // 0x1526 Eq
	if(var_455_bool == 0) goto Label_5436; // 0x1527 JumpB
	var_456_string = ""; // 0x1528 PushV
	var_456_string = "Rage"; // 0x1529 MovS
	func_4996(var_75_int, var_456_string); // 0x152a NEW_2
	var_457_int = 511750; // 0x152c PushI
	SetMessage(var_457_int); // 0x152d TObjFunc
	ClearReplies(); // 0x152f TObjFunc
	var_458_int = 511751; // 0x1531 PushI
	var_459_int = 12960; // 0x1532 PushI
	var_460_int = 12958; // 0x1533 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x1534 TObjFunc
	var_461_int = 511752; // 0x1536 PushI
	var_462_int = -1; // 0x1537 PushI
	var_463_int = 12959; // 0x1538 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x1539 TObjFunc
	return 0; // 0x153b Return
	
Label_5436:
	var_464_int = 12960; // 0x153c PushI
	var_465_bool = var_74_float == var_464_int; // 0x153d Eq
	if(var_465_bool == 0) goto Label_5459; // 0x153e JumpB
	var_466_string = ""; // 0x153f PushV
	var_466_string = "Sly"; // 0x1540 MovS
	func_4996(var_75_int, var_466_string); // 0x1541 NEW_2
	var_467_int = 511753; // 0x1543 PushI
	SetMessage(var_467_int); // 0x1544 TObjFunc
	ClearReplies(); // 0x1546 TObjFunc
	var_468_int = 511754; // 0x1548 PushI
	var_469_int = 12964; // 0x1549 PushI
	var_470_int = 12962; // 0x154a PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x154b TObjFunc
	var_471_int = 515777; // 0x154d PushI
	var_472_int = -1; // 0x154e PushI
	var_473_int = 16848; // 0x154f PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x1550 TObjFunc
	return 0; // 0x1552 Return
	
Label_5459:
	var_474_int = 12964; // 0x1553 PushI
	var_475_bool = var_74_float == var_474_int; // 0x1554 Eq
	if(var_475_bool == 0) goto Label_5482; // 0x1555 JumpB
	var_476_string = ""; // 0x1556 PushV
	var_476_string = "Sly"; // 0x1557 MovS
	func_4996(var_75_int, var_476_string); // 0x1558 NEW_2
	var_477_int = 511756; // 0x155a PushI
	SetMessage(var_477_int); // 0x155b TObjFunc
	ClearReplies(); // 0x155d TObjFunc
	var_478_int = 511761; // 0x155f PushI
	var_479_int = -1; // 0x1560 PushI
	var_480_int = 12969; // 0x1561 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x1562 TObjFunc
	var_481_int = 511762; // 0x1564 PushI
	var_482_int = -1; // 0x1565 PushI
	var_483_int = 12970; // 0x1566 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x1567 TObjFunc
	return 0; // 0x1569 Return
	
Label_5482:
	var_3_object = 1; // 0x156a TMovB
	var_484_bool = 0; // 0x156b PushV
	func_10306(var_484_bool); // 0x156c NEW_2
	if(var_484_bool == 0) goto Label_5490; // 0x156e JumpB
	lshStopAnimation(); // 0x156f Func
	goto Label_5492; // 0x1571 Jump
	
Label_5492:
	return 0; // 0x1574 Return
	
Label_5490:
	StopAnimation(); // 0x1572 Func
	
Label_5494:
	return 0; // 0x1576 Return
}


task_19_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x1672 PushI
	if(var_76_int == 0) goto Label_6261; // 0x1673 JumpB
	func_10041(); // 0x1675 NEW_2
	var_78_int = 13670; // 0x1677 PushI
	var_79_bool = var_75_int == var_78_int; // 0x1678 Eq
	if(var_79_bool == 0) goto Label_5769; // 0x1679 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x167a PushV
	var_80_object = var_1_object; // 0x167b MovT
	var_81_object = var_0_bool; // 0x167c MovT
	func_10841(); // 0x167d NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x167f PushV
	var_84_object = var_1_object; // 0x1680 MovT
	var_85_object = var_0_bool; // 0x1681 MovT
	func_10801(); // 0x1682 NEW_2
	var_152_object = Obj(); var_153_object = Obj(); // 0x1684 PushV
	var_152_object = var_1_object; // 0x1685 MovT
	var_153_object = var_0_bool; // 0x1686 MovT
	func_10853(); // 0x1687 NEW_2
	
Label_5769:
	var_156_int = 13671; // 0x1689 PushI
	var_157_bool = var_75_int == var_156_int; // 0x168a Eq
	if(var_157_bool == 0) goto Label_5782; // 0x168b JumpB
	var_158_object = Obj(); var_159_object = Obj(); // 0x168c PushV
	var_158_object = var_1_object; // 0x168d MovT
	var_159_object = var_0_bool; // 0x168e MovT
	func_10841(); // 0x168f NEW_2
	var_160_object = Obj(); var_161_object = Obj(); // 0x1691 PushV
	var_160_object = var_1_object; // 0x1692 MovT
	var_161_object = var_0_bool; // 0x1693 MovT
	func_10853(); // 0x1694 NEW_2
	
Label_5782:
	var_162_int = 13692; // 0x1696 PushI
	var_163_bool = var_75_int == var_162_int; // 0x1697 Eq
	if(var_163_bool == 0) goto Label_5790; // 0x1698 JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0x1699 PushV
	var_164_object = var_1_object; // 0x169a MovT
	var_165_object = var_0_bool; // 0x169b MovT
	func_10801(); // 0x169c NEW_2
	
Label_5790:
	var_166_int = 13686; // 0x169e PushI
	var_167_bool = var_75_int == var_166_int; // 0x169f Eq
	if(var_167_bool == 0) goto Label_5798; // 0x16a0 JumpB
	var_168_object = Obj(); var_169_object = Obj(); // 0x16a1 PushV
	var_168_object = var_1_object; // 0x16a2 MovT
	var_169_object = var_0_bool; // 0x16a3 MovT
	func_10847(); // 0x16a4 NEW_2
	
Label_5798:
	var_172_int = 13689; // 0x16a6 PushI
	var_173_bool = var_75_int == var_172_int; // 0x16a7 Eq
	if(var_173_bool == 0) goto Label_5816; // 0x16a8 JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0x16a9 PushV
	var_174_object = var_1_object; // 0x16aa MovT
	var_175_object = var_0_bool; // 0x16ab MovT
	func_10396(); // 0x16ac NEW_2
	var_178_object = Obj(); var_179_object = Obj(); // 0x16ae PushV
	var_178_object = var_1_object; // 0x16af MovT
	var_179_object = var_0_bool; // 0x16b0 MovT
	func_10902(); // 0x16b1 NEW_2
	var_201_object = Obj(); var_202_object = Obj(); // 0x16b3 PushV
	var_201_object = var_1_object; // 0x16b4 MovT
	var_202_object = var_0_bool; // 0x16b5 MovT
	func_10386(var_202_object); // 0x16b6 NEW_2
	
Label_5816:
	var_222_int = 37901; // 0x16b8 PushI
	var_223_bool = var_75_int == var_222_int; // 0x16b9 Eq
	if(var_223_bool == 0) goto Label_5834; // 0x16ba JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0x16bb PushV
	var_224_object = var_1_object; // 0x16bc MovT
	var_225_object = var_0_bool; // 0x16bd MovT
	func_10902(); // 0x16be NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0x16c0 PushV
	var_226_object = var_1_object; // 0x16c1 MovT
	var_227_object = var_0_bool; // 0x16c2 MovT
	func_10386(var_227_object); // 0x16c3 NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0x16c5 PushV
	var_228_object = var_1_object; // 0x16c6 MovT
	var_229_object = var_0_bool; // 0x16c7 MovT
	func_10396(); // 0x16c8 NEW_2
	
Label_5834:
	var_230_int = 13696; // 0x16ca PushI
	var_231_bool = var_75_int == var_230_int; // 0x16cb Eq
	if(var_231_bool == 0) goto Label_5842; // 0x16cc JumpB
	var_232_object = Obj(); var_233_object = Obj(); // 0x16cd PushV
	var_232_object = var_1_object; // 0x16ce MovT
	var_233_object = var_0_bool; // 0x16cf MovT
	func_10859(); // 0x16d0 NEW_2
	
Label_5842:
	var_236_int = 13698; // 0x16d2 PushI
	var_237_bool = var_75_int == var_236_int; // 0x16d3 Eq
	if(var_237_bool == 0) goto Label_5850; // 0x16d4 JumpB
	var_238_object = Obj(); var_239_object = Obj(); // 0x16d5 PushV
	var_238_object = var_1_object; // 0x16d6 MovT
	var_239_object = var_0_bool; // 0x16d7 MovT
	func_10865(); // 0x16d8 NEW_2
	
Label_5850:
	var_251_int = 37902; // 0x16da PushI
	var_252_bool = var_75_int == var_251_int; // 0x16db Eq
	if(var_252_bool == 0) goto Label_5858; // 0x16dc JumpB
	var_253_object = Obj(); var_254_object = Obj(); // 0x16dd PushV
	var_253_object = var_1_object; // 0x16de MovT
	var_254_object = var_0_bool; // 0x16df MovT
	func_10865(); // 0x16e0 NEW_2
	
Label_5858:
	var_255_int = 22128; // 0x16e2 PushI
	var_256_bool = var_75_int == var_255_int; // 0x16e3 Eq
	if(var_256_bool == 0) goto Label_5876; // 0x16e4 JumpB
	var_257_object = Obj(); var_258_object = Obj(); // 0x16e5 PushV
	var_257_object = var_1_object; // 0x16e6 MovT
	var_258_object = var_0_bool; // 0x16e7 MovT
	func_10600(); // 0x16e8 NEW_2
	var_261_object = Obj(); var_262_object = Obj(); // 0x16ea PushV
	var_261_object = var_1_object; // 0x16eb MovT
	var_262_object = var_0_bool; // 0x16ec MovT
	func_10339(var_262_object); // 0x16ed NEW_2
	var_265_object = Obj(); var_266_object = Obj(); // 0x16ef PushV
	var_265_object = var_1_object; // 0x16f0 MovT
	var_266_object = var_0_bool; // 0x16f1 MovT
	func_10328(); // 0x16f2 NEW_2
	
Label_5876:
	var_278_int = 13330; // 0x16f4 PushI
	var_279_bool = var_74_float == var_278_int; // 0x16f5 Eq
	if(var_279_bool == 0) goto Label_5988; // 0x16f6 JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x16f7 PushV
	var_281_object = var_1_object; // 0x16f8 MovT
	func_11373(var_281_object); // 0x16f9 NEW_2
	if(var_280_bool == 0) goto Label_5904; // 0x16fb JumpB
	var_288_string = ""; // 0x16fc PushV
	var_288_string = "Fear"; // 0x16fd MovS
	func_5723(var_75_int, var_288_string); // 0x16fe NEW_2
	var_305_int = 512104; // 0x1700 PushI
	SetMessage(var_305_int); // 0x1701 TObjFunc
	ClearReplies(); // 0x1703 TObjFunc
	var_306_int = 512105; // 0x1705 PushI
	var_307_int = 13334; // 0x1706 PushI
	var_308_int = 13331; // 0x1707 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x1708 TObjFunc
	var_309_int = 512106; // 0x170a PushI
	var_310_int = 13333; // 0x170b PushI
	var_311_int = 13332; // 0x170c PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x170d TObjFunc
	return 0; // 0x170f Return
	
Label_5904:
	var_312_string = ""; // 0x1710 PushV
	var_312_string = "Neutral"; // 0x1711 MovS
	func_5723(var_75_int, var_312_string); // 0x1712 NEW_2
	var_313_int = 512515; // 0x1714 PushI
	SetMessage(var_313_int); // 0x1715 TObjFunc
	ClearReplies(); // 0x1717 TObjFunc
	var_314_bool = 0; var_315_object = Obj(); // 0x1719 PushV
	var_315_object = var_1_object; // 0x171a MovT
	func_11361(var_315_object); // 0x171b NEW_2
	if(var_314_bool == 0) goto Label_5923; // 0x171d JumpB
	var_320_int = 512520; // 0x171e PushI
	var_321_int = 13691; // 0x171f PushI
	var_322_int = 13690; // 0x1720 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x1721 TObjFunc
	
Label_5923:
	var_323_bool = 0; // 0x1723 PushV
	var_323_bool = 0; // 0x1724 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x1725 PushV
	var_325_object = var_1_object; // 0x1726 MovT
	func_11385(var_325_object); // 0x1727 NEW_2
	if(var_324_bool == 0) goto Label_5936; // 0x1729 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x172a PushV
	var_331_object = var_1_object; // 0x172b MovT
	func_11493(var_331_object); // 0x172c NEW_2
	if(var_330_bool == 0) goto Label_5936; // 0x172e JumpB
	var_323_bool = 1; // 0x172f MovB
	
Label_5936:
	if(var_323_bool == 0) goto Label_5942; // 0x1730 JumpB
	var_336_int = 512516; // 0x1731 PushI
	var_337_int = 13688; // 0x1732 PushI
	var_338_int = 13686; // 0x1733 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x1734 TObjFunc
	
Label_5942:
	var_339_bool = 0; // 0x1736 PushV
	var_339_bool = 0; // 0x1737 MovB
	var_340_bool = 0; // 0x1738 PushV
	var_340_bool = 0; // 0x1739 MovB
	var_341_bool = 0; var_342_object = Obj(); // 0x173a PushV
	var_342_object = var_1_object; // 0x173b MovT
	func_11397(var_342_object); // 0x173c NEW_2
	if(var_341_bool == 0) goto Label_5957; // 0x173e JumpB
	var_347_bool = 0; var_348_object = Obj(); // 0x173f PushV
	var_348_object = var_1_object; // 0x1740 MovT
	func_11505(var_348_object); // 0x1741 NEW_2
	if(var_347_bool == 0) goto Label_5957; // 0x1743 JumpB
	var_340_bool = 1; // 0x1744 MovB
	
Label_5957:
	if(var_340_bool == 0) goto Label_5965; // 0x1745 JumpB
	var_353_bool = 0; var_354_object = Obj(); // 0x1746 PushV
	var_354_object = var_1_object; // 0x1747 MovT
	func_11493(var_354_object); // 0x1748 NEW_2
	var_355_bool = var_353_bool == 0; // 0x174a Not
	if(var_355_bool == 0) goto Label_5965; // 0x174b JumpB
	var_339_bool = 1; // 0x174c MovB
	
Label_5965:
	if(var_339_bool == 0) goto Label_5971; // 0x174d JumpB
	var_356_int = 512526; // 0x174e PushI
	var_357_int = 13697; // 0x174f PushI
	var_358_int = 13696; // 0x1750 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x1751 TObjFunc
	
Label_5971:
	var_359_bool = 0; var_360_object = Obj(); // 0x1753 PushV
	var_360_object = var_1_object; // 0x1754 MovT
	func_11671(var_359_bool, var_360_object); // 0x1755 NEW_2
	var_371_bool = var_359_bool == 0; // 0x1757 Not
	if(var_371_bool == 0) goto Label_5982; // 0x1758 JumpB
	var_372_int = 520909; // 0x1759 PushI
	var_373_int = 22127; // 0x175a PushI
	var_374_int = 22126; // 0x175b PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x175c TObjFunc
	
Label_5982:
	var_375_int = 512517; // 0x175e PushI
	var_376_int = -1; // 0x175f PushI
	var_377_int = 13687; // 0x1760 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x1761 TObjFunc
	return 0; // 0x1763 Return
	
Label_5988:
	var_378_int = 22127; // 0x1764 PushI
	var_379_bool = var_74_float == var_378_int; // 0x1765 Eq
	if(var_379_bool == 0) goto Label_6016; // 0x1766 JumpB
	var_380_string = ""; // 0x1767 PushV
	var_380_string = "Neutral"; // 0x1768 MovS
	func_5723(var_75_int, var_380_string); // 0x1769 NEW_2
	var_381_int = 520910; // 0x176b PushI
	SetMessage(var_381_int); // 0x176c TObjFunc
	ClearReplies(); // 0x176e TObjFunc
	var_382_bool = 0; var_383_object = Obj(); // 0x1770 PushV
	var_383_object = var_1_object; // 0x1771 MovT
	func_11681(var_382_bool, var_383_object); // 0x1772 NEW_2
	if(var_382_bool == 0) goto Label_6010; // 0x1774 JumpB
	var_390_int = 520911; // 0x1775 PushI
	var_391_int = -1; // 0x1776 PushI
	var_392_int = 22128; // 0x1777 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x1778 TObjFunc
	
Label_6010:
	var_393_int = 520912; // 0x177a PushI
	var_394_int = -1; // 0x177b PushI
	var_395_int = 22129; // 0x177c PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x177d TObjFunc
	return 0; // 0x177f Return
	
Label_6016:
	var_396_int = 13697; // 0x1780 PushI
	var_397_bool = var_74_float == var_396_int; // 0x1781 Eq
	if(var_397_bool == 0) goto Label_6039; // 0x1782 JumpB
	var_398_string = ""; // 0x1783 PushV
	var_398_string = "Neutral"; // 0x1784 MovS
	func_5723(var_75_int, var_398_string); // 0x1785 NEW_2
	var_399_int = 512527; // 0x1787 PushI
	SetMessage(var_399_int); // 0x1788 TObjFunc
	ClearReplies(); // 0x178a TObjFunc
	var_400_int = 512528; // 0x178c PushI
	var_401_int = -1; // 0x178d PushI
	var_402_int = 13698; // 0x178e PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x178f TObjFunc
	var_403_int = 536143; // 0x1791 PushI
	var_404_int = -1; // 0x1792 PushI
	var_405_int = 37902; // 0x1793 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x1794 TObjFunc
	return 0; // 0x1796 Return
	
Label_6039:
	var_406_int = 13688; // 0x1797 PushI
	var_407_bool = var_74_float == var_406_int; // 0x1798 Eq
	if(var_407_bool == 0) goto Label_6062; // 0x1799 JumpB
	var_408_string = ""; // 0x179a PushV
	var_408_string = "Neutral"; // 0x179b MovS
	func_5723(var_75_int, var_408_string); // 0x179c NEW_2
	var_409_int = 512518; // 0x179e PushI
	SetMessage(var_409_int); // 0x179f TObjFunc
	ClearReplies(); // 0x17a1 TObjFunc
	var_410_int = 512519; // 0x17a3 PushI
	var_411_int = -1; // 0x17a4 PushI
	var_412_int = 13689; // 0x17a5 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x17a6 TObjFunc
	var_413_int = 536142; // 0x17a8 PushI
	var_414_int = -1; // 0x17a9 PushI
	var_415_int = 37901; // 0x17aa PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x17ab TObjFunc
	return 0; // 0x17ad Return
	
Label_6062:
	var_416_int = 13691; // 0x17ae PushI
	var_417_bool = var_74_float == var_416_int; // 0x17af Eq
	if(var_417_bool == 0) goto Label_6080; // 0x17b0 JumpB
	var_418_string = ""; // 0x17b1 PushV
	var_418_string = "Neutral"; // 0x17b2 MovS
	func_5723(var_75_int, var_418_string); // 0x17b3 NEW_2
	var_419_int = 512521; // 0x17b5 PushI
	SetMessage(var_419_int); // 0x17b6 TObjFunc
	ClearReplies(); // 0x17b8 TObjFunc
	var_420_int = 512522; // 0x17ba PushI
	var_421_int = -1; // 0x17bb PushI
	var_422_int = 13692; // 0x17bc PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x17bd TObjFunc
	return 0; // 0x17bf Return
	
Label_6080:
	var_423_int = 13333; // 0x17c0 PushI
	var_424_bool = var_74_float == var_423_int; // 0x17c1 Eq
	if(var_424_bool == 0) goto Label_6098; // 0x17c2 JumpB
	var_425_string = ""; // 0x17c3 PushV
	var_425_string = "Neutral"; // 0x17c4 MovS
	func_5723(var_75_int, var_425_string); // 0x17c5 NEW_2
	var_426_int = 512107; // 0x17c7 PushI
	SetMessage(var_426_int); // 0x17c8 TObjFunc
	ClearReplies(); // 0x17ca TObjFunc
	var_427_int = 512493; // 0x17cc PushI
	var_428_int = 13334; // 0x17cd PushI
	var_429_int = 13662; // 0x17ce PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x17cf TObjFunc
	return 0; // 0x17d1 Return
	
Label_6098:
	var_430_int = 13334; // 0x17d2 PushI
	var_431_bool = var_74_float == var_430_int; // 0x17d3 Eq
	if(var_431_bool == 0) goto Label_6121; // 0x17d4 JumpB
	var_432_string = ""; // 0x17d5 PushV
	var_432_string = "Neutral"; // 0x17d6 MovS
	func_5723(var_75_int, var_432_string); // 0x17d7 NEW_2
	var_433_int = 512108; // 0x17d9 PushI
	SetMessage(var_433_int); // 0x17da TObjFunc
	ClearReplies(); // 0x17dc TObjFunc
	var_434_int = 512109; // 0x17de PushI
	var_435_int = 13336; // 0x17df PushI
	var_436_int = 13335; // 0x17e0 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x17e1 TObjFunc
	var_437_int = 541861; // 0x17e3 PushI
	var_438_int = 13667; // 0x17e4 PushI
	var_439_int = 44088; // 0x17e5 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x17e6 TObjFunc
	return 0; // 0x17e8 Return
	
Label_6121:
	var_440_int = 13336; // 0x17e9 PushI
	var_441_bool = var_74_float == var_440_int; // 0x17ea Eq
	if(var_441_bool == 0) goto Label_6144; // 0x17eb JumpB
	var_442_string = ""; // 0x17ec PushV
	var_442_string = "Sly"; // 0x17ed MovS
	func_5723(var_75_int, var_442_string); // 0x17ee NEW_2
	var_443_int = 512110; // 0x17f0 PushI
	SetMessage(var_443_int); // 0x17f1 TObjFunc
	ClearReplies(); // 0x17f3 TObjFunc
	var_444_int = 512111; // 0x17f5 PushI
	var_445_int = 13338; // 0x17f6 PushI
	var_446_int = 13337; // 0x17f7 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x17f8 TObjFunc
	var_447_int = 541862; // 0x17fa PushI
	var_448_int = 13667; // 0x17fb PushI
	var_449_int = 44090; // 0x17fc PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x17fd TObjFunc
	return 0; // 0x17ff Return
	
Label_6144:
	var_450_int = 13338; // 0x1800 PushI
	var_451_bool = var_74_float == var_450_int; // 0x1801 Eq
	if(var_451_bool == 0) goto Label_6167; // 0x1802 JumpB
	var_452_string = ""; // 0x1803 PushV
	var_452_string = "Fear"; // 0x1804 MovS
	func_5723(var_75_int, var_452_string); // 0x1805 NEW_2
	var_453_int = 512112; // 0x1807 PushI
	SetMessage(var_453_int); // 0x1808 TObjFunc
	ClearReplies(); // 0x180a TObjFunc
	var_454_int = 512494; // 0x180c PushI
	var_455_int = 13665; // 0x180d PushI
	var_456_int = 13664; // 0x180e PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x180f TObjFunc
	var_457_int = 541863; // 0x1811 PushI
	var_458_int = 44093; // 0x1812 PushI
	var_459_int = 44092; // 0x1813 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x1814 TObjFunc
	return 0; // 0x1816 Return
	
Label_6167:
	var_460_int = 44093; // 0x1817 PushI
	var_461_bool = var_74_float == var_460_int; // 0x1818 Eq
	if(var_461_bool == 0) goto Label_6185; // 0x1819 JumpB
	var_462_string = ""; // 0x181a PushV
	var_462_string = "Sly"; // 0x181b MovS
	func_5723(var_75_int, var_462_string); // 0x181c NEW_2
	var_463_int = 541864; // 0x181e PushI
	SetMessage(var_463_int); // 0x181f TObjFunc
	ClearReplies(); // 0x1821 TObjFunc
	var_464_int = 541865; // 0x1823 PushI
	var_465_int = 13667; // 0x1824 PushI
	var_466_int = 44094; // 0x1825 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x1826 TObjFunc
	return 0; // 0x1828 Return
	
Label_6185:
	var_467_int = 13665; // 0x1829 PushI
	var_468_bool = var_74_float == var_467_int; // 0x182a Eq
	if(var_468_bool == 0) goto Label_6208; // 0x182b JumpB
	var_469_string = ""; // 0x182c PushV
	var_469_string = "Fear"; // 0x182d MovS
	func_5723(var_75_int, var_469_string); // 0x182e NEW_2
	var_470_int = 512495; // 0x1830 PushI
	SetMessage(var_470_int); // 0x1831 TObjFunc
	ClearReplies(); // 0x1833 TObjFunc
	var_471_int = 512496; // 0x1835 PushI
	var_472_int = 13667; // 0x1836 PushI
	var_473_int = 13666; // 0x1837 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x1838 TObjFunc
	var_474_int = 541866; // 0x183a PushI
	var_475_int = 13667; // 0x183b PushI
	var_476_int = 44096; // 0x183c PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x183d TObjFunc
	return 0; // 0x183f Return
	
Label_6208:
	var_477_int = 13667; // 0x1840 PushI
	var_478_bool = var_74_float == var_477_int; // 0x1841 Eq
	if(var_478_bool == 0) goto Label_6226; // 0x1842 JumpB
	var_479_string = ""; // 0x1843 PushV
	var_479_string = "Neutral"; // 0x1844 MovS
	func_5723(var_75_int, var_479_string); // 0x1845 NEW_2
	var_480_int = 512497; // 0x1847 PushI
	SetMessage(var_480_int); // 0x1848 TObjFunc
	ClearReplies(); // 0x184a TObjFunc
	var_481_int = 512498; // 0x184c PushI
	var_482_int = 13669; // 0x184d PushI
	var_483_int = 13668; // 0x184e PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x184f TObjFunc
	return 0; // 0x1851 Return
	
Label_6226:
	var_484_int = 13669; // 0x1852 PushI
	var_485_bool = var_74_float == var_484_int; // 0x1853 Eq
	if(var_485_bool == 0) goto Label_6249; // 0x1854 JumpB
	var_486_string = ""; // 0x1855 PushV
	var_486_string = "Sly"; // 0x1856 MovS
	func_5723(var_75_int, var_486_string); // 0x1857 NEW_2
	var_487_int = 512499; // 0x1859 PushI
	SetMessage(var_487_int); // 0x185a TObjFunc
	ClearReplies(); // 0x185c TObjFunc
	var_488_int = 512500; // 0x185e PushI
	var_489_int = -1; // 0x185f PushI
	var_490_int = 13670; // 0x1860 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x1861 TObjFunc
	var_491_int = 512501; // 0x1863 PushI
	var_492_int = -1; // 0x1864 PushI
	var_493_int = 13671; // 0x1865 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x1866 TObjFunc
	return 0; // 0x1868 Return
	
Label_6249:
	var_3_object = 1; // 0x1869 TMovB
	var_494_bool = 0; // 0x186a PushV
	func_10306(var_494_bool); // 0x186b NEW_2
	if(var_494_bool == 0) goto Label_6257; // 0x186d JumpB
	lshStopAnimation(); // 0x186e Func
	goto Label_6259; // 0x1870 Jump
	
Label_6259:
	return 0; // 0x1873 Return
	
Label_6257:
	StopAnimation(); // 0x1871 Func
	
Label_6261:
	return 0; // 0x1875 Return
}


task_21_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x19db PushI
	if(var_76_int == 0) goto Label_8090; // 0x19dc JumpB
	func_10041(); // 0x19de NEW_2
	var_78_int = 34829; // 0x19e0 PushI
	var_79_bool = var_75_int == var_78_int; // 0x19e1 Eq
	if(var_79_bool == 0) goto Label_6632; // 0x19e2 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x19e3 PushV
	var_80_object = var_1_object; // 0x19e4 MovT
	var_81_object = var_0_bool; // 0x19e5 MovT
	func_11014(); // 0x19e6 NEW_2
	
Label_6632:
	var_123_int = 37748; // 0x19e8 PushI
	var_124_bool = var_75_int == var_123_int; // 0x19e9 Eq
	if(var_124_bool == 0) goto Label_6640; // 0x19ea JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x19eb PushV
	var_125_object = var_1_object; // 0x19ec MovT
	var_126_object = var_0_bool; // 0x19ed MovT
	func_11014(); // 0x19ee NEW_2
	
Label_6640:
	var_127_int = 14856; // 0x19f0 PushI
	var_128_bool = var_75_int == var_127_int; // 0x19f1 Eq
	if(var_128_bool == 0) goto Label_6658; // 0x19f2 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x19f3 PushV
	var_129_object = var_1_object; // 0x19f4 MovT
	var_130_object = var_0_bool; // 0x19f5 MovT
	func_10941(); // 0x19f6 NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x19f8 PushV
	var_133_object = var_1_object; // 0x19f9 MovT
	var_134_object = var_0_bool; // 0x19fa MovT
	func_11078(); // 0x19fb NEW_2
	var_159_object = Obj(); var_160_object = Obj(); // 0x19fd PushV
	var_159_object = var_1_object; // 0x19fe MovT
	var_160_object = var_0_bool; // 0x19ff MovT
	func_10606(); // 0x1a00 NEW_2
	
Label_6658:
	var_185_int = 14857; // 0x1a02 PushI
	var_186_bool = var_75_int == var_185_int; // 0x1a03 Eq
	if(var_186_bool == 0) goto Label_6676; // 0x1a04 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x1a05 PushV
	var_187_object = var_1_object; // 0x1a06 MovT
	var_188_object = var_0_bool; // 0x1a07 MovT
	func_10941(); // 0x1a08 NEW_2
	var_189_object = Obj(); var_190_object = Obj(); // 0x1a0a PushV
	var_189_object = var_1_object; // 0x1a0b MovT
	var_190_object = var_0_bool; // 0x1a0c MovT
	func_11078(); // 0x1a0d NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x1a0f PushV
	var_191_object = var_1_object; // 0x1a10 MovT
	var_192_object = var_0_bool; // 0x1a11 MovT
	func_10606(); // 0x1a12 NEW_2
	
Label_6676:
	var_193_int = 14858; // 0x1a14 PushI
	var_194_bool = var_75_int == var_193_int; // 0x1a15 Eq
	if(var_194_bool == 0) goto Label_6694; // 0x1a16 JumpB
	var_195_object = Obj(); var_196_object = Obj(); // 0x1a17 PushV
	var_195_object = var_1_object; // 0x1a18 MovT
	var_196_object = var_0_bool; // 0x1a19 MovT
	func_10941(); // 0x1a1a NEW_2
	var_197_object = Obj(); var_198_object = Obj(); // 0x1a1c PushV
	var_197_object = var_1_object; // 0x1a1d MovT
	var_198_object = var_0_bool; // 0x1a1e MovT
	func_11078(); // 0x1a1f NEW_2
	var_199_object = Obj(); var_200_object = Obj(); // 0x1a21 PushV
	var_199_object = var_1_object; // 0x1a22 MovT
	var_200_object = var_0_bool; // 0x1a23 MovT
	func_10606(); // 0x1a24 NEW_2
	
Label_6694:
	var_201_int = 14839; // 0x1a26 PushI
	var_202_bool = var_75_int == var_201_int; // 0x1a27 Eq
	if(var_202_bool == 0) goto Label_6702; // 0x1a28 JumpB
	var_203_object = Obj(); var_204_object = Obj(); // 0x1a29 PushV
	var_203_object = var_1_object; // 0x1a2a MovT
	var_204_object = var_0_bool; // 0x1a2b MovT
	func_10947(); // 0x1a2c NEW_2
	
Label_6702:
	var_207_int = 40671; // 0x1a2e PushI
	var_208_bool = var_75_int == var_207_int; // 0x1a2f Eq
	if(var_208_bool == 0) goto Label_6720; // 0x1a30 JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0x1a31 PushV
	var_209_object = var_1_object; // 0x1a32 MovT
	var_210_object = var_0_bool; // 0x1a33 MovT
	func_10953(); // 0x1a34 NEW_2
	var_238_object = Obj(); var_239_object = Obj(); // 0x1a36 PushV
	var_238_object = var_1_object; // 0x1a37 MovT
	var_239_object = var_0_bool; // 0x1a38 MovT
	func_10528(); // 0x1a39 NEW_2
	var_248_object = Obj(); var_249_object = Obj(); // 0x1a3b PushV
	var_248_object = var_1_object; // 0x1a3c MovT
	var_249_object = var_0_bool; // 0x1a3d MovT
	func_10402(); // 0x1a3e NEW_2
	
Label_6720:
	var_255_int = 40672; // 0x1a40 PushI
	var_256_bool = var_75_int == var_255_int; // 0x1a41 Eq
	if(var_256_bool == 0) goto Label_6738; // 0x1a42 JumpB
	var_257_object = Obj(); var_258_object = Obj(); // 0x1a43 PushV
	var_257_object = var_1_object; // 0x1a44 MovT
	var_258_object = var_0_bool; // 0x1a45 MovT
	func_10953(); // 0x1a46 NEW_2
	var_259_object = Obj(); var_260_object = Obj(); // 0x1a48 PushV
	var_259_object = var_1_object; // 0x1a49 MovT
	var_260_object = var_0_bool; // 0x1a4a MovT
	func_10528(); // 0x1a4b NEW_2
	var_261_object = Obj(); var_262_object = Obj(); // 0x1a4d PushV
	var_261_object = var_1_object; // 0x1a4e MovT
	var_262_object = var_0_bool; // 0x1a4f MovT
	func_10402(); // 0x1a50 NEW_2
	
Label_6738:
	var_263_int = 40667; // 0x1a52 PushI
	var_264_bool = var_75_int == var_263_int; // 0x1a53 Eq
	if(var_264_bool == 0) goto Label_6756; // 0x1a54 JumpB
	var_265_object = Obj(); var_266_object = Obj(); // 0x1a55 PushV
	var_265_object = var_1_object; // 0x1a56 MovT
	var_266_object = var_0_bool; // 0x1a57 MovT
	func_10953(); // 0x1a58 NEW_2
	var_267_object = Obj(); var_268_object = Obj(); // 0x1a5a PushV
	var_267_object = var_1_object; // 0x1a5b MovT
	var_268_object = var_0_bool; // 0x1a5c MovT
	func_10528(); // 0x1a5d NEW_2
	var_269_object = Obj(); var_270_object = Obj(); // 0x1a5f PushV
	var_269_object = var_1_object; // 0x1a60 MovT
	var_270_object = var_0_bool; // 0x1a61 MovT
	func_10402(); // 0x1a62 NEW_2
	
Label_6756:
	var_271_int = 14862; // 0x1a64 PushI
	var_272_bool = var_75_int == var_271_int; // 0x1a65 Eq
	if(var_272_bool == 0) goto Label_6764; // 0x1a66 JumpB
	var_273_object = Obj(); var_274_object = Obj(); // 0x1a67 PushV
	var_273_object = var_1_object; // 0x1a68 MovT
	var_274_object = var_0_bool; // 0x1a69 MovT
	func_10990(); // 0x1a6a NEW_2
	
Label_6764:
	var_277_int = 14894; // 0x1a6c PushI
	var_278_bool = var_75_int == var_277_int; // 0x1a6d Eq
	if(var_278_bool == 0) goto Label_6772; // 0x1a6e JumpB
	var_279_object = Obj(); var_280_object = Obj(); // 0x1a6f PushV
	var_279_object = var_1_object; // 0x1a70 MovT
	var_280_object = var_0_bool; // 0x1a71 MovT
	func_10996(); // 0x1a72 NEW_2
	
Label_6772:
	var_283_int = 14873; // 0x1a74 PushI
	var_284_bool = var_75_int == var_283_int; // 0x1a75 Eq
	if(var_284_bool == 0) goto Label_6780; // 0x1a76 JumpB
	var_285_object = Obj(); var_286_object = Obj(); // 0x1a77 PushV
	var_285_object = var_1_object; // 0x1a78 MovT
	var_286_object = var_0_bool; // 0x1a79 MovT
	func_11008(); // 0x1a7a NEW_2
	
Label_6780:
	var_289_int = 14867; // 0x1a7c PushI
	var_290_bool = var_75_int == var_289_int; // 0x1a7d Eq
	if(var_290_bool == 0) goto Label_6788; // 0x1a7e JumpB
	var_291_object = Obj(); var_292_object = Obj(); // 0x1a7f PushV
	var_291_object = var_1_object; // 0x1a80 MovT
	var_292_object = var_0_bool; // 0x1a81 MovT
	func_11002(); // 0x1a82 NEW_2
	
Label_6788:
	var_295_int = 22141; // 0x1a84 PushI
	var_296_bool = var_75_int == var_295_int; // 0x1a85 Eq
	if(var_296_bool == 0) goto Label_6806; // 0x1a86 JumpB
	var_297_object = Obj(); var_298_object = Obj(); // 0x1a87 PushV
	var_297_object = var_1_object; // 0x1a88 MovT
	var_298_object = var_0_bool; // 0x1a89 MovT
	func_10328(); // 0x1a8a NEW_2
	var_310_object = Obj(); var_311_object = Obj(); // 0x1a8c PushV
	var_310_object = var_1_object; // 0x1a8d MovT
	var_311_object = var_0_bool; // 0x1a8e MovT
	func_10339(var_311_object); // 0x1a8f NEW_2
	var_330_object = Obj(); var_331_object = Obj(); // 0x1a91 PushV
	var_330_object = var_1_object; // 0x1a92 MovT
	var_331_object = var_0_bool; // 0x1a93 MovT
	func_10600(); // 0x1a94 NEW_2
	
Label_6806:
	var_334_int = 34843; // 0x1a96 PushI
	var_335_bool = var_75_int == var_334_int; // 0x1a97 Eq
	if(var_335_bool == 0) goto Label_6819; // 0x1a98 JumpB
	var_336_object = Obj(); var_337_object = Obj(); // 0x1a99 PushV
	var_336_object = var_1_object; // 0x1a9a MovT
	var_337_object = var_0_bool; // 0x1a9b MovT
	func_10462(); // 0x1a9c NEW_2
	var_356_object = Obj(); var_357_object = Obj(); // 0x1a9e PushV
	var_356_object = var_1_object; // 0x1a9f MovT
	var_357_object = var_0_bool; // 0x1aa0 MovT
	func_10568(); // 0x1aa1 NEW_2
	
Label_6819:
	var_363_int = 37765; // 0x1aa3 PushI
	var_364_bool = var_75_int == var_363_int; // 0x1aa4 Eq
	if(var_364_bool == 0) goto Label_6832; // 0x1aa5 JumpB
	var_365_object = Obj(); var_366_object = Obj(); // 0x1aa6 PushV
	var_365_object = var_1_object; // 0x1aa7 MovT
	var_366_object = var_0_bool; // 0x1aa8 MovT
	func_10462(); // 0x1aa9 NEW_2
	var_367_object = Obj(); var_368_object = Obj(); // 0x1aab PushV
	var_367_object = var_1_object; // 0x1aac MovT
	var_368_object = var_0_bool; // 0x1aad MovT
	func_10568(); // 0x1aae NEW_2
	
Label_6832:
	var_369_int = 34828; // 0x1ab0 PushI
	var_370_bool = var_74_float == var_369_int; // 0x1ab1 Eq
	if(var_370_bool == 0) goto Label_7050; // 0x1ab2 JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x1ab3 PushV
	var_372_object = var_1_object; // 0x1ab4 MovT
	func_11181(var_372_object); // 0x1ab5 NEW_2
	if(var_371_bool == 0) goto Label_6870; // 0x1ab7 JumpB
	var_377_object = Obj(); var_378_object = Obj(); // 0x1ab8 PushV
	var_377_object = var_1_object; // 0x1ab9 MovT
	var_378_object = var_0_bool; // 0x1aba MovT
	func_10456(); // 0x1abb NEW_2
	var_381_object = Obj(); var_382_object = Obj(); // 0x1abd PushV
	var_381_object = var_1_object; // 0x1abe MovT
	var_382_object = var_0_bool; // 0x1abf MovT
	func_10485(); // 0x1ac0 NEW_2
	var_385_string = ""; // 0x1ac2 PushV
	var_385_string = "Sly"; // 0x1ac3 MovS
	func_6596(var_75_int, var_385_string); // 0x1ac4 NEW_2
	var_402_int = 533324; // 0x1ac6 PushI
	SetMessage(var_402_int); // 0x1ac7 TObjFunc
	ClearReplies(); // 0x1ac9 TObjFunc
	var_403_int = 535993; // 0x1acb PushI
	var_404_int = 37724; // 0x1acc PushI
	var_405_int = 37723; // 0x1acd PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x1ace TObjFunc
	var_406_int = 536001; // 0x1ad0 PushI
	var_407_int = 37724; // 0x1ad1 PushI
	var_408_int = 37731; // 0x1ad2 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x1ad3 TObjFunc
	return 0; // 0x1ad5 Return
	
Label_6870:
	var_409_string = ""; // 0x1ad6 PushV
	var_409_string = "Neutral"; // 0x1ad7 MovS
	func_6596(var_75_int, var_409_string); // 0x1ad8 NEW_2
	var_410_int = 512410; // 0x1ada PushI
	SetMessage(var_410_int); // 0x1adb TObjFunc
	ClearReplies(); // 0x1add TObjFunc
	var_411_bool = 0; // 0x1adf PushV
	var_411_bool = 0; // 0x1ae0 MovB
	var_412_bool = 0; // 0x1ae1 PushV
	var_412_bool = 0; // 0x1ae2 MovB
	var_413_bool = 0; var_414_object = Obj(); // 0x1ae3 PushV
	var_414_object = var_1_object; // 0x1ae4 MovT
	func_11517(var_414_object); // 0x1ae5 NEW_2
	if(var_413_bool == 0) goto Label_6894; // 0x1ae7 JumpB
	var_419_bool = 0; var_420_object = Obj(); // 0x1ae8 PushV
	var_420_object = var_1_object; // 0x1ae9 MovT
	func_11541(var_420_object); // 0x1aea NEW_2
	if(var_419_bool == 0) goto Label_6894; // 0x1aec JumpB
	var_412_bool = 1; // 0x1aed MovB
	
Label_6894:
	if(var_412_bool == 0) goto Label_6902; // 0x1aee JumpB
	var_425_bool = 0; var_426_object = Obj(); // 0x1aef PushV
	var_426_object = var_1_object; // 0x1af0 MovT
	func_11529(var_426_object); // 0x1af1 NEW_2
	var_431_bool = var_425_bool == 0; // 0x1af3 Not
	if(var_431_bool == 0) goto Label_6902; // 0x1af4 JumpB
	var_411_bool = 1; // 0x1af5 MovB
	
Label_6902:
	if(var_411_bool == 0) goto Label_6908; // 0x1af6 JumpB
	var_432_int = 512412; // 0x1af7 PushI
	var_433_int = 13577; // 0x1af8 PushI
	var_434_int = 13576; // 0x1af9 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x1afa TObjFunc
	
Label_6908:
	var_435_bool = 0; // 0x1afc PushV
	var_435_bool = 0; // 0x1afd MovB
	var_436_bool = 0; var_437_object = Obj(); // 0x1afe PushV
	var_437_object = var_1_object; // 0x1aff MovT
	func_11529(var_437_object); // 0x1b00 NEW_2
	if(var_436_bool == 0) goto Label_6921; // 0x1b02 JumpB
	var_438_bool = 0; var_439_object = Obj(); // 0x1b03 PushV
	var_439_object = var_1_object; // 0x1b04 MovT
	func_11553(var_439_object); // 0x1b05 NEW_2
	if(var_438_bool == 0) goto Label_6921; // 0x1b07 JumpB
	var_435_bool = 1; // 0x1b08 MovB
	
Label_6921:
	if(var_435_bool == 0) goto Label_6927; // 0x1b09 JumpB
	var_444_int = 513588; // 0x1b0a PushI
	var_445_int = 14840; // 0x1b0b PushI
	var_446_int = 14839; // 0x1b0c PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x1b0d TObjFunc
	
Label_6927:
	var_447_bool = 0; // 0x1b0f PushV
	var_447_bool = 0; // 0x1b10 MovB
	var_448_bool = 0; // 0x1b11 PushV
	var_448_bool = 0; // 0x1b12 MovB
	var_449_bool = 0; // 0x1b13 PushV
	var_449_bool = 0; // 0x1b14 MovB
	var_450_bool = 0; var_451_object = Obj(); // 0x1b15 PushV
	var_451_object = var_1_object; // 0x1b16 MovT
	func_11565(var_451_object); // 0x1b17 NEW_2
	if(var_450_bool == 0) goto Label_6944; // 0x1b19 JumpB
	var_456_bool = 0; var_457_object = Obj(); // 0x1b1a PushV
	var_457_object = var_1_object; // 0x1b1b MovT
	func_11529(var_457_object); // 0x1b1c NEW_2
	if(var_456_bool == 0) goto Label_6944; // 0x1b1e JumpB
	var_449_bool = 1; // 0x1b1f MovB
	
Label_6944:
	if(var_449_bool == 0) goto Label_6951; // 0x1b20 JumpB
	var_458_bool = 0; var_459_object = Obj(); // 0x1b21 PushV
	var_459_object = var_1_object; // 0x1b22 MovT
	func_11577(var_459_object); // 0x1b23 NEW_2
	if(var_458_bool == 0) goto Label_6951; // 0x1b25 JumpB
	var_448_bool = 1; // 0x1b26 MovB
	
Label_6951:
	if(var_448_bool == 0) goto Label_6959; // 0x1b27 JumpB
	var_464_bool = 0; var_465_object = Obj(); // 0x1b28 PushV
	var_465_object = var_1_object; // 0x1b29 MovT
	func_11613(var_465_object); // 0x1b2a NEW_2
	var_470_bool = var_464_bool == 0; // 0x1b2c Not
	if(var_470_bool == 0) goto Label_6959; // 0x1b2d JumpB
	var_447_bool = 1; // 0x1b2e MovB
	
Label_6959:
	if(var_447_bool == 0) goto Label_6965; // 0x1b2f JumpB
	var_471_int = 513607; // 0x1b30 PushI
	var_472_int = 14868; // 0x1b31 PushI
	var_473_int = 14862; // 0x1b32 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x1b33 TObjFunc
	
Label_6965:
	var_474_bool = 0; // 0x1b35 PushV
	var_474_bool = 0; // 0x1b36 MovB
	var_475_bool = 0; // 0x1b37 PushV
	var_475_bool = 0; // 0x1b38 MovB
	var_476_bool = 0; var_477_object = Obj(); // 0x1b39 PushV
	var_477_object = var_1_object; // 0x1b3a MovT
	func_11565(var_477_object); // 0x1b3b NEW_2
	if(var_476_bool == 0) goto Label_6980; // 0x1b3d JumpB
	var_478_bool = 0; var_479_object = Obj(); // 0x1b3e PushV
	var_479_object = var_1_object; // 0x1b3f MovT
	func_11601(var_479_object); // 0x1b40 NEW_2
	if(var_478_bool == 0) goto Label_6980; // 0x1b42 JumpB
	var_475_bool = 1; // 0x1b43 MovB
	
Label_6980:
	if(var_475_bool == 0) goto Label_6988; // 0x1b44 JumpB
	var_484_bool = 0; var_485_object = Obj(); // 0x1b45 PushV
	var_485_object = var_1_object; // 0x1b46 MovT
	func_11625(var_485_object); // 0x1b47 NEW_2
	var_490_bool = var_484_bool == 0; // 0x1b49 Not
	if(var_490_bool == 0) goto Label_6988; // 0x1b4a JumpB
	var_474_bool = 1; // 0x1b4b MovB
	
Label_6988:
	if(var_474_bool == 0) goto Label_6994; // 0x1b4c JumpB
	var_491_int = 513618; // 0x1b4d PushI
	var_492_int = 14874; // 0x1b4e PushI
	var_493_int = 14873; // 0x1b4f PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x1b50 TObjFunc
	
Label_6994:
	var_494_bool = 0; // 0x1b52 PushV
	var_494_bool = 0; // 0x1b53 MovB
	var_495_bool = 0; // 0x1b54 PushV
	var_495_bool = 0; // 0x1b55 MovB
	var_496_bool = 0; var_497_object = Obj(); // 0x1b56 PushV
	var_497_object = var_1_object; // 0x1b57 MovT
	func_11529(var_497_object); // 0x1b58 NEW_2
	var_498_bool = var_496_bool == 0; // 0x1b5a Not
	if(var_498_bool == 0) goto Label_7010; // 0x1b5b JumpB
	var_499_bool = 0; var_500_object = Obj(); // 0x1b5c PushV
	var_500_object = var_1_object; // 0x1b5d MovT
	func_11517(var_500_object); // 0x1b5e NEW_2
	if(var_499_bool == 0) goto Label_7010; // 0x1b60 JumpB
	var_495_bool = 1; // 0x1b61 MovB
	
Label_7010:
	if(var_495_bool == 0) goto Label_7017; // 0x1b62 JumpB
	var_501_bool = 0; var_502_object = Obj(); // 0x1b63 PushV
	var_502_object = var_1_object; // 0x1b64 MovT
	func_11589(var_502_object); // 0x1b65 NEW_2
	if(var_501_bool == 0) goto Label_7017; // 0x1b67 JumpB
	var_494_bool = 1; // 0x1b68 MovB
	
Label_7017:
	if(var_494_bool == 0) goto Label_7023; // 0x1b69 JumpB
	var_507_int = 513612; // 0x1b6a PushI
	var_508_int = 14863; // 0x1b6b PushI
	var_509_int = 14867; // 0x1b6c PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x1b6d TObjFunc
	
Label_7023:
	var_510_bool = 0; var_511_object = Obj(); // 0x1b6f PushV
	var_511_object = var_1_object; // 0x1b70 MovT
	func_11671(var_510_bool, var_511_object); // 0x1b71 NEW_2
	var_522_bool = var_510_bool == 0; // 0x1b73 Not
	if(var_522_bool == 0) goto Label_7034; // 0x1b74 JumpB
	var_523_int = 520922; // 0x1b75 PushI
	var_524_int = 22140; // 0x1b76 PushI
	var_525_int = 22139; // 0x1b77 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x1b78 TObjFunc
	
Label_7034:
	var_526_bool = 0; var_527_object = Obj(); // 0x1b7a PushV
	var_527_object = var_1_object; // 0x1b7b MovT
	func_11193(var_527_object); // 0x1b7c NEW_2
	if(var_526_bool == 0) goto Label_7044; // 0x1b7e JumpB
	var_532_int = 533337; // 0x1b7f PushI
	var_533_int = 37749; // 0x1b80 PushI
	var_534_int = 34841; // 0x1b81 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x1b82 TObjFunc
	
Label_7044:
	var_535_int = 512411; // 0x1b84 PushI
	var_536_int = -1; // 0x1b85 PushI
	var_537_int = 13575; // 0x1b86 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x1b87 TObjFunc
	return 0; // 0x1b89 Return
	
Label_7050:
	var_538_int = 37749; // 0x1b8a PushI
	var_539_bool = var_74_float == var_538_int; // 0x1b8b Eq
	if(var_539_bool == 0) goto Label_7073; // 0x1b8c JumpB
	var_540_string = ""; // 0x1b8d PushV
	var_540_string = "Neutral"; // 0x1b8e MovS
	func_6596(var_75_int, var_540_string); // 0x1b8f NEW_2
	var_541_int = 536015; // 0x1b91 PushI
	SetMessage(var_541_int); // 0x1b92 TObjFunc
	ClearReplies(); // 0x1b94 TObjFunc
	var_542_int = 536016; // 0x1b96 PushI
	var_543_int = 37751; // 0x1b97 PushI
	var_544_int = 37750; // 0x1b98 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x1b99 TObjFunc
	var_545_int = 536021; // 0x1b9b PushI
	var_546_int = 37751; // 0x1b9c PushI
	var_547_int = 37755; // 0x1b9d PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x1b9e TObjFunc
	return 0; // 0x1ba0 Return
	
Label_7073:
	var_548_int = 37751; // 0x1ba1 PushI
	var_549_bool = var_74_float == var_548_int; // 0x1ba2 Eq
	if(var_549_bool == 0) goto Label_7091; // 0x1ba3 JumpB
	var_550_string = ""; // 0x1ba4 PushV
	var_550_string = "Sly"; // 0x1ba5 MovS
	func_6596(var_75_int, var_550_string); // 0x1ba6 NEW_2
	var_551_int = 536017; // 0x1ba8 PushI
	SetMessage(var_551_int); // 0x1ba9 TObjFunc
	ClearReplies(); // 0x1bab TObjFunc
	var_552_int = 536018; // 0x1bad PushI
	var_553_int = 37753; // 0x1bae PushI
	var_554_int = 37752; // 0x1baf PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x1bb0 TObjFunc
	return 0; // 0x1bb2 Return
	
Label_7091:
	var_555_int = 37753; // 0x1bb3 PushI
	var_556_bool = var_74_float == var_555_int; // 0x1bb4 Eq
	if(var_556_bool == 0) goto Label_7114; // 0x1bb5 JumpB
	var_557_string = ""; // 0x1bb6 PushV
	var_557_string = "Untrust"; // 0x1bb7 MovS
	func_6596(var_75_int, var_557_string); // 0x1bb8 NEW_2
	var_558_int = 536019; // 0x1bba PushI
	SetMessage(var_558_int); // 0x1bbb TObjFunc
	ClearReplies(); // 0x1bbd TObjFunc
	var_559_int = 536020; // 0x1bbf PushI
	var_560_int = 34842; // 0x1bc0 PushI
	var_561_int = 37754; // 0x1bc1 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x1bc2 TObjFunc
	var_562_int = 536024; // 0x1bc4 PushI
	var_563_int = 37760; // 0x1bc5 PushI
	var_564_int = 37759; // 0x1bc6 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x1bc7 TObjFunc
	return 0; // 0x1bc9 Return
	
Label_7114:
	var_565_int = 37760; // 0x1bca PushI
	var_566_bool = var_74_float == var_565_int; // 0x1bcb Eq
	if(var_566_bool == 0) goto Label_7137; // 0x1bcc JumpB
	var_567_string = ""; // 0x1bcd PushV
	var_567_string = "Neutral"; // 0x1bce MovS
	func_6596(var_75_int, var_567_string); // 0x1bcf NEW_2
	var_568_int = 536025; // 0x1bd1 PushI
	SetMessage(var_568_int); // 0x1bd2 TObjFunc
	ClearReplies(); // 0x1bd4 TObjFunc
	var_569_int = 536026; // 0x1bd6 PushI
	var_570_int = 37758; // 0x1bd7 PushI
	var_571_int = 37761; // 0x1bd8 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x1bd9 TObjFunc
	var_572_int = 536027; // 0x1bdb PushI
	var_573_int = 34842; // 0x1bdc PushI
	var_574_int = 37763; // 0x1bdd PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x1bde TObjFunc
	return 0; // 0x1be0 Return
	
Label_7137:
	var_575_int = 34842; // 0x1be1 PushI
	var_576_bool = var_74_float == var_575_int; // 0x1be2 Eq
	if(var_576_bool == 0) goto Label_7160; // 0x1be3 JumpB
	var_577_string = ""; // 0x1be4 PushV
	var_577_string = "Neutral"; // 0x1be5 MovS
	func_6596(var_75_int, var_577_string); // 0x1be6 NEW_2
	var_578_int = 533338; // 0x1be8 PushI
	SetMessage(var_578_int); // 0x1be9 TObjFunc
	ClearReplies(); // 0x1beb TObjFunc
	var_579_int = 536022; // 0x1bed PushI
	var_580_int = 37758; // 0x1bee PushI
	var_581_int = 37757; // 0x1bef PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x1bf0 TObjFunc
	var_582_int = 536028; // 0x1bf2 PushI
	var_583_int = -1; // 0x1bf3 PushI
	var_584_int = 37765; // 0x1bf4 PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x1bf5 TObjFunc
	return 0; // 0x1bf7 Return
	
Label_7160:
	var_585_int = 37758; // 0x1bf8 PushI
	var_586_bool = var_74_float == var_585_int; // 0x1bf9 Eq
	if(var_586_bool == 0) goto Label_7178; // 0x1bfa JumpB
	var_587_string = ""; // 0x1bfb PushV
	var_587_string = "Neutral"; // 0x1bfc MovS
	func_6596(var_75_int, var_587_string); // 0x1bfd NEW_2
	var_588_int = 536023; // 0x1bff PushI
	SetMessage(var_588_int); // 0x1c00 TObjFunc
	ClearReplies(); // 0x1c02 TObjFunc
	var_589_int = 533339; // 0x1c04 PushI
	var_590_int = -1; // 0x1c05 PushI
	var_591_int = 34843; // 0x1c06 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x1c07 TObjFunc
	return 0; // 0x1c09 Return
	
Label_7178:
	var_592_int = 22140; // 0x1c0a PushI
	var_593_bool = var_74_float == var_592_int; // 0x1c0b Eq
	if(var_593_bool == 0) goto Label_7206; // 0x1c0c JumpB
	var_594_string = ""; // 0x1c0d PushV
	var_594_string = "Neutral"; // 0x1c0e MovS
	func_6596(var_75_int, var_594_string); // 0x1c0f NEW_2
	var_595_int = 520923; // 0x1c11 PushI
	SetMessage(var_595_int); // 0x1c12 TObjFunc
	ClearReplies(); // 0x1c14 TObjFunc
	var_596_bool = 0; var_597_object = Obj(); // 0x1c16 PushV
	var_597_object = var_1_object; // 0x1c17 MovT
	func_11681(var_596_bool, var_597_object); // 0x1c18 NEW_2
	if(var_596_bool == 0) goto Label_7200; // 0x1c1a JumpB
	var_604_int = 520924; // 0x1c1b PushI
	var_605_int = -1; // 0x1c1c PushI
	var_606_int = 22141; // 0x1c1d PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x1c1e TObjFunc
	
Label_7200:
	var_607_int = 520925; // 0x1c20 PushI
	var_608_int = -1; // 0x1c21 PushI
	var_609_int = 22142; // 0x1c22 PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x1c23 TObjFunc
	return 0; // 0x1c25 Return
	
Label_7206:
	var_610_int = 14863; // 0x1c26 PushI
	var_611_bool = var_74_float == var_610_int; // 0x1c27 Eq
	if(var_611_bool == 0) goto Label_7224; // 0x1c28 JumpB
	var_612_string = ""; // 0x1c29 PushV
	var_612_string = "Neutral"; // 0x1c2a MovS
	func_6596(var_75_int, var_612_string); // 0x1c2b NEW_2
	var_613_int = 513608; // 0x1c2d PushI
	SetMessage(var_613_int); // 0x1c2e TObjFunc
	ClearReplies(); // 0x1c30 TObjFunc
	var_614_int = 513609; // 0x1c32 PushI
	var_615_int = 14865; // 0x1c33 PushI
	var_616_int = 14864; // 0x1c34 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x1c35 TObjFunc
	return 0; // 0x1c37 Return
	
Label_7224:
	var_617_int = 14865; // 0x1c38 PushI
	var_618_bool = var_74_float == var_617_int; // 0x1c39 Eq
	if(var_618_bool == 0) goto Label_7242; // 0x1c3a JumpB
	var_619_string = ""; // 0x1c3b PushV
	var_619_string = "Neutral"; // 0x1c3c MovS
	func_6596(var_75_int, var_619_string); // 0x1c3d NEW_2
	var_620_int = 513610; // 0x1c3f PushI
	SetMessage(var_620_int); // 0x1c40 TObjFunc
	ClearReplies(); // 0x1c42 TObjFunc
	var_621_int = 513611; // 0x1c44 PushI
	var_622_int = 14869; // 0x1c45 PushI
	var_623_int = 14866; // 0x1c46 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x1c47 TObjFunc
	return 0; // 0x1c49 Return
	
Label_7242:
	var_624_int = 14869; // 0x1c4a PushI
	var_625_bool = var_74_float == var_624_int; // 0x1c4b Eq
	if(var_625_bool == 0) goto Label_7260; // 0x1c4c JumpB
	var_626_string = ""; // 0x1c4d PushV
	var_626_string = "Untrust"; // 0x1c4e MovS
	func_6596(var_75_int, var_626_string); // 0x1c4f NEW_2
	var_627_int = 513614; // 0x1c51 PushI
	SetMessage(var_627_int); // 0x1c52 TObjFunc
	ClearReplies(); // 0x1c54 TObjFunc
	var_628_int = 513615; // 0x1c56 PushI
	var_629_int = 14871; // 0x1c57 PushI
	var_630_int = 14870; // 0x1c58 PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x1c59 TObjFunc
	return 0; // 0x1c5b Return
	
Label_7260:
	var_631_int = 14871; // 0x1c5c PushI
	var_632_bool = var_74_float == var_631_int; // 0x1c5d Eq
	if(var_632_bool == 0) goto Label_7278; // 0x1c5e JumpB
	var_633_string = ""; // 0x1c5f PushV
	var_633_string = "Untrust"; // 0x1c60 MovS
	func_6596(var_75_int, var_633_string); // 0x1c61 NEW_2
	var_634_int = 513616; // 0x1c63 PushI
	SetMessage(var_634_int); // 0x1c64 TObjFunc
	ClearReplies(); // 0x1c66 TObjFunc
	var_635_int = 513617; // 0x1c68 PushI
	var_636_int = -1; // 0x1c69 PushI
	var_637_int = 14872; // 0x1c6a PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x1c6b TObjFunc
	return 0; // 0x1c6d Return
	
Label_7278:
	var_638_int = 14874; // 0x1c6e PushI
	var_639_bool = var_74_float == var_638_int; // 0x1c6f Eq
	if(var_639_bool == 0) goto Label_7296; // 0x1c70 JumpB
	var_640_string = ""; // 0x1c71 PushV
	var_640_string = "Neutral"; // 0x1c72 MovS
	func_6596(var_75_int, var_640_string); // 0x1c73 NEW_2
	var_641_int = 513619; // 0x1c75 PushI
	SetMessage(var_641_int); // 0x1c76 TObjFunc
	ClearReplies(); // 0x1c78 TObjFunc
	var_642_int = 513620; // 0x1c7a PushI
	var_643_int = 14876; // 0x1c7b PushI
	var_644_int = 14875; // 0x1c7c PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x1c7d TObjFunc
	return 0; // 0x1c7f Return
	
Label_7296:
	var_645_int = 14876; // 0x1c80 PushI
	var_646_bool = var_74_float == var_645_int; // 0x1c81 Eq
	if(var_646_bool == 0) goto Label_7319; // 0x1c82 JumpB
	var_647_string = ""; // 0x1c83 PushV
	var_647_string = "Untrust"; // 0x1c84 MovS
	func_6596(var_75_int, var_647_string); // 0x1c85 NEW_2
	var_648_int = 513621; // 0x1c87 PushI
	SetMessage(var_648_int); // 0x1c88 TObjFunc
	ClearReplies(); // 0x1c8a TObjFunc
	var_649_int = 513623; // 0x1c8c PushI
	var_650_int = 14879; // 0x1c8d PushI
	var_651_int = 14878; // 0x1c8e PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x1c8f TObjFunc
	var_652_int = 513622; // 0x1c91 PushI
	var_653_int = -1; // 0x1c92 PushI
	var_654_int = 14877; // 0x1c93 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x1c94 TObjFunc
	return 0; // 0x1c96 Return
	
Label_7319:
	var_655_int = 14879; // 0x1c97 PushI
	var_656_bool = var_74_float == var_655_int; // 0x1c98 Eq
	if(var_656_bool == 0) goto Label_7342; // 0x1c99 JumpB
	var_657_string = ""; // 0x1c9a PushV
	var_657_string = "Rage"; // 0x1c9b MovS
	func_6596(var_75_int, var_657_string); // 0x1c9c NEW_2
	var_658_int = 513624; // 0x1c9e PushI
	SetMessage(var_658_int); // 0x1c9f TObjFunc
	ClearReplies(); // 0x1ca1 TObjFunc
	var_659_int = 513626; // 0x1ca3 PushI
	var_660_int = 14882; // 0x1ca4 PushI
	var_661_int = 14881; // 0x1ca5 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x1ca6 TObjFunc
	var_662_int = 513625; // 0x1ca8 PushI
	var_663_int = -1; // 0x1ca9 PushI
	var_664_int = 14880; // 0x1caa PushI
	AddReply(var_662_int, var_663_int, var_664_int); // 0x1cab TObjFunc
	return 0; // 0x1cad Return
	
Label_7342:
	var_665_int = 14882; // 0x1cae PushI
	var_666_bool = var_74_float == var_665_int; // 0x1caf Eq
	if(var_666_bool == 0) goto Label_7360; // 0x1cb0 JumpB
	var_667_string = ""; // 0x1cb1 PushV
	var_667_string = "Neutral"; // 0x1cb2 MovS
	func_6596(var_75_int, var_667_string); // 0x1cb3 NEW_2
	var_668_int = 513627; // 0x1cb5 PushI
	SetMessage(var_668_int); // 0x1cb6 TObjFunc
	ClearReplies(); // 0x1cb8 TObjFunc
	var_669_int = 513628; // 0x1cba PushI
	var_670_int = -1; // 0x1cbb PushI
	var_671_int = 14883; // 0x1cbc PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x1cbd TObjFunc
	return 0; // 0x1cbf Return
	
Label_7360:
	var_672_int = 14868; // 0x1cc0 PushI
	var_673_bool = var_74_float == var_672_int; // 0x1cc1 Eq
	if(var_673_bool == 0) goto Label_7378; // 0x1cc2 JumpB
	var_674_string = ""; // 0x1cc3 PushV
	var_674_string = "Untrust"; // 0x1cc4 MovS
	func_6596(var_75_int, var_674_string); // 0x1cc5 NEW_2
	var_675_int = 513613; // 0x1cc7 PushI
	SetMessage(var_675_int); // 0x1cc8 TObjFunc
	ClearReplies(); // 0x1cca TObjFunc
	var_676_int = 513629; // 0x1ccc PushI
	var_677_int = 14885; // 0x1ccd PushI
	var_678_int = 14884; // 0x1cce PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x1ccf TObjFunc
	return 0; // 0x1cd1 Return
	
Label_7378:
	var_679_int = 14885; // 0x1cd2 PushI
	var_680_bool = var_74_float == var_679_int; // 0x1cd3 Eq
	if(var_680_bool == 0) goto Label_7401; // 0x1cd4 JumpB
	var_681_string = ""; // 0x1cd5 PushV
	var_681_string = "Rage"; // 0x1cd6 MovS
	func_6596(var_75_int, var_681_string); // 0x1cd7 NEW_2
	var_682_int = 513630; // 0x1cd9 PushI
	SetMessage(var_682_int); // 0x1cda TObjFunc
	ClearReplies(); // 0x1cdc TObjFunc
	var_683_int = 513631; // 0x1cde PushI
	var_684_int = 14889; // 0x1cdf PushI
	var_685_int = 14886; // 0x1ce0 PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x1ce1 TObjFunc
	var_686_int = 513632; // 0x1ce3 PushI
	var_687_int = 14888; // 0x1ce4 PushI
	var_688_int = 14887; // 0x1ce5 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x1ce6 TObjFunc
	return 0; // 0x1ce8 Return
	
Label_7401:
	var_689_int = 14888; // 0x1ce9 PushI
	var_690_bool = var_74_float == var_689_int; // 0x1cea Eq
	if(var_690_bool == 0) goto Label_7419; // 0x1ceb JumpB
	var_691_string = ""; // 0x1cec PushV
	var_691_string = "Fear"; // 0x1ced MovS
	func_6596(var_75_int, var_691_string); // 0x1cee NEW_2
	var_692_int = 513633; // 0x1cf0 PushI
	SetMessage(var_692_int); // 0x1cf1 TObjFunc
	ClearReplies(); // 0x1cf3 TObjFunc
	var_693_int = 513636; // 0x1cf5 PushI
	var_694_int = 14889; // 0x1cf6 PushI
	var_695_int = 14891; // 0x1cf7 PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x1cf8 TObjFunc
	return 0; // 0x1cfa Return
	
Label_7419:
	var_696_int = 14889; // 0x1cfb PushI
	var_697_bool = var_74_float == var_696_int; // 0x1cfc Eq
	if(var_697_bool == 0) goto Label_7437; // 0x1cfd JumpB
	var_698_string = ""; // 0x1cfe PushV
	var_698_string = "Rage"; // 0x1cff MovS
	func_6596(var_75_int, var_698_string); // 0x1d00 NEW_2
	var_699_int = 513634; // 0x1d02 PushI
	SetMessage(var_699_int); // 0x1d03 TObjFunc
	ClearReplies(); // 0x1d05 TObjFunc
	var_700_int = 513635; // 0x1d07 PushI
	var_701_int = 14893; // 0x1d08 PushI
	var_702_int = 14890; // 0x1d09 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x1d0a TObjFunc
	return 0; // 0x1d0c Return
	
Label_7437:
	var_703_int = 14893; // 0x1d0d PushI
	var_704_bool = var_74_float == var_703_int; // 0x1d0e Eq
	if(var_704_bool == 0) goto Label_7455; // 0x1d0f JumpB
	var_705_string = ""; // 0x1d10 PushV
	var_705_string = "Neutral"; // 0x1d11 MovS
	func_6596(var_75_int, var_705_string); // 0x1d12 NEW_2
	var_706_int = 513637; // 0x1d14 PushI
	SetMessage(var_706_int); // 0x1d15 TObjFunc
	ClearReplies(); // 0x1d17 TObjFunc
	var_707_int = 513638; // 0x1d19 PushI
	var_708_int = -1; // 0x1d1a PushI
	var_709_int = 14894; // 0x1d1b PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0x1d1c TObjFunc
	return 0; // 0x1d1e Return
	
Label_7455:
	var_710_int = 14840; // 0x1d1f PushI
	var_711_bool = var_74_float == var_710_int; // 0x1d20 Eq
	if(var_711_bool == 0) goto Label_7478; // 0x1d21 JumpB
	var_712_string = ""; // 0x1d22 PushV
	var_712_string = "Rage"; // 0x1d23 MovS
	func_6596(var_75_int, var_712_string); // 0x1d24 NEW_2
	var_713_int = 513589; // 0x1d26 PushI
	SetMessage(var_713_int); // 0x1d27 TObjFunc
	ClearReplies(); // 0x1d29 TObjFunc
	var_714_int = 513591; // 0x1d2b PushI
	var_715_int = 14843; // 0x1d2c PushI
	var_716_int = 14842; // 0x1d2d PushI
	AddReply(var_714_int, var_715_int, var_716_int); // 0x1d2e TObjFunc
	var_717_int = 513590; // 0x1d30 PushI
	var_718_int = 14845; // 0x1d31 PushI
	var_719_int = 14841; // 0x1d32 PushI
	AddReply(var_717_int, var_718_int, var_719_int); // 0x1d33 TObjFunc
	return 0; // 0x1d35 Return
	
Label_7478:
	var_720_int = 14845; // 0x1d36 PushI
	var_721_bool = var_74_float == var_720_int; // 0x1d37 Eq
	if(var_721_bool == 0) goto Label_7496; // 0x1d38 JumpB
	var_722_string = ""; // 0x1d39 PushV
	var_722_string = "Neutral"; // 0x1d3a MovS
	func_6596(var_75_int, var_722_string); // 0x1d3b NEW_2
	var_723_int = 513594; // 0x1d3d PushI
	SetMessage(var_723_int); // 0x1d3e TObjFunc
	ClearReplies(); // 0x1d40 TObjFunc
	var_724_int = 513595; // 0x1d42 PushI
	var_725_int = 14847; // 0x1d43 PushI
	var_726_int = 14846; // 0x1d44 PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x1d45 TObjFunc
	return 0; // 0x1d47 Return
	
Label_7496:
	var_727_int = 14847; // 0x1d48 PushI
	var_728_bool = var_74_float == var_727_int; // 0x1d49 Eq
	if(var_728_bool == 0) goto Label_7514; // 0x1d4a JumpB
	var_729_string = ""; // 0x1d4b PushV
	var_729_string = "Neutral"; // 0x1d4c MovS
	func_6596(var_75_int, var_729_string); // 0x1d4d NEW_2
	var_730_int = 513596; // 0x1d4f PushI
	SetMessage(var_730_int); // 0x1d50 TObjFunc
	ClearReplies(); // 0x1d52 TObjFunc
	var_731_int = 513597; // 0x1d54 PushI
	var_732_int = 14843; // 0x1d55 PushI
	var_733_int = 14848; // 0x1d56 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0x1d57 TObjFunc
	return 0; // 0x1d59 Return
	
Label_7514:
	var_734_int = 14843; // 0x1d5a PushI
	var_735_bool = var_74_float == var_734_int; // 0x1d5b Eq
	if(var_735_bool == 0) goto Label_7532; // 0x1d5c JumpB
	var_736_string = ""; // 0x1d5d PushV
	var_736_string = "Rage"; // 0x1d5e MovS
	func_6596(var_75_int, var_736_string); // 0x1d5f NEW_2
	var_737_int = 513592; // 0x1d61 PushI
	SetMessage(var_737_int); // 0x1d62 TObjFunc
	ClearReplies(); // 0x1d64 TObjFunc
	var_738_int = 513598; // 0x1d66 PushI
	var_739_int = 14824; // 0x1d67 PushI
	var_740_int = 14850; // 0x1d68 PushI
	AddReply(var_738_int, var_739_int, var_740_int); // 0x1d69 TObjFunc
	return 0; // 0x1d6b Return
	
Label_7532:
	var_741_int = 13583; // 0x1d6c PushI
	var_742_bool = var_74_float == var_741_int; // 0x1d6d Eq
	if(var_742_bool == 0) goto Label_7535; // 0x1d6e JumpB
	
Label_7535:
	var_743_int = 13588; // 0x1d6f PushI
	var_744_bool = var_74_float == var_743_int; // 0x1d70 Eq
	if(var_744_bool == 0) goto Label_7558; // 0x1d71 JumpB
	var_745_string = ""; // 0x1d72 PushV
	var_745_string = "Untrust"; // 0x1d73 MovS
	func_6596(var_75_int, var_745_string); // 0x1d74 NEW_2
	var_746_int = 512424; // 0x1d76 PushI
	SetMessage(var_746_int); // 0x1d77 TObjFunc
	ClearReplies(); // 0x1d79 TObjFunc
	var_747_int = 512425; // 0x1d7b PushI
	var_748_int = 13594; // 0x1d7c PushI
	var_749_int = 13590; // 0x1d7d PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0x1d7e TObjFunc
	var_750_int = 512426; // 0x1d80 PushI
	var_751_int = 13592; // 0x1d81 PushI
	var_752_int = 13591; // 0x1d82 PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0x1d83 TObjFunc
	return 0; // 0x1d85 Return
	
Label_7558:
	var_753_int = 13592; // 0x1d86 PushI
	var_754_bool = var_74_float == var_753_int; // 0x1d87 Eq
	if(var_754_bool == 0) goto Label_7576; // 0x1d88 JumpB
	var_755_string = ""; // 0x1d89 PushV
	var_755_string = "Neutral"; // 0x1d8a MovS
	func_6596(var_75_int, var_755_string); // 0x1d8b NEW_2
	var_756_int = 512427; // 0x1d8d PushI
	SetMessage(var_756_int); // 0x1d8e TObjFunc
	ClearReplies(); // 0x1d90 TObjFunc
	var_757_int = 512430; // 0x1d92 PushI
	var_758_int = 13594; // 0x1d93 PushI
	var_759_int = 13596; // 0x1d94 PushI
	AddReply(var_757_int, var_758_int, var_759_int); // 0x1d95 TObjFunc
	return 0; // 0x1d97 Return
	
Label_7576:
	var_760_int = 13594; // 0x1d98 PushI
	var_761_bool = var_74_float == var_760_int; // 0x1d99 Eq
	if(var_761_bool == 0) goto Label_7594; // 0x1d9a JumpB
	var_762_string = ""; // 0x1d9b PushV
	var_762_string = "Sly"; // 0x1d9c MovS
	func_6596(var_75_int, var_762_string); // 0x1d9d NEW_2
	var_763_int = 512428; // 0x1d9f PushI
	SetMessage(var_763_int); // 0x1da0 TObjFunc
	ClearReplies(); // 0x1da2 TObjFunc
	var_764_int = 512429; // 0x1da4 PushI
	var_765_int = 13599; // 0x1da5 PushI
	var_766_int = 13595; // 0x1da6 PushI
	AddReply(var_764_int, var_765_int, var_766_int); // 0x1da7 TObjFunc
	return 0; // 0x1da9 Return
	
Label_7594:
	var_767_int = 13599; // 0x1daa PushI
	var_768_bool = var_74_float == var_767_int; // 0x1dab Eq
	if(var_768_bool == 0) goto Label_7612; // 0x1dac JumpB
	var_769_string = ""; // 0x1dad PushV
	var_769_string = "Neutral"; // 0x1dae MovS
	func_6596(var_75_int, var_769_string); // 0x1daf NEW_2
	var_770_int = 512432; // 0x1db1 PushI
	SetMessage(var_770_int); // 0x1db2 TObjFunc
	ClearReplies(); // 0x1db4 TObjFunc
	var_771_int = 512433; // 0x1db6 PushI
	var_772_int = 13601; // 0x1db7 PushI
	var_773_int = 13600; // 0x1db8 PushI
	AddReply(var_771_int, var_772_int, var_773_int); // 0x1db9 TObjFunc
	return 0; // 0x1dbb Return
	
Label_7612:
	var_774_int = 13601; // 0x1dbc PushI
	var_775_bool = var_74_float == var_774_int; // 0x1dbd Eq
	if(var_775_bool == 0) goto Label_7635; // 0x1dbe JumpB
	var_776_string = ""; // 0x1dbf PushV
	var_776_string = "Neutral"; // 0x1dc0 MovS
	func_6596(var_75_int, var_776_string); // 0x1dc1 NEW_2
	var_777_int = 512434; // 0x1dc3 PushI
	SetMessage(var_777_int); // 0x1dc4 TObjFunc
	ClearReplies(); // 0x1dc6 TObjFunc
	var_778_int = 513581; // 0x1dc8 PushI
	var_779_int = 14826; // 0x1dc9 PushI
	var_780_int = 14830; // 0x1dca PushI
	AddReply(var_778_int, var_779_int, var_780_int); // 0x1dcb TObjFunc
	var_781_int = 512435; // 0x1dcd PushI
	var_782_int = 14833; // 0x1dce PushI
	var_783_int = 13602; // 0x1dcf PushI
	AddReply(var_781_int, var_782_int, var_783_int); // 0x1dd0 TObjFunc
	return 0; // 0x1dd2 Return
	
Label_7635:
	var_784_int = 14824; // 0x1dd3 PushI
	var_785_bool = var_74_float == var_784_int; // 0x1dd4 Eq
	if(var_785_bool == 0) goto Label_7653; // 0x1dd5 JumpB
	var_786_string = ""; // 0x1dd6 PushV
	var_786_string = "Sly"; // 0x1dd7 MovS
	func_6596(var_75_int, var_786_string); // 0x1dd8 NEW_2
	var_787_int = 513575; // 0x1dda PushI
	SetMessage(var_787_int); // 0x1ddb TObjFunc
	ClearReplies(); // 0x1ddd TObjFunc
	var_788_int = 513576; // 0x1ddf PushI
	var_789_int = 14826; // 0x1de0 PushI
	var_790_int = 14825; // 0x1de1 PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0x1de2 TObjFunc
	return 0; // 0x1de4 Return
	
Label_7653:
	var_791_int = 14826; // 0x1de5 PushI
	var_792_bool = var_74_float == var_791_int; // 0x1de6 Eq
	if(var_792_bool == 0) goto Label_7671; // 0x1de7 JumpB
	var_793_string = ""; // 0x1de8 PushV
	var_793_string = "Sly"; // 0x1de9 MovS
	func_6596(var_75_int, var_793_string); // 0x1dea NEW_2
	var_794_int = 513577; // 0x1dec PushI
	SetMessage(var_794_int); // 0x1ded TObjFunc
	ClearReplies(); // 0x1def TObjFunc
	var_795_int = 513578; // 0x1df1 PushI
	var_796_int = 14828; // 0x1df2 PushI
	var_797_int = 14827; // 0x1df3 PushI
	AddReply(var_795_int, var_796_int, var_797_int); // 0x1df4 TObjFunc
	return 0; // 0x1df6 Return
	
Label_7671:
	var_798_int = 14828; // 0x1df7 PushI
	var_799_bool = var_74_float == var_798_int; // 0x1df8 Eq
	if(var_799_bool == 0) goto Label_7699; // 0x1df9 JumpB
	var_800_string = ""; // 0x1dfa PushV
	var_800_string = "Untrust"; // 0x1dfb MovS
	func_6596(var_75_int, var_800_string); // 0x1dfc NEW_2
	var_801_int = 513579; // 0x1dfe PushI
	SetMessage(var_801_int); // 0x1dff TObjFunc
	ClearReplies(); // 0x1e01 TObjFunc
	var_802_int = 513580; // 0x1e03 PushI
	var_803_int = 14833; // 0x1e04 PushI
	var_804_int = 14829; // 0x1e05 PushI
	AddReply(var_802_int, var_803_int, var_804_int); // 0x1e06 TObjFunc
	var_805_int = 535991; // 0x1e08 PushI
	var_806_int = 14837; // 0x1e09 PushI
	var_807_int = 37720; // 0x1e0a PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0x1e0b TObjFunc
	var_808_int = 535992; // 0x1e0d PushI
	var_809_int = 14837; // 0x1e0e PushI
	var_810_int = 37721; // 0x1e0f PushI
	AddReply(var_808_int, var_809_int, var_810_int); // 0x1e10 TObjFunc
	return 0; // 0x1e12 Return
	
Label_7699:
	var_811_int = 14833; // 0x1e13 PushI
	var_812_bool = var_74_float == var_811_int; // 0x1e14 Eq
	if(var_812_bool == 0) goto Label_7717; // 0x1e15 JumpB
	var_813_string = ""; // 0x1e16 PushV
	var_813_string = "Untrust"; // 0x1e17 MovS
	func_6596(var_75_int, var_813_string); // 0x1e18 NEW_2
	var_814_int = 513582; // 0x1e1a PushI
	SetMessage(var_814_int); // 0x1e1b TObjFunc
	ClearReplies(); // 0x1e1d TObjFunc
	var_815_int = 513583; // 0x1e1f PushI
	var_816_int = 14835; // 0x1e20 PushI
	var_817_int = 14834; // 0x1e21 PushI
	AddReply(var_815_int, var_816_int, var_817_int); // 0x1e22 TObjFunc
	return 0; // 0x1e24 Return
	
Label_7717:
	var_818_int = 14835; // 0x1e25 PushI
	var_819_bool = var_74_float == var_818_int; // 0x1e26 Eq
	if(var_819_bool == 0) goto Label_7735; // 0x1e27 JumpB
	var_820_string = ""; // 0x1e28 PushV
	var_820_string = "Sly"; // 0x1e29 MovS
	func_6596(var_75_int, var_820_string); // 0x1e2a NEW_2
	var_821_int = 513584; // 0x1e2c PushI
	SetMessage(var_821_int); // 0x1e2d TObjFunc
	ClearReplies(); // 0x1e2f TObjFunc
	var_822_int = 513585; // 0x1e31 PushI
	var_823_int = 14837; // 0x1e32 PushI
	var_824_int = 14836; // 0x1e33 PushI
	AddReply(var_822_int, var_823_int, var_824_int); // 0x1e34 TObjFunc
	return 0; // 0x1e36 Return
	
Label_7735:
	var_825_int = 14837; // 0x1e37 PushI
	var_826_bool = var_74_float == var_825_int; // 0x1e38 Eq
	if(var_826_bool == 0) goto Label_7758; // 0x1e39 JumpB
	var_827_string = ""; // 0x1e3a PushV
	var_827_string = "Untrust"; // 0x1e3b MovS
	func_6596(var_75_int, var_827_string); // 0x1e3c NEW_2
	var_828_int = 513586; // 0x1e3e PushI
	SetMessage(var_828_int); // 0x1e3f TObjFunc
	ClearReplies(); // 0x1e41 TObjFunc
	var_829_int = 513587; // 0x1e43 PushI
	var_830_int = 40669; // 0x1e44 PushI
	var_831_int = 14838; // 0x1e45 PushI
	AddReply(var_829_int, var_830_int, var_831_int); // 0x1e46 TObjFunc
	var_832_int = 538755; // 0x1e48 PushI
	var_833_int = -1; // 0x1e49 PushI
	var_834_int = 40667; // 0x1e4a PushI
	AddReply(var_832_int, var_833_int, var_834_int); // 0x1e4b TObjFunc
	return 0; // 0x1e4d Return
	
Label_7758:
	var_835_int = 40669; // 0x1e4e PushI
	var_836_bool = var_74_float == var_835_int; // 0x1e4f Eq
	if(var_836_bool == 0) goto Label_7781; // 0x1e50 JumpB
	var_837_string = ""; // 0x1e51 PushV
	var_837_string = "Neutral"; // 0x1e52 MovS
	func_6596(var_75_int, var_837_string); // 0x1e53 NEW_2
	var_838_int = 538756; // 0x1e55 PushI
	SetMessage(var_838_int); // 0x1e56 TObjFunc
	ClearReplies(); // 0x1e58 TObjFunc
	var_839_int = 538757; // 0x1e5a PushI
	var_840_int = -1; // 0x1e5b PushI
	var_841_int = 40671; // 0x1e5c PushI
	AddReply(var_839_int, var_840_int, var_841_int); // 0x1e5d TObjFunc
	var_842_int = 538758; // 0x1e5f PushI
	var_843_int = -1; // 0x1e60 PushI
	var_844_int = 40672; // 0x1e61 PushI
	AddReply(var_842_int, var_843_int, var_844_int); // 0x1e62 TObjFunc
	return 0; // 0x1e64 Return
	
Label_7781:
	var_845_int = 13577; // 0x1e65 PushI
	var_846_bool = var_74_float == var_845_int; // 0x1e66 Eq
	if(var_846_bool == 0) goto Label_7804; // 0x1e67 JumpB
	var_847_string = ""; // 0x1e68 PushV
	var_847_string = "Neutral"; // 0x1e69 MovS
	func_6596(var_75_int, var_847_string); // 0x1e6a NEW_2
	var_848_int = 512413; // 0x1e6c PushI
	SetMessage(var_848_int); // 0x1e6d TObjFunc
	ClearReplies(); // 0x1e6f TObjFunc
	var_849_int = 512420; // 0x1e71 PushI
	var_850_int = 13585; // 0x1e72 PushI
	var_851_int = 13584; // 0x1e73 PushI
	AddReply(var_849_int, var_850_int, var_851_int); // 0x1e74 TObjFunc
	var_852_int = 512414; // 0x1e76 PushI
	var_853_int = 13579; // 0x1e77 PushI
	var_854_int = 13578; // 0x1e78 PushI
	AddReply(var_852_int, var_853_int, var_854_int); // 0x1e79 TObjFunc
	return 0; // 0x1e7b Return
	
Label_7804:
	var_855_int = 13579; // 0x1e7c PushI
	var_856_bool = var_74_float == var_855_int; // 0x1e7d Eq
	if(var_856_bool == 0) goto Label_7822; // 0x1e7e JumpB
	var_857_string = ""; // 0x1e7f PushV
	var_857_string = "Neutral"; // 0x1e80 MovS
	func_6596(var_75_int, var_857_string); // 0x1e81 NEW_2
	var_858_int = 512415; // 0x1e83 PushI
	SetMessage(var_858_int); // 0x1e84 TObjFunc
	ClearReplies(); // 0x1e86 TObjFunc
	var_859_int = 512416; // 0x1e88 PushI
	var_860_int = 13581; // 0x1e89 PushI
	var_861_int = 13580; // 0x1e8a PushI
	AddReply(var_859_int, var_860_int, var_861_int); // 0x1e8b TObjFunc
	return 0; // 0x1e8d Return
	
Label_7822:
	var_862_int = 13581; // 0x1e8e PushI
	var_863_bool = var_74_float == var_862_int; // 0x1e8f Eq
	if(var_863_bool == 0) goto Label_7840; // 0x1e90 JumpB
	var_864_string = ""; // 0x1e91 PushV
	var_864_string = "Neutral"; // 0x1e92 MovS
	func_6596(var_75_int, var_864_string); // 0x1e93 NEW_2
	var_865_int = 512417; // 0x1e95 PushI
	SetMessage(var_865_int); // 0x1e96 TObjFunc
	ClearReplies(); // 0x1e98 TObjFunc
	var_866_int = 512418; // 0x1e9a PushI
	var_867_int = 14853; // 0x1e9b PushI
	var_868_int = 13582; // 0x1e9c PushI
	AddReply(var_866_int, var_867_int, var_868_int); // 0x1e9d TObjFunc
	return 0; // 0x1e9f Return
	
Label_7840:
	var_869_int = 13585; // 0x1ea0 PushI
	var_870_bool = var_74_float == var_869_int; // 0x1ea1 Eq
	if(var_870_bool == 0) goto Label_7863; // 0x1ea2 JumpB
	var_871_string = ""; // 0x1ea3 PushV
	var_871_string = "Neutral"; // 0x1ea4 MovS
	func_6596(var_75_int, var_871_string); // 0x1ea5 NEW_2
	var_872_int = 512421; // 0x1ea7 PushI
	SetMessage(var_872_int); // 0x1ea8 TObjFunc
	ClearReplies(); // 0x1eaa TObjFunc
	var_873_int = 513574; // 0x1eac PushI
	var_874_int = 14851; // 0x1ead PushI
	var_875_int = 14823; // 0x1eae PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0x1eaf TObjFunc
	var_876_int = 513602; // 0x1eb1 PushI
	var_877_int = 14853; // 0x1eb2 PushI
	var_878_int = 14854; // 0x1eb3 PushI
	AddReply(var_876_int, var_877_int, var_878_int); // 0x1eb4 TObjFunc
	return 0; // 0x1eb6 Return
	
Label_7863:
	var_879_int = 14851; // 0x1eb7 PushI
	var_880_bool = var_74_float == var_879_int; // 0x1eb8 Eq
	if(var_880_bool == 0) goto Label_7881; // 0x1eb9 JumpB
	var_881_string = ""; // 0x1eba PushV
	var_881_string = "Sly"; // 0x1ebb MovS
	func_6596(var_75_int, var_881_string); // 0x1ebc NEW_2
	var_882_int = 513599; // 0x1ebe PushI
	SetMessage(var_882_int); // 0x1ebf TObjFunc
	ClearReplies(); // 0x1ec1 TObjFunc
	var_883_int = 513600; // 0x1ec3 PushI
	var_884_int = 14853; // 0x1ec4 PushI
	var_885_int = 14852; // 0x1ec5 PushI
	AddReply(var_883_int, var_884_int, var_885_int); // 0x1ec6 TObjFunc
	return 0; // 0x1ec8 Return
	
Label_7881:
	var_886_int = 14853; // 0x1ec9 PushI
	var_887_bool = var_74_float == var_886_int; // 0x1eca Eq
	if(var_887_bool == 0) goto Label_7909; // 0x1ecb JumpB
	var_888_string = ""; // 0x1ecc PushV
	var_888_string = "Sly"; // 0x1ecd MovS
	func_6596(var_75_int, var_888_string); // 0x1ece NEW_2
	var_889_int = 513601; // 0x1ed0 PushI
	SetMessage(var_889_int); // 0x1ed1 TObjFunc
	ClearReplies(); // 0x1ed3 TObjFunc
	var_890_int = 513603; // 0x1ed5 PushI
	var_891_int = -1; // 0x1ed6 PushI
	var_892_int = 14856; // 0x1ed7 PushI
	AddReply(var_890_int, var_891_int, var_892_int); // 0x1ed8 TObjFunc
	var_893_int = 513604; // 0x1eda PushI
	var_894_int = -1; // 0x1edb PushI
	var_895_int = 14857; // 0x1edc PushI
	AddReply(var_893_int, var_894_int, var_895_int); // 0x1edd TObjFunc
	var_896_int = 513605; // 0x1edf PushI
	var_897_int = -1; // 0x1ee0 PushI
	var_898_int = 14858; // 0x1ee1 PushI
	AddReply(var_896_int, var_897_int, var_898_int); // 0x1ee2 TObjFunc
	return 0; // 0x1ee4 Return
	
Label_7909:
	var_899_int = 37724; // 0x1ee5 PushI
	var_900_bool = var_74_float == var_899_int; // 0x1ee6 Eq
	if(var_900_bool == 0) goto Label_7932; // 0x1ee7 JumpB
	var_901_string = ""; // 0x1ee8 PushV
	var_901_string = "Untrust"; // 0x1ee9 MovS
	func_6596(var_75_int, var_901_string); // 0x1eea NEW_2
	var_902_int = 535994; // 0x1eec PushI
	SetMessage(var_902_int); // 0x1eed TObjFunc
	ClearReplies(); // 0x1eef TObjFunc
	var_903_int = 535995; // 0x1ef1 PushI
	var_904_int = 37735; // 0x1ef2 PushI
	var_905_int = 37725; // 0x1ef3 PushI
	AddReply(var_903_int, var_904_int, var_905_int); // 0x1ef4 TObjFunc
	var_906_int = 536002; // 0x1ef6 PushI
	var_907_int = 37726; // 0x1ef7 PushI
	var_908_int = 37733; // 0x1ef8 PushI
	AddReply(var_906_int, var_907_int, var_908_int); // 0x1ef9 TObjFunc
	return 0; // 0x1efb Return
	
Label_7932:
	var_909_int = 37735; // 0x1efc PushI
	var_910_bool = var_74_float == var_909_int; // 0x1efd Eq
	if(var_910_bool == 0) goto Label_7955; // 0x1efe JumpB
	var_911_string = ""; // 0x1eff PushV
	var_911_string = "Untrust"; // 0x1f00 MovS
	func_6596(var_75_int, var_911_string); // 0x1f01 NEW_2
	var_912_int = 536003; // 0x1f03 PushI
	SetMessage(var_912_int); // 0x1f04 TObjFunc
	ClearReplies(); // 0x1f06 TObjFunc
	var_913_int = 536005; // 0x1f08 PushI
	var_914_int = 37738; // 0x1f09 PushI
	var_915_int = 37737; // 0x1f0a PushI
	AddReply(var_913_int, var_914_int, var_915_int); // 0x1f0b TObjFunc
	var_916_int = 536007; // 0x1f0d PushI
	var_917_int = 37740; // 0x1f0e PushI
	var_918_int = 37739; // 0x1f0f PushI
	AddReply(var_916_int, var_917_int, var_918_int); // 0x1f10 TObjFunc
	return 0; // 0x1f12 Return
	
Label_7955:
	var_919_int = 37740; // 0x1f13 PushI
	var_920_bool = var_74_float == var_919_int; // 0x1f14 Eq
	if(var_920_bool == 0) goto Label_7973; // 0x1f15 JumpB
	var_921_string = ""; // 0x1f16 PushV
	var_921_string = "Neutral"; // 0x1f17 MovS
	func_6596(var_75_int, var_921_string); // 0x1f18 NEW_2
	var_922_int = 536008; // 0x1f1a PushI
	SetMessage(var_922_int); // 0x1f1b TObjFunc
	ClearReplies(); // 0x1f1d TObjFunc
	var_923_int = 536009; // 0x1f1f PushI
	var_924_int = 37726; // 0x1f20 PushI
	var_925_int = 37741; // 0x1f21 PushI
	AddReply(var_923_int, var_924_int, var_925_int); // 0x1f22 TObjFunc
	return 0; // 0x1f24 Return
	
Label_7973:
	var_926_int = 37738; // 0x1f25 PushI
	var_927_bool = var_74_float == var_926_int; // 0x1f26 Eq
	if(var_927_bool == 0) goto Label_7996; // 0x1f27 JumpB
	var_928_string = ""; // 0x1f28 PushV
	var_928_string = "Sly"; // 0x1f29 MovS
	func_6596(var_75_int, var_928_string); // 0x1f2a NEW_2
	var_929_int = 536006; // 0x1f2c PushI
	SetMessage(var_929_int); // 0x1f2d TObjFunc
	ClearReplies(); // 0x1f2f TObjFunc
	var_930_int = 536004; // 0x1f31 PushI
	var_931_int = 37726; // 0x1f32 PushI
	var_932_int = 37736; // 0x1f33 PushI
	AddReply(var_930_int, var_931_int, var_932_int); // 0x1f34 TObjFunc
	var_933_int = 536011; // 0x1f36 PushI
	var_934_int = 37745; // 0x1f37 PushI
	var_935_int = 37744; // 0x1f38 PushI
	AddReply(var_933_int, var_934_int, var_935_int); // 0x1f39 TObjFunc
	return 0; // 0x1f3b Return
	
Label_7996:
	var_936_int = 37745; // 0x1f3c PushI
	var_937_bool = var_74_float == var_936_int; // 0x1f3d Eq
	if(var_937_bool == 0) goto Label_8014; // 0x1f3e JumpB
	var_938_string = ""; // 0x1f3f PushV
	var_938_string = "Neutral"; // 0x1f40 MovS
	func_6596(var_75_int, var_938_string); // 0x1f41 NEW_2
	var_939_int = 536012; // 0x1f43 PushI
	SetMessage(var_939_int); // 0x1f44 TObjFunc
	ClearReplies(); // 0x1f46 TObjFunc
	var_940_int = 536013; // 0x1f48 PushI
	var_941_int = 37726; // 0x1f49 PushI
	var_942_int = 37746; // 0x1f4a PushI
	AddReply(var_940_int, var_941_int, var_942_int); // 0x1f4b TObjFunc
	return 0; // 0x1f4d Return
	
Label_8014:
	var_943_int = 37726; // 0x1f4e PushI
	var_944_bool = var_74_float == var_943_int; // 0x1f4f Eq
	if(var_944_bool == 0) goto Label_8037; // 0x1f50 JumpB
	var_945_string = ""; // 0x1f51 PushV
	var_945_string = "Rage"; // 0x1f52 MovS
	func_6596(var_75_int, var_945_string); // 0x1f53 NEW_2
	var_946_int = 535996; // 0x1f55 PushI
	SetMessage(var_946_int); // 0x1f56 TObjFunc
	ClearReplies(); // 0x1f58 TObjFunc
	var_947_int = 535997; // 0x1f5a PushI
	var_948_int = 37728; // 0x1f5b PushI
	var_949_int = 37727; // 0x1f5c PushI
	AddReply(var_947_int, var_948_int, var_949_int); // 0x1f5d TObjFunc
	var_950_int = 536010; // 0x1f5f PushI
	var_951_int = 37728; // 0x1f60 PushI
	var_952_int = 37742; // 0x1f61 PushI
	AddReply(var_950_int, var_951_int, var_952_int); // 0x1f62 TObjFunc
	return 0; // 0x1f64 Return
	
Label_8037:
	var_953_int = 37728; // 0x1f65 PushI
	var_954_bool = var_74_float == var_953_int; // 0x1f66 Eq
	if(var_954_bool == 0) goto Label_8055; // 0x1f67 JumpB
	var_955_string = ""; // 0x1f68 PushV
	var_955_string = "Rage"; // 0x1f69 MovS
	func_6596(var_75_int, var_955_string); // 0x1f6a NEW_2
	var_956_int = 535998; // 0x1f6c PushI
	SetMessage(var_956_int); // 0x1f6d TObjFunc
	ClearReplies(); // 0x1f6f TObjFunc
	var_957_int = 535999; // 0x1f71 PushI
	var_958_int = 37730; // 0x1f72 PushI
	var_959_int = 37729; // 0x1f73 PushI
	AddReply(var_957_int, var_958_int, var_959_int); // 0x1f74 TObjFunc
	return 0; // 0x1f76 Return
	
Label_8055:
	var_960_int = 37730; // 0x1f77 PushI
	var_961_bool = var_74_float == var_960_int; // 0x1f78 Eq
	if(var_961_bool == 0) goto Label_8078; // 0x1f79 JumpB
	var_962_string = ""; // 0x1f7a PushV
	var_962_string = "Neutral"; // 0x1f7b MovS
	func_6596(var_75_int, var_962_string); // 0x1f7c NEW_2
	var_963_int = 536000; // 0x1f7e PushI
	SetMessage(var_963_int); // 0x1f7f TObjFunc
	ClearReplies(); // 0x1f81 TObjFunc
	var_964_int = 533325; // 0x1f83 PushI
	var_965_int = -1; // 0x1f84 PushI
	var_966_int = 34829; // 0x1f85 PushI
	AddReply(var_964_int, var_965_int, var_966_int); // 0x1f86 TObjFunc
	var_967_int = 536014; // 0x1f88 PushI
	var_968_int = -1; // 0x1f89 PushI
	var_969_int = 37748; // 0x1f8a PushI
	AddReply(var_967_int, var_968_int, var_969_int); // 0x1f8b TObjFunc
	return 0; // 0x1f8d Return
	
Label_8078:
	var_3_object = 1; // 0x1f8e TMovB
	var_970_bool = 0; // 0x1f8f PushV
	func_10306(var_970_bool); // 0x1f90 NEW_2
	if(var_970_bool == 0) goto Label_8086; // 0x1f92 JumpB
	lshStopAnimation(); // 0x1f93 Func
	goto Label_8088; // 0x1f95 Jump
	
Label_8088:
	return 0; // 0x1f98 Return
	
Label_8086:
	StopAnimation(); // 0x1f96 Func
	
Label_8090:
	return 0; // 0x1f9a Return
}


task_23_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x2043 PushI
	if(var_76_int == 0) goto Label_8346; // 0x2044 JumpB
	func_10041(); // 0x2046 NEW_2
	var_78_int = 22136; // 0x2048 PushI
	var_79_bool = var_75_int == var_78_int; // 0x2049 Eq
	if(var_79_bool == 0) goto Label_8282; // 0x204a JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x204b PushV
	var_80_object = var_1_object; // 0x204c MovT
	var_81_object = var_0_bool; // 0x204d MovT
	func_10328(); // 0x204e NEW_2
	var_93_object = Obj(); var_94_object = Obj(); // 0x2050 PushV
	var_93_object = var_1_object; // 0x2051 MovT
	var_94_object = var_0_bool; // 0x2052 MovT
	func_10339(var_94_object); // 0x2053 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x2055 PushV
	var_113_object = var_1_object; // 0x2056 MovT
	var_114_object = var_0_bool; // 0x2057 MovT
	func_10600(); // 0x2058 NEW_2
	
Label_8282:
	var_117_int = 22131; // 0x205a PushI
	var_118_bool = var_74_float == var_117_int; // 0x205b Eq
	if(var_118_bool == 0) goto Label_8311; // 0x205c JumpB
	var_119_string = ""; // 0x205d PushV
	var_119_string = "Neutral"; // 0x205e MovS
	func_8236(var_75_int, var_119_string); // 0x205f NEW_2
	var_136_int = 520914; // 0x2061 PushI
	SetMessage(var_136_int); // 0x2062 TObjFunc
	ClearReplies(); // 0x2064 TObjFunc
	var_137_bool = 0; var_138_object = Obj(); // 0x2066 PushV
	var_138_object = var_1_object; // 0x2067 MovT
	func_11671(var_137_bool, var_138_object); // 0x2068 NEW_2
	var_149_bool = var_137_bool == 0; // 0x206a Not
	if(var_149_bool == 0) goto Label_8305; // 0x206b JumpB
	var_150_int = 520917; // 0x206c PushI
	var_151_int = 22135; // 0x206d PushI
	var_152_int = 22134; // 0x206e PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x206f TObjFunc
	
Label_8305:
	var_153_int = 520915; // 0x2071 PushI
	var_154_int = -1; // 0x2072 PushI
	var_155_int = 22132; // 0x2073 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x2074 TObjFunc
	return 0; // 0x2076 Return
	
Label_8311:
	var_156_int = 22135; // 0x2077 PushI
	var_157_bool = var_74_float == var_156_int; // 0x2078 Eq
	if(var_157_bool == 0) goto Label_8334; // 0x2079 JumpB
	var_158_string = ""; // 0x207a PushV
	var_158_string = "Neutral"; // 0x207b MovS
	func_8236(var_75_int, var_158_string); // 0x207c NEW_2
	var_159_int = 520918; // 0x207e PushI
	SetMessage(var_159_int); // 0x207f TObjFunc
	ClearReplies(); // 0x2081 TObjFunc
	var_160_int = 520919; // 0x2083 PushI
	var_161_int = -1; // 0x2084 PushI
	var_162_int = 22136; // 0x2085 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x2086 TObjFunc
	var_163_int = 520920; // 0x2088 PushI
	var_164_int = -1; // 0x2089 PushI
	var_165_int = 22137; // 0x208a PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x208b TObjFunc
	return 0; // 0x208d Return
	
Label_8334:
	var_3_object = 1; // 0x208e TMovB
	var_166_bool = 0; // 0x208f PushV
	func_10306(var_166_bool); // 0x2090 NEW_2
	if(var_166_bool == 0) goto Label_8342; // 0x2092 JumpB
	lshStopAnimation(); // 0x2093 Func
	goto Label_8344; // 0x2095 Jump
	
Label_8344:
	return 0; // 0x2098 Return
	
Label_8342:
	StopAnimation(); // 0x2096 Func
	
Label_8346:
	return 0; // 0x209a Return
}


task_25_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x2143 PushI
	if(var_76_int == 0) goto Label_8607; // 0x2144 JumpB
	func_10041(); // 0x2146 NEW_2
	var_78_int = 22147; // 0x2148 PushI
	var_79_bool = var_75_int == var_78_int; // 0x2149 Eq
	if(var_79_bool == 0) goto Label_8538; // 0x214a JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x214b PushV
	var_80_object = var_1_object; // 0x214c MovT
	var_81_object = var_0_bool; // 0x214d MovT
	func_10600(); // 0x214e NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x2150 PushV
	var_84_object = var_1_object; // 0x2151 MovT
	var_85_object = var_0_bool; // 0x2152 MovT
	func_10328(); // 0x2153 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x2155 PushV
	var_97_object = var_1_object; // 0x2156 MovT
	var_98_object = var_0_bool; // 0x2157 MovT
	func_10339(var_98_object); // 0x2158 NEW_2
	
Label_8538:
	var_117_int = 22144; // 0x215a PushI
	var_118_bool = var_74_float == var_117_int; // 0x215b Eq
	if(var_118_bool == 0) goto Label_8567; // 0x215c JumpB
	var_119_string = ""; // 0x215d PushV
	var_119_string = "Neutral"; // 0x215e MovS
	func_8492(var_75_int, var_119_string); // 0x215f NEW_2
	var_136_int = 520927; // 0x2161 PushI
	SetMessage(var_136_int); // 0x2162 TObjFunc
	ClearReplies(); // 0x2164 TObjFunc
	var_137_bool = 0; var_138_object = Obj(); // 0x2166 PushV
	var_138_object = var_1_object; // 0x2167 MovT
	func_11671(var_137_bool, var_138_object); // 0x2168 NEW_2
	var_149_bool = var_137_bool == 0; // 0x216a Not
	if(var_149_bool == 0) goto Label_8561; // 0x216b JumpB
	var_150_int = 520928; // 0x216c PushI
	var_151_int = 22146; // 0x216d PushI
	var_152_int = 22145; // 0x216e PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x216f TObjFunc
	
Label_8561:
	var_153_int = 520932; // 0x2171 PushI
	var_154_int = -1; // 0x2172 PushI
	var_155_int = 22149; // 0x2173 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x2174 TObjFunc
	return 0; // 0x2176 Return
	
Label_8567:
	var_156_int = 22146; // 0x2177 PushI
	var_157_bool = var_74_float == var_156_int; // 0x2178 Eq
	if(var_157_bool == 0) goto Label_8595; // 0x2179 JumpB
	var_158_string = ""; // 0x217a PushV
	var_158_string = "Neutral"; // 0x217b MovS
	func_8492(var_75_int, var_158_string); // 0x217c NEW_2
	var_159_int = 520929; // 0x217e PushI
	SetMessage(var_159_int); // 0x217f TObjFunc
	ClearReplies(); // 0x2181 TObjFunc
	var_160_bool = 0; var_161_object = Obj(); // 0x2183 PushV
	var_161_object = var_1_object; // 0x2184 MovT
	func_11681(var_160_bool, var_161_object); // 0x2185 NEW_2
	if(var_160_bool == 0) goto Label_8589; // 0x2187 JumpB
	var_168_int = 520930; // 0x2188 PushI
	var_169_int = -1; // 0x2189 PushI
	var_170_int = 22147; // 0x218a PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x218b TObjFunc
	
Label_8589:
	var_171_int = 520931; // 0x218d PushI
	var_172_int = -1; // 0x218e PushI
	var_173_int = 22148; // 0x218f PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x2190 TObjFunc
	return 0; // 0x2192 Return
	
Label_8595:
	var_3_object = 1; // 0x2193 TMovB
	var_174_bool = 0; // 0x2194 PushV
	func_10306(var_174_bool); // 0x2195 NEW_2
	if(var_174_bool == 0) goto Label_8603; // 0x2197 JumpB
	lshStopAnimation(); // 0x2198 Func
	goto Label_8605; // 0x219a Jump
	
Label_8605:
	return 0; // 0x219d Return
	
Label_8603:
	StopAnimation(); // 0x219b Func
	
Label_8607:
	return 0; // 0x219f Return
}


task_27_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x2248 PushI
	if(var_76_int == 0) goto Label_8868; // 0x2249 JumpB
	func_10041(); // 0x224b NEW_2
	var_78_int = 22154; // 0x224d PushI
	var_79_bool = var_75_int == var_78_int; // 0x224e Eq
	if(var_79_bool == 0) goto Label_8799; // 0x224f JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x2250 PushV
	var_80_object = var_1_object; // 0x2251 MovT
	var_81_object = var_0_bool; // 0x2252 MovT
	func_10328(); // 0x2253 NEW_2
	var_93_object = Obj(); var_94_object = Obj(); // 0x2255 PushV
	var_93_object = var_1_object; // 0x2256 MovT
	var_94_object = var_0_bool; // 0x2257 MovT
	func_10339(var_94_object); // 0x2258 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x225a PushV
	var_113_object = var_1_object; // 0x225b MovT
	var_114_object = var_0_bool; // 0x225c MovT
	func_10600(); // 0x225d NEW_2
	
Label_8799:
	var_117_int = 22151; // 0x225f PushI
	var_118_bool = var_74_float == var_117_int; // 0x2260 Eq
	if(var_118_bool == 0) goto Label_8828; // 0x2261 JumpB
	var_119_string = ""; // 0x2262 PushV
	var_119_string = "Neutral"; // 0x2263 MovS
	func_8753(var_75_int, var_119_string); // 0x2264 NEW_2
	var_136_int = 520934; // 0x2266 PushI
	SetMessage(var_136_int); // 0x2267 TObjFunc
	ClearReplies(); // 0x2269 TObjFunc
	var_137_bool = 0; var_138_object = Obj(); // 0x226b PushV
	var_138_object = var_1_object; // 0x226c MovT
	func_11671(var_137_bool, var_138_object); // 0x226d NEW_2
	var_149_bool = var_137_bool == 0; // 0x226f Not
	if(var_149_bool == 0) goto Label_8822; // 0x2270 JumpB
	var_150_int = 520935; // 0x2271 PushI
	var_151_int = 22153; // 0x2272 PushI
	var_152_int = 22152; // 0x2273 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x2274 TObjFunc
	
Label_8822:
	var_153_int = 520939; // 0x2276 PushI
	var_154_int = -1; // 0x2277 PushI
	var_155_int = 22156; // 0x2278 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x2279 TObjFunc
	return 0; // 0x227b Return
	
Label_8828:
	var_156_int = 22153; // 0x227c PushI
	var_157_bool = var_74_float == var_156_int; // 0x227d Eq
	if(var_157_bool == 0) goto Label_8856; // 0x227e JumpB
	var_158_string = ""; // 0x227f PushV
	var_158_string = "Neutral"; // 0x2280 MovS
	func_8753(var_75_int, var_158_string); // 0x2281 NEW_2
	var_159_int = 520936; // 0x2283 PushI
	SetMessage(var_159_int); // 0x2284 TObjFunc
	ClearReplies(); // 0x2286 TObjFunc
	var_160_bool = 0; var_161_object = Obj(); // 0x2288 PushV
	var_161_object = var_1_object; // 0x2289 MovT
	func_11681(var_160_bool, var_161_object); // 0x228a NEW_2
	if(var_160_bool == 0) goto Label_8850; // 0x228c JumpB
	var_168_int = 520937; // 0x228d PushI
	var_169_int = -1; // 0x228e PushI
	var_170_int = 22154; // 0x228f PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x2290 TObjFunc
	
Label_8850:
	var_171_int = 520938; // 0x2292 PushI
	var_172_int = -1; // 0x2293 PushI
	var_173_int = 22155; // 0x2294 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x2295 TObjFunc
	return 0; // 0x2297 Return
	
Label_8856:
	var_3_object = 1; // 0x2298 TMovB
	var_174_bool = 0; // 0x2299 PushV
	func_10306(var_174_bool); // 0x229a NEW_2
	if(var_174_bool == 0) goto Label_8864; // 0x229c JumpB
	lshStopAnimation(); // 0x229d Func
	goto Label_8866; // 0x229f Jump
	
Label_8866:
	return 0; // 0x22a2 Return
	
Label_8864:
	StopAnimation(); // 0x22a0 Func
	
Label_8868:
	return 0; // 0x22a4 Return
}


task_29_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x235c PushI
	if(var_76_int == 0) goto Label_9329; // 0x235d JumpB
	func_10041(); // 0x235f NEW_2
	var_78_int = 36141; // 0x2361 PushI
	var_79_bool = var_75_int == var_78_int; // 0x2362 Eq
	if(var_79_bool == 0) goto Label_9065; // 0x2363 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x2364 PushV
	var_80_object = var_1_object; // 0x2365 MovT
	var_81_object = var_0_bool; // 0x2366 MovT
	func_10507(); // 0x2367 NEW_2
	
Label_9065:
	var_114_int = 38456; // 0x2369 PushI
	var_115_bool = var_75_int == var_114_int; // 0x236a Eq
	if(var_115_bool == 0) goto Label_9073; // 0x236b JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x236c PushV
	var_116_object = var_1_object; // 0x236d MovT
	var_117_object = var_0_bool; // 0x236e MovT
	func_10507(); // 0x236f NEW_2
	
Label_9073:
	var_118_int = 22161; // 0x2371 PushI
	var_119_bool = var_75_int == var_118_int; // 0x2372 Eq
	if(var_119_bool == 0) goto Label_9091; // 0x2373 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x2374 PushV
	var_120_object = var_1_object; // 0x2375 MovT
	var_121_object = var_0_bool; // 0x2376 MovT
	func_10600(); // 0x2377 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x2379 PushV
	var_124_object = var_1_object; // 0x237a MovT
	var_125_object = var_0_bool; // 0x237b MovT
	func_10328(); // 0x237c NEW_2
	var_137_object = Obj(); var_138_object = Obj(); // 0x237e PushV
	var_137_object = var_1_object; // 0x237f MovT
	var_138_object = var_0_bool; // 0x2380 MovT
	func_10339(var_138_object); // 0x2381 NEW_2
	
Label_9091:
	var_157_int = 22158; // 0x2383 PushI
	var_158_bool = var_74_float == var_157_int; // 0x2384 Eq
	if(var_158_bool == 0) goto Label_9135; // 0x2385 JumpB
	var_159_string = ""; // 0x2386 PushV
	var_159_string = "Neutral"; // 0x2387 MovS
	func_9029(var_75_int, var_159_string); // 0x2388 NEW_2
	var_176_int = 520941; // 0x238a PushI
	SetMessage(var_176_int); // 0x238b TObjFunc
	ClearReplies(); // 0x238d TObjFunc
	var_177_bool = 0; var_178_object = Obj(); // 0x238f PushV
	var_178_object = var_1_object; // 0x2390 MovT
	func_11205(var_178_object); // 0x2391 NEW_2
	if(var_177_bool == 0) goto Label_9113; // 0x2393 JumpB
	var_185_int = 534490; // 0x2394 PushI
	var_186_int = 38444; // 0x2395 PushI
	var_187_int = 36135; // 0x2396 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x2397 TObjFunc
	
Label_9113:
	var_188_bool = 0; var_189_object = Obj(); // 0x2399 PushV
	var_189_object = var_1_object; // 0x239a MovT
	func_11671(var_188_bool, var_189_object); // 0x239b NEW_2
	var_200_bool = var_188_bool == 0; // 0x239d Not
	if(var_200_bool == 0) goto Label_9124; // 0x239e JumpB
	var_201_int = 520942; // 0x239f PushI
	var_202_int = 22160; // 0x23a0 PushI
	var_203_int = 22159; // 0x23a1 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x23a2 TObjFunc
	
Label_9124:
	var_204_int = 520946; // 0x23a4 PushI
	var_205_int = -1; // 0x23a5 PushI
	var_206_int = 22163; // 0x23a6 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x23a7 TObjFunc
	var_207_int = 536616; // 0x23a9 PushI
	var_208_int = -1; // 0x23aa PushI
	var_209_int = 38443; // 0x23ab PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x23ac TObjFunc
	return 0; // 0x23ae Return
	
Label_9135:
	var_210_int = 22160; // 0x23af PushI
	var_211_bool = var_74_float == var_210_int; // 0x23b0 Eq
	if(var_211_bool == 0) goto Label_9163; // 0x23b1 JumpB
	var_212_string = ""; // 0x23b2 PushV
	var_212_string = "Neutral"; // 0x23b3 MovS
	func_9029(var_75_int, var_212_string); // 0x23b4 NEW_2
	var_213_int = 520943; // 0x23b6 PushI
	SetMessage(var_213_int); // 0x23b7 TObjFunc
	ClearReplies(); // 0x23b9 TObjFunc
	var_214_bool = 0; var_215_object = Obj(); // 0x23bb PushV
	var_215_object = var_1_object; // 0x23bc MovT
	func_11681(var_214_bool, var_215_object); // 0x23bd NEW_2
	if(var_214_bool == 0) goto Label_9157; // 0x23bf JumpB
	var_222_int = 520944; // 0x23c0 PushI
	var_223_int = -1; // 0x23c1 PushI
	var_224_int = 22161; // 0x23c2 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x23c3 TObjFunc
	
Label_9157:
	var_225_int = 520945; // 0x23c5 PushI
	var_226_int = -1; // 0x23c6 PushI
	var_227_int = 22162; // 0x23c7 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x23c8 TObjFunc
	return 0; // 0x23ca Return
	
Label_9163:
	var_228_int = 38444; // 0x23cb PushI
	var_229_bool = var_74_float == var_228_int; // 0x23cc Eq
	if(var_229_bool == 0) goto Label_9181; // 0x23cd JumpB
	var_230_string = ""; // 0x23ce PushV
	var_230_string = "Neutral"; // 0x23cf MovS
	func_9029(var_75_int, var_230_string); // 0x23d0 NEW_2
	var_231_int = 536617; // 0x23d2 PushI
	SetMessage(var_231_int); // 0x23d3 TObjFunc
	ClearReplies(); // 0x23d5 TObjFunc
	var_232_int = 536618; // 0x23d7 PushI
	var_233_int = 38446; // 0x23d8 PushI
	var_234_int = 38445; // 0x23d9 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x23da TObjFunc
	return 0; // 0x23dc Return
	
Label_9181:
	var_235_int = 38446; // 0x23dd PushI
	var_236_bool = var_74_float == var_235_int; // 0x23de Eq
	if(var_236_bool == 0) goto Label_9199; // 0x23df JumpB
	var_237_string = ""; // 0x23e0 PushV
	var_237_string = "Fear"; // 0x23e1 MovS
	func_9029(var_75_int, var_237_string); // 0x23e2 NEW_2
	var_238_int = 536619; // 0x23e4 PushI
	SetMessage(var_238_int); // 0x23e5 TObjFunc
	ClearReplies(); // 0x23e7 TObjFunc
	var_239_int = 536620; // 0x23e9 PushI
	var_240_int = 36136; // 0x23ea PushI
	var_241_int = 38447; // 0x23eb PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x23ec TObjFunc
	return 0; // 0x23ee Return
	
Label_9199:
	var_242_int = 36136; // 0x23ef PushI
	var_243_bool = var_74_float == var_242_int; // 0x23f0 Eq
	if(var_243_bool == 0) goto Label_9222; // 0x23f1 JumpB
	var_244_string = ""; // 0x23f2 PushV
	var_244_string = "Fear"; // 0x23f3 MovS
	func_9029(var_75_int, var_244_string); // 0x23f4 NEW_2
	var_245_int = 534491; // 0x23f6 PushI
	SetMessage(var_245_int); // 0x23f7 TObjFunc
	ClearReplies(); // 0x23f9 TObjFunc
	var_246_int = 534492; // 0x23fb PushI
	var_247_int = 36138; // 0x23fc PushI
	var_248_int = 36137; // 0x23fd PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x23fe TObjFunc
	var_249_int = 536621; // 0x2400 PushI
	var_250_int = 38449; // 0x2401 PushI
	var_251_int = 38448; // 0x2402 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x2403 TObjFunc
	return 0; // 0x2405 Return
	
Label_9222:
	var_252_int = 38449; // 0x2406 PushI
	var_253_bool = var_74_float == var_252_int; // 0x2407 Eq
	if(var_253_bool == 0) goto Label_9240; // 0x2408 JumpB
	var_254_string = ""; // 0x2409 PushV
	var_254_string = "Fear"; // 0x240a MovS
	func_9029(var_75_int, var_254_string); // 0x240b NEW_2
	var_255_int = 536622; // 0x240d PushI
	SetMessage(var_255_int); // 0x240e TObjFunc
	ClearReplies(); // 0x2410 TObjFunc
	var_256_int = 536625; // 0x2412 PushI
	var_257_int = 36140; // 0x2413 PushI
	var_258_int = 38452; // 0x2414 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x2415 TObjFunc
	return 0; // 0x2417 Return
	
Label_9240:
	var_259_int = 36138; // 0x2418 PushI
	var_260_bool = var_74_float == var_259_int; // 0x2419 Eq
	if(var_260_bool == 0) goto Label_9263; // 0x241a JumpB
	var_261_string = ""; // 0x241b PushV
	var_261_string = "Neutral"; // 0x241c MovS
	func_9029(var_75_int, var_261_string); // 0x241d NEW_2
	var_262_int = 534493; // 0x241f PushI
	SetMessage(var_262_int); // 0x2420 TObjFunc
	ClearReplies(); // 0x2422 TObjFunc
	var_263_int = 534494; // 0x2424 PushI
	var_264_int = 36140; // 0x2425 PushI
	var_265_int = 36139; // 0x2426 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x2427 TObjFunc
	var_266_int = 536623; // 0x2429 PushI
	var_267_int = 38451; // 0x242a PushI
	var_268_int = 38450; // 0x242b PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x242c TObjFunc
	return 0; // 0x242e Return
	
Label_9263:
	var_269_int = 38451; // 0x242f PushI
	var_270_bool = var_74_float == var_269_int; // 0x2430 Eq
	if(var_270_bool == 0) goto Label_9281; // 0x2431 JumpB
	var_271_string = ""; // 0x2432 PushV
	var_271_string = "Sly"; // 0x2433 MovS
	func_9029(var_75_int, var_271_string); // 0x2434 NEW_2
	var_272_int = 536624; // 0x2436 PushI
	SetMessage(var_272_int); // 0x2437 TObjFunc
	ClearReplies(); // 0x2439 TObjFunc
	var_273_int = 536626; // 0x243b PushI
	var_274_int = 38455; // 0x243c PushI
	var_275_int = 38454; // 0x243d PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x243e TObjFunc
	return 0; // 0x2440 Return
	
Label_9281:
	var_276_int = 38455; // 0x2441 PushI
	var_277_bool = var_74_float == var_276_int; // 0x2442 Eq
	if(var_277_bool == 0) goto Label_9299; // 0x2443 JumpB
	var_278_string = ""; // 0x2444 PushV
	var_278_string = "Untrust"; // 0x2445 MovS
	func_9029(var_75_int, var_278_string); // 0x2446 NEW_2
	var_279_int = 536627; // 0x2448 PushI
	SetMessage(var_279_int); // 0x2449 TObjFunc
	ClearReplies(); // 0x244b TObjFunc
	var_280_int = 536628; // 0x244d PushI
	var_281_int = -1; // 0x244e PushI
	var_282_int = 38456; // 0x244f PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x2450 TObjFunc
	return 0; // 0x2452 Return
	
Label_9299:
	var_283_int = 36140; // 0x2453 PushI
	var_284_bool = var_74_float == var_283_int; // 0x2454 Eq
	if(var_284_bool == 0) goto Label_9317; // 0x2455 JumpB
	var_285_string = ""; // 0x2456 PushV
	var_285_string = "Untrust"; // 0x2457 MovS
	func_9029(var_75_int, var_285_string); // 0x2458 NEW_2
	var_286_int = 534495; // 0x245a PushI
	SetMessage(var_286_int); // 0x245b TObjFunc
	ClearReplies(); // 0x245d TObjFunc
	var_287_int = 534496; // 0x245f PushI
	var_288_int = -1; // 0x2460 PushI
	var_289_int = 36141; // 0x2461 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x2462 TObjFunc
	return 0; // 0x2464 Return
	
Label_9317:
	var_3_object = 1; // 0x2465 TMovB
	var_290_bool = 0; // 0x2466 PushV
	func_10306(var_290_bool); // 0x2467 NEW_2
	if(var_290_bool == 0) goto Label_9325; // 0x2469 JumpB
	lshStopAnimation(); // 0x246a Func
	goto Label_9327; // 0x246c Jump
	
Label_9327:
	return 0; // 0x246f Return
	
Label_9325:
	StopAnimation(); // 0x246d Func
	
Label_9329:
	return 0; // 0x2471 Return
}


task_31_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_int, var_72_int, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x2514 PushI
	if(var_76_int == 0) goto Label_9532; // 0x2515 JumpB
	func_10041(); // 0x2517 NEW_2
	var_78_int = 42551; // 0x2519 PushI
	var_79_bool = var_74_float == var_78_int; // 0x251a Eq
	if(var_79_bool == 0) goto Label_9520; // 0x251b JumpB
	var_80_string = ""; // 0x251c PushV
	var_80_string = "Neutral"; // 0x251d MovS
	func_9469(var_75_int, var_80_string); // 0x251e NEW_2
	var_97_int = 540542; // 0x2520 PushI
	SetMessage(var_97_int); // 0x2521 TObjFunc
	ClearReplies(); // 0x2523 TObjFunc
	var_98_int = 540543; // 0x2525 PushI
	var_99_int = -1; // 0x2526 PushI
	var_100_int = 42552; // 0x2527 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x2528 TObjFunc
	var_101_int = 540796; // 0x252a PushI
	var_102_int = -1; // 0x252b PushI
	var_103_int = 42845; // 0x252c PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x252d TObjFunc
	return 0; // 0x252f Return
	
Label_9520:
	var_3_object = 1; // 0x2530 TMovB
	var_104_bool = 0; // 0x2531 PushV
	func_10306(var_104_bool); // 0x2532 NEW_2
	if(var_104_bool == 0) goto Label_9528; // 0x2534 JumpB
	lshStopAnimation(); // 0x2535 Func
	goto Label_9530; // 0x2537 Jump
	
Label_9530:
	return 0; // 0x253a Return
	
Label_9528:
	StopAnimation(); // 0x2538 Func
	
Label_9532:
	return 0; // 0x253c Return
}


task_32_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	func_10297(); // 0x25bb NEW_2
	TaskCall(0); // 0x25be TaskCall
	func_0(); // 0x25bf NEW_2
	TaskReturn(); // 0x25c0 TaskReturn
	return 0; // 0x25c2 Return
}


task_32_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int, var_74_object)
{
	var_75_bool = 0; var_76_bool = 0; // 0x25c3 PushV
	IsOverrideActive(var_76_bool); // 0x25c4 Func
	var_77_bool = var_76_bool == 0; // 0x25c6 Not
	if(var_77_bool == 0) goto Label_9682; // 0x25c7 JumpB
	EventDisable(0); // 0x25c8 EventDisable
	var_78_bool = 0; var_79_object = Obj(); // 0x25c9 PushV
	var_79_object = var_74_object; // 0x25ca Mov
	func_9747(var_79_object); // 0x25cb NEW_2
	EventEnable(0); // 0x25cd EventEnable
	var_92_object = Obj(); // 0x25ce PushV
	var_92_object = var_74_object; // 0x25cf Mov
	func_12078(var_92_object); // 0x25d0 NEW_2
	
Label_9682:
	return 2; // 0x25d2 Return
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	return 0; // 0x2839 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	var_74_bool = GlobalVars[2]; // 0x253d PushGE
	var_74_bool = 0; // 0x253e MovB
	GlobalVars[2] = var_74_bool; // 0x253f PopGE
	func_9540(var_71_float, var_72_float, var_73_int); // 0x2541 NEW_2
	return 0; // 0x2543 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_116_bool = 0; // 0x2 PushV
	func_9767(var_116_bool); // 0x3 NEW_2
	var_117_bool = var_116_bool == 0; // 0x5 Not
	if(var_117_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_11265(var_598_bool)
{
	var_600_int = 0; var_601_string = ""; // 0x2c02 PushV
	var_601_string = "ood3MladVlad1"; // 0x2c03 MovS
	func_10093(var_600_int, var_601_string); // 0x2c04 NEW_2
	var_602_int = 0; // 0x2c06 PushI
	var_603_bool = var_600_int == var_602_int; // 0x2c07 Eq
	if(var_603_bool == 0) goto Label_11275; // 0x2c08 JumpB
	var_598_bool = 1; // 0x2c09 MovB
	return 0; // 0x2c0a Return
	
Label_11275:
	var_598_bool = 0; // 0x2c0b MovB
	return 0; // 0x2c0c Return
}


func_9730(var_144_string, var_145_int)
{
	var_146_int = 0; var_147_int = 0; // 0x2602 PushV
	GetProperty(var_144_string, var_147_int); // 0x2603 ObjFunc
	var_148_int = var_147_int + var_145_int; // 0x2605 Add
	SetProperty(var_144_string, var_148_int); // 0x2606 ObjFunc
	return 2; // 0x2608 Return
}


func_10240(var_148_float)
{
	var_149_float = 0; var_150_float = 0; // 0x2800 PushV
	GetGameTime(var_150_float); // 0x2801 Func
	var_148_float = var_150_float; // 0x2803 Mov
	return 2; // 0x2804 Return
}


func_10245(var_221_int)
{
	var_222_float = 0; var_223_float = 0; // 0x2805 PushV
	GetGameTime(var_223_float); // 0x2806 Func
	var_224_int = 1; // 0x2808 PushI
	var_225_int = 0; // 0x2809 PushV
	var_226_int = 24; // 0x280a PushI
	var_225_int = var_223_float / var_223_float; // 0x280b Div2
	var_221_int = var_224_int + var_225_int; // 0x280c Add2
	return 2; // 0x280d Return
}


func_9737(var_165_bool, var_166_cvector)
{
	var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_bool = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_bool = 0; // 0x2609 PushV
	GetPosition(var_170_cvector); // 0x260a Func
	var_171_cvector = var_166_cvector - var_170_cvector; // 0x260c Sub2
	var_173_float = GetByIndex(var_171_cvector, 0); // 0x260d PushE
	var_174_float = GetByIndex(var_171_cvector, 2); // 0x260e PushE
	Rotate(var_173_float, var_174_float, var_172_bool); // 0x260f Func
	var_165_bool = var_172_bool; // 0x2611 Mov
	return 6; // 0x2612 Return
}


func_11788()
{
	var_205_object = Obj(); var_206_object = Obj(); // 0x2e0c PushV
	var_207_int = 137; // 0x2e0d PushI
	var_208_int = 1; // 0x2e0e PushI
	var_209_int = 515323; // 0x2e0f PushI
	CreateDiaryEntry(var_206_object, var_207_int, var_208_int, var_209_int); // 0x2e10 Func
	var_210_bool = 0; var_211_object = Obj(); var_212_int = 0; // 0x2e12 PushV
	var_211_object = var_206_object; // 0x2e13 Mov
	var_212_int = 20; // 0x2e14 MovI
	func_11983(var_210_bool, var_211_object, var_212_int); // 0x2e15 NEW_2
	return 2; // 0x2e17 Return
}


func_11277(var_609_bool)
{
	var_611_int = 0; var_612_string = ""; // 0x2c0e PushV
	var_612_string = "d3q02"; // 0x2c0f MovS
	func_10093(var_611_int, var_612_string); // 0x2c10 NEW_2
	var_613_int = 3; // 0x2c12 PushI
	var_614_bool = var_611_int == var_613_int; // 0x2c13 Eq
	if(var_614_bool == 0) goto Label_11287; // 0x2c14 JumpB
	var_609_bool = 1; // 0x2c15 MovB
	return 0; // 0x2c16 Return
	
Label_11287:
	var_609_bool = 0; // 0x2c17 MovB
	return 0; // 0x2c18 Return
}


func_13(var_0_bool, var_157_bool, var_158_cvector, var_159_cvector)
{
	var_161_bool = 0; var_162_bool = 0; // 0xd PushV
	var_0_bool = 1; // 0xe TMovB
	var_163_int = 21; // 0xf PushI
	var_164_float = 0.5; // 0x10 PushF
	SetTimer(var_163_int, var_164_float); // 0x11 Func
	
Label_19:
	var_165_bool = 0; var_166_cvector = CVector(0,0,0); // 0x13 PushV
	var_166_cvector = var_158_cvector; // 0x14 Mov
	func_9737(var_165_bool, var_166_cvector); // 0x15 NEW_2
	var_175_bool = var_165_bool == 0; // 0x17 Not
	if(var_175_bool == 0) goto Label_26; // 0x18 JumpB
	goto Label_19; // 0x19 Jump
	
Label_26:
	var_176_bool = 0; // 0x1a PushB
	MovePoint(var_158_cvector, var_176_bool, var_162_bool); // 0x1b Func
	var_177_bool = var_162_bool; // 0x1d Push
	if(var_177_bool == 0) goto Label_32; // 0x1e JumpB
	goto Label_33; // 0x1f Jump
	
Label_33:
	var_178_int = 20; // 0x21 PushI
	KillTimer(var_178_int); // 0x22 Func
	var_179_int = 21; // 0x24 PushI
	KillTimer(var_179_int); // 0x25 Func
	var_0_bool = 0; // 0x27 TMovB
	WaitForAnimEnd(var_162_bool); // 0x28 Func
	var_180_bool = var_162_bool == 0; // 0x2a Not
	if(var_180_bool == 0) goto Label_46; // 0x2b JumpB
	var_157_bool = 0; // 0x2c MovB
	return 2; // 0x2d Return
	
Label_46:
	var_181_float = GetByIndex(var_159_cvector, 0); // 0x2e PushE
	var_182_float = GetByIndex(var_159_cvector, 2); // 0x2f PushE
	Rotate(var_181_float, var_182_float, var_162_bool); // 0x30 Func
	var_183_bool = var_162_bool == 0; // 0x32 Not
	if(var_183_bool == 0) goto Label_54; // 0x33 JumpB
	var_157_bool = 0; // 0x34 MovB
	return 2; // 0x35 Return
	
Label_54:
	var_157_bool = 1; // 0x36 MovB
	return 2; // 0x37 Return
	
Label_32:
	goto Label_19; // 0x20 Jump
}


func_10254(var_324_bool, var_325_int)
{
	var_326_int = 0; // 0x280f PushV
	func_10245(var_326_int); // 0x2810 NEW_2
	var_324_bool = var_326_int == var_325_int; // 0x2812 Eq2
	return 0; // 0x2813 Return
}


func_9747(var_78_bool)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x2613 PushV
	GetPosition(var_81_cvector); // 0x2614 ObjFunc
	var_82_bool = 0; var_83_cvector = CVector(0,0,0); // 0x2616 PushV
	var_83_cvector = var_81_cvector; // 0x2617 Mov
	func_9737(var_82_bool, var_83_cvector); // 0x2618 NEW_2
	var_78_bool = var_82_bool; // 0x2619 Mov
	return 2; // 0x261b Return
}


func_10260(var_226_string, var_227_int)
{
	var_228_string = ""; var_229_string = ""; // 0x2814 PushV
	var_229_string = "idle"; // 0x2815 MovS
	var_230_int = var_227_int; // 0x2816 Push
	if(var_230_int == 0) goto Label_10265; // 0x2817 JumpB
	var_229_string = var_229_string + var_227_int; // 0x2818 Add2
	
Label_10265:
	var_226_string = var_229_string; // 0x2819 Mov
	return 2; // 0x281a Return
}


func_11801()
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x2e19 PushV
	var_114_int = 21; // 0x2e1a PushI
	var_115_int = 2; // 0x2e1b PushI
	var_116_int = 503361; // 0x2e1c PushI
	CreateDiaryEntry(var_113_object, var_114_int, var_115_int, var_116_int); // 0x2e1d Func
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0; // 0x2e1f PushV
	var_118_object = var_113_object; // 0x2e20 Mov
	var_119_int = -1; // 0x2e21 MovI
	func_11983(var_117_bool, var_118_object, var_119_int); // 0x2e22 NEW_2
	return 2; // 0x2e24 Return
}


func_11289(var_622_bool)
{
	var_624_int = 0; var_625_string = ""; // 0x2c1a PushV
	var_625_string = "d3q02"; // 0x2c1b MovS
	func_10093(var_624_int, var_625_string); // 0x2c1c NEW_2
	var_626_int = 4; // 0x2c1e PushI
	var_627_bool = var_624_int == var_626_int; // 0x2c1f Eq
	if(var_627_bool == 0) goto Label_11299; // 0x2c20 JumpB
	var_622_bool = 1; // 0x2c21 MovB
	return 0; // 0x2c22 Return
	
Label_11299:
	var_622_bool = 0; // 0x2c23 MovB
	return 0; // 0x2c24 Return
}


func_10267(var_220_int)
{
	var_221_int = 0; var_222_bool = 0; var_223_int = 0; var_224_bool = 0; // 0x281b PushV
	var_223_int = 0; // 0x281c MovI
	
Label_10269:
	var_225_string = "all"; // 0x281d PushS
	var_226_string = ""; var_227_int = 0; // 0x281e PushV
	var_227_int = var_223_int; // 0x281f Mov
	func_10260(var_226_string, var_227_int); // 0x2820 NEW_2
	HasAnimation(var_224_bool, var_225_string, var_226_string); // 0x2822 Func
	var_231_bool = var_224_bool == 0; // 0x2824 Not
	if(var_231_bool == 0) goto Label_10279; // 0x2825 JumpB
	goto Label_10282; // 0x2826 Jump
	
Label_10282:
	var_220_int = var_223_int; // 0x282a Mov
	return 4; // 0x282b Return
	
Label_10279:
	var_232_int = 1; // 0x2827 PushI
	var_223_int = var_223_int + var_232_int; // 0x2828 Add2
	goto Label_10269; // 0x2829 Jump
}


func_9756()
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); // 0x261c PushV
	GetPosition(var_108_cvector); // 0x261d ObjFunc
	GetPosition(var_109_cvector); // 0x261f Func
	var_110_cvector = var_108_cvector - var_109_cvector; // 0x2621 Sub2
	var_111_float = GetByIndex(var_110_cvector, 0); // 0x2622 PushE
	var_112_float = GetByIndex(var_110_cvector, 2); // 0x2623 PushE
	RotateAsync(var_111_float, var_112_float); // 0x2624 Func
	return 6; // 0x2626 Return
}


func_542(var_2_object, var_394_string)
{
	var_395_bool = 0; // 0x21f PushV
	func_10306(var_395_bool); // 0x220 NEW_2
	var_396_bool = var_395_bool == 0; // 0x222 Not
	if(var_396_bool == 0) goto Label_549; // 0x223 JumpB
	return 0; // 0x224 Return
	
Label_549:
	var_397_bool = var_394_string == var_2_object; // 0x225 Eq
	if(var_397_bool == 0) goto Label_552; // 0x226 JumpB
	return 0; // 0x227 Return
	
Label_552:
	var_398_string = ""; var_399_bool = 0; // 0x228 PushV
	var_398_string = var_394_string; // 0x229 Mov
	var_400_string = ""; // 0x22a PushS
	var_401_bool = var_394_string == var_400_string; // 0x22b Eq
	if(var_401_bool == 0) goto Label_559; // 0x22c JumpB
	var_399_bool = 0; // 0x22d MovB
	goto Label_560; // 0x22e Jump
	
Label_560:
	func_10011(var_398_string, var_399_bool); // 0x230 NEW_2
	var_2_object = var_394_string; // 0x232 TMov
	return 0; // 0x233 Return
	
Label_559:
	var_399_bool = 1; // 0x22f MovB
}


func_11301(var_702_bool)
{
	var_704_int = 0; var_705_string = ""; // 0x2c26 PushV
	var_705_string = "d4q01"; // 0x2c27 MovS
	func_10093(var_704_int, var_705_string); // 0x2c28 NEW_2
	var_706_int = 2; // 0x2c2a PushI
	var_707_bool = var_704_int == var_706_int; // 0x2c2b Eq
	if(var_707_bool == 0) goto Label_11311; // 0x2c2c JumpB
	var_702_bool = 1; // 0x2c2d MovB
	return 0; // 0x2c2e Return
	
Label_11311:
	var_702_bool = 0; // 0x2c2f MovB
	return 0; // 0x2c30 Return
}


func_11814()
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x2e26 PushV
	var_137_int = 92; // 0x2e27 PushI
	var_138_int = 2; // 0x2e28 PushI
	var_139_int = 512174; // 0x2e29 PushI
	CreateDiaryEntry(var_136_object, var_137_int, var_138_int, var_139_int); // 0x2e2a Func
	var_140_bool = 0; var_141_object = Obj(); var_142_int = 0; // 0x2e2c PushV
	var_141_object = var_136_object; // 0x2e2d Mov
	var_142_int = 21; // 0x2e2e MovI
	func_11983(var_140_bool, var_141_object, var_142_int); // 0x2e2f NEW_2
	return 2; // 0x2e31 Return
}


func_9767(var_112_bool)
{
	var_113_bool = 0; var_114_bool = 0; // 0x2627 PushV
	IsLoaded(var_114_bool); // 0x2628 Func
	var_112_bool = var_114_bool; // 0x262a Mov
	return 2; // 0x262b Return
}


func_10795()
{
	var_244_string = "ood4MladVlad3"; // 0x2a2c PushS
	var_245_int = 1; // 0x2a2d PushI
	SetVariable(var_244_string, var_245_int); // 0x2a2e Func
	return 0; // 0x2a30 Return
}


func_9772(var_106_bool, var_108_float)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0; var_126_bool = 0; // 0x262c PushV
	GetPosition(var_119_cvector); // 0x262d ObjFunc
	GetEyesHeight(var_118_float); // 0x262f ObjFunc
	var_127_float = GetByIndex(var_119_cvector, 1); // 0x2631 PushE
	var_127_float = var_127_float + var_118_float; // 0x2632 Add2
	SetByIndex(var_119_cvector, 1) = var_127_float; // 0x2633 PopE
	GetPosition(var_120_cvector); // 0x2634 Func
	GetEyesHeight(var_118_float); // 0x2636 Func
	var_128_float = GetByIndex(var_120_cvector, 1); // 0x2638 PushE
	var_128_float = var_128_float + var_118_float; // 0x2639 Add2
	SetByIndex(var_120_cvector, 1) = var_128_float; // 0x263a PopE
	var_121_cvector = var_119_cvector - var_120_cvector; // 0x263b Sub2
	var_129_float = GetByIndex(var_121_cvector, 1); // 0x263c PushE
	var_129_float = 0; // 0x263d MovI
	SetByIndex(var_121_cvector, 1) = var_129_float; // 0x263e PopE
	var_130_int = var_121_cvector | var_121_cvector; // 0x263f Or
	var_131_float = sqrt(var_130_int); // 0x2640 Sqrt
	var_121_cvector = var_121_cvector / var_121_cvector; // 0x2641 Div2
	var_122_cvector = -var_121_cvector; // 0x2642 Neg2
	var_132_float = var_121_cvector * var_108_float; // 0x2643 Mult
	var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); // 0x2644 PushV
	var_135_cvector = CVector(0.0, 1.0, 0.0); // 0x2645 PushVec
	var_134_cvector = var_122_cvector ^ var_135_cvector; // 0x2646 Xor2
	func_10054(var_133_cvector, var_134_cvector); // 0x2647 NEW_2
	var_141_int = 25; // 0x2649 PushI
	var_142_float = var_133_cvector * var_141_int; // 0x264a Mult
	var_143_int = var_132_float + var_142_float; // 0x264b Add
	var_144_cvector = CVector(0.0, 10.0, 0.0); // 0x264c PushVec
	var_123_cvector = var_143_int - var_144_cvector; // 0x264d Sub2
	var_124_cvector = var_120_cvector + var_123_cvector; // 0x264e Add2
	IsOverrideActive(var_125_bool); // 0x264f Func
	var_145_bool = var_125_bool; // 0x2651 Push
	if(var_145_bool == 0) goto Label_9813; // 0x2652 JumpB
	var_106_bool = 0; // 0x2653 MovB
	return 18; // 0x2654 Return
	
Label_9813:
	StopWorld(); // 0x2655 Func
	CameraTransit(var_124_cvector, var_122_cvector); // 0x2657 Func
	var_146_float = GetByIndex(var_123_cvector, 0); // 0x2659 PushE
	var_147_float = GetByIndex(var_123_cvector, 2); // 0x265a PushE
	Rotate(var_146_float, var_147_float); // 0x265b Func
	var_148_bool = 0; // 0x265d PushV
	func_10306(var_148_bool); // 0x265e NEW_2
	if(var_148_bool == 0) goto Label_9826; // 0x2660 JumpB
	goto Label_9834; // 0x2661 Jump
	
Label_9834:
	CameraWaitForPlayFinish(); // 0x266a Func
	ResumeWorld(); // 0x266c Func
	var_106_bool = 1; // 0x266e MovB
	return 18; // 0x266f Return
	
Label_9826:
	var_149_string = "head"; // 0x2662 PushS
	HasAnimationTrack(var_126_bool, var_149_string); // 0x2663 Func
	var_150_bool = var_126_bool; // 0x2665 Push
	if(var_150_bool == 0) goto Label_9834; // 0x2666 JumpB
	var_151_string = "head"; // 0x2667 PushS
	LookAsyncCamera(var_151_string); // 0x2668 Func
}


func_8236(var_2_object, var_1057_string)
{
	var_1058_bool = 0; // 0x202d PushV
	func_10306(var_1058_bool); // 0x202e NEW_2
	var_1059_bool = var_1058_bool == 0; // 0x2030 Not
	if(var_1059_bool == 0) goto Label_8243; // 0x2031 JumpB
	return 0; // 0x2032 Return
	
Label_8243:
	var_1060_bool = var_1057_string == var_2_object; // 0x2033 Eq
	if(var_1060_bool == 0) goto Label_8246; // 0x2034 JumpB
	return 0; // 0x2035 Return
	
Label_8246:
	var_1061_string = ""; var_1062_bool = 0; // 0x2036 PushV
	var_1061_string = var_1057_string; // 0x2037 Mov
	var_1063_string = ""; // 0x2038 PushS
	var_1064_bool = var_1057_string == var_1063_string; // 0x2039 Eq
	if(var_1064_bool == 0) goto Label_8253; // 0x203a JumpB
	var_1062_bool = 0; // 0x203b MovB
	goto Label_8254; // 0x203c Jump
	
Label_8254:
	func_10011(var_1061_string, var_1062_bool); // 0x203e NEW_2
	var_2_object = var_1057_string; // 0x2040 TMov
	return 0; // 0x2041 Return
	
Label_8253:
	var_1062_bool = 1; // 0x203d MovB
}


func_10284(var_102_string, var_103_int)
{
	var_104_int = 0; // 0x282d PushI
	var_105_bool = var_103_int == var_104_int; // 0x282e Eq
	if(var_105_bool == 0) goto Label_10292; // 0x282f JumpB
	var_106_string = "pt_"; // 0x2830 PushS
	var_107_string = GlobalVars[0]; // 0x2831 PushGE
	var_102_string = var_106_string + var_107_string; // 0x2832 Add2
	goto Label_10296; // 0x2833 Jump
	
Label_10296:
	return 0; // 0x2838 Return
	
Label_10292:
	var_108_string = "pt_"; // 0x2834 PushS
	var_109_string = GlobalVars[0]; // 0x2835 PushGE
	var_110_int = var_108_string + var_109_string; // 0x2836 Add
	var_102_string = var_110_int + var_103_int; // 0x2837 Add2
}


func_11313(var_736_bool)
{
	var_738_int = 0; var_739_string = ""; // 0x2c32 PushV
	var_739_string = "ood4MladVlad1"; // 0x2c33 MovS
	func_10093(var_738_int, var_739_string); // 0x2c34 NEW_2
	var_740_int = 0; // 0x2c36 PushI
	var_741_bool = var_738_int == var_740_int; // 0x2c37 Eq
	if(var_741_bool == 0) goto Label_11323; // 0x2c38 JumpB
	var_736_bool = 1; // 0x2c39 MovB
	return 0; // 0x2c3a Return
	
Label_11323:
	var_736_bool = 0; // 0x2c3b MovB
	return 0; // 0x2c3c Return
}


func_10801()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x2a31 PushV
	var_88_object = Obj(); // 0x2a32 PushV
	func_12011(var_88_object); // 0x2a33 NEW_2
	var_87_object = var_88_object; // 0x2a34 Mov
	var_95_string = "d6q02MladVladGotoBigVlad"; // 0x2a36 PushS
	var_96_string = "pt_map_bigvlad"; // 0x2a37 PushS
	var_97_int = 0; // 0x2a38 PushI
	var_98_int = 515378; // 0x2a39 PushI
	var_99_float = 0; // 0x2a3a PushV
	func_10240(var_99_float); // 0x2a3b NEW_2
	AddMark(var_95_string, var_96_string, var_97_int, var_98_int, var_99_float); // 0x2a3d ObjFunc
	var_102_string = "d6q02MladVladGotoBigVladSelf"; // 0x2a3f PushS
	var_103_string = "pt_map_mladvlad"; // 0x2a40 PushS
	var_104_int = 0; // 0x2a41 PushI
	var_105_int = 515379; // 0x2a42 PushI
	var_106_float = 0; // 0x2a43 PushV
	func_10240(var_106_float); // 0x2a44 NEW_2
	AddMark(var_102_string, var_103_string, var_104_int, var_105_int, var_106_float); // 0x2a46 ObjFunc
	func_11853(); // 0x2a49 NEW_2
	func_11879(); // 0x2a4c NEW_2
	var_138_object = Obj(); var_139_string = ""; // 0x2a4e PushV
	var_139_string = "quest_d6_02"; // 0x2a4f MovS
	func_10098(var_138_object, var_139_string); // 0x2a50 NEW_2
	var_146_bool = 0; var_147_string = ""; var_148_string = ""; // 0x2a52 PushV
	var_147_string = "quest_d6_02"; // 0x2a53 MovS
	var_148_string = "place_trigger"; // 0x2a54 MovS
	func_10228(var_146_bool, var_147_string, var_148_string); // 0x2a55 NEW_2
	return 2; // 0x2a57 Return
}


func_8753(var_2_object, var_1370_string)
{
	var_1371_bool = 0; // 0x2232 PushV
	func_10306(var_1371_bool); // 0x2233 NEW_2
	var_1372_bool = var_1371_bool == 0; // 0x2235 Not
	if(var_1372_bool == 0) goto Label_8760; // 0x2236 JumpB
	return 0; // 0x2237 Return
	
Label_8760:
	var_1373_bool = var_1370_string == var_2_object; // 0x2238 Eq
	if(var_1373_bool == 0) goto Label_8763; // 0x2239 JumpB
	return 0; // 0x223a Return
	
Label_8763:
	var_1374_string = ""; var_1375_bool = 0; // 0x223b PushV
	var_1374_string = var_1370_string; // 0x223c Mov
	var_1376_string = ""; // 0x223d PushS
	var_1377_bool = var_1370_string == var_1376_string; // 0x223e Eq
	if(var_1377_bool == 0) goto Label_8770; // 0x223f JumpB
	var_1375_bool = 0; // 0x2240 MovB
	goto Label_8771; // 0x2241 Jump
	
Label_8771:
	func_10011(var_1374_string, var_1375_bool); // 0x2243 NEW_2
	var_2_object = var_1370_string; // 0x2245 TMov
	return 0; // 0x2246 Return
	
Label_8770:
	var_1375_bool = 1; // 0x2242 MovB
}


func_11827()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x2e33 PushV
	var_108_int = 154; // 0x2e34 PushI
	var_109_int = 2; // 0x2e35 PushI
	var_110_int = 515365; // 0x2e36 PushI
	CreateDiaryEntry(var_107_object, var_108_int, var_109_int, var_110_int); // 0x2e37 Func
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; // 0x2e39 PushV
	var_112_object = var_107_object; // 0x2e3a Mov
	var_113_int = -1; // 0x2e3b MovI
	func_11983(var_111_bool, var_112_object, var_113_int); // 0x2e3c NEW_2
	return 2; // 0x2e3e Return
}


func_2614(var_0_bool, var_551_int, var_552_object)
{
	var_554_object = Obj(); var_555_bool = 0; var_556_int = 0; var_557_bool = 0; var_558_object = Obj(); var_559_bool = 0; var_560_int = 0; var_561_bool = 0; // 0xa36 PushV
	var_0_bool = var_552_object; // 0xa37 TMov
	var_562_bool = 0; var_563_object = Obj(); var_564_float = 0; // 0xa38 PushV
	var_563_object = var_552_object; // 0xa39 Mov
	var_564_float = 70.0; // 0xa3a MovF
	func_9772(var_563_object, var_564_float); // 0xa3b NEW_2
	var_565_bool = var_562_bool == 0; // 0xa3d Not
	if(var_565_bool == 0) goto Label_2625; // 0xa3e JumpB
	var_551_int = -2; // 0xa3f MovI
	return 8; // 0xa40 Return
	
Label_2625:
	CreateDialog(var_558_object); // 0xa41 Func
	var_566_int = 0; // 0xa43 PushV
	func_10300(var_566_int); // 0xa44 NEW_2
	SetNPCName(var_566_int); // 0xa46 ObjFunc
	var_567_int = 0; // 0xa48 PushV
	func_10298(var_567_int); // 0xa49 NEW_2
	SetNPCDescription(var_567_int); // 0xa4b ObjFunc
	var_568_string = ""; // 0xa4d PushV
	func_10302(var_568_string); // 0xa4e NEW_2
	SetPhoto(var_568_string); // 0xa50 ObjFunc
	var_569_string = ""; // 0xa52 PushV
	func_10304(var_569_string); // 0xa53 NEW_2
	SetPhoto2(var_569_string); // 0xa55 ObjFunc
	var_570_int = 0; // 0xa57 PushV
	func_12061(var_570_int); // 0xa58 NEW_2
	SetPlayerName(var_570_int); // 0xa5a ObjFunc
	var_560_int = -1; // 0xa5c MovI
	IsOverrideActive(var_559_bool); // 0xa5d Func
	var_571_bool = var_559_bool; // 0xa5f Push
	if(var_571_bool == 0) goto Label_2659; // 0xa60 JumpB
	var_551_int = -2; // 0xa61 MovI
	return 8; // 0xa62 Return
	
Label_2659:
	DoDialog(var_558_object); // 0xa63 Func
	var_572_bool = 0; var_573_object = Obj(); // 0xa65 PushV
	var_574_object = Obj(); // 0xa66 PushV
	func_10048(var_574_object); // 0xa67 NEW_2
	var_573_object = var_574_object; // 0xa68 Mov
	func_9857(var_572_bool, var_573_object); // 0xa6a NEW_2
	var_575_object = Obj(); var_576_object = Obj(); // 0xa6c PushV
	var_575_object = var_552_object; // 0xa6d Mov
	var_576_object = var_558_object; // 0xa6e Mov
	TaskCall(13); // 0xa6f TaskCall
	func_2695(var_577_object, var_578_object, var_579_string, var_580_bool, var_575_object, var_576_object); // 0xa70 NEW_2
	TaskReturn(); // 0xa71 TaskReturn
	IsDialogEnd(var_561_bool); // 0xa73 ObjFunc
	
Label_2677:
	var_660_bool = var_561_bool == 0; // 0xa75 Not
	if(var_660_bool == 0) goto Label_2684; // 0xa76 JumpB
	sync(); // 0xa77 Func
	IsDialogEnd(var_561_bool); // 0xa79 ObjFunc
	goto Label_2677; // 0xa7b Jump
	
Label_2684:
	var_661_object = Obj(); // 0xa7c PushV
	var_661_object = var_552_object; // 0xa7d Mov
	func_9840(); // 0xa7e NEW_2
	StopDialog(var_558_object); // 0xa80 Func
	GetReturnValue(var_560_int); // 0xa82 ObjFunc
	var_551_int = var_560_int; // 0xa84 Mov
	return 8; // 0xa85 Return
}


func_10298(var_154_int)
{
	var_154_int = 515547; // 0x283a MovI
	return 0; // 0x283b Return
}


func_10300(var_153_int)
{
	var_153_int = 502872; // 0x283c MovI
	return 0; // 0x283d Return
}


func_11325(var_696_bool)
{
	var_698_int = 0; var_699_string = ""; // 0x2c3e PushV
	var_699_string = "ood4MladVlad2"; // 0x2c3f MovS
	func_10093(var_698_int, var_699_string); // 0x2c40 NEW_2
	var_700_int = 0; // 0x2c42 PushI
	var_701_bool = var_698_int == var_700_int; // 0x2c43 Eq
	if(var_701_bool == 0) goto Label_11335; // 0x2c44 JumpB
	var_696_bool = 1; // 0x2c45 MovB
	return 0; // 0x2c46 Return
	
Label_11335:
	var_696_bool = 0; // 0x2c47 MovB
	return 0; // 0x2c48 Return
}


func_10302(var_155_string)
{
	var_155_string = "ui/NPC_MladVlad.png"; // 0x283e MovS
	return 0; // 0x283f Return
}


func_10304(var_156_string)
{
	var_156_string = "ui/NPC_MladVlad_b.png"; // 0x2840 MovS
	return 0; // 0x2841 Return
}


func_11840()
{
	var_129_object = Obj(); var_130_object = Obj(); // 0x2e40 PushV
	var_131_int = 155; // 0x2e41 PushI
	var_132_int = 2; // 0x2e42 PushI
	var_133_int = 515366; // 0x2e43 PushI
	CreateDiaryEntry(var_130_object, var_131_int, var_132_int, var_133_int); // 0x2e44 Func
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0; // 0x2e46 PushV
	var_135_object = var_130_object; // 0x2e47 Mov
	var_136_int = 154; // 0x2e48 MovI
	func_11983(var_134_bool, var_135_object, var_136_int); // 0x2e49 NEW_2
	return 2; // 0x2e4b Return
}


func_10306(var_148_bool)
{
	var_148_bool = 1; // 0x2842 MovB
	return 0; // 0x2843 Return
}


func_10308(var_88_object)
{
	var_90_string = "money 4000 is given"; // 0x2845 PushS
	Trace(var_90_string); // 0x2846 Func
	var_91_object = Obj(); var_92_int = 0; // 0x2848 PushV
	var_91_object = var_88_object; // 0x2849 Mov
	var_92_int = 4000; // 0x284a MovI
	func_10132(var_91_object, var_92_int); // 0x284b NEW_2
	return 0; // 0x284d Return
}


func_11337(var_754_bool)
{
	var_756_int = 0; var_757_string = ""; // 0x2c4a PushV
	var_757_string = "d4q02"; // 0x2c4b MovS
	func_10093(var_756_int, var_757_string); // 0x2c4c NEW_2
	var_758_int = 1000; // 0x2c4e PushI
	var_759_bool = var_756_int == var_758_int; // 0x2c4f Eq
	if(var_759_bool == 0) goto Label_11347; // 0x2c50 JumpB
	var_754_bool = 1; // 0x2c51 MovB
	return 0; // 0x2c52 Return
	
Label_11347:
	var_754_bool = 0; // 0x2c53 MovB
	return 0; // 0x2c54 Return
}


func_3659(var_0_bool, var_1_object, var_2_object, var_3_object, var_688_object, var_689_object)
{
	var_0_bool = var_689_object; // 0xe4c TMov
	var_1_object = var_688_object; // 0xe4d TMov
	var_3_object = 0; // 0xe4e TMovB
	var_694_int = 1; // 0xe4f PushI
	if(var_694_int == 0) goto Label_3766; // 0xe50 JumpB
	var_695_bool = 0; // 0xe51 PushV
	var_695_bool = 0; // 0xe52 MovB
	var_696_bool = 0; var_697_object = Obj(); // 0xe53 PushV
	var_697_object = var_1_object; // 0xe54 MovT
	func_11325(var_697_object); // 0xe55 NEW_2
	if(var_696_bool == 0) goto Label_3679; // 0xe57 JumpB
	var_702_bool = 0; var_703_object = Obj(); // 0xe58 PushV
	var_703_object = var_1_object; // 0xe59 MovT
	func_11301(var_703_object); // 0xe5a NEW_2
	var_708_bool = var_702_bool == 0; // 0xe5c Not
	if(var_708_bool == 0) goto Label_3679; // 0xe5d JumpB
	var_695_bool = 1; // 0xe5e MovB
	
Label_3679:
	if(var_695_bool == 0) goto Label_3700; // 0xe5f JumpB
	var_709_object = Obj(); var_710_object = Obj(); // 0xe60 PushV
	var_709_object = var_1_object; // 0xe61 MovT
	var_710_object = var_0_bool; // 0xe62 MovT
	func_10450(); // 0xe63 NEW_2
	var_713_string = ""; // 0xe65 PushV
	var_713_string = "Neutral"; // 0xe66 MovS
	func_3796(var_689_object, var_713_string); // 0xe67 NEW_2
	var_721_int = 511395; // 0xe69 PushI
	SetMessage(var_721_int); // 0xe6a TObjFunc
	ClearReplies(); // 0xe6c TObjFunc
	var_722_int = 511396; // 0xe6e PushI
	var_723_int = 12594; // 0xe6f PushI
	var_724_int = 12593; // 0xe70 PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0xe71 TObjFunc
	goto Label_3766; // 0xe73 Jump
	
Label_3766:
	var_725_bool = 0; // 0xeb6 PushV
	func_10306(var_725_bool); // 0xeb7 NEW_2
	if(var_725_bool == 0) goto Label_3781; // 0xeb9 JumpB
	
Label_3770:
	lshWaitForAnimEnd(); // 0xeba Func
	var_726_object = var_3_object; // 0xebc PushT
	if(var_726_object == 0) goto Label_3775; // 0xebd JumpB
	goto Label_3780; // 0xebe Jump
	
Label_3780:
	goto Label_3795; // 0xec4 Jump
	
Label_3795:
	return 0; // 0xed3 Return
	
Label_3775:
	var_727_string = ""; // 0xebf PushV
	var_727_string = var_2_object; // 0xec0 MovT
	func_9995(var_727_string); // 0xec1 NEW_2
	goto Label_3770; // 0xec3 Jump
	
Label_3781:
	var_728_string = "all"; // 0xec5 PushS
	var_729_string = "idle"; // 0xec6 PushS
	PlayAnimation(var_728_string, var_729_string); // 0xec7 Func
	
Label_3785:
	WaitForAnimEnd(); // 0xec9 Func
	var_730_object = var_3_object; // 0xecb PushT
	if(var_730_object == 0) goto Label_3790; // 0xecc JumpB
	goto Label_3795; // 0xecd Jump
	
Label_3790:
	var_731_string = "all"; // 0xece PushS
	var_732_string = "idle"; // 0xecf PushS
	PlayAnimation(var_731_string, var_732_string); // 0xed0 Func
	goto Label_3785; // 0xed2 Jump
	
Label_3700:
	var_733_string = ""; // 0xe74 PushV
	var_733_string = "Neutral"; // 0xe75 MovS
	func_3796(var_689_object, var_733_string); // 0xe76 NEW_2
	var_734_int = 510814; // 0xe78 PushI
	SetMessage(var_734_int); // 0xe79 TObjFunc
	ClearReplies(); // 0xe7b TObjFunc
	var_735_bool = 0; // 0xe7d PushV
	var_735_bool = 0; // 0xe7e MovB
	var_736_bool = 0; var_737_object = Obj(); // 0xe7f PushV
	var_737_object = var_1_object; // 0xe80 MovT
	func_11313(var_737_object); // 0xe81 NEW_2
	if(var_736_bool == 0) goto Label_3722; // 0xe83 JumpB
	var_742_bool = 0; var_743_object = Obj(); // 0xe84 PushV
	var_743_object = var_1_object; // 0xe85 MovT
	func_11301(var_743_object); // 0xe86 NEW_2
	if(var_742_bool == 0) goto Label_3722; // 0xe88 JumpB
	var_735_bool = 1; // 0xe89 MovB
	
Label_3722:
	if(var_735_bool == 0) goto Label_3728; // 0xe8a JumpB
	var_744_int = 510815; // 0xe8b PushI
	var_745_int = 11956; // 0xe8c PushI
	var_746_int = 11955; // 0xe8d PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0xe8e TObjFunc
	
Label_3728:
	var_747_bool = 0; // 0xe90 PushV
	var_747_bool = 0; // 0xe91 MovB
	var_748_bool = 0; var_749_object = Obj(); // 0xe92 PushV
	var_749_object = var_1_object; // 0xe93 MovT
	func_11349(var_749_object); // 0xe94 NEW_2
	if(var_748_bool == 0) goto Label_3741; // 0xe96 JumpB
	var_754_bool = 0; var_755_object = Obj(); // 0xe97 PushV
	var_755_object = var_1_object; // 0xe98 MovT
	func_11337(var_755_object); // 0xe99 NEW_2
	if(var_754_bool == 0) goto Label_3741; // 0xe9b JumpB
	var_747_bool = 1; // 0xe9c MovB
	
Label_3741:
	if(var_747_bool == 0) goto Label_3747; // 0xe9d JumpB
	var_760_int = 511862; // 0xe9e PushI
	var_761_int = 37886; // 0xe9f PushI
	var_762_int = 13075; // 0xea0 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0xea1 TObjFunc
	
Label_3747:
	var_763_bool = 0; var_764_object = Obj(); // 0xea3 PushV
	var_764_object = var_1_object; // 0xea4 MovT
	func_11671(var_763_bool, var_764_object); // 0xea5 NEW_2
	var_765_bool = var_763_bool == 0; // 0xea7 Not
	if(var_765_bool == 0) goto Label_3758; // 0xea8 JumpB
	var_766_int = 520901; // 0xea9 PushI
	var_767_int = 22119; // 0xeaa PushI
	var_768_int = 22118; // 0xeab PushI
	AddReply(var_766_int, var_767_int, var_768_int); // 0xeac TObjFunc
	
Label_3758:
	var_769_int = 511408; // 0xeae PushI
	var_770_int = -1; // 0xeaf PushI
	var_771_int = 12605; // 0xeb0 PushI
	AddReply(var_769_int, var_770_int, var_771_int); // 0xeb1 TObjFunc
	goto Label_3766; // 0xeb3 Jump
}


func_1612(var_0_bool, var_1_object, var_2_object, var_3_object, var_1497_object, var_1498_object)
{
	var_0_bool = var_1498_object; // 0x64d TMov
	var_1_object = var_1497_object; // 0x64e TMov
	var_3_object = 0; // 0x64f TMovB
	var_1503_int = 1; // 0x650 PushI
	if(var_1503_int == 0) goto Label_1640; // 0x651 JumpB
	var_1504_string = ""; // 0x652 PushV
	var_1504_string = "Neutral"; // 0x653 MovS
	func_1670(var_1498_object, var_1504_string); // 0x654 NEW_2
	var_1512_int = 535677; // 0x656 PushI
	SetMessage(var_1512_int); // 0x657 TObjFunc
	ClearReplies(); // 0x659 TObjFunc
	var_1513_int = 535678; // 0x65b PushI
	var_1514_int = 42150; // 0x65c PushI
	var_1515_int = 37364; // 0x65d PushI
	AddReply(var_1513_int, var_1514_int, var_1515_int); // 0x65e TObjFunc
	var_1516_int = 540005; // 0x660 PushI
	var_1517_int = -1; // 0x661 PushI
	var_1518_int = 41976; // 0x662 PushI
	AddReply(var_1516_int, var_1517_int, var_1518_int); // 0x663 TObjFunc
	goto Label_1640; // 0x665 Jump
	
Label_1640:
	var_1519_bool = 0; // 0x668 PushV
	func_10306(var_1519_bool); // 0x669 NEW_2
	if(var_1519_bool == 0) goto Label_1655; // 0x66b JumpB
	
Label_1644:
	lshWaitForAnimEnd(); // 0x66c Func
	var_1520_object = var_3_object; // 0x66e PushT
	if(var_1520_object == 0) goto Label_1649; // 0x66f JumpB
	goto Label_1654; // 0x670 Jump
	
Label_1654:
	goto Label_1669; // 0x676 Jump
	
Label_1669:
	return 0; // 0x685 Return
	
Label_1649:
	var_1521_string = ""; // 0x671 PushV
	var_1521_string = var_2_object; // 0x672 MovT
	func_9995(var_1521_string); // 0x673 NEW_2
	goto Label_1644; // 0x675 Jump
	
Label_1655:
	var_1522_string = "all"; // 0x677 PushS
	var_1523_string = "idle"; // 0x678 PushS
	PlayAnimation(var_1522_string, var_1523_string); // 0x679 Func
	
Label_1659:
	WaitForAnimEnd(); // 0x67b Func
	var_1524_object = var_3_object; // 0x67d PushT
	if(var_1524_object == 0) goto Label_1664; // 0x67e JumpB
	goto Label_1669; // 0x67f Jump
	
Label_1664:
	var_1525_string = "all"; // 0x680 PushS
	var_1526_string = "idle"; // 0x681 PushS
	PlayAnimation(var_1525_string, var_1526_string); // 0x682 Func
	goto Label_1659; // 0x684 Jump
}


func_11853()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x2e4d PushV
	var_109_int = 102; // 0x2e4e PushI
	var_110_int = 2; // 0x2e4f PushI
	var_111_int = 513725; // 0x2e50 PushI
	CreateDiaryEntry(var_108_object, var_109_int, var_110_int, var_111_int); // 0x2e51 Func
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0; // 0x2e53 PushV
	var_113_object = var_108_object; // 0x2e54 Mov
	var_114_int = -1; // 0x2e55 MovI
	func_11983(var_112_bool, var_113_object, var_114_int); // 0x2e56 NEW_2
	return 2; // 0x2e58 Return
}


func_10318(var_167_object)
{
	var_169_string = "money20000 is given"; // 0x284f PushS
	Trace(var_169_string); // 0x2850 Func
	var_170_object = Obj(); var_171_int = 0; // 0x2852 PushV
	var_170_object = var_167_object; // 0x2853 Mov
	var_171_int = 20000; // 0x2854 MovI
	func_10132(var_170_object, var_171_int); // 0x2855 NEW_2
	return 0; // 0x2857 Return
}


func_11349(var_748_bool)
{
	var_750_int = 0; var_751_string = ""; // 0x2c56 PushV
	var_751_string = "ood4MladVlad3"; // 0x2c57 MovS
	func_10093(var_750_int, var_751_string); // 0x2c58 NEW_2
	var_752_int = 0; // 0x2c5a PushI
	var_753_bool = var_750_int == var_752_int; // 0x2c5b Eq
	if(var_753_bool == 0) goto Label_11359; // 0x2c5c JumpB
	var_748_bool = 1; // 0x2c5d MovB
	return 0; // 0x2c5e Return
	
Label_11359:
	var_748_bool = 0; // 0x2c5f MovB
	return 0; // 0x2c60 Return
}


func_2134(var_0_bool, var_480_int, var_481_object)
{
	var_483_object = Obj(); var_484_bool = 0; var_485_int = 0; var_486_bool = 0; var_487_object = Obj(); var_488_bool = 0; var_489_int = 0; var_490_bool = 0; // 0x856 PushV
	var_0_bool = var_481_object; // 0x857 TMov
	var_491_bool = 0; var_492_object = Obj(); var_493_float = 0; // 0x858 PushV
	var_492_object = var_481_object; // 0x859 Mov
	var_493_float = 70.0; // 0x85a MovF
	func_9772(var_492_object, var_493_float); // 0x85b NEW_2
	var_494_bool = var_491_bool == 0; // 0x85d Not
	if(var_494_bool == 0) goto Label_2145; // 0x85e JumpB
	var_480_int = -2; // 0x85f MovI
	return 8; // 0x860 Return
	
Label_2145:
	CreateDialog(var_487_object); // 0x861 Func
	var_495_int = 0; // 0x863 PushV
	func_10300(var_495_int); // 0x864 NEW_2
	SetNPCName(var_495_int); // 0x866 ObjFunc
	var_496_int = 0; // 0x868 PushV
	func_10298(var_496_int); // 0x869 NEW_2
	SetNPCDescription(var_496_int); // 0x86b ObjFunc
	var_497_string = ""; // 0x86d PushV
	func_10302(var_497_string); // 0x86e NEW_2
	SetPhoto(var_497_string); // 0x870 ObjFunc
	var_498_string = ""; // 0x872 PushV
	func_10304(var_498_string); // 0x873 NEW_2
	SetPhoto2(var_498_string); // 0x875 ObjFunc
	var_499_int = 0; // 0x877 PushV
	func_12061(var_499_int); // 0x878 NEW_2
	SetPlayerName(var_499_int); // 0x87a ObjFunc
	var_489_int = -1; // 0x87c MovI
	IsOverrideActive(var_488_bool); // 0x87d Func
	var_500_bool = var_488_bool; // 0x87f Push
	if(var_500_bool == 0) goto Label_2179; // 0x880 JumpB
	var_480_int = -2; // 0x881 MovI
	return 8; // 0x882 Return
	
Label_2179:
	DoDialog(var_487_object); // 0x883 Func
	var_501_bool = 0; var_502_object = Obj(); // 0x885 PushV
	var_503_object = Obj(); // 0x886 PushV
	func_10048(var_503_object); // 0x887 NEW_2
	var_502_object = var_503_object; // 0x888 Mov
	func_9857(var_501_bool, var_502_object); // 0x88a NEW_2
	var_504_object = Obj(); var_505_object = Obj(); // 0x88c PushV
	var_504_object = var_481_object; // 0x88d Mov
	var_505_object = var_487_object; // 0x88e Mov
	TaskCall(11); // 0x88f TaskCall
	func_2215(var_506_object, var_507_object, var_508_string, var_509_bool, var_504_object, var_505_object); // 0x890 NEW_2
	TaskReturn(); // 0x891 TaskReturn
	IsDialogEnd(var_490_bool); // 0x893 ObjFunc
	
Label_2197:
	var_547_bool = var_490_bool == 0; // 0x895 Not
	if(var_547_bool == 0) goto Label_2204; // 0x896 JumpB
	sync(); // 0x897 Func
	IsDialogEnd(var_490_bool); // 0x899 ObjFunc
	goto Label_2197; // 0x89b Jump
	
Label_2204:
	var_548_object = Obj(); // 0x89c PushV
	var_548_object = var_481_object; // 0x89d Mov
	func_9840(); // 0x89e NEW_2
	StopDialog(var_487_object); // 0x8a0 Func
	GetReturnValue(var_489_int); // 0x8a2 ObjFunc
	var_480_int = var_489_int; // 0x8a4 Mov
	return 8; // 0x8a5 Return
}


func_10328()
{
	var_126_int = 0; var_127_int = 0; // 0x2858 PushV
	var_128_int = 0; // 0x2859 PushV
	func_10245(var_128_int); // 0x285a NEW_2
	var_127_int = var_128_int; // 0x285b Mov
	var_134_string = "RMap"; // 0x285d PushS
	var_135_int = var_134_string + var_127_int; // 0x285e Add
	var_136_int = 1; // 0x285f PushI
	SetVariable(var_135_int, var_136_int); // 0x2860 Func
	return 2; // 0x2862 Return
}


func_10841()
{
	var_82_string = "ood6MladVlad1"; // 0x2a5a PushS
	var_83_int = 1; // 0x2a5b PushI
	SetVariable(var_82_string, var_83_int); // 0x2a5c Func
	return 0; // 0x2a5e Return
}


func_5723(var_2_object, var_943_string)
{
	var_944_bool = 0; // 0x165c PushV
	func_10306(var_944_bool); // 0x165d NEW_2
	var_945_bool = var_944_bool == 0; // 0x165f Not
	if(var_945_bool == 0) goto Label_5730; // 0x1660 JumpB
	return 0; // 0x1661 Return
	
Label_5730:
	var_946_bool = var_943_string == var_2_object; // 0x1662 Eq
	if(var_946_bool == 0) goto Label_5733; // 0x1663 JumpB
	return 0; // 0x1664 Return
	
Label_5733:
	var_947_string = ""; var_948_bool = 0; // 0x1665 PushV
	var_947_string = var_943_string; // 0x1666 Mov
	var_949_string = ""; // 0x1667 PushS
	var_950_bool = var_943_string == var_949_string; // 0x1668 Eq
	if(var_950_bool == 0) goto Label_5740; // 0x1669 JumpB
	var_948_bool = 0; // 0x166a MovB
	goto Label_5741; // 0x166b Jump
	
Label_5741:
	func_10011(var_947_string, var_948_bool); // 0x166d NEW_2
	var_2_object = var_943_string; // 0x166f TMov
	return 0; // 0x1670 Return
	
Label_5740:
	var_948_bool = 1; // 0x166c MovB
}


func_11866()
{
	var_193_object = Obj(); var_194_object = Obj(); // 0x2e5a PushV
	var_195_int = 104; // 0x2e5b PushI
	var_196_int = 2; // 0x2e5c PushI
	var_197_int = 513727; // 0x2e5d PushI
	CreateDiaryEntry(var_194_object, var_195_int, var_196_int, var_197_int); // 0x2e5e Func
	var_198_bool = 0; var_199_object = Obj(); var_200_int = 0; // 0x2e60 PushV
	var_199_object = var_194_object; // 0x2e61 Mov
	var_200_int = 102; // 0x2e62 MovI
	func_11983(var_198_bool, var_199_object, var_200_int); // 0x2e63 NEW_2
	return 2; // 0x2e65 Return
}


func_10847()
{
	var_170_string = "ood6MladVlad2"; // 0x2a60 PushS
	var_171_int = 1; // 0x2a61 PushI
	SetVariable(var_170_string, var_171_int); // 0x2a62 Func
	return 0; // 0x2a64 Return
}


func_11361(var_968_bool)
{
	var_970_int = 0; var_971_string = ""; // 0x2c62 PushV
	var_971_string = "d6q02"; // 0x2c63 MovS
	func_10093(var_970_int, var_971_string); // 0x2c64 NEW_2
	var_972_int = 0; // 0x2c66 PushI
	var_973_bool = var_970_int == var_972_int; // 0x2c67 Eq
	if(var_973_bool == 0) goto Label_11371; // 0x2c68 JumpB
	var_968_bool = 1; // 0x2c69 MovB
	return 0; // 0x2c6a Return
	
Label_11371:
	var_968_bool = 0; // 0x2c6b MovB
	return 0; // 0x2c6c Return
}


func_10339(var_137_object)
{
	var_139_object = Obj(); var_140_int = 0; // 0x2864 PushV
	var_139_object = var_137_object; // 0x2865 Mov
	var_140_int = -1000; // 0x2866 MovI
	func_10132(var_139_object, var_140_int); // 0x2867 NEW_2
	return 0; // 0x2869 Return
}


func_10853()
{
	var_154_string = "d6q02KnowAboutAttack"; // 0x2a66 PushS
	var_155_int = 1; // 0x2a67 PushI
	SetVariable(var_154_string, var_155_int); // 0x2a68 Func
	return 0; // 0x2a6a Return
}


func_11879()
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x2e67 PushV
	var_132_int = 106; // 0x2e68 PushI
	var_133_int = 2; // 0x2e69 PushI
	var_134_int = 513729; // 0x2e6a PushI
	CreateDiaryEntry(var_131_object, var_132_int, var_133_int, var_134_int); // 0x2e6b Func
	var_135_bool = 0; var_136_object = Obj(); var_137_int = 0; // 0x2e6d PushV
	var_136_object = var_131_object; // 0x2e6e Mov
	var_137_int = 102; // 0x2e6f MovI
	func_11983(var_135_bool, var_136_object, var_137_int); // 0x2e70 NEW_2
	return 2; // 0x2e72 Return
}


func_10346(var_217_object)
{
	var_219_string = "money2000 is given"; // 0x286b PushS
	Trace(var_219_string); // 0x286c Func
	var_220_object = Obj(); var_221_int = 0; // 0x286e PushV
	var_220_object = var_217_object; // 0x286f Mov
	var_221_int = 2000; // 0x2870 MovI
	func_10132(var_220_object, var_221_int); // 0x2871 NEW_2
	return 0; // 0x2873 Return
}


func_10859()
{
	var_234_string = "ood6MladVlad3"; // 0x2a6c PushS
	var_235_int = 1; // 0x2a6d PushI
	SetVariable(var_234_string, var_235_int); // 0x2a6e Func
	return 0; // 0x2a70 Return
}


func_11373(var_937_bool)
{
	var_939_int = 0; var_940_string = ""; // 0x2c6e PushV
	var_940_string = "ood6MladVlad1"; // 0x2c6f MovS
	func_10093(var_939_int, var_940_string); // 0x2c70 NEW_2
	var_941_int = 0; // 0x2c72 PushI
	var_942_bool = var_939_int == var_941_int; // 0x2c73 Eq
	if(var_942_bool == 0) goto Label_11383; // 0x2c74 JumpB
	var_937_bool = 1; // 0x2c75 MovB
	return 0; // 0x2c76 Return
	
Label_11383:
	var_937_bool = 0; // 0x2c77 MovB
	return 0; // 0x2c78 Return
}


func_9840()
{
	var_317_bool = 0; var_318_bool = 0; // 0x2670 PushV
	CameraSwitchToNormal(); // 0x2671 Func
	var_319_bool = 0; // 0x2673 PushV
	func_10306(var_319_bool); // 0x2674 NEW_2
	if(var_319_bool == 0) goto Label_9848; // 0x2676 JumpB
	goto Label_9856; // 0x2677 Jump
	
Label_9856:
	return 2; // 0x2680 Return
	
Label_9848:
	var_320_string = "head"; // 0x2678 PushS
	HasAnimationTrack(var_318_bool, var_320_string); // 0x2679 Func
	var_321_bool = var_318_bool; // 0x267b Push
	if(var_321_bool == 0) goto Label_9856; // 0x267c JumpB
	var_322_string = "head"; // 0x267d PushS
	UnlookAsync(var_322_string); // 0x267e Func
}


func_10865()
{
	func_11892(); // 0x2a73 NEW_2
	var_248_bool = 0; var_249_string = ""; var_250_string = ""; // 0x2a75 PushV
	var_249_string = "quest_d6_03"; // 0x2a76 MovS
	var_250_string = "failed"; // 0x2a77 MovS
	func_10228(var_248_bool, var_249_string, var_250_string); // 0x2a78 NEW_2
	return 0; // 0x2a7a Return
}


func_9330(var_0_bool, var_1529_int, var_1530_object)
{
	var_1532_object = Obj(); var_1533_bool = 0; var_1534_int = 0; var_1535_bool = 0; var_1536_object = Obj(); var_1537_bool = 0; var_1538_int = 0; var_1539_bool = 0; // 0x2472 PushV
	var_0_bool = var_1530_object; // 0x2473 TMov
	var_1540_bool = 0; var_1541_object = Obj(); var_1542_float = 0; // 0x2474 PushV
	var_1541_object = var_1530_object; // 0x2475 Mov
	var_1542_float = 70.0; // 0x2476 MovF
	func_9772(var_1541_object, var_1542_float); // 0x2477 NEW_2
	var_1543_bool = var_1540_bool == 0; // 0x2479 Not
	if(var_1543_bool == 0) goto Label_9341; // 0x247a JumpB
	var_1529_int = -2; // 0x247b MovI
	return 8; // 0x247c Return
	
Label_9341:
	CreateDialog(var_1536_object); // 0x247d Func
	var_1544_int = 0; // 0x247f PushV
	func_10300(var_1544_int); // 0x2480 NEW_2
	SetNPCName(var_1544_int); // 0x2482 ObjFunc
	var_1545_int = 0; // 0x2484 PushV
	func_10298(var_1545_int); // 0x2485 NEW_2
	SetNPCDescription(var_1545_int); // 0x2487 ObjFunc
	var_1546_string = ""; // 0x2489 PushV
	func_10302(var_1546_string); // 0x248a NEW_2
	SetPhoto(var_1546_string); // 0x248c ObjFunc
	var_1547_string = ""; // 0x248e PushV
	func_10304(var_1547_string); // 0x248f NEW_2
	SetPhoto2(var_1547_string); // 0x2491 ObjFunc
	var_1548_int = 0; // 0x2493 PushV
	func_12061(var_1548_int); // 0x2494 NEW_2
	SetPlayerName(var_1548_int); // 0x2496 ObjFunc
	var_1538_int = -1; // 0x2498 MovI
	IsOverrideActive(var_1537_bool); // 0x2499 Func
	var_1549_bool = var_1537_bool; // 0x249b Push
	if(var_1549_bool == 0) goto Label_9375; // 0x249c JumpB
	var_1529_int = -2; // 0x249d MovI
	return 8; // 0x249e Return
	
Label_9375:
	DoDialog(var_1536_object); // 0x249f Func
	var_1550_bool = 0; var_1551_object = Obj(); // 0x24a1 PushV
	var_1552_object = Obj(); // 0x24a2 PushV
	func_10048(var_1552_object); // 0x24a3 NEW_2
	var_1551_object = var_1552_object; // 0x24a4 Mov
	func_9857(var_1550_bool, var_1551_object); // 0x24a6 NEW_2
	var_1553_object = Obj(); var_1554_object = Obj(); // 0x24a8 PushV
	var_1553_object = var_1530_object; // 0x24a9 Mov
	var_1554_object = var_1536_object; // 0x24aa Mov
	TaskCall(31); // 0x24ab TaskCall
	func_9411(var_1555_object, var_1556_object, var_1557_string, var_1558_bool, var_1553_object, var_1554_object); // 0x24ac NEW_2
	TaskReturn(); // 0x24ad TaskReturn
	IsDialogEnd(var_1539_bool); // 0x24af ObjFunc
	
Label_9393:
	var_1583_bool = var_1539_bool == 0; // 0x24b1 Not
	if(var_1583_bool == 0) goto Label_9400; // 0x24b2 JumpB
	sync(); // 0x24b3 Func
	IsDialogEnd(var_1539_bool); // 0x24b5 ObjFunc
	goto Label_9393; // 0x24b7 Jump
	
Label_9400:
	var_1584_object = Obj(); // 0x24b8 PushV
	var_1584_object = var_1530_object; // 0x24b9 Mov
	func_9840(); // 0x24ba NEW_2
	StopDialog(var_1536_object); // 0x24bc Func
	GetReturnValue(var_1538_int); // 0x24be ObjFunc
	var_1529_int = var_1538_int; // 0x24c0 Mov
	return 8; // 0x24c1 Return
}


func_10356()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2874 PushV
	var_84_string = "d1q03IsKapella"; // 0x2875 PushS
	var_85_int = 0; // 0x2876 PushI
	SetVariable(var_84_string, var_85_int); // 0x2877 Func
	var_86_object = Obj(); // 0x2879 PushV
	func_12011(var_86_object); // 0x287a NEW_2
	var_83_object = var_86_object; // 0x287b Mov
	var_93_string = "d1q03MladVladGotoOspina"; // 0x287d PushS
	var_94_string = "pt_map_ospina"; // 0x287e PushS
	var_95_int = 0; // 0x287f PushI
	var_96_int = 508642; // 0x2880 PushI
	var_97_float = 0; // 0x2881 PushV
	func_10240(var_97_float); // 0x2882 NEW_2
	AddMark(var_93_string, var_94_string, var_95_int, var_96_int, var_97_float); // 0x2884 ObjFunc
	func_11736(); // 0x2887 NEW_2
	func_11749(); // 0x288a NEW_2
	var_131_object = Obj(); var_132_string = ""; // 0x288c PushV
	var_132_string = "quest_d1_03"; // 0x288d MovS
	func_10098(var_131_object, var_132_string); // 0x288e NEW_2
	return 2; // 0x2890 Return
}


func_11892()
{
	var_240_object = Obj(); var_241_object = Obj(); // 0x2e74 PushV
	var_242_int = 110; // 0x2e75 PushI
	var_243_int = 2; // 0x2e76 PushI
	var_244_int = 513733; // 0x2e77 PushI
	CreateDiaryEntry(var_241_object, var_242_int, var_243_int, var_244_int); // 0x2e78 Func
	var_245_bool = 0; var_246_object = Obj(); var_247_int = 0; // 0x2e7a PushV
	var_246_object = var_241_object; // 0x2e7b Mov
	var_247_int = 107; // 0x2e7c MovI
	func_11983(var_245_bool, var_246_object, var_247_int); // 0x2e7d NEW_2
	return 2; // 0x2e7f Return
}


func_6262(var_0_bool, var_1087_int, var_1088_object)
{
	var_1090_object = Obj(); var_1091_bool = 0; var_1092_int = 0; var_1093_bool = 0; var_1094_object = Obj(); var_1095_bool = 0; var_1096_int = 0; var_1097_bool = 0; // 0x1876 PushV
	var_0_bool = var_1088_object; // 0x1877 TMov
	var_1098_bool = 0; var_1099_object = Obj(); var_1100_float = 0; // 0x1878 PushV
	var_1099_object = var_1088_object; // 0x1879 Mov
	var_1100_float = 70.0; // 0x187a MovF
	func_9772(var_1099_object, var_1100_float); // 0x187b NEW_2
	var_1101_bool = var_1098_bool == 0; // 0x187d Not
	if(var_1101_bool == 0) goto Label_6273; // 0x187e JumpB
	var_1087_int = -2; // 0x187f MovI
	return 8; // 0x1880 Return
	
Label_6273:
	CreateDialog(var_1094_object); // 0x1881 Func
	var_1102_int = 0; // 0x1883 PushV
	func_10300(var_1102_int); // 0x1884 NEW_2
	SetNPCName(var_1102_int); // 0x1886 ObjFunc
	var_1103_int = 0; // 0x1888 PushV
	func_10298(var_1103_int); // 0x1889 NEW_2
	SetNPCDescription(var_1103_int); // 0x188b ObjFunc
	var_1104_string = ""; // 0x188d PushV
	func_10302(var_1104_string); // 0x188e NEW_2
	SetPhoto(var_1104_string); // 0x1890 ObjFunc
	var_1105_string = ""; // 0x1892 PushV
	func_10304(var_1105_string); // 0x1893 NEW_2
	SetPhoto2(var_1105_string); // 0x1895 ObjFunc
	var_1106_int = 0; // 0x1897 PushV
	func_12061(var_1106_int); // 0x1898 NEW_2
	SetPlayerName(var_1106_int); // 0x189a ObjFunc
	var_1096_int = -1; // 0x189c MovI
	IsOverrideActive(var_1095_bool); // 0x189d Func
	var_1107_bool = var_1095_bool; // 0x189f Push
	if(var_1107_bool == 0) goto Label_6307; // 0x18a0 JumpB
	var_1087_int = -2; // 0x18a1 MovI
	return 8; // 0x18a2 Return
	
Label_6307:
	DoDialog(var_1094_object); // 0x18a3 Func
	var_1108_bool = 0; var_1109_object = Obj(); // 0x18a5 PushV
	var_1110_object = Obj(); // 0x18a6 PushV
	func_10048(var_1110_object); // 0x18a7 NEW_2
	var_1109_object = var_1110_object; // 0x18a8 Mov
	func_9857(var_1108_bool, var_1109_object); // 0x18aa NEW_2
	var_1111_object = Obj(); var_1112_object = Obj(); // 0x18ac PushV
	var_1111_object = var_1088_object; // 0x18ad Mov
	var_1112_object = var_1094_object; // 0x18ae Mov
	TaskCall(21); // 0x18af TaskCall
	func_6343(var_1113_object, var_1114_object, var_1115_string, var_1116_bool, var_1111_object, var_1112_object); // 0x18b0 NEW_2
	TaskReturn(); // 0x18b1 TaskReturn
	IsDialogEnd(var_1097_bool); // 0x18b3 ObjFunc
	
Label_6325:
	var_1274_bool = var_1097_bool == 0; // 0x18b5 Not
	if(var_1274_bool == 0) goto Label_6332; // 0x18b6 JumpB
	sync(); // 0x18b7 Func
	IsDialogEnd(var_1097_bool); // 0x18b9 ObjFunc
	goto Label_6325; // 0x18bb Jump
	
Label_6332:
	var_1275_object = Obj(); // 0x18bc PushV
	var_1275_object = var_1088_object; // 0x18bd Mov
	func_9840(); // 0x18be NEW_2
	StopDialog(var_1094_object); // 0x18c0 Func
	GetReturnValue(var_1096_int); // 0x18c2 ObjFunc
	var_1087_int = var_1096_int; // 0x18c4 Mov
	return 8; // 0x18c5 Return
}


func_11385(var_978_bool)
{
	var_980_int = 0; var_981_string = ""; // 0x2c7a PushV
	var_981_string = "ood6MladVlad2"; // 0x2c7b MovS
	func_10093(var_980_int, var_981_string); // 0x2c7c NEW_2
	var_982_int = 0; // 0x2c7e PushI
	var_983_bool = var_980_int == var_982_int; // 0x2c7f Eq
	if(var_983_bool == 0) goto Label_11395; // 0x2c80 JumpB
	var_978_bool = 1; // 0x2c81 MovB
	return 0; // 0x2c82 Return
	
Label_11395:
	var_978_bool = 0; // 0x2c83 MovB
	return 0; // 0x2c84 Return
}


func_10875(var_196_object)
{
	var_198_bool = 0; var_199_object = Obj(); var_200_float = 0; // 0x2a7c PushV
	var_199_object = var_196_object; // 0x2a7d Mov
	var_200_float = 0.3; // 0x2a7e MovF
	func_10183(var_198_bool, var_199_object, var_200_float); // 0x2a7f NEW_2
	return 0; // 0x2a81 Return
}


func_9857(var_166_bool, var_167_object)
{
	var_171_int = 0; var_172_int = 0; var_173_int = 0; var_174_int = 0; // 0x2681 PushV
	var_175_string = "voice_common"; // 0x2682 PushS
	GetVariable(var_175_string, var_173_int); // 0x2683 Func
	var_176_int = var_173_int; // 0x2685 Push
	if(var_176_int == 0) goto Label_9895; // 0x2686 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x2687 PushV
	var_178_object = var_167_object; // 0x2688 Mov
	func_9915(var_178_object); // 0x2689 NEW_2
	var_207_bool = var_177_bool == 0; // 0x268b Not
	if(var_207_bool == 0) goto Label_9877; // 0x268c JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x268d PushV
	var_209_object = var_167_object; // 0x268e Mov
	func_9952(var_209_object); // 0x268f NEW_2
	var_243_bool = var_208_bool == 0; // 0x2691 Not
	if(var_243_bool == 0) goto Label_9877; // 0x2692 JumpB
	var_166_bool = 0; // 0x2693 MovB
	return 4; // 0x2694 Return
	
Label_9877:
	var_244_int = 2; // 0x2695 PushI
	irand(var_174_int, var_244_int); // 0x2696 Func
	var_245_int = var_174_int; // 0x2698 Push
	if(var_245_int == 0) goto Label_9890; // 0x2699 JumpB
	var_246_string = "voice_common"; // 0x269a PushS
	var_247_int = 1; // 0x269b PushI
	var_248_int = var_173_int + var_247_int; // 0x269c Add
	var_249_int = 3; // 0x269d PushI
	var_250_int = var_248_int / var_249_int; // 0x269e Mod
	SetVariable(var_246_string, var_250_int); // 0x269f Func
	goto Label_9894; // 0x26a1 Jump
	
Label_9894:
	goto Label_9913; // 0x26a6 Jump
	
Label_9913:
	var_166_bool = 1; // 0x26b9 MovB
	return 4; // 0x26ba Return
	
Label_9890:
	var_251_string = "voice_common"; // 0x26a2 PushS
	var_252_int = 0; // 0x26a3 PushI
	SetVariable(var_251_string, var_252_int); // 0x26a4 Func
	
Label_9895:
	var_253_bool = 0; var_254_object = Obj(); // 0x26a7 PushV
	var_254_object = var_167_object; // 0x26a8 Mov
	func_9952(var_254_object); // 0x26a9 NEW_2
	var_255_bool = var_253_bool == 0; // 0x26ab Not
	if(var_255_bool == 0) goto Label_9909; // 0x26ac JumpB
	var_256_bool = 0; var_257_object = Obj(); // 0x26ad PushV
	var_257_object = var_167_object; // 0x26ae Mov
	func_9915(var_257_object); // 0x26af NEW_2
	var_258_bool = var_256_bool == 0; // 0x26b1 Not
	if(var_258_bool == 0) goto Label_9909; // 0x26b2 JumpB
	var_166_bool = 0; // 0x26b3 MovB
	return 4; // 0x26b4 Return
	
Label_9909:
	var_259_string = "voice_common"; // 0x26b5 PushS
	var_260_int = 1; // 0x26b6 PushI
	SetVariable(var_259_string, var_260_int); // 0x26b7 Func
}


func_10882()
{
	var_159_string = "ood5MladVlad1"; // 0x2a83 PushS
	var_160_int = 1; // 0x2a84 PushI
	SetVariable(var_159_string, var_160_int); // 0x2a85 Func
	return 0; // 0x2a87 Return
}


func_11905()
{
	var_230_object = Obj(); var_231_object = Obj(); // 0x2e81 PushV
	var_232_int = 718; // 0x2e82 PushI
	var_233_int = 1; // 0x2e83 PushI
	var_234_int = 538759; // 0x2e84 PushI
	CreateDiaryEntry(var_231_object, var_232_int, var_233_int, var_234_int); // 0x2e85 Func
	var_235_bool = 0; var_236_object = Obj(); var_237_int = 0; // 0x2e87 PushV
	var_236_object = var_231_object; // 0x2e88 Mov
	var_237_int = 175; // 0x2e89 MovI
	func_11983(var_235_bool, var_236_object, var_237_int); // 0x2e8a NEW_2
	return 2; // 0x2e8c Return
}


func_11397(var_995_bool)
{
	var_997_int = 0; var_998_string = ""; // 0x2c86 PushV
	var_998_string = "ood6MladVlad3"; // 0x2c87 MovS
	func_10093(var_997_int, var_998_string); // 0x2c88 NEW_2
	var_999_int = 0; // 0x2c8a PushI
	var_1000_bool = var_997_int == var_999_int; // 0x2c8b Eq
	if(var_1000_bool == 0) goto Label_11407; // 0x2c8c JumpB
	var_995_bool = 1; // 0x2c8d MovB
	return 0; // 0x2c8e Return
	
Label_11407:
	var_995_bool = 0; // 0x2c8f MovB
	return 0; // 0x2c90 Return
}


func_1670(var_2_object, var_1504_string)
{
	var_1505_bool = 0; // 0x687 PushV
	func_10306(var_1505_bool); // 0x688 NEW_2
	var_1506_bool = var_1505_bool == 0; // 0x68a Not
	if(var_1506_bool == 0) goto Label_1677; // 0x68b JumpB
	return 0; // 0x68c Return
	
Label_1677:
	var_1507_bool = var_1504_string == var_2_object; // 0x68d Eq
	if(var_1507_bool == 0) goto Label_1680; // 0x68e JumpB
	return 0; // 0x68f Return
	
Label_1680:
	var_1508_string = ""; var_1509_bool = 0; // 0x690 PushV
	var_1508_string = var_1504_string; // 0x691 Mov
	var_1510_string = ""; // 0x692 PushS
	var_1511_bool = var_1504_string == var_1510_string; // 0x693 Eq
	if(var_1511_bool == 0) goto Label_1687; // 0x694 JumpB
	var_1509_bool = 0; // 0x695 MovB
	goto Label_1688; // 0x696 Jump
	
Label_1688:
	func_10011(var_1508_string, var_1509_bool); // 0x698 NEW_2
	var_2_object = var_1504_string; // 0x69a TMov
	return 0; // 0x69b Return
	
Label_1687:
	var_1509_bool = 1; // 0x697 MovB
}


func_2695(var_0_bool, var_1_object, var_2_object, var_3_object, var_575_object, var_576_object)
{
	var_0_bool = var_576_object; // 0xa88 TMov
	var_1_object = var_575_object; // 0xa89 TMov
	var_3_object = 0; // 0xa8a TMovB
	var_581_int = 1; // 0xa8b PushI
	if(var_581_int == 0) goto Label_2785; // 0xa8c JumpB
	var_582_string = ""; // 0xa8d PushV
	var_582_string = "Neutral"; // 0xa8e MovS
	func_2815(var_576_object, var_582_string); // 0xa8f NEW_2
	var_590_int = 510212; // 0xa91 PushI
	SetMessage(var_590_int); // 0xa92 TObjFunc
	ClearReplies(); // 0xa94 TObjFunc
	var_591_bool = 0; // 0xa96 PushV
	var_591_bool = 0; // 0xa97 MovB
	var_592_bool = 0; var_593_object = Obj(); // 0xa98 PushV
	var_593_object = var_1_object; // 0xa99 MovT
	func_11253(var_593_object); // 0xa9a NEW_2
	if(var_592_bool == 0) goto Label_2723; // 0xa9c JumpB
	var_598_bool = 0; var_599_object = Obj(); // 0xa9d PushV
	var_599_object = var_1_object; // 0xa9e MovT
	func_11265(var_599_object); // 0xa9f NEW_2
	if(var_598_bool == 0) goto Label_2723; // 0xaa1 JumpB
	var_591_bool = 1; // 0xaa2 MovB
	
Label_2723:
	if(var_591_bool == 0) goto Label_2729; // 0xaa3 JumpB
	var_604_int = 510213; // 0xaa4 PushI
	var_605_int = 11260; // 0xaa5 PushI
	var_606_int = 11259; // 0xaa6 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0xaa7 TObjFunc
	
Label_2729:
	var_607_bool = 0; // 0xaa9 PushV
	var_607_bool = 1; // 0xaaa MovB
	var_608_bool = 0; // 0xaab PushV
	var_608_bool = 0; // 0xaac MovB
	var_609_bool = 0; var_610_object = Obj(); // 0xaad PushV
	var_610_object = var_1_object; // 0xaae MovT
	func_11277(var_610_object); // 0xaaf NEW_2
	if(var_609_bool == 0) goto Label_2744; // 0xab1 JumpB
	var_615_bool = 0; var_616_object = Obj(); // 0xab2 PushV
	var_616_object = var_1_object; // 0xab3 MovT
	func_11217(var_616_object); // 0xab4 NEW_2
	if(var_615_bool == 0) goto Label_2744; // 0xab6 JumpB
	var_608_bool = 1; // 0xab7 MovB
	
Label_2744:
	if(var_608_bool == 0) goto Label_2760; // 0xab8 JumpB
	var_621_bool = 0; // 0xab9 PushV
	var_621_bool = 0; // 0xaba MovB
	var_622_bool = 0; var_623_object = Obj(); // 0xabb PushV
	var_623_object = var_1_object; // 0xabc MovT
	func_11289(var_623_object); // 0xabd NEW_2
	if(var_622_bool == 0) goto Label_2758; // 0xabf JumpB
	var_628_bool = 0; var_629_object = Obj(); // 0xac0 PushV
	var_629_object = var_1_object; // 0xac1 MovT
	func_11217(var_629_object); // 0xac2 NEW_2
	if(var_628_bool == 0) goto Label_2758; // 0xac4 JumpB
	var_621_bool = 1; // 0xac5 MovB
	
Label_2758:
	if(var_621_bool == 0) goto Label_2760; // 0xac6 JumpB
	var_607_bool = 0; // 0xac7 MovB
	
Label_2760:
	if(var_607_bool == 0) goto Label_2766; // 0xac8 JumpB
	var_630_int = 510334; // 0xac9 PushI
	var_631_int = 11395; // 0xaca PushI
	var_632_int = 11394; // 0xacb PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0xacc TObjFunc
	
Label_2766:
	var_633_bool = 0; var_634_object = Obj(); // 0xace PushV
	var_634_object = var_1_object; // 0xacf MovT
	func_11671(var_633_bool, var_634_object); // 0xad0 NEW_2
	var_645_bool = var_633_bool == 0; // 0xad2 Not
	if(var_645_bool == 0) goto Label_2777; // 0xad3 JumpB
	var_646_int = 520897; // 0xad4 PushI
	var_647_int = 22115; // 0xad5 PushI
	var_648_int = 22114; // 0xad6 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0xad7 TObjFunc
	
Label_2777:
	var_649_int = 520896; // 0xad9 PushI
	var_650_int = -1; // 0xada PushI
	var_651_int = 22113; // 0xadb PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0xadc TObjFunc
	goto Label_2785; // 0xade Jump
	
Label_2785:
	var_652_bool = 0; // 0xae1 PushV
	func_10306(var_652_bool); // 0xae2 NEW_2
	if(var_652_bool == 0) goto Label_2800; // 0xae4 JumpB
	
Label_2789:
	lshWaitForAnimEnd(); // 0xae5 Func
	var_653_object = var_3_object; // 0xae7 PushT
	if(var_653_object == 0) goto Label_2794; // 0xae8 JumpB
	goto Label_2799; // 0xae9 Jump
	
Label_2799:
	goto Label_2814; // 0xaef Jump
	
Label_2814:
	return 0; // 0xafe Return
	
Label_2794:
	var_654_string = ""; // 0xaea PushV
	var_654_string = var_2_object; // 0xaeb MovT
	func_9995(var_654_string); // 0xaec NEW_2
	goto Label_2789; // 0xaee Jump
	
Label_2800:
	var_655_string = "all"; // 0xaf0 PushS
	var_656_string = "idle"; // 0xaf1 PushS
	PlayAnimation(var_655_string, var_656_string); // 0xaf2 Func
	
Label_2804:
	WaitForAnimEnd(); // 0xaf4 Func
	var_657_object = var_3_object; // 0xaf6 PushT
	if(var_657_object == 0) goto Label_2809; // 0xaf7 JumpB
	goto Label_2814; // 0xaf8 Jump
	
Label_2809:
	var_658_string = "all"; // 0xaf9 PushS
	var_659_string = "idle"; // 0xafa PushS
	PlayAnimation(var_658_string, var_659_string); // 0xafb Func
	goto Label_2804; // 0xafd Jump
}


func_10888()
{
	var_192_string = "ood5MladVlad2"; // 0x2a89 PushS
	var_193_int = 1; // 0x2a8a PushI
	SetVariable(var_192_string, var_193_int); // 0x2a8b Func
	return 0; // 0x2a8d Return
}


func_10894()
{
	return 0; // 0x2a8f Return
}


func_11918()
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x2e8e PushV
	var_153_int = 177; // 0x2e8f PushI
	var_154_int = 1; // 0x2e90 PushI
	var_155_int = 515436; // 0x2e91 PushI
	CreateDiaryEntry(var_152_object, var_153_int, var_154_int, var_155_int); // 0x2e92 Func
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0; // 0x2e94 PushV
	var_157_object = var_152_object; // 0x2e95 Mov
	var_158_int = 175; // 0x2e96 MovI
	func_11983(var_156_bool, var_157_object, var_158_int); // 0x2e97 NEW_2
	return 2; // 0x2e99 Return
}


func_10896()
{
	var_831_string = "ood5MladVlad3"; // 0x2a91 PushS
	var_832_int = 1; // 0x2a92 PushI
	SetVariable(var_831_string, var_832_int); // 0x2a93 Func
	return 0; // 0x2a95 Return
}


func_145()
{
	Stop(); // 0x91 Func
	return 0; // 0x93 Return
}


func_11409(var_845_bool)
{
	var_847_int = 0; var_848_string = ""; // 0x2c92 PushV
	var_848_string = "d5q03"; // 0x2c93 MovS
	func_10093(var_847_int, var_848_string); // 0x2c94 NEW_2
	var_849_int = 0; // 0x2c96 PushI
	var_850_bool = var_847_int == var_849_int; // 0x2c97 Eq
	if(var_850_bool == 0) goto Label_11419; // 0x2c98 JumpB
	var_845_bool = 1; // 0x2c99 MovB
	return 0; // 0x2c9a Return
	
Label_11419:
	var_845_bool = 0; // 0x2c9b MovB
	return 0; // 0x2c9c Return
}


func_10386(var_201_object)
{
	var_203_string = "money10000 is given"; // 0x2893 PushS
	Trace(var_203_string); // 0x2894 Func
	var_204_object = Obj(); var_205_int = 0; // 0x2896 PushV
	var_204_object = var_201_object; // 0x2897 Mov
	var_205_int = 10000; // 0x2898 MovI
	func_10132(var_204_object, var_205_int); // 0x2899 NEW_2
	return 0; // 0x289b Return
}


func_148(var_100_object)
{
	var_101_bool = 0; var_102_bool = 0; // 0x94 PushV
	WaitForAnimEnd(var_102_bool); // 0x95 Func
	var_103_bool = var_102_bool == 0; // 0x97 Not
	if(var_103_bool == 0) goto Label_154; // 0x98 JumpB
	return 2; // 0x99 Return
	
Label_154:
	var_104_object = Obj(); // 0x9a PushV
	var_104_object = var_100_object; // 0x9b Mov
	func_9756(); // 0x9c NEW_2
	var_113_int = 6; // 0x9e PushI
	Sleep(var_113_int); // 0x9f Func
	return 2; // 0xa1 Return
}


func_4757(var_0_bool, var_776_int, var_777_object)
{
	var_779_object = Obj(); var_780_bool = 0; var_781_int = 0; var_782_bool = 0; var_783_object = Obj(); var_784_bool = 0; var_785_int = 0; var_786_bool = 0; // 0x1295 PushV
	var_0_bool = var_777_object; // 0x1296 TMov
	var_787_bool = 0; var_788_object = Obj(); var_789_float = 0; // 0x1297 PushV
	var_788_object = var_777_object; // 0x1298 Mov
	var_789_float = 70.0; // 0x1299 MovF
	func_9772(var_788_object, var_789_float); // 0x129a NEW_2
	var_790_bool = var_787_bool == 0; // 0x129c Not
	if(var_790_bool == 0) goto Label_4768; // 0x129d JumpB
	var_776_int = -2; // 0x129e MovI
	return 8; // 0x129f Return
	
Label_4768:
	CreateDialog(var_783_object); // 0x12a0 Func
	var_791_int = 0; // 0x12a2 PushV
	func_10300(var_791_int); // 0x12a3 NEW_2
	SetNPCName(var_791_int); // 0x12a5 ObjFunc
	var_792_int = 0; // 0x12a7 PushV
	func_10298(var_792_int); // 0x12a8 NEW_2
	SetNPCDescription(var_792_int); // 0x12aa ObjFunc
	var_793_string = ""; // 0x12ac PushV
	func_10302(var_793_string); // 0x12ad NEW_2
	SetPhoto(var_793_string); // 0x12af ObjFunc
	var_794_string = ""; // 0x12b1 PushV
	func_10304(var_794_string); // 0x12b2 NEW_2
	SetPhoto2(var_794_string); // 0x12b4 ObjFunc
	var_795_int = 0; // 0x12b6 PushV
	func_12061(var_795_int); // 0x12b7 NEW_2
	SetPlayerName(var_795_int); // 0x12b9 ObjFunc
	var_785_int = -1; // 0x12bb MovI
	IsOverrideActive(var_784_bool); // 0x12bc Func
	var_796_bool = var_784_bool; // 0x12be Push
	if(var_796_bool == 0) goto Label_4802; // 0x12bf JumpB
	var_776_int = -2; // 0x12c0 MovI
	return 8; // 0x12c1 Return
	
Label_4802:
	DoDialog(var_783_object); // 0x12c2 Func
	var_797_bool = 0; var_798_object = Obj(); // 0x12c4 PushV
	var_799_object = Obj(); // 0x12c5 PushV
	func_10048(var_799_object); // 0x12c6 NEW_2
	var_798_object = var_799_object; // 0x12c7 Mov
	func_9857(var_797_bool, var_798_object); // 0x12c9 NEW_2
	var_800_object = Obj(); var_801_object = Obj(); // 0x12cb PushV
	var_800_object = var_777_object; // 0x12cc Mov
	var_801_object = var_783_object; // 0x12cd Mov
	TaskCall(17); // 0x12ce TaskCall
	func_4838(var_802_object, var_803_object, var_804_string, var_805_bool, var_800_object, var_801_object); // 0x12cf NEW_2
	TaskReturn(); // 0x12d0 TaskReturn
	IsDialogEnd(var_786_bool); // 0x12d2 ObjFunc
	
Label_4820:
	var_902_bool = var_786_bool == 0; // 0x12d4 Not
	if(var_902_bool == 0) goto Label_4827; // 0x12d5 JumpB
	sync(); // 0x12d6 Func
	IsDialogEnd(var_786_bool); // 0x12d8 ObjFunc
	goto Label_4820; // 0x12da Jump
	
Label_4827:
	var_903_object = Obj(); // 0x12db PushV
	var_903_object = var_777_object; // 0x12dc Mov
	func_9840(); // 0x12dd NEW_2
	StopDialog(var_783_object); // 0x12df Func
	GetReturnValue(var_785_int); // 0x12e1 ObjFunc
	var_776_int = var_785_int; // 0x12e3 Mov
	return 8; // 0x12e4 Return
}


func_10902()
{
	var_180_object = Obj(); var_181_object = Obj(); var_182_object = Obj(); var_183_object = Obj(); // 0x2a96 PushV
	var_184_object = Obj(); // 0x2a97 PushV
	func_12011(var_184_object); // 0x2a98 NEW_2
	var_182_object = var_184_object; // 0x2a99 Mov
	var_185_string = "d6q02BigVlad"; // 0x2a9b PushS
	FindMark(var_183_object, var_185_string); // 0x2a9c ObjFunc
	var_186_object = var_183_object; // 0x2a9e Push
	if(var_186_object == 0) goto Label_10914; // 0x2a9f JumpB
	Remove(); // 0x2aa0 ObjFunc
	
Label_10914:
	var_187_string = "d6q02KapellaGotoMladVlad"; // 0x2aa2 PushS
	FindMark(var_183_object, var_187_string); // 0x2aa3 ObjFunc
	var_188_object = var_183_object; // 0x2aa5 Push
	if(var_188_object == 0) goto Label_10921; // 0x2aa6 JumpB
	Remove(); // 0x2aa7 ObjFunc
	
Label_10921:
	var_189_string = "d6q02MladVladGotoBigVlad"; // 0x2aa9 PushS
	FindMark(var_183_object, var_189_string); // 0x2aaa ObjFunc
	var_190_object = var_183_object; // 0x2aac Push
	if(var_190_object == 0) goto Label_10928; // 0x2aad JumpB
	Remove(); // 0x2aae ObjFunc
	
Label_10928:
	var_191_string = "d6q02MladVladGotoBigVladSelf"; // 0x2ab0 PushS
	FindMark(var_183_object, var_191_string); // 0x2ab1 ObjFunc
	var_192_object = var_183_object; // 0x2ab3 Push
	if(var_192_object == 0) goto Label_10935; // 0x2ab4 JumpB
	Remove(); // 0x2ab5 ObjFunc
	
Label_10935:
	func_11866(); // 0x2ab8 NEW_2
	return 4; // 0x2aba Return
}


func_11931()
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x2e9b PushV
	var_86_int = 649; // 0x2e9c PushI
	var_87_int = 2; // 0x2e9d PushI
	var_88_int = 533362; // 0x2e9e PushI
	CreateDiaryEntry(var_85_object, var_86_int, var_87_int, var_88_int); // 0x2e9f Func
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0; // 0x2ea1 PushV
	var_90_object = var_85_object; // 0x2ea2 Mov
	var_91_int = -1; // 0x2ea3 MovI
	func_11983(var_89_bool, var_90_object, var_91_int); // 0x2ea4 NEW_2
	return 2; // 0x2ea6 Return
}


func_10396()
{
	var_176_string = "playsound"; // 0x289d PushS
	var_177_string = "givemoney"; // 0x289e PushS
	TriggerWorld(var_176_string, var_177_string); // 0x289f Func
	return 0; // 0x28a1 Return
}


func_11421(var_815_bool)
{
	var_817_int = 0; var_818_string = ""; // 0x2c9e PushV
	var_818_string = "d5q03"; // 0x2c9f MovS
	func_10093(var_817_int, var_818_string); // 0x2ca0 NEW_2
	var_819_int = 1000; // 0x2ca2 PushI
	var_820_bool = var_817_int == var_819_int; // 0x2ca3 Eq
	if(var_820_bool == 0) goto Label_11431; // 0x2ca4 JumpB
	var_815_bool = 1; // 0x2ca5 MovB
	return 0; // 0x2ca6 Return
	
Label_11431:
	var_815_bool = 0; // 0x2ca7 MovB
	return 0; // 0x2ca8 Return
}


func_8347(var_0_bool, var_1278_int, var_1279_object)
{
	var_1281_object = Obj(); var_1282_bool = 0; var_1283_int = 0; var_1284_bool = 0; var_1285_object = Obj(); var_1286_bool = 0; var_1287_int = 0; var_1288_bool = 0; // 0x209b PushV
	var_0_bool = var_1279_object; // 0x209c TMov
	var_1289_bool = 0; var_1290_object = Obj(); var_1291_float = 0; // 0x209d PushV
	var_1290_object = var_1279_object; // 0x209e Mov
	var_1291_float = 70.0; // 0x209f MovF
	func_9772(var_1290_object, var_1291_float); // 0x20a0 NEW_2
	var_1292_bool = var_1289_bool == 0; // 0x20a2 Not
	if(var_1292_bool == 0) goto Label_8358; // 0x20a3 JumpB
	var_1278_int = -2; // 0x20a4 MovI
	return 8; // 0x20a5 Return
	
Label_8358:
	CreateDialog(var_1285_object); // 0x20a6 Func
	var_1293_int = 0; // 0x20a8 PushV
	func_10300(var_1293_int); // 0x20a9 NEW_2
	SetNPCName(var_1293_int); // 0x20ab ObjFunc
	var_1294_int = 0; // 0x20ad PushV
	func_10298(var_1294_int); // 0x20ae NEW_2
	SetNPCDescription(var_1294_int); // 0x20b0 ObjFunc
	var_1295_string = ""; // 0x20b2 PushV
	func_10302(var_1295_string); // 0x20b3 NEW_2
	SetPhoto(var_1295_string); // 0x20b5 ObjFunc
	var_1296_string = ""; // 0x20b7 PushV
	func_10304(var_1296_string); // 0x20b8 NEW_2
	SetPhoto2(var_1296_string); // 0x20ba ObjFunc
	var_1297_int = 0; // 0x20bc PushV
	func_12061(var_1297_int); // 0x20bd NEW_2
	SetPlayerName(var_1297_int); // 0x20bf ObjFunc
	var_1287_int = -1; // 0x20c1 MovI
	IsOverrideActive(var_1286_bool); // 0x20c2 Func
	var_1298_bool = var_1286_bool; // 0x20c4 Push
	if(var_1298_bool == 0) goto Label_8392; // 0x20c5 JumpB
	var_1278_int = -2; // 0x20c6 MovI
	return 8; // 0x20c7 Return
	
Label_8392:
	DoDialog(var_1285_object); // 0x20c8 Func
	var_1299_bool = 0; var_1300_object = Obj(); // 0x20ca PushV
	var_1301_object = Obj(); // 0x20cb PushV
	func_10048(var_1301_object); // 0x20cc NEW_2
	var_1300_object = var_1301_object; // 0x20cd Mov
	func_9857(var_1299_bool, var_1300_object); // 0x20cf NEW_2
	var_1302_object = Obj(); var_1303_object = Obj(); // 0x20d1 PushV
	var_1302_object = var_1279_object; // 0x20d2 Mov
	var_1303_object = var_1285_object; // 0x20d3 Mov
	TaskCall(25); // 0x20d4 TaskCall
	func_8428(var_1304_object, var_1305_object, var_1306_string, var_1307_bool, var_1302_object, var_1303_object); // 0x20d5 NEW_2
	TaskReturn(); // 0x20d6 TaskReturn
	IsDialogEnd(var_1288_bool); // 0x20d8 ObjFunc
	
Label_8410:
	var_1335_bool = var_1288_bool == 0; // 0x20da Not
	if(var_1335_bool == 0) goto Label_8417; // 0x20db JumpB
	sync(); // 0x20dc Func
	IsDialogEnd(var_1288_bool); // 0x20de ObjFunc
	goto Label_8410; // 0x20e0 Jump
	
Label_8417:
	var_1336_object = Obj(); // 0x20e1 PushV
	var_1336_object = var_1279_object; // 0x20e2 Mov
	func_9840(); // 0x20e3 NEW_2
	StopDialog(var_1285_object); // 0x20e5 Func
	GetReturnValue(var_1287_int); // 0x20e7 ObjFunc
	var_1278_int = var_1287_int; // 0x20e9 Mov
	return 8; // 0x20ea Return
}


func_10402()
{
	var_250_object = Obj(); var_251_string = ""; var_252_float = 0; // 0x28a3 PushV
	var_253_object = Obj(); // 0x28a4 PushV
	func_12011(var_253_object); // 0x28a5 NEW_2
	var_250_object = var_253_object; // 0x28a6 Mov
	var_251_string = "pt_map_mat"; // 0x28a8 MovS
	var_252_float = 2; // 0x28a9 MovI
	func_12028(var_250_object, var_251_string, var_252_float); // 0x28aa NEW_2
	var_254_object = Obj(); // 0x28ac PushV
	func_12011(var_254_object); // 0x28ad NEW_2
	ShowMap(var_254_object); // 0x28af ObjFunc
	return 0; // 0x28b1 Return
}


func_8869(var_0_bool, var_1400_int, var_1401_object)
{
	var_1403_object = Obj(); var_1404_bool = 0; var_1405_int = 0; var_1406_bool = 0; var_1407_object = Obj(); var_1408_bool = 0; var_1409_int = 0; var_1410_bool = 0; // 0x22a5 PushV
	var_0_bool = var_1401_object; // 0x22a6 TMov
	var_1411_bool = 0; var_1412_object = Obj(); var_1413_float = 0; // 0x22a7 PushV
	var_1412_object = var_1401_object; // 0x22a8 Mov
	var_1413_float = 70.0; // 0x22a9 MovF
	func_9772(var_1412_object, var_1413_float); // 0x22aa NEW_2
	var_1414_bool = var_1411_bool == 0; // 0x22ac Not
	if(var_1414_bool == 0) goto Label_8880; // 0x22ad JumpB
	var_1400_int = -2; // 0x22ae MovI
	return 8; // 0x22af Return
	
Label_8880:
	CreateDialog(var_1407_object); // 0x22b0 Func
	var_1415_int = 0; // 0x22b2 PushV
	func_10300(var_1415_int); // 0x22b3 NEW_2
	SetNPCName(var_1415_int); // 0x22b5 ObjFunc
	var_1416_int = 0; // 0x22b7 PushV
	func_10298(var_1416_int); // 0x22b8 NEW_2
	SetNPCDescription(var_1416_int); // 0x22ba ObjFunc
	var_1417_string = ""; // 0x22bc PushV
	func_10302(var_1417_string); // 0x22bd NEW_2
	SetPhoto(var_1417_string); // 0x22bf ObjFunc
	var_1418_string = ""; // 0x22c1 PushV
	func_10304(var_1418_string); // 0x22c2 NEW_2
	SetPhoto2(var_1418_string); // 0x22c4 ObjFunc
	var_1419_int = 0; // 0x22c6 PushV
	func_12061(var_1419_int); // 0x22c7 NEW_2
	SetPlayerName(var_1419_int); // 0x22c9 ObjFunc
	var_1409_int = -1; // 0x22cb MovI
	IsOverrideActive(var_1408_bool); // 0x22cc Func
	var_1420_bool = var_1408_bool; // 0x22ce Push
	if(var_1420_bool == 0) goto Label_8914; // 0x22cf JumpB
	var_1400_int = -2; // 0x22d0 MovI
	return 8; // 0x22d1 Return
	
Label_8914:
	DoDialog(var_1407_object); // 0x22d2 Func
	var_1421_bool = 0; var_1422_object = Obj(); // 0x22d4 PushV
	var_1423_object = Obj(); // 0x22d5 PushV
	func_10048(var_1423_object); // 0x22d6 NEW_2
	var_1422_object = var_1423_object; // 0x22d7 Mov
	func_9857(var_1421_bool, var_1422_object); // 0x22d9 NEW_2
	var_1424_object = Obj(); var_1425_object = Obj(); // 0x22db PushV
	var_1424_object = var_1401_object; // 0x22dc Mov
	var_1425_object = var_1407_object; // 0x22dd Mov
	TaskCall(29); // 0x22de TaskCall
	func_8950(var_1426_object, var_1427_object, var_1428_string, var_1429_bool, var_1424_object, var_1425_object); // 0x22df NEW_2
	TaskReturn(); // 0x22e0 TaskReturn
	IsDialogEnd(var_1410_bool); // 0x22e2 ObjFunc
	
Label_8932:
	var_1469_bool = var_1410_bool == 0; // 0x22e4 Not
	if(var_1469_bool == 0) goto Label_8939; // 0x22e5 JumpB
	sync(); // 0x22e6 Func
	IsDialogEnd(var_1410_bool); // 0x22e8 ObjFunc
	goto Label_8932; // 0x22ea Jump
	
Label_8939:
	var_1470_object = Obj(); // 0x22eb PushV
	var_1470_object = var_1401_object; // 0x22ec Mov
	func_9840(); // 0x22ed NEW_2
	StopDialog(var_1407_object); // 0x22ef Func
	GetReturnValue(var_1409_int); // 0x22f1 ObjFunc
	var_1400_int = var_1409_int; // 0x22f3 Mov
	return 8; // 0x22f4 Return
}


func_2215(var_0_bool, var_1_object, var_2_object, var_3_object, var_504_object, var_505_object)
{
	var_0_bool = var_505_object; // 0x8a8 TMov
	var_1_object = var_504_object; // 0x8a9 TMov
	var_3_object = 0; // 0x8aa TMovB
	var_510_int = 1; // 0x8ab PushI
	if(var_510_int == 0) goto Label_2257; // 0x8ac JumpB
	var_511_string = ""; // 0x8ad PushV
	var_511_string = "Neutral"; // 0x8ae MovS
	func_2287(var_505_object, var_511_string); // 0x8af NEW_2
	var_519_int = 506929; // 0x8b1 PushI
	SetMessage(var_519_int); // 0x8b2 TObjFunc
	ClearReplies(); // 0x8b4 TObjFunc
	var_520_bool = 0; // 0x8b6 PushV
	var_520_bool = 0; // 0x8b7 MovB
	var_521_bool = 0; var_522_object = Obj(); // 0x8b8 PushV
	var_522_object = var_1_object; // 0x8b9 MovT
	func_11241(var_522_object); // 0x8ba NEW_2
	if(var_521_bool == 0) goto Label_2243; // 0x8bc JumpB
	var_527_bool = 0; var_528_object = Obj(); // 0x8bd PushV
	var_528_object = var_1_object; // 0x8be MovT
	func_11229(var_528_object); // 0x8bf NEW_2
	if(var_527_bool == 0) goto Label_2243; // 0x8c1 JumpB
	var_520_bool = 1; // 0x8c2 MovB
	
Label_2243:
	if(var_520_bool == 0) goto Label_2249; // 0x8c3 JumpB
	var_533_int = 506930; // 0x8c4 PushI
	var_534_int = 7637; // 0x8c5 PushI
	var_535_int = 7636; // 0x8c6 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x8c7 TObjFunc
	
Label_2249:
	var_536_int = 507746; // 0x8c9 PushI
	var_537_int = -1; // 0x8ca PushI
	var_538_int = 8547; // 0x8cb PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x8cc TObjFunc
	goto Label_2257; // 0x8ce Jump
	
Label_2257:
	var_539_bool = 0; // 0x8d1 PushV
	func_10306(var_539_bool); // 0x8d2 NEW_2
	if(var_539_bool == 0) goto Label_2272; // 0x8d4 JumpB
	
Label_2261:
	lshWaitForAnimEnd(); // 0x8d5 Func
	var_540_object = var_3_object; // 0x8d7 PushT
	if(var_540_object == 0) goto Label_2266; // 0x8d8 JumpB
	goto Label_2271; // 0x8d9 Jump
	
Label_2271:
	goto Label_2286; // 0x8df Jump
	
Label_2286:
	return 0; // 0x8ee Return
	
Label_2266:
	var_541_string = ""; // 0x8da PushV
	var_541_string = var_2_object; // 0x8db MovT
	func_9995(var_541_string); // 0x8dc NEW_2
	goto Label_2261; // 0x8de Jump
	
Label_2272:
	var_542_string = "all"; // 0x8e0 PushS
	var_543_string = "idle"; // 0x8e1 PushS
	PlayAnimation(var_542_string, var_543_string); // 0x8e2 Func
	
Label_2276:
	WaitForAnimEnd(); // 0x8e4 Func
	var_544_object = var_3_object; // 0x8e6 PushT
	if(var_544_object == 0) goto Label_2281; // 0x8e7 JumpB
	goto Label_2286; // 0x8e8 Jump
	
Label_2281:
	var_545_string = "all"; // 0x8e9 PushS
	var_546_string = "idle"; // 0x8ea PushS
	PlayAnimation(var_545_string, var_546_string); // 0x8eb Func
	goto Label_2276; // 0x8ed Jump
}


func_11944()
{
	var_348_object = Obj(); var_349_object = Obj(); // 0x2ea8 PushV
	var_350_int = 652; // 0x2ea9 PushI
	var_351_int = 2; // 0x2eaa PushI
	var_352_int = 533365; // 0x2eab PushI
	CreateDiaryEntry(var_349_object, var_350_int, var_351_int, var_352_int); // 0x2eac Func
	var_353_bool = 0; var_354_object = Obj(); var_355_int = 0; // 0x2eae PushV
	var_354_object = var_349_object; // 0x2eaf Mov
	var_355_int = 649; // 0x2eb0 MovI
	func_11983(var_353_bool, var_354_object, var_355_int); // 0x2eb1 NEW_2
	return 2; // 0x2eb3 Return
}


func_11433(var_822_bool)
{
	var_824_int = 0; var_825_string = ""; // 0x2caa PushV
	var_825_string = "d5q03"; // 0x2cab MovS
	func_10093(var_824_int, var_825_string); // 0x2cac NEW_2
	var_826_int = -1; // 0x2cae PushI
	var_827_bool = var_824_int == var_826_int; // 0x2caf Eq
	if(var_827_bool == 0) goto Label_11443; // 0x2cb0 JumpB
	var_822_bool = 1; // 0x2cb1 MovB
	return 0; // 0x2cb2 Return
	
Label_11443:
	var_822_bool = 0; // 0x2cb3 MovB
	return 0; // 0x2cb4 Return
}


func_10418()
{
	var_175_string = "d1q01"; // 0x28b3 PushS
	var_176_int = 7; // 0x28b4 PushI
	SetVariable(var_175_string, var_176_int); // 0x28b5 Func
	func_11723(); // 0x28b8 NEW_2
	var_185_bool = 0; var_186_string = ""; var_187_string = ""; // 0x28ba PushV
	var_186_string = "quest_d1_01"; // 0x28bb MovS
	var_187_string = "place_rubin"; // 0x28bc MovS
	func_10228(var_185_bool, var_186_string, var_187_string); // 0x28bd NEW_2
	return 0; // 0x28bf Return
}


func_11445(var_866_bool)
{
	var_868_int = 0; var_869_string = ""; // 0x2cb6 PushV
	var_869_string = "d5q03"; // 0x2cb7 MovS
	func_10093(var_868_int, var_869_string); // 0x2cb8 NEW_2
	var_870_int = 2; // 0x2cba PushI
	var_871_bool = var_868_int == var_870_int; // 0x2cbb Eq
	if(var_871_bool == 0) goto Label_11455; // 0x2cbc JumpB
	var_866_bool = 1; // 0x2cbd MovB
	return 0; // 0x2cbe Return
	
Label_11455:
	var_866_bool = 0; // 0x2cbf MovB
	return 0; // 0x2cc0 Return
}


func_11957()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x2eb5 PushV
	var_109_int = 650; // 0x2eb6 PushI
	var_110_int = 2; // 0x2eb7 PushI
	var_111_int = 533363; // 0x2eb8 PushI
	CreateDiaryEntry(var_108_object, var_109_int, var_110_int, var_111_int); // 0x2eb9 Func
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0; // 0x2ebb PushV
	var_113_object = var_108_object; // 0x2ebc Mov
	var_114_int = 649; // 0x2ebd MovI
	func_11983(var_112_bool, var_113_object, var_114_int); // 0x2ebe NEW_2
	return 2; // 0x2ec0 Return
}


func_9915(var_177_bool)
{
	var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; var_184_string = ""; var_185_int = 0; var_186_bool = 0; var_187_int = 0; var_188_string = ""; // 0x26bb PushV
	var_184_string = "c"; // 0x26bc MovS
	var_185_int = 0; // 0x26bd MovI
	
Label_9918:
	var_189_int = 1; // 0x26be PushI
	if(var_189_int == 0) goto Label_9931; // 0x26bf JumpB
	var_190_int = 1; // 0x26c0 PushI
	var_191_int = var_185_int + var_190_int; // 0x26c1 Add
	var_192_int = var_184_string + var_191_int; // 0x26c2 Add
	HasProperty(var_192_int, var_186_bool); // 0x26c3 ObjFunc
	var_193_bool = var_186_bool == 0; // 0x26c5 Not
	if(var_193_bool == 0) goto Label_9928; // 0x26c6 JumpB
	goto Label_9931; // 0x26c7 Jump
	
Label_9931:
	var_194_bool = var_185_int == 0; // 0x26cb Not
	if(var_194_bool == 0) goto Label_9935; // 0x26cc JumpB
	var_177_bool = 0; // 0x26cd MovB
	return 10; // 0x26ce Return
	
Label_9935:
	var_187_int = 0; // 0x26cf MovI
	var_195_int = 1; // 0x26d0 PushI
	var_196_bool = var_185_int > var_195_int; // 0x26d1 GT
	if(var_196_bool == 0) goto Label_9941; // 0x26d2 JumpB
	irand(var_187_int, var_185_int); // 0x26d3 Func
	
Label_9941:
	var_197_int = 1; // 0x26d5 PushI
	var_198_int = var_187_int + var_197_int; // 0x26d6 Add
	var_199_int = var_184_string + var_198_int; // 0x26d7 Add
	GetProperty(var_199_int, var_188_string); // 0x26d8 ObjFunc
	var_200_bool = 0; var_201_string = ""; // 0x26da PushV
	var_201_string = var_188_string; // 0x26db Mov
	func_10026(var_200_bool, var_201_string); // 0x26dc NEW_2
	var_177_bool = var_200_bool; // 0x26dd Mov
	return 10; // 0x26df Return
	
Label_9928:
	var_206_int = 1; // 0x26c8 PushI
	var_185_int = var_185_int + var_206_int; // 0x26c9 Add2
	goto Label_9918; // 0x26ca Jump
}


func_10941()
{
	var_131_string = "ood8MladVlad1"; // 0x2abe PushS
	var_132_int = 1; // 0x2abf PushI
	SetVariable(var_131_string, var_132_int); // 0x2ac0 Func
	return 0; // 0x2ac2 Return
}


func_10432()
{
	var_392_string = "ood1MladVlad1"; // 0x28c1 PushS
	var_393_int = 1; // 0x28c2 PushI
	SetVariable(var_392_string, var_393_int); // 0x28c3 Func
	return 0; // 0x28c5 Return
}


func_193()
{
	StopGroup0(); // 0xc1 Func
	StopAnimation(); // 0xc3 Func
	return 0; // 0xc5 Return
}


func_11457(var_872_bool)
{
	var_874_int = 0; var_875_string = ""; // 0x2cc2 PushV
	var_875_string = "ood5MladVlad1"; // 0x2cc3 MovS
	func_10093(var_874_int, var_875_string); // 0x2cc4 NEW_2
	var_876_int = 0; // 0x2cc6 PushI
	var_877_bool = var_874_int == var_876_int; // 0x2cc7 Eq
	if(var_877_bool == 0) goto Label_11467; // 0x2cc8 JumpB
	var_872_bool = 1; // 0x2cc9 MovB
	return 0; // 0x2cca Return
	
Label_11467:
	var_872_bool = 0; // 0x2ccb MovB
	return 0; // 0x2ccc Return
}


func_10947()
{
	var_205_string = "ood8MladVlad2"; // 0x2ac4 PushS
	var_206_int = 1; // 0x2ac5 PushI
	SetVariable(var_205_string, var_206_int); // 0x2ac6 Func
	return 0; // 0x2ac8 Return
}


func_9411(var_0_bool, var_1_object, var_2_object, var_3_object, var_1553_object, var_1554_object)
{
	var_0_bool = var_1554_object; // 0x24c4 TMov
	var_1_object = var_1553_object; // 0x24c5 TMov
	var_3_object = 0; // 0x24c6 TMovB
	var_1559_int = 1; // 0x24c7 PushI
	if(var_1559_int == 0) goto Label_9439; // 0x24c8 JumpB
	var_1560_string = ""; // 0x24c9 PushV
	var_1560_string = "Neutral"; // 0x24ca MovS
	func_9469(var_1554_object, var_1560_string); // 0x24cb NEW_2
	var_1568_int = 540542; // 0x24cd PushI
	SetMessage(var_1568_int); // 0x24ce TObjFunc
	ClearReplies(); // 0x24d0 TObjFunc
	var_1569_int = 540543; // 0x24d2 PushI
	var_1570_int = -1; // 0x24d3 PushI
	var_1571_int = 42552; // 0x24d4 PushI
	AddReply(var_1569_int, var_1570_int, var_1571_int); // 0x24d5 TObjFunc
	var_1572_int = 540796; // 0x24d7 PushI
	var_1573_int = -1; // 0x24d8 PushI
	var_1574_int = 42845; // 0x24d9 PushI
	AddReply(var_1572_int, var_1573_int, var_1574_int); // 0x24da TObjFunc
	goto Label_9439; // 0x24dc Jump
	
Label_9439:
	var_1575_bool = 0; // 0x24df PushV
	func_10306(var_1575_bool); // 0x24e0 NEW_2
	if(var_1575_bool == 0) goto Label_9454; // 0x24e2 JumpB
	
Label_9443:
	lshWaitForAnimEnd(); // 0x24e3 Func
	var_1576_object = var_3_object; // 0x24e5 PushT
	if(var_1576_object == 0) goto Label_9448; // 0x24e6 JumpB
	goto Label_9453; // 0x24e7 Jump
	
Label_9453:
	goto Label_9468; // 0x24ed Jump
	
Label_9468:
	return 0; // 0x24fc Return
	
Label_9448:
	var_1577_string = ""; // 0x24e8 PushV
	var_1577_string = var_2_object; // 0x24e9 MovT
	func_9995(var_1577_string); // 0x24ea NEW_2
	goto Label_9443; // 0x24ec Jump
	
Label_9454:
	var_1578_string = "all"; // 0x24ee PushS
	var_1579_string = "idle"; // 0x24ef PushS
	PlayAnimation(var_1578_string, var_1579_string); // 0x24f0 Func
	
Label_9458:
	WaitForAnimEnd(); // 0x24f2 Func
	var_1580_object = var_3_object; // 0x24f4 PushT
	if(var_1580_object == 0) goto Label_9463; // 0x24f5 JumpB
	goto Label_9468; // 0x24f6 Jump
	
Label_9463:
	var_1581_string = "all"; // 0x24f7 PushS
	var_1582_string = "idle"; // 0x24f8 PushS
	PlayAnimation(var_1581_string, var_1582_string); // 0x24f9 Func
	goto Label_9458; // 0x24fb Jump
}


func_11970(var_96_object)
{
	var_97_object = Obj(); var_98_object = Obj(); // 0x2ec2 PushV
	GetDiaryRoot(var_98_object); // 0x2ec3 Func
	var_99_bool = var_98_object == 0; // 0x2ec5 Not
	if(var_99_bool == 0) goto Label_11980; // 0x2ec6 JumpB
	var_100_string = "Can't retrieve diary root"; // 0x2ec7 PushS
	Trace(var_100_string); // 0x2ec8 Func
	var_96_object = 0; // 0x2eca MovB
	return 2; // 0x2ecb Return
	
Label_11980:
	var_96_object = var_98_object; // 0x2ecc Mov
	return 2; // 0x2ecd Return
}


func_10438()
{
	var_169_string = "ood1MladVlad2"; // 0x28c7 PushS
	var_170_int = 1; // 0x28c8 PushI
	SetVariable(var_169_string, var_170_int); // 0x28c9 Func
	return 0; // 0x28cb Return
}


func_6343(var_0_bool, var_1_object, var_2_object, var_3_object, var_1111_object, var_1112_object)
{
	var_0_bool = var_1112_object; // 0x18c8 TMov
	var_1_object = var_1111_object; // 0x18c9 TMov
	var_3_object = 0; // 0x18ca TMovB
	var_1117_int = 1; // 0x18cb PushI
	if(var_1117_int == 0) goto Label_6566; // 0x18cc JumpB
	var_1118_bool = 0; var_1119_object = Obj(); // 0x18cd PushV
	var_1119_object = var_1_object; // 0x18ce MovT
	func_11181(var_1119_object); // 0x18cf NEW_2
	if(var_1118_bool == 0) goto Label_6384; // 0x18d1 JumpB
	var_1124_object = Obj(); var_1125_object = Obj(); // 0x18d2 PushV
	var_1124_object = var_1_object; // 0x18d3 MovT
	var_1125_object = var_0_bool; // 0x18d4 MovT
	func_10456(); // 0x18d5 NEW_2
	var_1128_object = Obj(); var_1129_object = Obj(); // 0x18d7 PushV
	var_1128_object = var_1_object; // 0x18d8 MovT
	var_1129_object = var_0_bool; // 0x18d9 MovT
	func_10485(); // 0x18da NEW_2
	var_1132_string = ""; // 0x18dc PushV
	var_1132_string = "Sly"; // 0x18dd MovS
	func_6596(var_1112_object, var_1132_string); // 0x18de NEW_2
	var_1140_int = 533324; // 0x18e0 PushI
	SetMessage(var_1140_int); // 0x18e1 TObjFunc
	ClearReplies(); // 0x18e3 TObjFunc
	var_1141_int = 535993; // 0x18e5 PushI
	var_1142_int = 37724; // 0x18e6 PushI
	var_1143_int = 37723; // 0x18e7 PushI
	AddReply(var_1141_int, var_1142_int, var_1143_int); // 0x18e8 TObjFunc
	var_1144_int = 536001; // 0x18ea PushI
	var_1145_int = 37724; // 0x18eb PushI
	var_1146_int = 37731; // 0x18ec PushI
	AddReply(var_1144_int, var_1145_int, var_1146_int); // 0x18ed TObjFunc
	goto Label_6566; // 0x18ef Jump
	
Label_6566:
	var_1147_bool = 0; // 0x19a6 PushV
	func_10306(var_1147_bool); // 0x19a7 NEW_2
	if(var_1147_bool == 0) goto Label_6581; // 0x19a9 JumpB
	
Label_6570:
	lshWaitForAnimEnd(); // 0x19aa Func
	var_1148_object = var_3_object; // 0x19ac PushT
	if(var_1148_object == 0) goto Label_6575; // 0x19ad JumpB
	goto Label_6580; // 0x19ae Jump
	
Label_6580:
	goto Label_6595; // 0x19b4 Jump
	
Label_6595:
	return 0; // 0x19c3 Return
	
Label_6575:
	var_1149_string = ""; // 0x19af PushV
	var_1149_string = var_2_object; // 0x19b0 MovT
	func_9995(var_1149_string); // 0x19b1 NEW_2
	goto Label_6570; // 0x19b3 Jump
	
Label_6581:
	var_1150_string = "all"; // 0x19b5 PushS
	var_1151_string = "idle"; // 0x19b6 PushS
	PlayAnimation(var_1150_string, var_1151_string); // 0x19b7 Func
	
Label_6585:
	WaitForAnimEnd(); // 0x19b9 Func
	var_1152_object = var_3_object; // 0x19bb PushT
	if(var_1152_object == 0) goto Label_6590; // 0x19bc JumpB
	goto Label_6595; // 0x19bd Jump
	
Label_6590:
	var_1153_string = "all"; // 0x19be PushS
	var_1154_string = "idle"; // 0x19bf PushS
	PlayAnimation(var_1153_string, var_1154_string); // 0x19c0 Func
	goto Label_6585; // 0x19c2 Jump
	
Label_6384:
	var_1155_string = ""; // 0x18f0 PushV
	var_1155_string = "Neutral"; // 0x18f1 MovS
	func_6596(var_1112_object, var_1155_string); // 0x18f2 NEW_2
	var_1156_int = 512410; // 0x18f4 PushI
	SetMessage(var_1156_int); // 0x18f5 TObjFunc
	ClearReplies(); // 0x18f7 TObjFunc
	var_1157_bool = 0; // 0x18f9 PushV
	var_1157_bool = 0; // 0x18fa MovB
	var_1158_bool = 0; // 0x18fb PushV
	var_1158_bool = 0; // 0x18fc MovB
	var_1159_bool = 0; var_1160_object = Obj(); // 0x18fd PushV
	var_1160_object = var_1_object; // 0x18fe MovT
	func_11517(var_1160_object); // 0x18ff NEW_2
	if(var_1159_bool == 0) goto Label_6408; // 0x1901 JumpB
	var_1165_bool = 0; var_1166_object = Obj(); // 0x1902 PushV
	var_1166_object = var_1_object; // 0x1903 MovT
	func_11541(var_1166_object); // 0x1904 NEW_2
	if(var_1165_bool == 0) goto Label_6408; // 0x1906 JumpB
	var_1158_bool = 1; // 0x1907 MovB
	
Label_6408:
	if(var_1158_bool == 0) goto Label_6416; // 0x1908 JumpB
	var_1171_bool = 0; var_1172_object = Obj(); // 0x1909 PushV
	var_1172_object = var_1_object; // 0x190a MovT
	func_11529(var_1172_object); // 0x190b NEW_2
	var_1177_bool = var_1171_bool == 0; // 0x190d Not
	if(var_1177_bool == 0) goto Label_6416; // 0x190e JumpB
	var_1157_bool = 1; // 0x190f MovB
	
Label_6416:
	if(var_1157_bool == 0) goto Label_6422; // 0x1910 JumpB
	var_1178_int = 512412; // 0x1911 PushI
	var_1179_int = 13577; // 0x1912 PushI
	var_1180_int = 13576; // 0x1913 PushI
	AddReply(var_1178_int, var_1179_int, var_1180_int); // 0x1914 TObjFunc
	
Label_6422:
	var_1181_bool = 0; // 0x1916 PushV
	var_1181_bool = 0; // 0x1917 MovB
	var_1182_bool = 0; var_1183_object = Obj(); // 0x1918 PushV
	var_1183_object = var_1_object; // 0x1919 MovT
	func_11529(var_1183_object); // 0x191a NEW_2
	if(var_1182_bool == 0) goto Label_6435; // 0x191c JumpB
	var_1184_bool = 0; var_1185_object = Obj(); // 0x191d PushV
	var_1185_object = var_1_object; // 0x191e MovT
	func_11553(var_1185_object); // 0x191f NEW_2
	if(var_1184_bool == 0) goto Label_6435; // 0x1921 JumpB
	var_1181_bool = 1; // 0x1922 MovB
	
Label_6435:
	if(var_1181_bool == 0) goto Label_6441; // 0x1923 JumpB
	var_1190_int = 513588; // 0x1924 PushI
	var_1191_int = 14840; // 0x1925 PushI
	var_1192_int = 14839; // 0x1926 PushI
	AddReply(var_1190_int, var_1191_int, var_1192_int); // 0x1927 TObjFunc
	
Label_6441:
	var_1193_bool = 0; // 0x1929 PushV
	var_1193_bool = 0; // 0x192a MovB
	var_1194_bool = 0; // 0x192b PushV
	var_1194_bool = 0; // 0x192c MovB
	var_1195_bool = 0; // 0x192d PushV
	var_1195_bool = 0; // 0x192e MovB
	var_1196_bool = 0; var_1197_object = Obj(); // 0x192f PushV
	var_1197_object = var_1_object; // 0x1930 MovT
	func_11565(var_1197_object); // 0x1931 NEW_2
	if(var_1196_bool == 0) goto Label_6458; // 0x1933 JumpB
	var_1202_bool = 0; var_1203_object = Obj(); // 0x1934 PushV
	var_1203_object = var_1_object; // 0x1935 MovT
	func_11529(var_1203_object); // 0x1936 NEW_2
	if(var_1202_bool == 0) goto Label_6458; // 0x1938 JumpB
	var_1195_bool = 1; // 0x1939 MovB
	
Label_6458:
	if(var_1195_bool == 0) goto Label_6465; // 0x193a JumpB
	var_1204_bool = 0; var_1205_object = Obj(); // 0x193b PushV
	var_1205_object = var_1_object; // 0x193c MovT
	func_11577(var_1205_object); // 0x193d NEW_2
	if(var_1204_bool == 0) goto Label_6465; // 0x193f JumpB
	var_1194_bool = 1; // 0x1940 MovB
	
Label_6465:
	if(var_1194_bool == 0) goto Label_6473; // 0x1941 JumpB
	var_1210_bool = 0; var_1211_object = Obj(); // 0x1942 PushV
	var_1211_object = var_1_object; // 0x1943 MovT
	func_11613(var_1211_object); // 0x1944 NEW_2
	var_1216_bool = var_1210_bool == 0; // 0x1946 Not
	if(var_1216_bool == 0) goto Label_6473; // 0x1947 JumpB
	var_1193_bool = 1; // 0x1948 MovB
	
Label_6473:
	if(var_1193_bool == 0) goto Label_6479; // 0x1949 JumpB
	var_1217_int = 513607; // 0x194a PushI
	var_1218_int = 14868; // 0x194b PushI
	var_1219_int = 14862; // 0x194c PushI
	AddReply(var_1217_int, var_1218_int, var_1219_int); // 0x194d TObjFunc
	
Label_6479:
	var_1220_bool = 0; // 0x194f PushV
	var_1220_bool = 0; // 0x1950 MovB
	var_1221_bool = 0; // 0x1951 PushV
	var_1221_bool = 0; // 0x1952 MovB
	var_1222_bool = 0; var_1223_object = Obj(); // 0x1953 PushV
	var_1223_object = var_1_object; // 0x1954 MovT
	func_11565(var_1223_object); // 0x1955 NEW_2
	if(var_1222_bool == 0) goto Label_6494; // 0x1957 JumpB
	var_1224_bool = 0; var_1225_object = Obj(); // 0x1958 PushV
	var_1225_object = var_1_object; // 0x1959 MovT
	func_11601(var_1225_object); // 0x195a NEW_2
	if(var_1224_bool == 0) goto Label_6494; // 0x195c JumpB
	var_1221_bool = 1; // 0x195d MovB
	
Label_6494:
	if(var_1221_bool == 0) goto Label_6502; // 0x195e JumpB
	var_1230_bool = 0; var_1231_object = Obj(); // 0x195f PushV
	var_1231_object = var_1_object; // 0x1960 MovT
	func_11625(var_1231_object); // 0x1961 NEW_2
	var_1236_bool = var_1230_bool == 0; // 0x1963 Not
	if(var_1236_bool == 0) goto Label_6502; // 0x1964 JumpB
	var_1220_bool = 1; // 0x1965 MovB
	
Label_6502:
	if(var_1220_bool == 0) goto Label_6508; // 0x1966 JumpB
	var_1237_int = 513618; // 0x1967 PushI
	var_1238_int = 14874; // 0x1968 PushI
	var_1239_int = 14873; // 0x1969 PushI
	AddReply(var_1237_int, var_1238_int, var_1239_int); // 0x196a TObjFunc
	
Label_6508:
	var_1240_bool = 0; // 0x196c PushV
	var_1240_bool = 0; // 0x196d MovB
	var_1241_bool = 0; // 0x196e PushV
	var_1241_bool = 0; // 0x196f MovB
	var_1242_bool = 0; var_1243_object = Obj(); // 0x1970 PushV
	var_1243_object = var_1_object; // 0x1971 MovT
	func_11529(var_1243_object); // 0x1972 NEW_2
	var_1244_bool = var_1242_bool == 0; // 0x1974 Not
	if(var_1244_bool == 0) goto Label_6524; // 0x1975 JumpB
	var_1245_bool = 0; var_1246_object = Obj(); // 0x1976 PushV
	var_1246_object = var_1_object; // 0x1977 MovT
	func_11517(var_1246_object); // 0x1978 NEW_2
	if(var_1245_bool == 0) goto Label_6524; // 0x197a JumpB
	var_1241_bool = 1; // 0x197b MovB
	
Label_6524:
	if(var_1241_bool == 0) goto Label_6531; // 0x197c JumpB
	var_1247_bool = 0; var_1248_object = Obj(); // 0x197d PushV
	var_1248_object = var_1_object; // 0x197e MovT
	func_11589(var_1248_object); // 0x197f NEW_2
	if(var_1247_bool == 0) goto Label_6531; // 0x1981 JumpB
	var_1240_bool = 1; // 0x1982 MovB
	
Label_6531:
	if(var_1240_bool == 0) goto Label_6537; // 0x1983 JumpB
	var_1253_int = 513612; // 0x1984 PushI
	var_1254_int = 14863; // 0x1985 PushI
	var_1255_int = 14867; // 0x1986 PushI
	AddReply(var_1253_int, var_1254_int, var_1255_int); // 0x1987 TObjFunc
	
Label_6537:
	var_1256_bool = 0; var_1257_object = Obj(); // 0x1989 PushV
	var_1257_object = var_1_object; // 0x198a MovT
	func_11671(var_1256_bool, var_1257_object); // 0x198b NEW_2
	var_1258_bool = var_1256_bool == 0; // 0x198d Not
	if(var_1258_bool == 0) goto Label_6548; // 0x198e JumpB
	var_1259_int = 520922; // 0x198f PushI
	var_1260_int = 22140; // 0x1990 PushI
	var_1261_int = 22139; // 0x1991 PushI
	AddReply(var_1259_int, var_1260_int, var_1261_int); // 0x1992 TObjFunc
	
Label_6548:
	var_1262_bool = 0; var_1263_object = Obj(); // 0x1994 PushV
	var_1263_object = var_1_object; // 0x1995 MovT
	func_11193(var_1263_object); // 0x1996 NEW_2
	if(var_1262_bool == 0) goto Label_6558; // 0x1998 JumpB
	var_1268_int = 533337; // 0x1999 PushI
	var_1269_int = 37749; // 0x199a PushI
	var_1270_int = 34841; // 0x199b PushI
	AddReply(var_1268_int, var_1269_int, var_1270_int); // 0x199c TObjFunc
	
Label_6558:
	var_1271_int = 512411; // 0x199e PushI
	var_1272_int = -1; // 0x199f PushI
	var_1273_int = 13575; // 0x19a0 PushI
	AddReply(var_1271_int, var_1272_int, var_1273_int); // 0x19a1 TObjFunc
	goto Label_6566; // 0x19a3 Jump
}


func_198(var_184_int)
{
	var_185_string = ""; var_186_bool = 0; var_187_string = ""; var_188_int = 0; var_189_int = 0; var_190_int = 0; var_191_int = 0; var_192_string = ""; var_193_bool = 0; var_194_string = ""; var_195_int = 0; var_196_int = 0; var_197_int = 0; var_198_int = 0; // 0xc6 PushV
	var_199_int = var_184_int; // 0xc7 Push
	if(var_199_int == 0) goto Label_204; // 0xc8 JumpB
	var_200_string = "ptidle"; // 0xc9 PushS
	var_192_string = var_200_string + var_184_int; // 0xca Add2
	goto Label_205; // 0xcb Jump
	
Label_205:
	HasProperty(var_192_string, var_193_bool); // 0xcd Func
	var_201_bool = var_193_bool; // 0xcf Push
	if(var_201_bool == 0) goto Label_229; // 0xd0 JumpB
	GetProperty(var_192_string, var_194_string); // 0xd1 Func
	var_202_int = 0; var_203_string = ""; // 0xd3 PushV
	var_203_string = var_194_string; // 0xd4 Mov
	func_264(var_202_int, var_203_string); // 0xd5 NEW_2
	var_195_int = var_202_int; // 0xd6 Mov
	irand(var_196_int, var_195_int); // 0xd8 Func
	var_216_string = "all"; // 0xda PushS
	var_217_string = ""; var_218_string = ""; var_219_int = 0; // 0xdb PushV
	var_218_string = var_194_string; // 0xdc Mov
	var_219_int = var_196_int; // 0xdd Mov
	func_256(var_217_string, var_218_string, var_219_int); // 0xde NEW_2
	PlayAnimation(var_216_string, var_217_string); // 0xe0 Func
	WaitForAnimEnd(); // 0xe2 Func
	goto Label_246; // 0xe4 Jump
	
Label_246:
	return 14; // 0xf6 Return
	
Label_229:
	var_220_int = 0; // 0xe5 PushV
	func_10267(var_220_int); // 0xe6 NEW_2
	var_197_int = var_220_int; // 0xe7 Mov
	var_233_int = var_197_int; // 0xe9 Push
	if(var_233_int == 0) goto Label_246; // 0xea JumpB
	irand(var_198_int, var_197_int); // 0xeb Func
	var_234_string = "all"; // 0xed PushS
	var_235_string = ""; var_236_int = 0; // 0xee PushV
	var_236_int = var_198_int; // 0xef Mov
	func_10260(var_235_string, var_236_int); // 0xf0 NEW_2
	PlayAnimation(var_234_string, var_235_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	
Label_204:
	var_192_string = "ptidle"; // 0xcc MovS
}


func_10953()
{
	var_211_object = Obj(); var_212_object = Obj(); // 0x2ac9 PushV
	var_213_bool = 0; // 0x2aca PushV
	var_213_bool = 0; // 0x2acb MovB
	var_214_int = 0; var_215_string = ""; // 0x2acc PushV
	var_215_string = "d8q01BringBadBoy"; // 0x2acd MovS
	func_10093(var_214_int, var_215_string); // 0x2ace NEW_2
	var_218_int = 1; // 0x2ad0 PushI
	var_219_bool = var_214_int != var_218_int; // 0x2ad1 Neq
	if(var_219_bool == 0) goto Label_10971; // 0x2ad2 JumpB
	var_220_int = 0; var_221_string = ""; // 0x2ad3 PushV
	var_221_string = "d8q01MatBringToy"; // 0x2ad4 MovS
	func_10093(var_220_int, var_221_string); // 0x2ad5 NEW_2
	var_222_int = 1; // 0x2ad7 PushI
	var_223_bool = var_220_int != var_222_int; // 0x2ad8 Neq
	if(var_223_bool == 0) goto Label_10971; // 0x2ad9 JumpB
	var_213_bool = 1; // 0x2ada MovB
	
Label_10971:
	if(var_213_bool == 0) goto Label_10989; // 0x2adb JumpB
	var_224_object = Obj(); // 0x2adc PushV
	func_12011(var_224_object); // 0x2add NEW_2
	var_212_object = var_224_object; // 0x2ade Mov
	var_225_string = "d8q01MladVladGotoMat"; // 0x2ae0 PushS
	var_226_string = "pt_map_mat"; // 0x2ae1 PushS
	var_227_int = 1; // 0x2ae2 PushI
	var_228_int = 515327; // 0x2ae3 PushI
	var_229_float = 0; // 0x2ae4 PushV
	func_10240(var_229_float); // 0x2ae5 NEW_2
	AddMark(var_225_string, var_226_string, var_227_int, var_228_int, var_229_float); // 0x2ae7 ObjFunc
	func_11905(); // 0x2aea NEW_2
	var_212_object = 0; // 0x2aec SetNull
	
Label_10989:
	return 2; // 0x2aed Return
}


func_10444()
{
	var_209_string = "ood1MladVlad3"; // 0x28cd PushS
	var_210_int = 1; // 0x28ce PushI
	SetVariable(var_209_string, var_210_int); // 0x28cf Func
	return 0; // 0x28d1 Return
}


func_11469(var_884_bool)
{
	var_886_int = 0; var_887_string = ""; // 0x2cce PushV
	var_887_string = "ood5MladVlad2"; // 0x2ccf MovS
	func_10093(var_886_int, var_887_string); // 0x2cd0 NEW_2
	var_888_int = 0; // 0x2cd2 PushI
	var_889_bool = var_886_int == var_888_int; // 0x2cd3 Eq
	if(var_889_bool == 0) goto Label_11479; // 0x2cd4 JumpB
	var_884_bool = 1; // 0x2cd5 MovB
	return 0; // 0x2cd6 Return
	
Label_11479:
	var_884_bool = 0; // 0x2cd7 MovB
	return 0; // 0x2cd8 Return
}


func_11983(var_87_bool, var_88_object, var_89_int)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_int = 0; var_93_object = Obj(); var_94_object = Obj(); var_95_int = 0; // 0x2ecf PushV
	var_96_object = Obj(); // 0x2ed0 PushV
	func_11970(var_96_object); // 0x2ed1 NEW_2
	var_93_object = var_96_object; // 0x2ed2 Mov
	Find(var_89_int, var_94_object); // 0x2ed4 ObjFunc
	var_101_bool = var_94_object == 0; // 0x2ed6 Not
	if(var_101_bool == 0) goto Label_11998; // 0x2ed7 JumpB
	var_102_string = "Can't find diary parent with id: "; // 0x2ed8 PushS
	var_103_int = var_102_string + var_89_int; // 0x2ed9 Add
	Trace(var_103_int); // 0x2eda Func
	var_87_bool = 0; // 0x2edc MovB
	return 6; // 0x2edd Return
	
Label_11998:
	AddChild(var_88_object); // 0x2ede ObjFunc
	var_104_int = 7; // 0x2ee0 PushI
	SendWorldWndMessage(var_104_int); // 0x2ee1 Func
	GetCategory(var_95_int); // 0x2ee3 ObjFunc
	SetDiarySection(var_95_int); // 0x2ee5 Func
	var_87_bool = 0; // 0x2ee7 MovB
	return 6; // 0x2ee8 Return
}


func_10450()
{
	var_711_string = "d4MladVladVisit"; // 0x28d3 PushS
	var_712_int = 1; // 0x28d4 PushI
	SetVariable(var_711_string, var_712_int); // 0x28d5 Func
	return 0; // 0x28d7 Return
}


func_3796(var_2_object, var_713_string)
{
	var_714_bool = 0; // 0xed5 PushV
	func_10306(var_714_bool); // 0xed6 NEW_2
	var_715_bool = var_714_bool == 0; // 0xed8 Not
	if(var_715_bool == 0) goto Label_3803; // 0xed9 JumpB
	return 0; // 0xeda Return
	
Label_3803:
	var_716_bool = var_713_string == var_2_object; // 0xedb Eq
	if(var_716_bool == 0) goto Label_3806; // 0xedc JumpB
	return 0; // 0xedd Return
	
Label_3806:
	var_717_string = ""; var_718_bool = 0; // 0xede PushV
	var_717_string = var_713_string; // 0xedf Mov
	var_719_string = ""; // 0xee0 PushS
	var_720_bool = var_713_string == var_719_string; // 0xee1 Eq
	if(var_720_bool == 0) goto Label_3813; // 0xee2 JumpB
	var_718_bool = 0; // 0xee3 MovB
	goto Label_3814; // 0xee4 Jump
	
Label_3814:
	func_10011(var_717_string, var_718_bool); // 0xee6 NEW_2
	var_2_object = var_713_string; // 0xee8 TMov
	return 0; // 0xee9 Return
	
Label_3813:
	var_718_bool = 1; // 0xee5 MovB
}


func_10456()
{
	var_1126_string = "ood8MladVlad6"; // 0x28d9 PushS
	var_1127_int = 1; // 0x28da PushI
	SetVariable(var_1126_string, var_1127_int); // 0x28db Func
	return 0; // 0x28dd Return
}


func_11481(var_809_bool)
{
	var_811_int = 0; var_812_string = ""; // 0x2cda PushV
	var_812_string = "ood5MladVlad3"; // 0x2cdb MovS
	func_10093(var_811_int, var_812_string); // 0x2cdc NEW_2
	var_813_int = 0; // 0x2cde PushI
	var_814_bool = var_811_int == var_813_int; // 0x2cdf Eq
	if(var_814_bool == 0) goto Label_11491; // 0x2ce0 JumpB
	var_809_bool = 1; // 0x2ce1 MovB
	return 0; // 0x2ce2 Return
	
Label_11491:
	var_809_bool = 0; // 0x2ce3 MovB
	return 0; // 0x2ce4 Return
}


func_10462()
{
	var_338_object = Obj(); var_339_object = Obj(); // 0x28de PushV
	var_340_string = "d8q04"; // 0x28df PushS
	var_341_int = 3; // 0x28e0 PushI
	SetVariable(var_340_string, var_341_int); // 0x28e1 Func
	var_342_object = Obj(); // 0x28e3 PushV
	func_12011(var_342_object); // 0x28e4 NEW_2
	var_339_object = var_342_object; // 0x28e5 Mov
	var_343_string = "d8q04MladVladGotoMark"; // 0x28e7 PushS
	var_344_string = "pt_map_theater"; // 0x28e8 PushS
	var_345_int = 0; // 0x28e9 PushI
	var_346_int = 515322; // 0x28ea PushI
	var_347_float = 0; // 0x28eb PushV
	func_10240(var_347_float); // 0x28ec NEW_2
	AddMark(var_343_string, var_344_string, var_345_int, var_346_int, var_347_float); // 0x28ee ObjFunc
	func_11944(); // 0x28f1 NEW_2
	return 2; // 0x28f3 Return
}


func_9952(var_208_bool)
{
	var_210_string = ""; var_211_int = 0; var_212_bool = 0; var_213_int = 0; var_214_string = ""; var_215_string = ""; var_216_int = 0; var_217_bool = 0; var_218_int = 0; var_219_string = ""; // 0x26e0 PushV
	var_220_string = "d"; // 0x26e1 PushS
	var_221_int = 0; // 0x26e2 PushV
	func_10245(var_221_int); // 0x26e3 NEW_2
	var_227_int = var_220_string + var_221_int; // 0x26e5 Add
	var_228_string = "m"; // 0x26e6 PushS
	var_215_string = var_227_int + var_228_string; // 0x26e7 Add2
	var_216_int = 0; // 0x26e8 MovI
	
Label_9961:
	var_229_int = 1; // 0x26e9 PushI
	if(var_229_int == 0) goto Label_9974; // 0x26ea JumpB
	var_230_int = 1; // 0x26eb PushI
	var_231_int = var_216_int + var_230_int; // 0x26ec Add
	var_232_int = var_215_string + var_231_int; // 0x26ed Add
	HasProperty(var_232_int, var_217_bool); // 0x26ee ObjFunc
	var_233_bool = var_217_bool == 0; // 0x26f0 Not
	if(var_233_bool == 0) goto Label_9971; // 0x26f1 JumpB
	goto Label_9974; // 0x26f2 Jump
	
Label_9974:
	var_234_bool = var_216_int == 0; // 0x26f6 Not
	if(var_234_bool == 0) goto Label_9978; // 0x26f7 JumpB
	var_208_bool = 0; // 0x26f8 MovB
	return 10; // 0x26f9 Return
	
Label_9978:
	var_218_int = 0; // 0x26fa MovI
	var_235_int = 1; // 0x26fb PushI
	var_236_bool = var_216_int > var_235_int; // 0x26fc GT
	if(var_236_bool == 0) goto Label_9984; // 0x26fd JumpB
	irand(var_218_int, var_216_int); // 0x26fe Func
	
Label_9984:
	var_237_int = 1; // 0x2700 PushI
	var_238_int = var_218_int + var_237_int; // 0x2701 Add
	var_239_int = var_215_string + var_238_int; // 0x2702 Add
	GetProperty(var_239_int, var_219_string); // 0x2703 ObjFunc
	var_240_bool = 0; var_241_string = ""; // 0x2705 PushV
	var_241_string = var_219_string; // 0x2706 Mov
	func_10026(var_240_bool, var_241_string); // 0x2707 NEW_2
	var_208_bool = var_240_bool; // 0x2708 Mov
	return 10; // 0x270a Return
	
Label_9971:
	var_242_int = 1; // 0x26f3 PushI
	var_216_int = var_216_int + var_242_int; // 0x26f4 Add2
	goto Label_9961; // 0x26f5 Jump
}


func_11493(var_984_bool)
{
	var_986_int = 0; var_987_string = ""; // 0x2ce6 PushV
	var_987_string = "d6q02GorbunDeath"; // 0x2ce7 MovS
	func_10093(var_986_int, var_987_string); // 0x2ce8 NEW_2
	var_988_int = 0; // 0x2cea PushI
	var_989_bool = var_986_int != var_988_int; // 0x2ceb Neq
	if(var_989_bool == 0) goto Label_11503; // 0x2cec JumpB
	var_984_bool = 1; // 0x2ced MovB
	return 0; // 0x2cee Return
	
Label_11503:
	var_984_bool = 0; // 0x2cef MovB
	return 0; // 0x2cf0 Return
}


func_4838(var_0_bool, var_1_object, var_2_object, var_3_object, var_800_object, var_801_object)
{
	var_0_bool = var_801_object; // 0x12e7 TMov
	var_1_object = var_800_object; // 0x12e8 TMov
	var_3_object = 0; // 0x12e9 TMovB
	var_806_int = 1; // 0x12ea PushI
	if(var_806_int == 0) goto Label_4966; // 0x12eb JumpB
	var_807_bool = 0; // 0x12ec PushV
	var_807_bool = 0; // 0x12ed MovB
	var_808_bool = 0; // 0x12ee PushV
	var_808_bool = 0; // 0x12ef MovB
	var_809_bool = 0; var_810_object = Obj(); // 0x12f0 PushV
	var_810_object = var_1_object; // 0x12f1 MovT
	func_11481(var_810_object); // 0x12f2 NEW_2
	if(var_809_bool == 0) goto Label_4860; // 0x12f4 JumpB
	var_815_bool = 0; var_816_object = Obj(); // 0x12f5 PushV
	var_816_object = var_1_object; // 0x12f6 MovT
	func_11421(var_816_object); // 0x12f7 NEW_2
	var_821_bool = var_815_bool == 0; // 0x12f9 Not
	if(var_821_bool == 0) goto Label_4860; // 0x12fa JumpB
	var_808_bool = 1; // 0x12fb MovB
	
Label_4860:
	if(var_808_bool == 0) goto Label_4868; // 0x12fc JumpB
	var_822_bool = 0; var_823_object = Obj(); // 0x12fd PushV
	var_823_object = var_1_object; // 0x12fe MovT
	func_11433(var_823_object); // 0x12ff NEW_2
	var_828_bool = var_822_bool == 0; // 0x1301 Not
	if(var_828_bool == 0) goto Label_4868; // 0x1302 JumpB
	var_807_bool = 1; // 0x1303 MovB
	
Label_4868:
	if(var_807_bool == 0) goto Label_4900; // 0x1304 JumpB
	var_829_object = Obj(); var_830_object = Obj(); // 0x1305 PushV
	var_829_object = var_1_object; // 0x1306 MovT
	var_830_object = var_0_bool; // 0x1307 MovT
	func_10896(); // 0x1308 NEW_2
	var_833_string = ""; // 0x130a PushV
	var_833_string = "Rage"; // 0x130b MovS
	func_4996(var_801_object, var_833_string); // 0x130c NEW_2
	var_841_int = 511741; // 0x130e PushI
	SetMessage(var_841_int); // 0x130f TObjFunc
	ClearReplies(); // 0x1311 TObjFunc
	var_842_int = 511743; // 0x1313 PushI
	var_843_int = 12951; // 0x1314 PushI
	var_844_int = 12949; // 0x1315 PushI
	AddReply(var_842_int, var_843_int, var_844_int); // 0x1316 TObjFunc
	var_845_bool = 0; var_846_object = Obj(); // 0x1318 PushV
	var_846_object = var_1_object; // 0x1319 MovT
	func_11409(var_846_object); // 0x131a NEW_2
	var_851_bool = var_845_bool == 0; // 0x131c Not
	if(var_851_bool == 0) goto Label_4899; // 0x131d JumpB
	var_852_int = 512586; // 0x131e PushI
	var_853_int = 13766; // 0x131f PushI
	var_854_int = 13753; // 0x1320 PushI
	AddReply(var_852_int, var_853_int, var_854_int); // 0x1321 TObjFunc
	
Label_4899:
	goto Label_4966; // 0x1323 Jump
	
Label_4966:
	var_855_bool = 0; // 0x1366 PushV
	func_10306(var_855_bool); // 0x1367 NEW_2
	if(var_855_bool == 0) goto Label_4981; // 0x1369 JumpB
	
Label_4970:
	lshWaitForAnimEnd(); // 0x136a Func
	var_856_object = var_3_object; // 0x136c PushT
	if(var_856_object == 0) goto Label_4975; // 0x136d JumpB
	goto Label_4980; // 0x136e Jump
	
Label_4980:
	goto Label_4995; // 0x1374 Jump
	
Label_4995:
	return 0; // 0x1383 Return
	
Label_4975:
	var_857_string = ""; // 0x136f PushV
	var_857_string = var_2_object; // 0x1370 MovT
	func_9995(var_857_string); // 0x1371 NEW_2
	goto Label_4970; // 0x1373 Jump
	
Label_4981:
	var_858_string = "all"; // 0x1375 PushS
	var_859_string = "idle"; // 0x1376 PushS
	PlayAnimation(var_858_string, var_859_string); // 0x1377 Func
	
Label_4985:
	WaitForAnimEnd(); // 0x1379 Func
	var_860_object = var_3_object; // 0x137b PushT
	if(var_860_object == 0) goto Label_4990; // 0x137c JumpB
	goto Label_4995; // 0x137d Jump
	
Label_4990:
	var_861_string = "all"; // 0x137e PushS
	var_862_string = "idle"; // 0x137f PushS
	PlayAnimation(var_861_string, var_862_string); // 0x1380 Func
	goto Label_4985; // 0x1382 Jump
	
Label_4900:
	var_863_string = ""; // 0x1324 PushV
	var_863_string = "Neutral"; // 0x1325 MovS
	func_4996(var_801_object, var_863_string); // 0x1326 NEW_2
	var_864_int = 512573; // 0x1328 PushI
	SetMessage(var_864_int); // 0x1329 TObjFunc
	ClearReplies(); // 0x132b TObjFunc
	var_865_bool = 0; // 0x132d PushV
	var_865_bool = 0; // 0x132e MovB
	var_866_bool = 0; var_867_object = Obj(); // 0x132f PushV
	var_867_object = var_1_object; // 0x1330 MovT
	func_11445(var_867_object); // 0x1331 NEW_2
	if(var_866_bool == 0) goto Label_4922; // 0x1333 JumpB
	var_872_bool = 0; var_873_object = Obj(); // 0x1334 PushV
	var_873_object = var_1_object; // 0x1335 MovT
	func_11457(var_873_object); // 0x1336 NEW_2
	if(var_872_bool == 0) goto Label_4922; // 0x1338 JumpB
	var_865_bool = 1; // 0x1339 MovB
	
Label_4922:
	if(var_865_bool == 0) goto Label_4928; // 0x133a JumpB
	var_878_int = 512574; // 0x133b PushI
	var_879_int = 13744; // 0x133c PushI
	var_880_int = 13743; // 0x133d PushI
	AddReply(var_878_int, var_879_int, var_880_int); // 0x133e TObjFunc
	
Label_4928:
	var_881_bool = 0; // 0x1340 PushV
	var_881_bool = 0; // 0x1341 MovB
	var_882_bool = 0; var_883_object = Obj(); // 0x1342 PushV
	var_883_object = var_1_object; // 0x1343 MovT
	func_11421(var_883_object); // 0x1344 NEW_2
	if(var_882_bool == 0) goto Label_4941; // 0x1346 JumpB
	var_884_bool = 0; var_885_object = Obj(); // 0x1347 PushV
	var_885_object = var_1_object; // 0x1348 MovT
	func_11469(var_885_object); // 0x1349 NEW_2
	if(var_884_bool == 0) goto Label_4941; // 0x134b JumpB
	var_881_bool = 1; // 0x134c MovB
	
Label_4941:
	if(var_881_bool == 0) goto Label_4947; // 0x134d JumpB
	var_890_int = 512577; // 0x134e PushI
	var_891_int = 13747; // 0x134f PushI
	var_892_int = 13746; // 0x1350 PushI
	AddReply(var_890_int, var_891_int, var_892_int); // 0x1351 TObjFunc
	
Label_4947:
	var_893_bool = 0; var_894_object = Obj(); // 0x1353 PushV
	var_894_object = var_1_object; // 0x1354 MovT
	func_11671(var_893_bool, var_894_object); // 0x1355 NEW_2
	var_895_bool = var_893_bool == 0; // 0x1357 Not
	if(var_895_bool == 0) goto Label_4958; // 0x1358 JumpB
	var_896_int = 520905; // 0x1359 PushI
	var_897_int = 22123; // 0x135a PushI
	var_898_int = 22122; // 0x135b PushI
	AddReply(var_896_int, var_897_int, var_898_int); // 0x135c TObjFunc
	
Label_4958:
	var_899_int = 512580; // 0x135e PushI
	var_900_int = -1; // 0x135f PushI
	var_901_int = 13749; // 0x1360 PushI
	AddReply(var_899_int, var_900_int, var_901_int); // 0x1361 TObjFunc
	goto Label_4966; // 0x1363 Jump
}


func_12011(var_137_object)
{
	var_138_object = Obj(); var_139_object = Obj(); var_140_object = Obj(); var_141_object = Obj(); // 0x2eeb PushV
	GetMainOutdoorScene(var_140_object); // 0x2eec Func
	var_142_bool = var_140_object == 0; // 0x2eee NullEq
	if(var_142_bool == 0) goto Label_12022; // 0x2eef JumpB
	var_143_string = "Can't find main outdoor scene"; // 0x2ef0 PushS
	Trace(var_143_string); // 0x2ef1 Func
	var_141_object = 0; // 0x2ef3 SetNull
	var_137_object = var_141_object; // 0x2ef4 Mov
	return 4; // 0x2ef5 Return
	
Label_12022:
	GetMap(var_141_object); // 0x2ef6 ObjFunc
	var_137_object = var_141_object; // 0x2ef8 Mov
	return 4; // 0x2ef9 Return
}


func_8428(var_0_bool, var_1_object, var_2_object, var_3_object, var_1302_object, var_1303_object)
{
	var_0_bool = var_1303_object; // 0x20ed TMov
	var_1_object = var_1302_object; // 0x20ee TMov
	var_3_object = 0; // 0x20ef TMovB
	var_1308_int = 1; // 0x20f0 PushI
	if(var_1308_int == 0) goto Label_8462; // 0x20f1 JumpB
	var_1309_string = ""; // 0x20f2 PushV
	var_1309_string = "Neutral"; // 0x20f3 MovS
	func_8492(var_1303_object, var_1309_string); // 0x20f4 NEW_2
	var_1317_int = 520927; // 0x20f6 PushI
	SetMessage(var_1317_int); // 0x20f7 TObjFunc
	ClearReplies(); // 0x20f9 TObjFunc
	var_1318_bool = 0; var_1319_object = Obj(); // 0x20fb PushV
	var_1319_object = var_1_object; // 0x20fc MovT
	func_11671(var_1318_bool, var_1319_object); // 0x20fd NEW_2
	var_1320_bool = var_1318_bool == 0; // 0x20ff Not
	if(var_1320_bool == 0) goto Label_8454; // 0x2100 JumpB
	var_1321_int = 520928; // 0x2101 PushI
	var_1322_int = 22146; // 0x2102 PushI
	var_1323_int = 22145; // 0x2103 PushI
	AddReply(var_1321_int, var_1322_int, var_1323_int); // 0x2104 TObjFunc
	
Label_8454:
	var_1324_int = 520932; // 0x2106 PushI
	var_1325_int = -1; // 0x2107 PushI
	var_1326_int = 22149; // 0x2108 PushI
	AddReply(var_1324_int, var_1325_int, var_1326_int); // 0x2109 TObjFunc
	goto Label_8462; // 0x210b Jump
	
Label_8462:
	var_1327_bool = 0; // 0x210e PushV
	func_10306(var_1327_bool); // 0x210f NEW_2
	if(var_1327_bool == 0) goto Label_8477; // 0x2111 JumpB
	
Label_8466:
	lshWaitForAnimEnd(); // 0x2112 Func
	var_1328_object = var_3_object; // 0x2114 PushT
	if(var_1328_object == 0) goto Label_8471; // 0x2115 JumpB
	goto Label_8476; // 0x2116 Jump
	
Label_8476:
	goto Label_8491; // 0x211c Jump
	
Label_8491:
	return 0; // 0x212b Return
	
Label_8471:
	var_1329_string = ""; // 0x2117 PushV
	var_1329_string = var_2_object; // 0x2118 MovT
	func_9995(var_1329_string); // 0x2119 NEW_2
	goto Label_8466; // 0x211b Jump
	
Label_8477:
	var_1330_string = "all"; // 0x211d PushS
	var_1331_string = "idle"; // 0x211e PushS
	PlayAnimation(var_1330_string, var_1331_string); // 0x211f Func
	
Label_8481:
	WaitForAnimEnd(); // 0x2121 Func
	var_1332_object = var_3_object; // 0x2123 PushT
	if(var_1332_object == 0) goto Label_8486; // 0x2124 JumpB
	goto Label_8491; // 0x2125 Jump
	
Label_8486:
	var_1333_string = "all"; // 0x2126 PushS
	var_1334_string = "idle"; // 0x2127 PushS
	PlayAnimation(var_1333_string, var_1334_string); // 0x2128 Func
	goto Label_8481; // 0x212a Jump
}


func_10990()
{
	var_275_string = "ood8MladVlad3"; // 0x2aef PushS
	var_276_int = 1; // 0x2af0 PushI
	SetVariable(var_275_string, var_276_int); // 0x2af1 Func
	return 0; // 0x2af3 Return
}


func_2287(var_2_object, var_511_string)
{
	var_512_bool = 0; // 0x8f0 PushV
	func_10306(var_512_bool); // 0x8f1 NEW_2
	var_513_bool = var_512_bool == 0; // 0x8f3 Not
	if(var_513_bool == 0) goto Label_2294; // 0x8f4 JumpB
	return 0; // 0x8f5 Return
	
Label_2294:
	var_514_bool = var_511_string == var_2_object; // 0x8f6 Eq
	if(var_514_bool == 0) goto Label_2297; // 0x8f7 JumpB
	return 0; // 0x8f8 Return
	
Label_2297:
	var_515_string = ""; var_516_bool = 0; // 0x8f9 PushV
	var_515_string = var_511_string; // 0x8fa Mov
	var_517_string = ""; // 0x8fb PushS
	var_518_bool = var_511_string == var_517_string; // 0x8fc Eq
	if(var_518_bool == 0) goto Label_2304; // 0x8fd JumpB
	var_516_bool = 0; // 0x8fe MovB
	goto Label_2305; // 0x8ff Jump
	
Label_2305:
	func_10011(var_515_string, var_516_bool); // 0x901 NEW_2
	var_2_object = var_511_string; // 0x903 TMov
	return 0; // 0x904 Return
	
Label_2304:
	var_516_bool = 1; // 0x900 MovB
}


func_11505(var_1001_bool)
{
	var_1003_int = 0; var_1004_string = ""; // 0x2cf2 PushV
	var_1004_string = "d6q02Trigger"; // 0x2cf3 MovS
	func_10093(var_1003_int, var_1004_string); // 0x2cf4 NEW_2
	var_1005_int = 0; // 0x2cf6 PushI
	var_1006_bool = var_1003_int != var_1005_int; // 0x2cf7 Neq
	if(var_1006_bool == 0) goto Label_11515; // 0x2cf8 JumpB
	var_1001_bool = 1; // 0x2cf9 MovB
	return 0; // 0x2cfa Return
	
Label_11515:
	var_1001_bool = 0; // 0x2cfb MovB
	return 0; // 0x2cfc Return
}


func_10996()
{
	var_281_string = "d8q01MladVladIsVictim"; // 0x2af5 PushS
	var_282_int = 1; // 0x2af6 PushI
	SetVariable(var_281_string, var_282_int); // 0x2af7 Func
	return 0; // 0x2af9 Return
}


func_10485()
{
	var_1130_string = "d8MladVladVisit"; // 0x28f6 PushS
	var_1131_int = 1; // 0x28f7 PushI
	SetVariable(var_1130_string, var_1131_int); // 0x28f8 Func
	return 0; // 0x28fa Return
}


func_8950(var_0_bool, var_1_object, var_2_object, var_3_object, var_1424_object, var_1425_object)
{
	var_0_bool = var_1425_object; // 0x22f7 TMov
	var_1_object = var_1424_object; // 0x22f8 TMov
	var_3_object = 0; // 0x22f9 TMovB
	var_1430_int = 1; // 0x22fa PushI
	if(var_1430_int == 0) goto Label_8999; // 0x22fb JumpB
	var_1431_string = ""; // 0x22fc PushV
	var_1431_string = "Neutral"; // 0x22fd MovS
	func_9029(var_1425_object, var_1431_string); // 0x22fe NEW_2
	var_1439_int = 520941; // 0x2300 PushI
	SetMessage(var_1439_int); // 0x2301 TObjFunc
	ClearReplies(); // 0x2303 TObjFunc
	var_1440_bool = 0; var_1441_object = Obj(); // 0x2305 PushV
	var_1441_object = var_1_object; // 0x2306 MovT
	func_11205(var_1441_object); // 0x2307 NEW_2
	if(var_1440_bool == 0) goto Label_8975; // 0x2309 JumpB
	var_1446_int = 534490; // 0x230a PushI
	var_1447_int = 38444; // 0x230b PushI
	var_1448_int = 36135; // 0x230c PushI
	AddReply(var_1446_int, var_1447_int, var_1448_int); // 0x230d TObjFunc
	
Label_8975:
	var_1449_bool = 0; var_1450_object = Obj(); // 0x230f PushV
	var_1450_object = var_1_object; // 0x2310 MovT
	func_11671(var_1449_bool, var_1450_object); // 0x2311 NEW_2
	var_1451_bool = var_1449_bool == 0; // 0x2313 Not
	if(var_1451_bool == 0) goto Label_8986; // 0x2314 JumpB
	var_1452_int = 520942; // 0x2315 PushI
	var_1453_int = 22160; // 0x2316 PushI
	var_1454_int = 22159; // 0x2317 PushI
	AddReply(var_1452_int, var_1453_int, var_1454_int); // 0x2318 TObjFunc
	
Label_8986:
	var_1455_int = 520946; // 0x231a PushI
	var_1456_int = -1; // 0x231b PushI
	var_1457_int = 22163; // 0x231c PushI
	AddReply(var_1455_int, var_1456_int, var_1457_int); // 0x231d TObjFunc
	var_1458_int = 536616; // 0x231f PushI
	var_1459_int = -1; // 0x2320 PushI
	var_1460_int = 38443; // 0x2321 PushI
	AddReply(var_1458_int, var_1459_int, var_1460_int); // 0x2322 TObjFunc
	goto Label_8999; // 0x2324 Jump
	
Label_8999:
	var_1461_bool = 0; // 0x2327 PushV
	func_10306(var_1461_bool); // 0x2328 NEW_2
	if(var_1461_bool == 0) goto Label_9014; // 0x232a JumpB
	
Label_9003:
	lshWaitForAnimEnd(); // 0x232b Func
	var_1462_object = var_3_object; // 0x232d PushT
	if(var_1462_object == 0) goto Label_9008; // 0x232e JumpB
	goto Label_9013; // 0x232f Jump
	
Label_9013:
	goto Label_9028; // 0x2335 Jump
	
Label_9028:
	return 0; // 0x2344 Return
	
Label_9008:
	var_1463_string = ""; // 0x2330 PushV
	var_1463_string = var_2_object; // 0x2331 MovT
	func_9995(var_1463_string); // 0x2332 NEW_2
	goto Label_9003; // 0x2334 Jump
	
Label_9014:
	var_1464_string = "all"; // 0x2336 PushS
	var_1465_string = "idle"; // 0x2337 PushS
	PlayAnimation(var_1464_string, var_1465_string); // 0x2338 Func
	
Label_9018:
	WaitForAnimEnd(); // 0x233a Func
	var_1466_object = var_3_object; // 0x233c PushT
	if(var_1466_object == 0) goto Label_9023; // 0x233d JumpB
	goto Label_9028; // 0x233e Jump
	
Label_9023:
	var_1467_string = "all"; // 0x233f PushS
	var_1468_string = "idle"; // 0x2340 PushS
	PlayAnimation(var_1467_string, var_1468_string); // 0x2341 Func
	goto Label_9018; // 0x2343 Jump
}


func_11002()
{
	var_293_string = "ood8MladVlad4"; // 0x2afb PushS
	var_294_int = 1; // 0x2afc PushI
	SetVariable(var_293_string, var_294_int); // 0x2afd Func
	return 0; // 0x2aff Return
}


func_10491()
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0; // 0x28fc PushV
	var_164_object = Obj(); // 0x28fd PushV
	func_12011(var_164_object); // 0x28fe NEW_2
	var_161_object = var_164_object; // 0x28ff Mov
	var_162_string = "pt_gmap_r7_house2_01"; // 0x2901 MovS
	var_163_float = 2; // 0x2902 MovI
	func_12028(var_161_object, var_162_string, var_163_float); // 0x2903 NEW_2
	var_184_object = Obj(); // 0x2905 PushV
	func_12011(var_184_object); // 0x2906 NEW_2
	ShowMap(var_184_object); // 0x2908 ObjFunc
	return 0; // 0x290a Return
}


func_12028(var_161_object, var_162_string, var_163_float)
{
	var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_object = Obj(); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_bool = 0; // 0x2efc PushV
	GetMainOutdoorScene(var_171_object); // 0x2efd Func
	var_173_bool = var_171_object == 0; // 0x2eff NullEq
	if(var_173_bool == 0) goto Label_12037; // 0x2f00 JumpB
	var_174_string = "Can't find main outdoor scene"; // 0x2f01 PushS
	Trace(var_174_string); // 0x2f02 Func
	return 8; // 0x2f04 Return
	
Label_12037:
	GetLocator(var_162_string, var_172_bool, var_169_cvector, var_170_cvector); // 0x2f05 ObjFunc
	var_175_bool = var_172_bool == 0; // 0x2f07 Not
	if(var_175_bool == 0) goto Label_12047; // 0x2f08 JumpB
	var_176_string = "Warning: outdoor scene locator "; // 0x2f09 PushS
	var_177_int = var_176_string + var_162_string; // 0x2f0a Add
	var_178_string = " doesnt exist"; // 0x2f0b PushS
	var_179_int = var_177_int + var_178_string; // 0x2f0c Add
	Trace(var_179_int); // 0x2f0d Func
	
Label_12047:
	GetMap(var_161_object); // 0x2f0f ObjFunc
	var_180_bool = var_161_object == 0; // 0x2f11 NullEq
	if(var_180_bool == 0) goto Label_12055; // 0x2f12 JumpB
	var_181_string = "Can't find map"; // 0x2f13 PushS
	Trace(var_181_string); // 0x2f14 Func
	return 8; // 0x2f16 Return
	
Label_12055:
	var_182_float = GetByIndex(var_169_cvector, 0); // 0x2f17 PushE
	var_183_float = GetByIndex(var_169_cvector, 2); // 0x2f18 PushE
	SetMapParams(var_182_float, var_183_float, var_163_float); // 0x2f19 ObjFunc
	return 8; // 0x2f1b Return
}


func_11517(var_1159_bool)
{
	var_1161_int = 0; var_1162_string = ""; // 0x2cfe PushV
	var_1162_string = "d8q01"; // 0x2cff MovS
	func_10093(var_1161_int, var_1162_string); // 0x2d00 NEW_2
	var_1163_int = 1; // 0x2d02 PushI
	var_1164_bool = var_1161_int == var_1163_int; // 0x2d03 Eq
	if(var_1164_bool == 0) goto Label_11527; // 0x2d04 JumpB
	var_1159_bool = 1; // 0x2d05 MovB
	return 0; // 0x2d06 Return
	
Label_11527:
	var_1159_bool = 0; // 0x2d07 MovB
	return 0; // 0x2d08 Return
}


func_9469(var_2_object, var_1560_string)
{
	var_1561_bool = 0; // 0x24fe PushV
	func_10306(var_1561_bool); // 0x24ff NEW_2
	var_1562_bool = var_1561_bool == 0; // 0x2501 Not
	if(var_1562_bool == 0) goto Label_9476; // 0x2502 JumpB
	return 0; // 0x2503 Return
	
Label_9476:
	var_1563_bool = var_1560_string == var_2_object; // 0x2504 Eq
	if(var_1563_bool == 0) goto Label_9479; // 0x2505 JumpB
	return 0; // 0x2506 Return
	
Label_9479:
	var_1564_string = ""; var_1565_bool = 0; // 0x2507 PushV
	var_1564_string = var_1560_string; // 0x2508 Mov
	var_1566_string = ""; // 0x2509 PushS
	var_1567_bool = var_1560_string == var_1566_string; // 0x250a Eq
	if(var_1567_bool == 0) goto Label_9486; // 0x250b JumpB
	var_1565_bool = 0; // 0x250c MovB
	goto Label_9487; // 0x250d Jump
	
Label_9487:
	func_10011(var_1564_string, var_1565_bool); // 0x250f NEW_2
	var_2_object = var_1560_string; // 0x2511 TMov
	return 0; // 0x2512 Return
	
Label_9486:
	var_1565_bool = 1; // 0x250e MovB
}


func_2815(var_2_object, var_582_string)
{
	var_583_bool = 0; // 0xb00 PushV
	func_10306(var_583_bool); // 0xb01 NEW_2
	var_584_bool = var_583_bool == 0; // 0xb03 Not
	if(var_584_bool == 0) goto Label_2822; // 0xb04 JumpB
	return 0; // 0xb05 Return
	
Label_2822:
	var_585_bool = var_582_string == var_2_object; // 0xb06 Eq
	if(var_585_bool == 0) goto Label_2825; // 0xb07 JumpB
	return 0; // 0xb08 Return
	
Label_2825:
	var_586_string = ""; var_587_bool = 0; // 0xb09 PushV
	var_586_string = var_582_string; // 0xb0a Mov
	var_588_string = ""; // 0xb0b PushS
	var_589_bool = var_582_string == var_588_string; // 0xb0c Eq
	if(var_589_bool == 0) goto Label_2832; // 0xb0d JumpB
	var_587_bool = 0; // 0xb0e MovB
	goto Label_2833; // 0xb0f Jump
	
Label_2833:
	func_10011(var_586_string, var_587_bool); // 0xb11 NEW_2
	var_2_object = var_582_string; // 0xb13 TMov
	return 0; // 0xb14 Return
	
Label_2832:
	var_587_bool = 1; // 0xb10 MovB
}


func_256(var_209_string, var_210_string, var_211_int)
{
	var_212_int = 0; // 0x101 PushI
	var_213_bool = var_211_int == var_212_int; // 0x102 Eq
	if(var_213_bool == 0) goto Label_262; // 0x103 JumpB
	var_209_string = var_210_string; // 0x104 Mov
	goto Label_263; // 0x105 Jump
	
Label_263:
	return 0; // 0x107 Return
	
Label_262:
	var_209_string = var_210_string + var_211_int; // 0x106 Add2
}


func_11008()
{
	var_287_string = "ood8MladVlad5"; // 0x2b01 PushS
	var_288_int = 1; // 0x2b02 PushI
	SetVariable(var_287_string, var_288_int); // 0x2b03 Func
	return 0; // 0x2b05 Return
}


func_11014()
{
	var_82_string = "d8q04"; // 0x2b07 PushS
	var_83_int = 1; // 0x2b08 PushI
	SetVariable(var_82_string, var_83_int); // 0x2b09 Func
	func_11931(); // 0x2b0c NEW_2
	func_11957(); // 0x2b0f NEW_2
	var_115_object = Obj(); var_116_string = ""; // 0x2b11 PushV
	var_116_string = "quest_d8_04"; // 0x2b12 MovS
	func_10098(var_115_object, var_116_string); // 0x2b13 NEW_2
	return 0; // 0x2b15 Return
}


func_264(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_bool = 0; var_206_int = 0; var_207_bool = 0; // 0x108 PushV
	var_206_int = 0; // 0x109 MovI
	
Label_266:
	var_208_string = "all"; // 0x10a PushS
	var_209_string = ""; var_210_string = ""; var_211_int = 0; // 0x10b PushV
	var_210_string = var_203_string; // 0x10c Mov
	var_211_int = var_206_int; // 0x10d Mov
	func_256(var_209_string, var_210_string, var_211_int); // 0x10e NEW_2
	HasAnimation(var_207_bool, var_208_string, var_209_string); // 0x110 Func
	var_214_bool = var_207_bool == 0; // 0x112 Not
	if(var_214_bool == 0) goto Label_277; // 0x113 JumpB
	goto Label_280; // 0x114 Jump
	
Label_280:
	var_202_int = var_206_int; // 0x118 Mov
	return 4; // 0x119 Return
	
Label_277:
	var_215_int = 1; // 0x115 PushI
	var_206_int = var_206_int + var_215_int; // 0x116 Add2
	goto Label_266; // 0x117 Jump
}


func_11529(var_1171_bool)
{
	var_1173_int = 0; var_1174_string = ""; // 0x2d0a PushV
	var_1174_string = "d8q01MladVladIsBad"; // 0x2d0b MovS
	func_10093(var_1173_int, var_1174_string); // 0x2d0c NEW_2
	var_1175_int = 1; // 0x2d0e PushI
	var_1176_bool = var_1173_int == var_1175_int; // 0x2d0f Eq
	if(var_1176_bool == 0) goto Label_11539; // 0x2d10 JumpB
	var_1171_bool = 1; // 0x2d11 MovB
	return 0; // 0x2d12 Return
	
Label_11539:
	var_1171_bool = 0; // 0x2d13 MovB
	return 0; // 0x2d14 Return
}


func_9995(var_299_string)
{
	var_300_bool = 0; var_301_float = 0; var_302_float = 0; var_303_bool = 0; var_304_float = 0; var_305_float = 0; // 0x270b PushV
	lshHasAnimation(var_303_bool, var_299_string); // 0x270c Func
	var_306_bool = var_303_bool; // 0x270e Push
	if(var_306_bool == 0) goto Label_10006; // 0x270f JumpB
	lshGetAnimTimes(var_299_string, var_304_float, var_305_float); // 0x2710 Func
	var_307_bool = 0; // 0x2712 PushB
	lshPlayAnimation(var_304_float, var_305_float, var_307_bool); // 0x2713 Func
	goto Label_10010; // 0x2715 Jump
	
Label_10010:
	return 6; // 0x271a Return
	
Label_10006:
	var_308_string = "Can't find lsh animation : "; // 0x2716 PushS
	var_309_int = var_308_string + var_299_string; // 0x2717 Add
	Trace(var_309_int); // 0x2718 Func
}


func_10507()
{
	func_11710(); // 0x290d NEW_2
	var_105_bool = 0; var_106_string = ""; var_107_string = ""; // 0x290f PushV
	var_106_string = "quest_d11_05"; // 0x2910 MovS
	var_107_string = "place_enemy_after"; // 0x2911 MovS
	func_10228(var_105_bool, var_106_string, var_107_string); // 0x2912 NEW_2
	var_111_bool = 0; var_112_string = ""; var_113_string = ""; // 0x2914 PushV
	var_112_string = "quest_d11_05"; // 0x2915 MovS
	var_113_string = "completed"; // 0x2916 MovS
	func_10228(var_111_bool, var_112_string, var_113_string); // 0x2917 NEW_2
	return 0; // 0x2919 Return
}


func_11541(var_1165_bool)
{
	var_1167_int = 0; var_1168_string = ""; // 0x2d16 PushV
	var_1168_string = "ood8MladVlad1"; // 0x2d17 MovS
	func_10093(var_1167_int, var_1168_string); // 0x2d18 NEW_2
	var_1169_int = 0; // 0x2d1a PushI
	var_1170_bool = var_1167_int == var_1169_int; // 0x2d1b Eq
	if(var_1170_bool == 0) goto Label_11551; // 0x2d1c JumpB
	var_1165_bool = 1; // 0x2d1d MovB
	return 0; // 0x2d1e Return
	
Label_11551:
	var_1165_bool = 0; // 0x2d1f MovB
	return 0; // 0x2d20 Return
}


func_11030()
{
	var_270_string = "KnowMladVlad"; // 0x2b17 PushS
	var_271_int = 1; // 0x2b18 PushI
	SetVariable(var_270_string, var_271_int); // 0x2b19 Func
	return 0; // 0x2b1b Return
}


func_10522()
{
	var_137_string = "ood3MladVlad3"; // 0x291b PushS
	var_138_int = 1; // 0x291c PushI
	SetVariable(var_137_string, var_138_int); // 0x291d Func
	return 0; // 0x291f Return
}


func_10011(var_280_string, var_281_bool)
{
	var_284_bool = 0; var_285_float = 0; var_286_float = 0; var_287_bool = 0; var_288_float = 0; var_289_float = 0; // 0x271b PushV
	lshHasAnimation(var_287_bool, var_280_string); // 0x271c Func
	var_290_bool = var_287_bool; // 0x271e Push
	if(var_290_bool == 0) goto Label_10021; // 0x271f JumpB
	lshGetAnimTimes(var_280_string, var_288_float, var_289_float); // 0x2720 Func
	lshPlayAnimation(var_288_float, var_289_float, var_281_bool); // 0x2722 Func
	goto Label_10025; // 0x2724 Jump
	
Label_10025:
	return 6; // 0x2729 Return
	
Label_10021:
	var_291_string = "Can't find lsh animation : "; // 0x2725 PushS
	var_292_int = var_291_string + var_280_string; // 0x2726 Add
	Trace(var_292_int); // 0x2727 Func
}


func_11036()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2b1c PushV
	var_84_int = 0; var_85_string = ""; // 0x2b1d PushV
	var_85_string = "d5q03"; // 0x2b1e MovS
	func_10093(var_84_int, var_85_string); // 0x2b1f NEW_2
	var_88_int = 0; // 0x2b21 PushI
	var_89_bool = var_84_int == var_88_int; // 0x2b22 Eq
	if(var_89_bool == 0) goto Label_11077; // 0x2b23 JumpB
	var_90_string = "d5q03"; // 0x2b24 PushS
	var_91_int = 1; // 0x2b25 PushI
	SetVariable(var_90_string, var_91_int); // 0x2b26 Func
	var_92_object = Obj(); // 0x2b28 PushV
	func_12011(var_92_object); // 0x2b29 NEW_2
	var_83_object = var_92_object; // 0x2b2a Mov
	var_99_string = "d5q03SavePrisoners"; // 0x2b2c PushS
	var_100_string = "pt_map_uprava_prison"; // 0x2b2d PushS
	var_101_int = 0; // 0x2b2e PushI
	var_102_int = 515370; // 0x2b2f PushI
	var_103_float = 0; // 0x2b30 PushV
	func_10240(var_103_float); // 0x2b31 NEW_2
	AddMark(var_99_string, var_100_string, var_101_int, var_102_int, var_103_float); // 0x2b33 ObjFunc
	func_11827(); // 0x2b36 NEW_2
	func_11840(); // 0x2b39 NEW_2
	var_137_object = Obj(); var_138_string = ""; // 0x2b3b PushV
	var_138_string = "quest_d5_03"; // 0x2b3c MovS
	func_10098(var_137_object, var_138_string); // 0x2b3d NEW_2
	var_145_bool = 0; var_146_string = ""; var_147_string = ""; // 0x2b3f PushV
	var_146_string = "quest_d5_03"; // 0x2b40 MovS
	var_147_string = "place_prisoners"; // 0x2b41 MovS
	func_10228(var_145_bool, var_146_string, var_147_string); // 0x2b42 NEW_2
	var_83_object = 0; // 0x2b44 SetNull
	
Label_11077:
	return 2; // 0x2b45 Return
}


func_12061(var_157_int)
{
	var_158_int = 0; var_159_int = 0; // 0x2f1d PushV
	var_160_string = "branch"; // 0x2f1e PushS
	GetVariable(var_160_string, var_159_int); // 0x2f1f Func
	var_161_int = 0; // 0x2f21 PushI
	var_162_bool = var_159_int == var_161_int; // 0x2f22 Eq
	if(var_162_bool == 0) goto Label_12071; // 0x2f23 JumpB
	var_157_int = 1; // 0x2f24 MovI
	return 2; // 0x2f25 Return
	
Label_12071:
	var_163_int = 1; // 0x2f27 PushI
	var_164_bool = var_159_int == var_163_int; // 0x2f28 Eq
	if(var_164_bool == 0) goto Label_12076; // 0x2f29 JumpB
	var_157_int = 2; // 0x2f2a MovI
	return 2; // 0x2f2b Return
	
Label_12076:
	var_157_int = 3; // 0x2f2c MovI
	return 2; // 0x2f2d Return
}


func_282(var_0_bool, var_327_int, var_328_object)
{
	var_330_object = Obj(); var_331_bool = 0; var_332_int = 0; var_333_bool = 0; var_334_object = Obj(); var_335_bool = 0; var_336_int = 0; var_337_bool = 0; // 0x11a PushV
	var_0_bool = var_328_object; // 0x11b TMov
	var_338_bool = 0; var_339_object = Obj(); var_340_float = 0; // 0x11c PushV
	var_339_object = var_328_object; // 0x11d Mov
	var_340_float = 70.0; // 0x11e MovF
	func_9772(var_339_object, var_340_float); // 0x11f NEW_2
	var_341_bool = var_338_bool == 0; // 0x121 Not
	if(var_341_bool == 0) goto Label_293; // 0x122 JumpB
	var_327_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	CreateDialog(var_334_object); // 0x125 Func
	var_342_int = 0; // 0x127 PushV
	func_10300(var_342_int); // 0x128 NEW_2
	SetNPCName(var_342_int); // 0x12a ObjFunc
	var_343_int = 0; // 0x12c PushV
	func_10298(var_343_int); // 0x12d NEW_2
	SetNPCDescription(var_343_int); // 0x12f ObjFunc
	var_344_string = ""; // 0x131 PushV
	func_10302(var_344_string); // 0x132 NEW_2
	SetPhoto(var_344_string); // 0x134 ObjFunc
	var_345_string = ""; // 0x136 PushV
	func_10304(var_345_string); // 0x137 NEW_2
	SetPhoto2(var_345_string); // 0x139 ObjFunc
	var_346_int = 0; // 0x13b PushV
	func_12061(var_346_int); // 0x13c NEW_2
	SetPlayerName(var_346_int); // 0x13e ObjFunc
	var_336_int = -1; // 0x140 MovI
	IsOverrideActive(var_335_bool); // 0x141 Func
	var_347_bool = var_335_bool; // 0x143 Push
	if(var_347_bool == 0) goto Label_327; // 0x144 JumpB
	var_327_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	DoDialog(var_334_object); // 0x147 Func
	var_348_bool = 0; var_349_object = Obj(); // 0x149 PushV
	var_350_object = Obj(); // 0x14a PushV
	func_10048(var_350_object); // 0x14b NEW_2
	var_349_object = var_350_object; // 0x14c Mov
	func_9857(var_348_bool, var_349_object); // 0x14e NEW_2
	var_351_object = Obj(); var_352_object = Obj(); // 0x150 PushV
	var_351_object = var_328_object; // 0x151 Mov
	var_352_object = var_334_object; // 0x152 Mov
	TaskCall(5); // 0x153 TaskCall
	func_363(var_353_object, var_354_object, var_355_string, var_356_bool, var_351_object, var_352_object); // 0x154 NEW_2
	TaskReturn(); // 0x155 TaskReturn
	IsDialogEnd(var_337_bool); // 0x157 ObjFunc
	
Label_345:
	var_476_bool = var_337_bool == 0; // 0x159 Not
	if(var_476_bool == 0) goto Label_352; // 0x15a JumpB
	sync(); // 0x15b Func
	IsDialogEnd(var_337_bool); // 0x15d ObjFunc
	goto Label_345; // 0x15f Jump
	
Label_352:
	var_477_object = Obj(); // 0x160 PushV
	var_477_object = var_328_object; // 0x161 Mov
	func_9840(); // 0x162 NEW_2
	StopDialog(var_334_object); // 0x164 Func
	GetReturnValue(var_336_int); // 0x166 ObjFunc
	var_327_int = var_336_int; // 0x168 Mov
	return 8; // 0x169 Return
}


func_10528()
{
	var_240_int = 0; var_241_string = ""; // 0x2921 PushV
	var_241_string = "map_chertez_state"; // 0x2922 MovS
	func_10093(var_240_int, var_241_string); // 0x2923 NEW_2
	var_242_int = 2; // 0x2925 PushI
	var_243_bool = var_240_int <= var_242_int; // 0x2926 LE
	if(var_243_bool == 0) goto Label_10544; // 0x2927 JumpB
	var_244_string = "map_chertez_state"; // 0x2928 PushS
	var_245_int = 2; // 0x2929 PushI
	SetVariable(var_244_string, var_245_int); // 0x292a Func
	var_246_string = "map_chertez_force"; // 0x292c PushS
	var_247_int = 1; // 0x292d PushI
	SetVariable(var_246_string, var_247_int); // 0x292e Func
	
Label_10544:
	return 0; // 0x2930 Return
}


func_11553(var_1184_bool)
{
	var_1186_int = 0; var_1187_string = ""; // 0x2d22 PushV
	var_1187_string = "ood8MladVlad2"; // 0x2d23 MovS
	func_10093(var_1186_int, var_1187_string); // 0x2d24 NEW_2
	var_1188_int = 0; // 0x2d26 PushI
	var_1189_bool = var_1186_int == var_1188_int; // 0x2d27 Eq
	if(var_1189_bool == 0) goto Label_11563; // 0x2d28 JumpB
	var_1184_bool = 1; // 0x2d29 MovB
	return 0; // 0x2d2a Return
	
Label_11563:
	var_1184_bool = 0; // 0x2d2b MovB
	return 0; // 0x2d2c Return
}


func_10026(var_200_bool, var_201_string)
{
	var_202_bool = 0; var_203_bool = 0; // 0x272a PushV
	var_204_bool = 0; // 0x272b PushV
	func_10306(var_204_bool); // 0x272c NEW_2
	if(var_204_bool == 0) goto Label_10039; // 0x272e JumpB
	lshHasSpeech(var_203_bool, var_201_string); // 0x272f Func
	var_205_bool = var_203_bool; // 0x2731 Push
	if(var_205_bool == 0) goto Label_10039; // 0x2732 JumpB
	lshPlaySpeech(var_201_string); // 0x2733 Func
	var_200_bool = 1; // 0x2735 MovB
	return 2; // 0x2736 Return
	
Label_10039:
	var_200_bool = 0; // 0x2737 MovB
	return 2; // 0x2738 Return
}


func_8492(var_2_object, var_1309_string)
{
	var_1310_bool = 0; // 0x212d PushV
	func_10306(var_1310_bool); // 0x212e NEW_2
	var_1311_bool = var_1310_bool == 0; // 0x2130 Not
	if(var_1311_bool == 0) goto Label_8499; // 0x2131 JumpB
	return 0; // 0x2132 Return
	
Label_8499:
	var_1312_bool = var_1309_string == var_2_object; // 0x2133 Eq
	if(var_1312_bool == 0) goto Label_8502; // 0x2134 JumpB
	return 0; // 0x2135 Return
	
Label_8502:
	var_1313_string = ""; var_1314_bool = 0; // 0x2136 PushV
	var_1313_string = var_1309_string; // 0x2137 Mov
	var_1315_string = ""; // 0x2138 PushS
	var_1316_bool = var_1309_string == var_1315_string; // 0x2139 Eq
	if(var_1316_bool == 0) goto Label_8509; // 0x213a JumpB
	var_1314_bool = 0; // 0x213b MovB
	goto Label_8510; // 0x213c Jump
	
Label_8510:
	func_10011(var_1313_string, var_1314_bool); // 0x213e NEW_2
	var_2_object = var_1309_string; // 0x2140 TMov
	return 0; // 0x2141 Return
	
Label_8509:
	var_1314_bool = 1; // 0x213d MovB
}


func_11565(var_1196_bool)
{
	var_1198_int = 0; var_1199_string = ""; // 0x2d2e PushV
	var_1199_string = "d8q01BringBadBoy"; // 0x2d2f MovS
	func_10093(var_1198_int, var_1199_string); // 0x2d30 NEW_2
	var_1200_int = 1; // 0x2d32 PushI
	var_1201_bool = var_1198_int == var_1200_int; // 0x2d33 Eq
	if(var_1201_bool == 0) goto Label_11575; // 0x2d34 JumpB
	var_1196_bool = 1; // 0x2d35 MovB
	return 0; // 0x2d36 Return
	
Label_11575:
	var_1196_bool = 0; // 0x2d37 MovB
	return 0; // 0x2d38 Return
}


func_12078(var_92_object)
{
	var_93_bool = GlobalVars[2]; // 0x2f2f PushGE
	var_94_bool = var_93_bool == 0; // 0x2f30 Not
	if(var_94_bool == 0) goto Label_12091; // 0x2f31 JumpB
	var_95_int = 0; var_96_object = Obj(); // 0x2f32 PushV
	var_96_object = var_92_object; // 0x2f33 Mov
	TaskCall(8); // 0x2f34 TaskCall
	func_1852(var_97_object, var_95_int, var_96_object); // 0x2f35 NEW_2
	TaskReturn(); // 0x2f36 TaskReturn
	var_323_bool = GlobalVars[2]; // 0x2f38 PushGE
	var_323_bool = 1; // 0x2f39 MovB
	GlobalVars[2] = var_323_bool; // 0x2f3a PopGE
	
Label_12091:
	var_324_bool = 0; var_325_int = 0; // 0x2f3b PushV
	var_325_int = 1; // 0x2f3c MovI
	func_10254(var_324_bool, var_325_int); // 0x2f3d NEW_2
	if(var_324_bool == 0) goto Label_12103; // 0x2f3f JumpB
	var_327_int = 0; var_328_object = Obj(); // 0x2f40 PushV
	var_328_object = var_92_object; // 0x2f41 Mov
	TaskCall(4); // 0x2f42 TaskCall
	func_282(var_329_object, var_327_int, var_328_object); // 0x2f43 NEW_2
	TaskReturn(); // 0x2f44 TaskReturn
	return 0; // 0x2f46 Return
	
Label_12103:
	var_478_bool = 0; var_479_int = 0; // 0x2f47 PushV
	var_479_int = 2; // 0x2f48 MovI
	func_10254(var_478_bool, var_479_int); // 0x2f49 NEW_2
	if(var_478_bool == 0) goto Label_12115; // 0x2f4b JumpB
	var_480_int = 0; var_481_object = Obj(); // 0x2f4c PushV
	var_481_object = var_92_object; // 0x2f4d Mov
	TaskCall(10); // 0x2f4e TaskCall
	func_2134(var_482_object, var_480_int, var_481_object); // 0x2f4f NEW_2
	TaskReturn(); // 0x2f50 TaskReturn
	return 0; // 0x2f52 Return
	
Label_12115:
	var_549_bool = 0; var_550_int = 0; // 0x2f53 PushV
	var_550_int = 3; // 0x2f54 MovI
	func_10254(var_549_bool, var_550_int); // 0x2f55 NEW_2
	if(var_549_bool == 0) goto Label_12127; // 0x2f57 JumpB
	var_551_int = 0; var_552_object = Obj(); // 0x2f58 PushV
	var_552_object = var_92_object; // 0x2f59 Mov
	TaskCall(12); // 0x2f5a TaskCall
	func_2614(var_553_object, var_551_int, var_552_object); // 0x2f5b NEW_2
	TaskReturn(); // 0x2f5c TaskReturn
	return 0; // 0x2f5e Return
	
Label_12127:
	var_662_bool = 0; var_663_int = 0; // 0x2f5f PushV
	var_663_int = 4; // 0x2f60 MovI
	func_10254(var_662_bool, var_663_int); // 0x2f61 NEW_2
	if(var_662_bool == 0) goto Label_12139; // 0x2f63 JumpB
	var_664_int = 0; var_665_object = Obj(); // 0x2f64 PushV
	var_665_object = var_92_object; // 0x2f65 Mov
	TaskCall(14); // 0x2f66 TaskCall
	func_3578(var_666_object, var_664_int, var_665_object); // 0x2f67 NEW_2
	TaskReturn(); // 0x2f68 TaskReturn
	return 0; // 0x2f6a Return
	
Label_12139:
	var_774_bool = 0; var_775_int = 0; // 0x2f6b PushV
	var_775_int = 5; // 0x2f6c MovI
	func_10254(var_774_bool, var_775_int); // 0x2f6d NEW_2
	if(var_774_bool == 0) goto Label_12151; // 0x2f6f JumpB
	var_776_int = 0; var_777_object = Obj(); // 0x2f70 PushV
	var_777_object = var_92_object; // 0x2f71 Mov
	TaskCall(16); // 0x2f72 TaskCall
	func_4757(var_778_object, var_776_int, var_777_object); // 0x2f73 NEW_2
	TaskReturn(); // 0x2f74 TaskReturn
	return 0; // 0x2f76 Return
	
Label_12151:
	var_904_bool = 0; var_905_int = 0; // 0x2f77 PushV
	var_905_int = 6; // 0x2f78 MovI
	func_10254(var_904_bool, var_905_int); // 0x2f79 NEW_2
	if(var_904_bool == 0) goto Label_12163; // 0x2f7b JumpB
	var_906_int = 0; var_907_object = Obj(); // 0x2f7c PushV
	var_907_object = var_92_object; // 0x2f7d Mov
	TaskCall(18); // 0x2f7e TaskCall
	func_5495(var_908_object, var_906_int, var_907_object); // 0x2f7f NEW_2
	TaskReturn(); // 0x2f80 TaskReturn
	return 0; // 0x2f82 Return
	
Label_12163:
	var_1024_bool = 0; var_1025_int = 0; // 0x2f83 PushV
	var_1025_int = 7; // 0x2f84 MovI
	func_10254(var_1024_bool, var_1025_int); // 0x2f85 NEW_2
	if(var_1024_bool == 0) goto Label_12175; // 0x2f87 JumpB
	var_1026_int = 0; var_1027_object = Obj(); // 0x2f88 PushV
	var_1027_object = var_92_object; // 0x2f89 Mov
	TaskCall(22); // 0x2f8a TaskCall
	func_8091(var_1028_object, var_1026_int, var_1027_object); // 0x2f8b NEW_2
	TaskReturn(); // 0x2f8c TaskReturn
	return 0; // 0x2f8e Return
	
Label_12175:
	var_1085_bool = 0; var_1086_int = 0; // 0x2f8f PushV
	var_1086_int = 8; // 0x2f90 MovI
	func_10254(var_1085_bool, var_1086_int); // 0x2f91 NEW_2
	if(var_1085_bool == 0) goto Label_12187; // 0x2f93 JumpB
	var_1087_int = 0; var_1088_object = Obj(); // 0x2f94 PushV
	var_1088_object = var_92_object; // 0x2f95 Mov
	TaskCall(20); // 0x2f96 TaskCall
	func_6262(var_1089_object, var_1087_int, var_1088_object); // 0x2f97 NEW_2
	TaskReturn(); // 0x2f98 TaskReturn
	return 0; // 0x2f9a Return
	
Label_12187:
	var_1276_bool = 0; var_1277_int = 0; // 0x2f9b PushV
	var_1277_int = 9; // 0x2f9c MovI
	func_10254(var_1276_bool, var_1277_int); // 0x2f9d NEW_2
	if(var_1276_bool == 0) goto Label_12199; // 0x2f9f JumpB
	var_1278_int = 0; var_1279_object = Obj(); // 0x2fa0 PushV
	var_1279_object = var_92_object; // 0x2fa1 Mov
	TaskCall(24); // 0x2fa2 TaskCall
	func_8347(var_1280_object, var_1278_int, var_1279_object); // 0x2fa3 NEW_2
	TaskReturn(); // 0x2fa4 TaskReturn
	return 0; // 0x2fa6 Return
	
Label_12199:
	var_1337_bool = 0; var_1338_int = 0; // 0x2fa7 PushV
	var_1338_int = 10; // 0x2fa8 MovI
	func_10254(var_1337_bool, var_1338_int); // 0x2fa9 NEW_2
	if(var_1337_bool == 0) goto Label_12211; // 0x2fab JumpB
	var_1339_int = 0; var_1340_object = Obj(); // 0x2fac PushV
	var_1340_object = var_92_object; // 0x2fad Mov
	TaskCall(26); // 0x2fae TaskCall
	func_8608(var_1341_object, var_1339_int, var_1340_object); // 0x2faf NEW_2
	TaskReturn(); // 0x2fb0 TaskReturn
	return 0; // 0x2fb2 Return
	
Label_12211:
	var_1398_bool = 0; var_1399_int = 0; // 0x2fb3 PushV
	var_1399_int = 11; // 0x2fb4 MovI
	func_10254(var_1398_bool, var_1399_int); // 0x2fb5 NEW_2
	if(var_1398_bool == 0) goto Label_12223; // 0x2fb7 JumpB
	var_1400_int = 0; var_1401_object = Obj(); // 0x2fb8 PushV
	var_1401_object = var_92_object; // 0x2fb9 Mov
	TaskCall(28); // 0x2fba TaskCall
	func_8869(var_1402_object, var_1400_int, var_1401_object); // 0x2fbb NEW_2
	TaskReturn(); // 0x2fbc TaskReturn
	return 0; // 0x2fbe Return
	
Label_12223:
	var_1471_bool = 0; var_1472_int = 0; // 0x2fbf PushV
	var_1472_int = 12; // 0x2fc0 MovI
	func_10254(var_1471_bool, var_1472_int); // 0x2fc1 NEW_2
	if(var_1471_bool == 0) goto Label_12235; // 0x2fc3 JumpB
	var_1473_int = 0; var_1474_object = Obj(); // 0x2fc4 PushV
	var_1474_object = var_92_object; // 0x2fc5 Mov
	TaskCall(6); // 0x2fc6 TaskCall
	func_1531(var_1475_object, var_1473_int, var_1474_object); // 0x2fc7 NEW_2
	TaskReturn(); // 0x2fc8 TaskReturn
	return 0; // 0x2fca Return
	
Label_12235:
	var_1529_int = 0; var_1530_object = Obj(); // 0x2fcb PushV
	var_1530_object = var_92_object; // 0x2fcc Mov
	TaskCall(30); // 0x2fcd TaskCall
	func_9330(var_1531_object, var_1529_int, var_1530_object); // 0x2fce NEW_2
	TaskReturn(); // 0x2fcf TaskReturn
	return 0; // 0x2fd1 Return
}


func_10545(var_273_object)
{
	var_275_string = "lens is given"; // 0x2932 PushS
	Trace(var_275_string); // 0x2933 Func
	var_276_object = Obj(); var_277_string = ""; var_278_int = 0; // 0x2935 PushV
	var_276_object = var_273_object; // 0x2936 Mov
	var_277_string = "lens"; // 0x2937 MovS
	var_278_int = 1; // 0x2938 MovI
	func_10170(var_276_object, var_277_string, var_278_int); // 0x2939 NEW_2
	return 0; // 0x293b Return
}


func_10041()
{
	var_77_bool = 0; // 0x2739 PushV
	func_10306(var_77_bool); // 0x273a NEW_2
	if(var_77_bool == 0) goto Label_10047; // 0x273c JumpB
	lshStopSpeech(); // 0x273d Func
	
Label_10047:
	return 0; // 0x273f Return
}


func_11577(var_1204_bool)
{
	var_1206_int = 0; var_1207_string = ""; // 0x2d3a PushV
	var_1207_string = "ood8MladVlad3"; // 0x2d3b MovS
	func_10093(var_1206_int, var_1207_string); // 0x2d3c NEW_2
	var_1208_int = 0; // 0x2d3e PushI
	var_1209_bool = var_1206_int == var_1208_int; // 0x2d3f Eq
	if(var_1209_bool == 0) goto Label_11587; // 0x2d40 JumpB
	var_1204_bool = 1; // 0x2d41 MovB
	return 0; // 0x2d42 Return
	
Label_11587:
	var_1204_bool = 0; // 0x2d43 MovB
	return 0; // 0x2d44 Return
}


func_10556()
{
	var_274_string = "KnowPochka"; // 0x293d PushS
	var_275_int = 1; // 0x293e PushI
	SetVariable(var_274_string, var_275_int); // 0x293f Func
	return 0; // 0x2941 Return
}


func_1852(var_0_bool, var_95_int, var_96_object)
{
	var_98_object = Obj(); var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_object = Obj(); var_103_bool = 0; var_104_int = 0; var_105_bool = 0; // 0x73c PushV
	var_0_bool = var_96_object; // 0x73d TMov
	var_106_bool = 0; var_107_object = Obj(); var_108_float = 0; // 0x73e PushV
	var_107_object = var_96_object; // 0x73f Mov
	var_108_float = 70.0; // 0x740 MovF
	func_9772(var_107_object, var_108_float); // 0x741 NEW_2
	var_152_bool = var_106_bool == 0; // 0x743 Not
	if(var_152_bool == 0) goto Label_1863; // 0x744 JumpB
	var_95_int = -2; // 0x745 MovI
	return 8; // 0x746 Return
	
Label_1863:
	CreateDialog(var_102_object); // 0x747 Func
	var_153_int = 0; // 0x749 PushV
	func_10300(var_153_int); // 0x74a NEW_2
	SetNPCName(var_153_int); // 0x74c ObjFunc
	var_154_int = 0; // 0x74e PushV
	func_10298(var_154_int); // 0x74f NEW_2
	SetNPCDescription(var_154_int); // 0x751 ObjFunc
	var_155_string = ""; // 0x753 PushV
	func_10302(var_155_string); // 0x754 NEW_2
	SetPhoto(var_155_string); // 0x756 ObjFunc
	var_156_string = ""; // 0x758 PushV
	func_10304(var_156_string); // 0x759 NEW_2
	SetPhoto2(var_156_string); // 0x75b ObjFunc
	var_157_int = 0; // 0x75d PushV
	func_12061(var_157_int); // 0x75e NEW_2
	SetPlayerName(var_157_int); // 0x760 ObjFunc
	var_104_int = -1; // 0x762 MovI
	IsOverrideActive(var_103_bool); // 0x763 Func
	var_165_bool = var_103_bool; // 0x765 Push
	if(var_165_bool == 0) goto Label_1897; // 0x766 JumpB
	var_95_int = -2; // 0x767 MovI
	return 8; // 0x768 Return
	
Label_1897:
	DoDialog(var_102_object); // 0x769 Func
	var_166_bool = 0; var_167_object = Obj(); // 0x76b PushV
	var_168_object = Obj(); // 0x76c PushV
	func_10048(var_168_object); // 0x76d NEW_2
	var_167_object = var_168_object; // 0x76e Mov
	func_9857(var_166_bool, var_167_object); // 0x770 NEW_2
	var_261_object = Obj(); var_262_object = Obj(); // 0x772 PushV
	var_261_object = var_96_object; // 0x773 Mov
	var_262_object = var_102_object; // 0x774 Mov
	TaskCall(9); // 0x775 TaskCall
	func_1933(var_263_object, var_264_object, var_265_string, var_266_bool, var_261_object, var_262_object); // 0x776 NEW_2
	TaskReturn(); // 0x777 TaskReturn
	IsDialogEnd(var_105_bool); // 0x779 ObjFunc
	
Label_1915:
	var_315_bool = var_105_bool == 0; // 0x77b Not
	if(var_315_bool == 0) goto Label_1922; // 0x77c JumpB
	sync(); // 0x77d Func
	IsDialogEnd(var_105_bool); // 0x77f ObjFunc
	goto Label_1915; // 0x781 Jump
	
Label_1922:
	var_316_object = Obj(); // 0x782 PushV
	var_316_object = var_96_object; // 0x783 Mov
	func_9840(); // 0x784 NEW_2
	StopDialog(var_102_object); // 0x786 Func
	GetReturnValue(var_104_int); // 0x788 ObjFunc
	var_95_int = var_104_int; // 0x78a Mov
	return 8; // 0x78b Return
}


func_10048(var_168_object)
{
	var_169_object = Obj(); var_170_object = Obj(); // 0x2740 PushV
	self(var_170_object); // 0x2741 Func
	var_168_object = var_170_object; // 0x2743 Mov
	return 2; // 0x2744 Return
}


func_10562()
{
	var_82_string = "ood2MladVlad2"; // 0x2943 PushS
	var_83_int = 1; // 0x2944 PushI
	SetVariable(var_82_string, var_83_int); // 0x2945 Func
	return 0; // 0x2947 Return
}


func_9540(var_0_bool, var_1_object, var_2_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_bool = 0; var_88_int = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_cvector = CVector(0,0,0); // 0x2544 PushV
	var_97_bool = 1; // 0x2545 PushB
	SensePlayerOnly(var_97_bool); // 0x2546 Func
	func_9628(); // 0x2549 NEW_2
	GetScene(var_86_object); // 0x254b Func
	var_2_object = 0; // 0x254d TMovI
	
Label_9550:
	var_102_string = ""; var_103_int = 0; // 0x254e PushV
	var_103_int = var_2_object; // 0x254f MovT
	func_10284(var_102_string, var_103_int); // 0x2550 NEW_2
	GetLocator(var_102_string, var_87_bool); // 0x2552 ObjFunc
	var_111_bool = var_87_bool == 0; // 0x2554 Not
	if(var_111_bool == 0) goto Label_9559; // 0x2555 JumpB
	goto Label_9562; // 0x2556 Jump
	
Label_9562:
	var_112_bool = 0; // 0x255a PushV
	func_9767(var_112_bool); // 0x255b NEW_2
	var_115_bool = var_112_bool == 0; // 0x255d Not
	if(var_115_bool == 0) goto Label_9572; // 0x255e JumpB
	TaskCall(0); // 0x2560 TaskCall
	func_0(); // 0x2561 NEW_2
	TaskReturn(); // 0x2562 TaskReturn
	
Label_9572:
	func_9636(var_95_bool, var_96_cvector); // 0x2565 NEW_2
	
Label_9575:
	irand(var_88_int, var_95_bool); // 0x2567 Func
	var_136_string = ""; var_137_int = 0; // 0x2569 PushV
	var_137_int = var_88_int; // 0x256a Mov
	func_10284(var_136_string, var_137_int); // 0x256b NEW_2
	GetLocator(var_136_string, var_89_bool, var_90_cvector, var_91_cvector); // 0x256d ObjFunc
	var_138_cvector = CVector(0,0,0); // 0x256f PushV
	func_9683(var_138_cvector); // 0x2570 NEW_2
	var_92_cvector = var_90_cvector - var_138_cvector; // 0x2572 Sub2
	var_141_float = 0; var_142_cvector = CVector(0,0,0); // 0x2573 PushV
	var_142_cvector = var_92_cvector; // 0x2574 Mov
	func_10083(var_141_float, var_142_cvector); // 0x2575 NEW_2
	var_150_bool = var_141_float > var_1_object; // 0x2577 GT
	if(var_150_bool == 0) goto Label_9622; // 0x2578 JumpB
	GetHeight(var_93_float); // 0x2579 Func
	var_94_cvector = var_90_cvector; // 0x257b Mov
	var_151_float = GetByIndex(var_94_cvector, 1); // 0x257c PushE
	var_151_float = var_151_float + var_93_float; // 0x257d Add2
	SetByIndex(var_94_cvector, 1) = var_151_float; // 0x257e PopE
	CanReachByPF(var_95_bool, var_94_cvector); // 0x257f Func
	var_152_bool = var_95_bool; // 0x2581 Push
	if(var_152_bool == 0) goto Label_9622; // 0x2582 JumpB
	var_153_int = var_92_cvector | var_92_cvector; // 0x2583 Or
	var_154_float = sqrt(var_153_int); // 0x2584 Sqrt
	var_155_float = var_0_bool / var_154_float; // 0x2585 Div
	var_156_float = var_92_cvector * var_155_float; // 0x2586 Mult
	var_96_cvector = var_90_cvector - var_156_float; // 0x2587 Sub2
	var_157_bool = 0; var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); // 0x2588 PushV
	var_158_cvector = var_96_cvector; // 0x2589 Mov
	var_159_cvector = var_91_cvector; // 0x258a Mov
	TaskCall(1); // 0x258b TaskCall
	func_13(var_160_bool, var_157_bool, var_158_cvector, var_159_cvector); // 0x258c NEW_2
	TaskReturn(); // 0x258d TaskReturn
	if(var_160_bool == 0) goto Label_9622; // 0x258f JumpB
	var_184_int = 0; // 0x2590 PushV
	var_184_int = var_88_int; // 0x2591 Mov
	TaskCall(3); // 0x2592 TaskCall
	func_198(var_184_int); // 0x2593 NEW_2
	TaskReturn(); // 0x2594 TaskReturn
	
Label_9622:
	var_237_int = 1; // 0x2596 PushI
	Sleep(var_237_int); // 0x2597 Func
	goto Label_9575; // 0x2599 Jump
	
Label_9559:
	var_238_int = 1; // 0x2557 PushI
	var_2_object = var_2_object + var_238_int; // 0x2558 Add2
	goto Label_9550; // 0x2559 Jump
}


func_11589(var_1247_bool)
{
	var_1249_int = 0; var_1250_string = ""; // 0x2d46 PushV
	var_1250_string = "ood8MladVlad4"; // 0x2d47 MovS
	func_10093(var_1249_int, var_1250_string); // 0x2d48 NEW_2
	var_1251_int = 0; // 0x2d4a PushI
	var_1252_bool = var_1249_int == var_1251_int; // 0x2d4b Eq
	if(var_1252_bool == 0) goto Label_11599; // 0x2d4c JumpB
	var_1247_bool = 1; // 0x2d4d MovB
	return 0; // 0x2d4e Return
	
Label_11599:
	var_1247_bool = 0; // 0x2d4f MovB
	return 0; // 0x2d50 Return
}


func_11078()
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x2b46 PushV
	var_137_object = Obj(); // 0x2b47 PushV
	func_12011(var_137_object); // 0x2b48 NEW_2
	var_136_object = var_137_object; // 0x2b49 Mov
	var_144_string = "d8q01MladVladgotoOspina"; // 0x2b4b PushS
	var_145_string = "pt_map_ospina"; // 0x2b4c PushS
	var_146_int = 1; // 0x2b4d PushI
	var_147_int = 515320; // 0x2b4e PushI
	var_148_float = 0; // 0x2b4f PushV
	func_10240(var_148_float); // 0x2b50 NEW_2
	AddMark(var_144_string, var_145_string, var_146_int, var_147_int, var_148_float); // 0x2b52 ObjFunc
	func_11918(); // 0x2b55 NEW_2
	return 2; // 0x2b57 Return
}


func_9029(var_2_object, var_1431_string)
{
	var_1432_bool = 0; // 0x2346 PushV
	func_10306(var_1432_bool); // 0x2347 NEW_2
	var_1433_bool = var_1432_bool == 0; // 0x2349 Not
	if(var_1433_bool == 0) goto Label_9036; // 0x234a JumpB
	return 0; // 0x234b Return
	
Label_9036:
	var_1434_bool = var_1431_string == var_2_object; // 0x234c Eq
	if(var_1434_bool == 0) goto Label_9039; // 0x234d JumpB
	return 0; // 0x234e Return
	
Label_9039:
	var_1435_string = ""; var_1436_bool = 0; // 0x234f PushV
	var_1435_string = var_1431_string; // 0x2350 Mov
	var_1437_string = ""; // 0x2351 PushS
	var_1438_bool = var_1431_string == var_1437_string; // 0x2352 Eq
	if(var_1438_bool == 0) goto Label_9046; // 0x2353 JumpB
	var_1436_bool = 0; // 0x2354 MovB
	goto Label_9047; // 0x2355 Jump
	
Label_9047:
	func_10011(var_1435_string, var_1436_bool); // 0x2357 NEW_2
	var_2_object = var_1431_string; // 0x2359 TMov
	return 0; // 0x235a Return
	
Label_9046:
	var_1436_bool = 1; // 0x2356 MovB
}


func_10568()
{
	var_358_object = Obj(); var_359_string = ""; var_360_float = 0; // 0x2949 PushV
	var_361_object = Obj(); // 0x294a PushV
	func_12011(var_361_object); // 0x294b NEW_2
	var_358_object = var_361_object; // 0x294c Mov
	var_359_string = "pt_map_theater"; // 0x294e MovS
	var_360_float = 2; // 0x294f MovI
	func_12028(var_358_object, var_359_string, var_360_float); // 0x2950 NEW_2
	var_362_object = Obj(); // 0x2952 PushV
	func_12011(var_362_object); // 0x2953 NEW_2
	ShowMap(var_362_object); // 0x2955 ObjFunc
	return 0; // 0x2957 Return
}


func_10054(var_133_cvector, var_134_cvector)
{
	var_136_float = 0; var_137_float = 0; // 0x2746 PushV
	var_138_int = var_134_cvector | var_134_cvector; // 0x2747 Or
	var_137_float = sqrt(var_138_int); // 0x2748 Sqrt2
	var_139_float = 0.0; // 0x2749 PushF
	var_140_bool = var_137_float < var_139_float; // 0x274a LT
	if(var_140_bool == 0) goto Label_10062; // 0x274b JumpB
	var_133_cvector = CVector(0.0, 0.0, 0.0); // 0x274c MovV
	return 2; // 0x274d Return
	
Label_10062:
	var_133_cvector = var_134_cvector / var_134_cvector; // 0x274e Div2
	return 2; // 0x274f Return
}


func_10751()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x29ff PushV
	var_88_object = Obj(); // 0x2a00 PushV
	func_12011(var_88_object); // 0x2a01 NEW_2
	var_87_object = var_88_object; // 0x2a02 Mov
	var_95_string = "d4q02MladVladGotoAnna"; // 0x2a04 PushS
	var_96_string = "pt_map_anna"; // 0x2a05 PushS
	var_97_int = 0; // 0x2a06 PushI
	var_98_int = 511526; // 0x2a07 PushI
	var_99_float = 0; // 0x2a08 PushV
	func_10240(var_99_float); // 0x2a09 NEW_2
	AddMark(var_95_string, var_96_string, var_97_int, var_98_int, var_99_float); // 0x2a0b ObjFunc
	var_102_string = "d4q02MladVladGotoJulia"; // 0x2a0d PushS
	var_103_string = "pt_map_julia"; // 0x2a0e PushS
	var_104_int = 0; // 0x2a0f PushI
	var_105_int = 511524; // 0x2a10 PushI
	var_106_float = 0; // 0x2a11 PushV
	func_10240(var_106_float); // 0x2a12 NEW_2
	AddMark(var_102_string, var_103_string, var_104_int, var_105_int, var_106_float); // 0x2a14 ObjFunc
	var_107_string = "d4q02MladVladGotoLara"; // 0x2a16 PushS
	var_108_string = "pt_map_lara"; // 0x2a17 PushS
	var_109_int = 0; // 0x2a18 PushI
	var_110_int = 511525; // 0x2a19 PushI
	var_111_float = 0; // 0x2a1a PushV
	func_10240(var_111_float); // 0x2a1b NEW_2
	AddMark(var_107_string, var_108_string, var_109_int, var_110_int, var_111_float); // 0x2a1d ObjFunc
	func_11801(); // 0x2a20 NEW_2
	func_11814(); // 0x2a23 NEW_2
	var_143_object = Obj(); var_144_string = ""; // 0x2a25 PushV
	var_144_string = "quest_d4_02"; // 0x2a26 MovS
	func_10109(var_143_object, var_144_string); // 0x2a27 NEW_2
	return 2; // 0x2a29 Return
}


func_10064(var_130_float, var_131_float)
{
	var_133_int = 0; // 0x2751 PushI
	var_134_bool = var_131_float < var_133_int; // 0x2752 LT
	if(var_134_bool == 0) goto Label_10070; // 0x2753 JumpB
	var_130_float = -var_131_float; // 0x2754 Neg2
	goto Label_10071; // 0x2755 Jump
	
Label_10071:
	return 0; // 0x2757 Return
	
Label_10070:
	var_130_float = var_131_float; // 0x2756 Mov
}


func_11601(var_1224_bool)
{
	var_1226_int = 0; var_1227_string = ""; // 0x2d52 PushV
	var_1227_string = "ood8MladVlad5"; // 0x2d53 MovS
	func_10093(var_1226_int, var_1227_string); // 0x2d54 NEW_2
	var_1228_int = 0; // 0x2d56 PushI
	var_1229_bool = var_1226_int == var_1228_int; // 0x2d57 Eq
	if(var_1229_bool == 0) goto Label_11611; // 0x2d58 JumpB
	var_1224_bool = 1; // 0x2d59 MovB
	return 0; // 0x2d5a Return
	
Label_11611:
	var_1224_bool = 0; // 0x2d5b MovB
	return 0; // 0x2d5c Return
}


func_10584()
{
	var_153_object = Obj(); var_154_string = ""; var_155_float = 0; // 0x2959 PushV
	var_156_object = Obj(); // 0x295a PushV
	func_12011(var_156_object); // 0x295b NEW_2
	var_153_object = var_156_object; // 0x295c Mov
	var_154_string = "pt_map_anna"; // 0x295e MovS
	var_155_float = 2; // 0x295f MovI
	func_12028(var_153_object, var_154_string, var_155_float); // 0x2960 NEW_2
	var_176_object = Obj(); // 0x2962 PushV
	func_12011(var_176_object); // 0x2963 NEW_2
	ShowMap(var_176_object); // 0x2965 ObjFunc
	return 0; // 0x2967 Return
}


func_11097(var_368_bool)
{
	var_370_int = 0; var_371_string = ""; // 0x2b5a PushV
	var_371_string = "d1q03"; // 0x2b5b MovS
	func_10093(var_370_int, var_371_string); // 0x2b5c NEW_2
	var_372_int = 0; // 0x2b5e PushI
	var_373_bool = var_370_int == var_372_int; // 0x2b5f Eq
	if(var_373_bool == 0) goto Label_11107; // 0x2b60 JumpB
	var_368_bool = 1; // 0x2b61 MovB
	return 0; // 0x2b62 Return
	
Label_11107:
	var_368_bool = 0; // 0x2b63 MovB
	return 0; // 0x2b64 Return
}


func_10072(var_227_float, var_228_float, var_229_float, var_230_float)
{
	var_231_bool = var_228_float < var_229_float; // 0x2759 LT
	if(var_231_bool == 0) goto Label_10077; // 0x275a JumpB
	var_227_float = var_229_float; // 0x275b Mov
	return 0; // 0x275c Return
	
Label_10077:
	var_232_bool = var_228_float > var_230_float; // 0x275d GT
	if(var_232_bool == 0) goto Label_10081; // 0x275e JumpB
	var_227_float = var_230_float; // 0x275f Mov
	return 0; // 0x2760 Return
	
Label_10081:
	var_227_float = var_228_float; // 0x2761 Mov
	return 0; // 0x2762 Return
}


func_11613(var_1210_bool)
{
	var_1212_int = 0; var_1213_string = ""; // 0x2d5e PushV
	var_1213_string = "d8q01BigVladIsVictim"; // 0x2d5f MovS
	func_10093(var_1212_int, var_1213_string); // 0x2d60 NEW_2
	var_1214_int = 1; // 0x2d62 PushI
	var_1215_bool = var_1212_int == var_1214_int; // 0x2d63 Eq
	if(var_1215_bool == 0) goto Label_11623; // 0x2d64 JumpB
	var_1210_bool = 1; // 0x2d65 MovB
	return 0; // 0x2d66 Return
	
Label_11623:
	var_1210_bool = 0; // 0x2d67 MovB
	return 0; // 0x2d68 Return
}


func_10083(var_141_float, var_142_cvector)
{
	var_143_float = GetByIndex(var_142_cvector, 0); // 0x2764 PushE
	var_144_float = GetByIndex(var_142_cvector, 0); // 0x2765 PushE
	var_145_float = var_143_float * var_144_float; // 0x2766 Mult
	var_146_float = GetByIndex(var_142_cvector, 2); // 0x2767 PushE
	var_147_float = GetByIndex(var_142_cvector, 2); // 0x2768 PushE
	var_148_float = var_146_float * var_147_float; // 0x2769 Mult
	var_149_int = var_145_float + var_148_float; // 0x276a Add
	var_141_float = sqrt(var_149_int); // 0x276b Sqrt2
	return 0; // 0x276c Return
}


func_11109(var_464_bool)
{
	var_466_int = 0; var_467_string = ""; // 0x2b66 PushV
	var_467_string = "d1q03"; // 0x2b67 MovS
	func_10093(var_466_int, var_467_string); // 0x2b68 NEW_2
	var_468_int = 1000; // 0x2b6a PushI
	var_469_bool = var_466_int == var_468_int; // 0x2b6b Eq
	if(var_469_bool == 0) goto Label_11119; // 0x2b6c JumpB
	var_464_bool = 1; // 0x2b6d MovB
	return 0; // 0x2b6e Return
	
Label_11119:
	var_464_bool = 0; // 0x2b6f MovB
	return 0; // 0x2b70 Return
}


func_10600()
{
	var_122_string = "playsound"; // 0x2969 PushS
	var_123_string = "mapmark"; // 0x296a PushS
	TriggerWorld(var_122_string, var_123_string); // 0x296b Func
	return 0; // 0x296d Return
}


func_11625(var_1230_bool)
{
	var_1232_int = 0; var_1233_string = ""; // 0x2d6a PushV
	var_1233_string = "d8q01MladVladIsVictim"; // 0x2d6b MovS
	func_10093(var_1232_int, var_1233_string); // 0x2d6c NEW_2
	var_1234_int = 1; // 0x2d6e PushI
	var_1235_bool = var_1232_int == var_1234_int; // 0x2d6f Eq
	if(var_1235_bool == 0) goto Label_11635; // 0x2d70 JumpB
	var_1230_bool = 1; // 0x2d71 MovB
	return 0; // 0x2d72 Return
	
Label_11635:
	var_1230_bool = 0; // 0x2d73 MovB
	return 0; // 0x2d74 Return
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_351_object, var_352_object)
{
	var_0_bool = var_352_object; // 0x16c TMov
	var_1_object = var_351_object; // 0x16d TMov
	var_3_object = 0; // 0x16e TMovB
	var_357_int = 1; // 0x16f PushI
	if(var_357_int == 0) goto Label_512; // 0x170 JumpB
	var_358_bool = 0; // 0x171 PushV
	var_358_bool = 0; // 0x172 MovB
	var_359_bool = 0; // 0x173 PushV
	var_359_bool = 0; // 0x174 MovB
	var_360_bool = 0; var_361_object = Obj(); // 0x175 PushV
	var_361_object = var_1_object; // 0x176 MovT
	func_11145(var_361_object); // 0x177 NEW_2
	if(var_360_bool == 0) goto Label_384; // 0x179 JumpB
	var_368_bool = 0; var_369_object = Obj(); // 0x17a PushV
	var_369_object = var_1_object; // 0x17b MovT
	func_11097(var_369_object); // 0x17c NEW_2
	if(var_368_bool == 0) goto Label_384; // 0x17e JumpB
	var_359_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_359_bool == 0) goto Label_391; // 0x180 JumpB
	var_374_bool = 0; var_375_object = Obj(); // 0x181 PushV
	var_375_object = var_1_object; // 0x182 MovT
	func_11637(var_375_object); // 0x183 NEW_2
	if(var_374_bool == 0) goto Label_391; // 0x185 JumpB
	var_358_bool = 1; // 0x186 MovB
	
Label_391:
	if(var_358_bool == 0) goto Label_417; // 0x187 JumpB
	var_390_object = Obj(); var_391_object = Obj(); // 0x188 PushV
	var_390_object = var_1_object; // 0x189 MovT
	var_391_object = var_0_bool; // 0x18a MovT
	func_10432(); // 0x18b NEW_2
	var_394_string = ""; // 0x18d PushV
	var_394_string = "Untrust"; // 0x18e MovS
	func_542(var_352_object, var_394_string); // 0x18f NEW_2
	var_402_int = 532641; // 0x191 PushI
	SetMessage(var_402_int); // 0x192 TObjFunc
	ClearReplies(); // 0x194 TObjFunc
	var_403_int = 532642; // 0x196 PushI
	var_404_int = 34105; // 0x197 PushI
	var_405_int = 34104; // 0x198 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x199 TObjFunc
	var_406_int = 532687; // 0x19b PushI
	var_407_int = 34161; // 0x19c PushI
	var_408_int = 34160; // 0x19d PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x19e TObjFunc
	goto Label_512; // 0x1a0 Jump
	
Label_512:
	var_409_bool = 0; // 0x200 PushV
	func_10306(var_409_bool); // 0x201 NEW_2
	if(var_409_bool == 0) goto Label_527; // 0x203 JumpB
	
Label_516:
	lshWaitForAnimEnd(); // 0x204 Func
	var_410_object = var_3_object; // 0x206 PushT
	if(var_410_object == 0) goto Label_521; // 0x207 JumpB
	goto Label_526; // 0x208 Jump
	
Label_526:
	goto Label_541; // 0x20e Jump
	
Label_541:
	return 0; // 0x21d Return
	
Label_521:
	var_411_string = ""; // 0x209 PushV
	var_411_string = var_2_object; // 0x20a MovT
	func_9995(var_411_string); // 0x20b NEW_2
	goto Label_516; // 0x20d Jump
	
Label_527:
	var_412_string = "all"; // 0x20f PushS
	var_413_string = "idle"; // 0x210 PushS
	PlayAnimation(var_412_string, var_413_string); // 0x211 Func
	
Label_531:
	WaitForAnimEnd(); // 0x213 Func
	var_414_object = var_3_object; // 0x215 PushT
	if(var_414_object == 0) goto Label_536; // 0x216 JumpB
	goto Label_541; // 0x217 Jump
	
Label_536:
	var_415_string = "all"; // 0x218 PushS
	var_416_string = "idle"; // 0x219 PushS
	PlayAnimation(var_415_string, var_416_string); // 0x21a Func
	goto Label_531; // 0x21c Jump
	
Label_417:
	var_417_string = ""; // 0x1a1 PushV
	var_417_string = "Neutral"; // 0x1a2 MovS
	func_542(var_352_object, var_417_string); // 0x1a3 NEW_2
	var_418_int = 531953; // 0x1a5 PushI
	SetMessage(var_418_int); // 0x1a6 TObjFunc
	ClearReplies(); // 0x1a8 TObjFunc
	var_419_bool = 0; // 0x1aa PushV
	var_419_bool = 0; // 0x1ab MovB
	var_420_bool = 0; var_421_object = Obj(); // 0x1ac PushV
	var_421_object = var_1_object; // 0x1ad MovT
	func_11157(var_421_object); // 0x1ae NEW_2
	if(var_420_bool == 0) goto Label_439; // 0x1b0 JumpB
	var_426_bool = 0; var_427_object = Obj(); // 0x1b1 PushV
	var_427_object = var_1_object; // 0x1b2 MovT
	func_11637(var_427_object); // 0x1b3 NEW_2
	if(var_426_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_419_bool = 1; // 0x1b6 MovB
	
Label_439:
	if(var_419_bool == 0) goto Label_445; // 0x1b7 JumpB
	var_428_int = 532702; // 0x1b8 PushI
	var_429_int = 34178; // 0x1b9 PushI
	var_430_int = 34177; // 0x1ba PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x1bb TObjFunc
	
Label_445:
	var_431_bool = 0; var_432_object = Obj(); // 0x1bd PushV
	var_432_object = var_1_object; // 0x1be MovT
	func_11133(var_432_object); // 0x1bf NEW_2
	if(var_431_bool == 0) goto Label_455; // 0x1c1 JumpB
	var_437_int = 531954; // 0x1c2 PushI
	var_438_int = 33359; // 0x1c3 PushI
	var_439_int = 33358; // 0x1c4 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x1c5 TObjFunc
	
Label_455:
	var_440_bool = 0; // 0x1c7 PushV
	var_440_bool = 0; // 0x1c8 MovB
	var_441_bool = 0; var_442_object = Obj(); // 0x1c9 PushV
	var_442_object = var_1_object; // 0x1ca MovT
	func_11097(var_442_object); // 0x1cb NEW_2
	if(var_441_bool == 0) goto Label_469; // 0x1cd JumpB
	var_443_bool = 0; var_444_object = Obj(); // 0x1ce PushV
	var_444_object = var_1_object; // 0x1cf MovT
	func_11145(var_444_object); // 0x1d0 NEW_2
	var_445_bool = var_443_bool == 0; // 0x1d2 Not
	if(var_445_bool == 0) goto Label_469; // 0x1d3 JumpB
	var_440_bool = 1; // 0x1d4 MovB
	
Label_469:
	if(var_440_bool == 0) goto Label_475; // 0x1d5 JumpB
	var_446_int = 532699; // 0x1d6 PushI
	var_447_int = 34175; // 0x1d7 PushI
	var_448_int = 34174; // 0x1d8 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x1d9 TObjFunc
	
Label_475:
	var_449_bool = 0; // 0x1db PushV
	var_449_bool = 0; // 0x1dc MovB
	var_450_bool = 0; // 0x1dd PushV
	var_450_bool = 0; // 0x1de MovB
	var_451_bool = 0; var_452_object = Obj(); // 0x1df PushV
	var_452_object = var_1_object; // 0x1e0 MovT
	func_11121(var_452_object); // 0x1e1 NEW_2
	var_457_bool = var_451_bool == 0; // 0x1e3 Not
	if(var_457_bool == 0) goto Label_491; // 0x1e4 JumpB
	var_458_bool = 0; var_459_object = Obj(); // 0x1e5 PushV
	var_459_object = var_1_object; // 0x1e6 MovT
	func_11169(var_459_object); // 0x1e7 NEW_2
	if(var_458_bool == 0) goto Label_491; // 0x1e9 JumpB
	var_450_bool = 1; // 0x1ea MovB
	
Label_491:
	if(var_450_bool == 0) goto Label_498; // 0x1eb JumpB
	var_464_bool = 0; var_465_object = Obj(); // 0x1ec PushV
	var_465_object = var_1_object; // 0x1ed MovT
	func_11109(var_465_object); // 0x1ee NEW_2
	if(var_464_bool == 0) goto Label_498; // 0x1f0 JumpB
	var_449_bool = 1; // 0x1f1 MovB
	
Label_498:
	if(var_449_bool == 0) goto Label_504; // 0x1f2 JumpB
	var_470_int = 532691; // 0x1f3 PushI
	var_471_int = 34166; // 0x1f4 PushI
	var_472_int = 34165; // 0x1f5 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x1f6 TObjFunc
	
Label_504:
	var_473_int = 531960; // 0x1f8 PushI
	var_474_int = -1; // 0x1f9 PushI
	var_475_int = 33364; // 0x1fa PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x1fb TObjFunc
	goto Label_512; // 0x1fd Jump
}


func_10093(var_362_int, var_363_string)
{
	var_364_int = 0; var_365_int = 0; // 0x276d PushV
	GetVariable(var_363_string, var_365_int); // 0x276e Func
	var_362_int = var_365_int; // 0x2770 Mov
	return 2; // 0x2771 Return
}


func_10606()
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0; // 0x296f PushV
	var_164_object = Obj(); // 0x2970 PushV
	func_12011(var_164_object); // 0x2971 NEW_2
	var_161_object = var_164_object; // 0x2972 Mov
	var_162_string = "pt_map_ospina"; // 0x2974 MovS
	var_163_float = 2; // 0x2975 MovI
	func_12028(var_161_object, var_162_string, var_163_float); // 0x2976 NEW_2
	var_184_object = Obj(); // 0x2978 PushV
	func_12011(var_184_object); // 0x2979 NEW_2
	ShowMap(var_184_object); // 0x297b ObjFunc
	return 0; // 0x297d Return
}


func_11121(var_451_bool)
{
	var_453_int = 0; var_454_string = ""; // 0x2b72 PushV
	var_454_string = "d1q03IsKapella"; // 0x2b73 MovS
	func_10093(var_453_int, var_454_string); // 0x2b74 NEW_2
	var_455_int = 1; // 0x2b76 PushI
	var_456_bool = var_453_int == var_455_int; // 0x2b77 Eq
	if(var_456_bool == 0) goto Label_11131; // 0x2b78 JumpB
	var_451_bool = 1; // 0x2b79 MovB
	return 0; // 0x2b7a Return
	
Label_11131:
	var_451_bool = 0; // 0x2b7b MovB
	return 0; // 0x2b7c Return
}


func_10098(var_115_object, var_116_string)
{
	var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj(); var_120_object = Obj(); // 0x2772 PushV
	GetMainOutdoorScene(var_119_object); // 0x2773 Func
	var_121_string = ".bin"; // 0x2775 PushS
	var_122_int = var_116_string + var_121_string; // 0x2776 Add
	AddBlankActor(var_120_object, var_119_object, var_116_string, var_122_int); // 0x2777 Func
	var_115_object = var_120_object; // 0x2779 Mov
	return 4; // 0x277a Return
}


func_11637(var_374_bool)
{
	var_376_bool = 0; // 0x2d76 PushV
	var_376_bool = 0; // 0x2d77 MovB
	var_377_bool = 0; // 0x2d78 PushV
	var_377_bool = 0; // 0x2d79 MovB
	var_378_int = 0; var_379_string = ""; // 0x2d7a PushV
	var_379_string = "d1q01"; // 0x2d7b MovS
	func_10093(var_378_int, var_379_string); // 0x2d7c NEW_2
	var_380_int = 0; // 0x2d7e PushI
	var_381_bool = var_378_int != var_380_int; // 0x2d7f Neq
	if(var_381_bool == 0) goto Label_11657; // 0x2d80 JumpB
	var_382_int = 0; var_383_string = ""; // 0x2d81 PushV
	var_383_string = "d1q01"; // 0x2d82 MovS
	func_10093(var_382_int, var_383_string); // 0x2d83 NEW_2
	var_384_int = 1000; // 0x2d85 PushI
	var_385_bool = var_382_int != var_384_int; // 0x2d86 Neq
	if(var_385_bool == 0) goto Label_11657; // 0x2d87 JumpB
	var_377_bool = 1; // 0x2d88 MovB
	
Label_11657:
	if(var_377_bool == 0) goto Label_11666; // 0x2d89 JumpB
	var_386_int = 0; var_387_string = ""; // 0x2d8a PushV
	var_387_string = "d1q01"; // 0x2d8b MovS
	func_10093(var_386_int, var_387_string); // 0x2d8c NEW_2
	var_388_int = -1; // 0x2d8e PushI
	var_389_bool = var_386_int != var_388_int; // 0x2d8f Neq
	if(var_389_bool == 0) goto Label_11666; // 0x2d90 JumpB
	var_376_bool = 1; // 0x2d91 MovB
	
Label_11666:
	if(var_376_bool == 0) goto Label_11669; // 0x2d92 JumpB
	var_374_bool = 1; // 0x2d93 MovB
	return 0; // 0x2d94 Return
	
Label_11669:
	var_374_bool = 0; // 0x2d95 MovB
	return 0; // 0x2d96 Return
}


func_5495(var_0_bool, var_906_int, var_907_object)
{
	var_909_object = Obj(); var_910_bool = 0; var_911_int = 0; var_912_bool = 0; var_913_object = Obj(); var_914_bool = 0; var_915_int = 0; var_916_bool = 0; // 0x1577 PushV
	var_0_bool = var_907_object; // 0x1578 TMov
	var_917_bool = 0; var_918_object = Obj(); var_919_float = 0; // 0x1579 PushV
	var_918_object = var_907_object; // 0x157a Mov
	var_919_float = 70.0; // 0x157b MovF
	func_9772(var_918_object, var_919_float); // 0x157c NEW_2
	var_920_bool = var_917_bool == 0; // 0x157e Not
	if(var_920_bool == 0) goto Label_5506; // 0x157f JumpB
	var_906_int = -2; // 0x1580 MovI
	return 8; // 0x1581 Return
	
Label_5506:
	CreateDialog(var_913_object); // 0x1582 Func
	var_921_int = 0; // 0x1584 PushV
	func_10300(var_921_int); // 0x1585 NEW_2
	SetNPCName(var_921_int); // 0x1587 ObjFunc
	var_922_int = 0; // 0x1589 PushV
	func_10298(var_922_int); // 0x158a NEW_2
	SetNPCDescription(var_922_int); // 0x158c ObjFunc
	var_923_string = ""; // 0x158e PushV
	func_10302(var_923_string); // 0x158f NEW_2
	SetPhoto(var_923_string); // 0x1591 ObjFunc
	var_924_string = ""; // 0x1593 PushV
	func_10304(var_924_string); // 0x1594 NEW_2
	SetPhoto2(var_924_string); // 0x1596 ObjFunc
	var_925_int = 0; // 0x1598 PushV
	func_12061(var_925_int); // 0x1599 NEW_2
	SetPlayerName(var_925_int); // 0x159b ObjFunc
	var_915_int = -1; // 0x159d MovI
	IsOverrideActive(var_914_bool); // 0x159e Func
	var_926_bool = var_914_bool; // 0x15a0 Push
	if(var_926_bool == 0) goto Label_5540; // 0x15a1 JumpB
	var_906_int = -2; // 0x15a2 MovI
	return 8; // 0x15a3 Return
	
Label_5540:
	DoDialog(var_913_object); // 0x15a4 Func
	var_927_bool = 0; var_928_object = Obj(); // 0x15a6 PushV
	var_929_object = Obj(); // 0x15a7 PushV
	func_10048(var_929_object); // 0x15a8 NEW_2
	var_928_object = var_929_object; // 0x15a9 Mov
	func_9857(var_927_bool, var_928_object); // 0x15ab NEW_2
	var_930_object = Obj(); var_931_object = Obj(); // 0x15ad PushV
	var_930_object = var_907_object; // 0x15ae Mov
	var_931_object = var_913_object; // 0x15af Mov
	TaskCall(19); // 0x15b0 TaskCall
	func_5576(var_932_object, var_933_object, var_934_string, var_935_bool, var_930_object, var_931_object); // 0x15b1 NEW_2
	TaskReturn(); // 0x15b2 TaskReturn
	IsDialogEnd(var_916_bool); // 0x15b4 ObjFunc
	
Label_5558:
	var_1022_bool = var_916_bool == 0; // 0x15b6 Not
	if(var_1022_bool == 0) goto Label_5565; // 0x15b7 JumpB
	sync(); // 0x15b8 Func
	IsDialogEnd(var_916_bool); // 0x15ba ObjFunc
	goto Label_5558; // 0x15bc Jump
	
Label_5565:
	var_1023_object = Obj(); // 0x15bd PushV
	var_1023_object = var_907_object; // 0x15be Mov
	func_9840(); // 0x15bf NEW_2
	StopDialog(var_913_object); // 0x15c1 Func
	GetReturnValue(var_915_int); // 0x15c3 ObjFunc
	var_906_int = var_915_int; // 0x15c5 Mov
	return 8; // 0x15c6 Return
}


func_11133(var_431_bool)
{
	var_433_int = 0; var_434_string = ""; // 0x2b7e PushV
	var_434_string = "d1q01"; // 0x2b7f MovS
	func_10093(var_433_int, var_434_string); // 0x2b80 NEW_2
	var_435_int = 6; // 0x2b82 PushI
	var_436_bool = var_433_int == var_435_int; // 0x2b83 Eq
	if(var_436_bool == 0) goto Label_11143; // 0x2b84 JumpB
	var_431_bool = 1; // 0x2b85 MovB
	return 0; // 0x2b86 Return
	
Label_11143:
	var_431_bool = 0; // 0x2b87 MovB
	return 0; // 0x2b88 Return
}


func_10622()
{
	var_227_object = Obj(); var_228_string = ""; var_229_float = 0; // 0x297f PushV
	var_230_object = Obj(); // 0x2980 PushV
	func_12011(var_230_object); // 0x2981 NEW_2
	var_227_object = var_230_object; // 0x2982 Mov
	var_228_string = "pt_map_bigvlad"; // 0x2984 MovS
	var_229_float = 2; // 0x2985 MovI
	func_12028(var_227_object, var_228_string, var_229_float); // 0x2986 NEW_2
	var_231_object = Obj(); // 0x2988 PushV
	func_12011(var_231_object); // 0x2989 NEW_2
	ShowMap(var_231_object); // 0x298b ObjFunc
	return 0; // 0x298d Return
}


func_10109(var_143_object, var_144_string)
{
	var_145_object = Obj(); var_146_object = Obj(); var_147_object = Obj(); var_148_object = Obj(); // 0x277d PushV
	GetMainOutdoorScene(var_147_object); // 0x277e Func
	var_149_string = ".xml"; // 0x2780 PushS
	var_150_int = var_144_string + var_149_string; // 0x2781 Add
	AddBlankActorFromXml(var_148_object, var_147_object, var_144_string, var_150_int); // 0x2782 Func
	var_143_object = var_148_object; // 0x2784 Mov
	return 4; // 0x2785 Return
}


func_4996(var_2_object, var_833_string)
{
	var_834_bool = 0; // 0x1385 PushV
	func_10306(var_834_bool); // 0x1386 NEW_2
	var_835_bool = var_834_bool == 0; // 0x1388 Not
	if(var_835_bool == 0) goto Label_5003; // 0x1389 JumpB
	return 0; // 0x138a Return
	
Label_5003:
	var_836_bool = var_833_string == var_2_object; // 0x138b Eq
	if(var_836_bool == 0) goto Label_5006; // 0x138c JumpB
	return 0; // 0x138d Return
	
Label_5006:
	var_837_string = ""; var_838_bool = 0; // 0x138e PushV
	var_837_string = var_833_string; // 0x138f Mov
	var_839_string = ""; // 0x1390 PushS
	var_840_bool = var_833_string == var_839_string; // 0x1391 Eq
	if(var_840_bool == 0) goto Label_5013; // 0x1392 JumpB
	var_838_bool = 0; // 0x1393 MovB
	goto Label_5014; // 0x1394 Jump
	
Label_5014:
	func_10011(var_837_string, var_838_bool); // 0x1396 NEW_2
	var_2_object = var_833_string; // 0x1398 TMov
	return 0; // 0x1399 Return
	
Label_5013:
	var_838_bool = 1; // 0x1395 MovB
}


func_10120(var_152_int, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); // 0x2788 PushV
	CreateIntVector(var_155_object); // 0x2789 Func
	add(var_152_int); // 0x278b ObjFunc
	add(var_153_int); // 0x278d ObjFunc
	var_156_int = 3; // 0x278f PushI
	SendWorldWndMessage(var_156_int, var_155_object); // 0x2790 Func
	return 2; // 0x2792 Return
}


func_11145(var_360_bool)
{
	var_362_int = 0; var_363_string = ""; // 0x2b8a PushV
	var_363_string = "ood1MladVlad1"; // 0x2b8b MovS
	func_10093(var_362_int, var_363_string); // 0x2b8c NEW_2
	var_366_int = 0; // 0x2b8e PushI
	var_367_bool = var_362_int == var_366_int; // 0x2b8f Eq
	if(var_367_bool == 0) goto Label_11155; // 0x2b90 JumpB
	var_360_bool = 1; // 0x2b91 MovB
	return 0; // 0x2b92 Return
	
Label_11155:
	var_360_bool = 0; // 0x2b93 MovB
	return 0; // 0x2b94 Return
}


func_1933(var_0_bool, var_1_object, var_2_object, var_3_object, var_261_object, var_262_object)
{
	var_0_bool = var_262_object; // 0x78e TMov
	var_1_object = var_261_object; // 0x78f TMov
	var_3_object = 0; // 0x790 TMovB
	var_267_int = 1; // 0x791 PushI
	if(var_267_int == 0) goto Label_1966; // 0x792 JumpB
	var_268_object = Obj(); var_269_object = Obj(); // 0x793 PushV
	var_268_object = var_1_object; // 0x794 MovT
	var_269_object = var_0_bool; // 0x795 MovT
	func_11030(); // 0x796 NEW_2
	var_272_object = Obj(); var_273_object = Obj(); // 0x798 PushV
	var_272_object = var_1_object; // 0x799 MovT
	var_273_object = var_0_bool; // 0x79a MovT
	func_10556(); // 0x79b NEW_2
	var_276_string = ""; // 0x79d PushV
	var_276_string = "Neutral"; // 0x79e MovS
	func_1996(var_262_object, var_276_string); // 0x79f NEW_2
	var_293_int = 500416; // 0x7a1 PushI
	SetMessage(var_293_int); // 0x7a2 TObjFunc
	ClearReplies(); // 0x7a4 TObjFunc
	var_294_int = 533500; // 0x7a6 PushI
	var_295_int = 35031; // 0x7a7 PushI
	var_296_int = 35030; // 0x7a8 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x7a9 TObjFunc
	goto Label_1966; // 0x7ab Jump
	
Label_1966:
	var_297_bool = 0; // 0x7ae PushV
	func_10306(var_297_bool); // 0x7af NEW_2
	if(var_297_bool == 0) goto Label_1981; // 0x7b1 JumpB
	
Label_1970:
	lshWaitForAnimEnd(); // 0x7b2 Func
	var_298_object = var_3_object; // 0x7b4 PushT
	if(var_298_object == 0) goto Label_1975; // 0x7b5 JumpB
	goto Label_1980; // 0x7b6 Jump
	
Label_1980:
	goto Label_1995; // 0x7bc Jump
	
Label_1995:
	return 0; // 0x7cb Return
	
Label_1975:
	var_299_string = ""; // 0x7b7 PushV
	var_299_string = var_2_object; // 0x7b8 MovT
	func_9995(var_299_string); // 0x7b9 NEW_2
	goto Label_1970; // 0x7bb Jump
	
Label_1981:
	var_310_string = "all"; // 0x7bd PushS
	var_311_string = "idle"; // 0x7be PushS
	PlayAnimation(var_310_string, var_311_string); // 0x7bf Func
	
Label_1985:
	WaitForAnimEnd(); // 0x7c1 Func
	var_312_object = var_3_object; // 0x7c3 PushT
	if(var_312_object == 0) goto Label_1990; // 0x7c4 JumpB
	goto Label_1995; // 0x7c5 Jump
	
Label_1990:
	var_313_string = "all"; // 0x7c6 PushS
	var_314_string = "idle"; // 0x7c7 PushS
	PlayAnimation(var_313_string, var_314_string); // 0x7c8 Func
	goto Label_1985; // 0x7ca Jump
}


func_10638(var_248_object)
{
	var_250_string = "money3000 is given"; // 0x298f PushS
	Trace(var_250_string); // 0x2990 Func
	var_251_object = Obj(); var_252_int = 0; // 0x2992 PushV
	var_251_object = var_248_object; // 0x2993 Mov
	var_252_int = 3000; // 0x2994 MovI
	func_10132(var_251_object, var_252_int); // 0x2995 NEW_2
	return 0; // 0x2997 Return
}


func_10132(var_139_object, var_140_int)
{
	var_141_int = 0; var_142_int = 0; // 0x2794 PushV
	var_143_object = Obj(); var_144_string = ""; var_145_int = 0; // 0x2795 PushV
	var_143_object = var_139_object; // 0x2796 Mov
	var_144_string = "money"; // 0x2797 MovS
	var_145_int = var_140_int; // 0x2798 Mov
	func_9730(var_144_string, var_145_int); // 0x2799 NEW_2
	var_149_int = 0; // 0x279b PushI
	var_150_bool = var_140_int > var_149_int; // 0x279c GT
	if(var_150_bool == 0) goto Label_10150; // 0x279d JumpB
	var_151_string = "Money"; // 0x279e PushS
	GetInvItemByName(var_142_int, var_151_string); // 0x279f Func
	var_152_int = 0; var_153_int = 0; // 0x27a1 PushV
	var_152_int = var_142_int; // 0x27a2 Mov
	var_153_int = var_140_int; // 0x27a3 Mov
	func_10120(var_152_int, var_153_int); // 0x27a4 NEW_2
	
Label_10150:
	return 2; // 0x27a6 Return
}


func_11157(var_420_bool)
{
	var_422_int = 0; var_423_string = ""; // 0x2b96 PushV
	var_423_string = "ood1MladVlad2"; // 0x2b97 MovS
	func_10093(var_422_int, var_423_string); // 0x2b98 NEW_2
	var_424_int = 0; // 0x2b9a PushI
	var_425_bool = var_422_int == var_424_int; // 0x2b9b Eq
	if(var_425_bool == 0) goto Label_11167; // 0x2b9c JumpB
	var_420_bool = 1; // 0x2b9d MovB
	return 0; // 0x2b9e Return
	
Label_11167:
	var_420_bool = 0; // 0x2b9f MovB
	return 0; // 0x2ba0 Return
}


func_11671(var_633_bool, var_634_object)
{
	var_635_bool = 0; var_636_object = Obj(); // 0x2d98 PushV
	var_636_object = var_634_object; // 0x2d99 Mov
	func_11691(var_636_object); // 0x2d9a NEW_2
	if(var_635_bool == 0) goto Label_11679; // 0x2d9c JumpB
	var_633_bool = 1; // 0x2d9d MovB
	return 0; // 0x2d9e Return
	
Label_11679:
	var_633_bool = 0; // 0x2d9f MovB
	return 0; // 0x2da0 Return
}


func_10648()
{
	var_82_string = "ood3MladVlad1"; // 0x2999 PushS
	var_83_int = 1; // 0x299a PushI
	SetVariable(var_82_string, var_83_int); // 0x299b Func
	return 0; // 0x299d Return
}


func_8091(var_0_bool, var_1026_int, var_1027_object)
{
	var_1029_object = Obj(); var_1030_bool = 0; var_1031_int = 0; var_1032_bool = 0; var_1033_object = Obj(); var_1034_bool = 0; var_1035_int = 0; var_1036_bool = 0; // 0x1f9b PushV
	var_0_bool = var_1027_object; // 0x1f9c TMov
	var_1037_bool = 0; var_1038_object = Obj(); var_1039_float = 0; // 0x1f9d PushV
	var_1038_object = var_1027_object; // 0x1f9e Mov
	var_1039_float = 70.0; // 0x1f9f MovF
	func_9772(var_1038_object, var_1039_float); // 0x1fa0 NEW_2
	var_1040_bool = var_1037_bool == 0; // 0x1fa2 Not
	if(var_1040_bool == 0) goto Label_8102; // 0x1fa3 JumpB
	var_1026_int = -2; // 0x1fa4 MovI
	return 8; // 0x1fa5 Return
	
Label_8102:
	CreateDialog(var_1033_object); // 0x1fa6 Func
	var_1041_int = 0; // 0x1fa8 PushV
	func_10300(var_1041_int); // 0x1fa9 NEW_2
	SetNPCName(var_1041_int); // 0x1fab ObjFunc
	var_1042_int = 0; // 0x1fad PushV
	func_10298(var_1042_int); // 0x1fae NEW_2
	SetNPCDescription(var_1042_int); // 0x1fb0 ObjFunc
	var_1043_string = ""; // 0x1fb2 PushV
	func_10302(var_1043_string); // 0x1fb3 NEW_2
	SetPhoto(var_1043_string); // 0x1fb5 ObjFunc
	var_1044_string = ""; // 0x1fb7 PushV
	func_10304(var_1044_string); // 0x1fb8 NEW_2
	SetPhoto2(var_1044_string); // 0x1fba ObjFunc
	var_1045_int = 0; // 0x1fbc PushV
	func_12061(var_1045_int); // 0x1fbd NEW_2
	SetPlayerName(var_1045_int); // 0x1fbf ObjFunc
	var_1035_int = -1; // 0x1fc1 MovI
	IsOverrideActive(var_1034_bool); // 0x1fc2 Func
	var_1046_bool = var_1034_bool; // 0x1fc4 Push
	if(var_1046_bool == 0) goto Label_8136; // 0x1fc5 JumpB
	var_1026_int = -2; // 0x1fc6 MovI
	return 8; // 0x1fc7 Return
	
Label_8136:
	DoDialog(var_1033_object); // 0x1fc8 Func
	var_1047_bool = 0; var_1048_object = Obj(); // 0x1fca PushV
	var_1049_object = Obj(); // 0x1fcb PushV
	func_10048(var_1049_object); // 0x1fcc NEW_2
	var_1048_object = var_1049_object; // 0x1fcd Mov
	func_9857(var_1047_bool, var_1048_object); // 0x1fcf NEW_2
	var_1050_object = Obj(); var_1051_object = Obj(); // 0x1fd1 PushV
	var_1050_object = var_1027_object; // 0x1fd2 Mov
	var_1051_object = var_1033_object; // 0x1fd3 Mov
	TaskCall(23); // 0x1fd4 TaskCall
	func_8172(var_1052_object, var_1053_object, var_1054_string, var_1055_bool, var_1050_object, var_1051_object); // 0x1fd5 NEW_2
	TaskReturn(); // 0x1fd6 TaskReturn
	IsDialogEnd(var_1036_bool); // 0x1fd8 ObjFunc
	
Label_8154:
	var_1083_bool = var_1036_bool == 0; // 0x1fda Not
	if(var_1083_bool == 0) goto Label_8161; // 0x1fdb JumpB
	sync(); // 0x1fdc Func
	IsDialogEnd(var_1036_bool); // 0x1fde ObjFunc
	goto Label_8154; // 0x1fe0 Jump
	
Label_8161:
	var_1084_object = Obj(); // 0x1fe1 PushV
	var_1084_object = var_1027_object; // 0x1fe2 Mov
	func_9840(); // 0x1fe3 NEW_2
	StopDialog(var_1033_object); // 0x1fe5 Func
	GetReturnValue(var_1035_int); // 0x1fe7 ObjFunc
	var_1026_int = var_1035_int; // 0x1fe9 Mov
	return 8; // 0x1fea Return
}


func_9628()
{
	var_98_string = ""; var_99_string = ""; // 0x259c PushV
	var_100_string = "loc"; // 0x259d PushS
	GetProperty(var_100_string, var_99_string); // 0x259e Func
	var_101_string = GlobalVars[0]; // 0x25a0 PushGE
	var_101_string = var_99_string; // 0x25a1 Mov
	GlobalVars[0] = var_101_string; // 0x25a2 PopGE
	return 2; // 0x25a3 Return
}


func_10654()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x299e PushV
	var_90_string = "d3q02"; // 0x299f PushS
	var_91_int = 2; // 0x29a0 PushI
	SetVariable(var_90_string, var_91_int); // 0x29a1 Func
	var_92_object = Obj(); // 0x29a3 PushV
	func_12011(var_92_object); // 0x29a4 NEW_2
	var_89_object = var_92_object; // 0x29a5 Mov
	var_99_string = "d3q02MladVladGotoViktor"; // 0x29a7 PushS
	var_100_string = "pt_map_viktor"; // 0x29a8 PushS
	var_101_int = 0; // 0x29a9 PushI
	var_102_int = 511384; // 0x29aa PushI
	var_103_float = 0; // 0x29ab PushV
	func_10240(var_103_float); // 0x29ac NEW_2
	AddMark(var_99_string, var_100_string, var_101_int, var_102_int, var_103_float); // 0x29ae ObjFunc
	func_11762(); // 0x29b1 NEW_2
	return 2; // 0x29b3 Return
}


func_8608(var_0_bool, var_1339_int, var_1340_object)
{
	var_1342_object = Obj(); var_1343_bool = 0; var_1344_int = 0; var_1345_bool = 0; var_1346_object = Obj(); var_1347_bool = 0; var_1348_int = 0; var_1349_bool = 0; // 0x21a0 PushV
	var_0_bool = var_1340_object; // 0x21a1 TMov
	var_1350_bool = 0; var_1351_object = Obj(); var_1352_float = 0; // 0x21a2 PushV
	var_1351_object = var_1340_object; // 0x21a3 Mov
	var_1352_float = 70.0; // 0x21a4 MovF
	func_9772(var_1351_object, var_1352_float); // 0x21a5 NEW_2
	var_1353_bool = var_1350_bool == 0; // 0x21a7 Not
	if(var_1353_bool == 0) goto Label_8619; // 0x21a8 JumpB
	var_1339_int = -2; // 0x21a9 MovI
	return 8; // 0x21aa Return
	
Label_8619:
	CreateDialog(var_1346_object); // 0x21ab Func
	var_1354_int = 0; // 0x21ad PushV
	func_10300(var_1354_int); // 0x21ae NEW_2
	SetNPCName(var_1354_int); // 0x21b0 ObjFunc
	var_1355_int = 0; // 0x21b2 PushV
	func_10298(var_1355_int); // 0x21b3 NEW_2
	SetNPCDescription(var_1355_int); // 0x21b5 ObjFunc
	var_1356_string = ""; // 0x21b7 PushV
	func_10302(var_1356_string); // 0x21b8 NEW_2
	SetPhoto(var_1356_string); // 0x21ba ObjFunc
	var_1357_string = ""; // 0x21bc PushV
	func_10304(var_1357_string); // 0x21bd NEW_2
	SetPhoto2(var_1357_string); // 0x21bf ObjFunc
	var_1358_int = 0; // 0x21c1 PushV
	func_12061(var_1358_int); // 0x21c2 NEW_2
	SetPlayerName(var_1358_int); // 0x21c4 ObjFunc
	var_1348_int = -1; // 0x21c6 MovI
	IsOverrideActive(var_1347_bool); // 0x21c7 Func
	var_1359_bool = var_1347_bool; // 0x21c9 Push
	if(var_1359_bool == 0) goto Label_8653; // 0x21ca JumpB
	var_1339_int = -2; // 0x21cb MovI
	return 8; // 0x21cc Return
	
Label_8653:
	DoDialog(var_1346_object); // 0x21cd Func
	var_1360_bool = 0; var_1361_object = Obj(); // 0x21cf PushV
	var_1362_object = Obj(); // 0x21d0 PushV
	func_10048(var_1362_object); // 0x21d1 NEW_2
	var_1361_object = var_1362_object; // 0x21d2 Mov
	func_9857(var_1360_bool, var_1361_object); // 0x21d4 NEW_2
	var_1363_object = Obj(); var_1364_object = Obj(); // 0x21d6 PushV
	var_1363_object = var_1340_object; // 0x21d7 Mov
	var_1364_object = var_1346_object; // 0x21d8 Mov
	TaskCall(27); // 0x21d9 TaskCall
	func_8689(var_1365_object, var_1366_object, var_1367_string, var_1368_bool, var_1363_object, var_1364_object); // 0x21da NEW_2
	TaskReturn(); // 0x21db TaskReturn
	IsDialogEnd(var_1349_bool); // 0x21dd ObjFunc
	
Label_8671:
	var_1396_bool = var_1349_bool == 0; // 0x21df Not
	if(var_1396_bool == 0) goto Label_8678; // 0x21e0 JumpB
	sync(); // 0x21e1 Func
	IsDialogEnd(var_1349_bool); // 0x21e3 ObjFunc
	goto Label_8671; // 0x21e5 Jump
	
Label_8678:
	var_1397_object = Obj(); // 0x21e6 PushV
	var_1397_object = var_1340_object; // 0x21e7 Mov
	func_9840(); // 0x21e8 NEW_2
	StopDialog(var_1346_object); // 0x21ea Func
	GetReturnValue(var_1348_int); // 0x21ec ObjFunc
	var_1339_int = var_1348_int; // 0x21ee Mov
	return 8; // 0x21ef Return
}


func_11169(var_458_bool)
{
	var_460_int = 0; var_461_string = ""; // 0x2ba2 PushV
	var_461_string = "ood1MladVlad3"; // 0x2ba3 MovS
	func_10093(var_460_int, var_461_string); // 0x2ba4 NEW_2
	var_462_int = 0; // 0x2ba6 PushI
	var_463_bool = var_460_int == var_462_int; // 0x2ba7 Eq
	if(var_463_bool == 0) goto Label_11179; // 0x2ba8 JumpB
	var_458_bool = 1; // 0x2ba9 MovB
	return 0; // 0x2baa Return
	
Label_11179:
	var_458_bool = 0; // 0x2bab MovB
	return 0; // 0x2bac Return
}


func_11681(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj(); // 0x2da2 PushV
	var_217_object = var_215_object; // 0x2da3 Mov
	func_11703(var_217_object); // 0x2da4 NEW_2
	if(var_216_bool == 0) goto Label_11689; // 0x2da6 JumpB
	var_214_bool = 1; // 0x2da7 MovB
	return 0; // 0x2da8 Return
	
Label_11689:
	var_214_bool = 0; // 0x2da9 MovB
	return 0; // 0x2daa Return
}


func_9636(var_0_bool, var_1_object)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); // 0x25a4 PushV
	var_122_string = "all"; // 0x25a5 PushS
	var_123_string = "walk_stopl"; // 0x25a6 PushS
	GetAnimationOffset(var_120_cvector, var_122_string, var_123_string); // 0x25a7 Func
	var_124_string = "all"; // 0x25a9 PushS
	var_125_string = "walk_stopr"; // 0x25aa PushS
	GetAnimationOffset(var_121_cvector, var_124_string, var_125_string); // 0x25ab Func
	var_126_float = GetByIndex(var_120_cvector, 2); // 0x25ad PushE
	var_127_float = GetByIndex(var_121_cvector, 2); // 0x25ae PushE
	var_128_int = var_126_float + var_127_float; // 0x25af Add
	var_129_float = 2.0; // 0x25b0 PushF
	var_0_bool = var_128_int / var_128_int; // 0x25b1 Div2
	var_130_float = 0; var_131_float = 0; // 0x25b2 PushV
	var_132_float = GetByIndex(var_120_cvector, 2); // 0x25b3 PushE
	var_131_float = var_132_float - var_0_bool; // 0x25b4 Sub2
	func_10064(var_130_float, var_131_float); // 0x25b5 NEW_2
	var_135_int = 40; // 0x25b7 PushI
	var_1_object = var_130_float + var_135_int; // 0x25b8 Add2
	return 4; // 0x25b9 Return
}


func_10151(var_282_object, var_283_int)
{
	var_284_int = 0; var_285_int = 0; var_286_bool = 0; var_287_int = 0; var_288_int = 0; var_289_bool = 0; // 0x27a7 PushV
	GetItemID(var_287_int); // 0x27a8 ObjFunc
	var_290_string = "Category"; // 0x27aa PushS
	GetInvItemProperty(var_288_int, var_287_int, var_290_string); // 0x27ab Func
	AddItem(var_289_bool, var_282_object, var_288_int, var_283_int); // 0x27ad ObjFunc
	var_291_bool = var_289_bool == 0; // 0x27af Not
	if(var_291_bool == 0) goto Label_10164; // 0x27b0 JumpB
	DropItems(var_282_object, var_283_int); // 0x27b1 ObjFunc
	goto Label_10169; // 0x27b3 Jump
	
Label_10169:
	return 6; // 0x27b9 Return
	
Label_10164:
	var_292_int = 0; var_293_int = 0; // 0x27b4 PushV
	var_292_int = var_287_int; // 0x27b5 Mov
	var_293_int = var_283_int; // 0x27b6 Mov
	func_10120(var_292_int, var_293_int); // 0x27b7 NEW_2
}


func_11691(var_635_bool)
{
	var_637_int = 0; var_638_int = 0; var_639_int = 0; var_640_int = 0; // 0x2dab PushV
	var_641_int = 0; // 0x2dac PushV
	func_10245(var_641_int); // 0x2dad NEW_2
	var_639_int = var_641_int; // 0x2dae Mov
	var_642_string = "RMap"; // 0x2db0 PushS
	var_643_int = var_642_string + var_639_int; // 0x2db1 Add
	GetVariable(var_643_int, var_640_int); // 0x2db2 Func
	var_644_int = 0; // 0x2db4 PushI
	var_635_bool = var_640_int != var_644_int; // 0x2db5 Neq2
	return 4; // 0x2db6 Return
}


func_11181(var_1118_bool)
{
	var_1120_int = 0; var_1121_string = ""; // 0x2bae PushV
	var_1121_string = "ood8MladVlad6"; // 0x2baf MovS
	func_10093(var_1120_int, var_1121_string); // 0x2bb0 NEW_2
	var_1122_int = 0; // 0x2bb2 PushI
	var_1123_bool = var_1120_int == var_1122_int; // 0x2bb3 Eq
	if(var_1123_bool == 0) goto Label_11191; // 0x2bb4 JumpB
	var_1118_bool = 1; // 0x2bb5 MovB
	return 0; // 0x2bb6 Return
	
Label_11191:
	var_1118_bool = 0; // 0x2bb7 MovB
	return 0; // 0x2bb8 Return
}


func_10677()
{
	var_143_object = Obj(); var_144_object = Obj(); // 0x29b5 PushV
	var_145_object = Obj(); // 0x29b6 PushV
	func_12011(var_145_object); // 0x29b7 NEW_2
	var_144_object = var_145_object; // 0x29b8 Mov
	var_146_string = "d3q02MladVladGotoButcher"; // 0x29ba PushS
	var_147_string = "pt_gmap_r7_house2_01"; // 0x29bb PushS
	var_148_int = 0; // 0x29bc PushI
	var_149_int = 524631; // 0x29bd PushI
	var_150_float = 0; // 0x29be PushV
	func_10240(var_150_float); // 0x29bf NEW_2
	AddMark(var_146_string, var_147_string, var_148_int, var_149_int, var_150_float); // 0x29c1 ObjFunc
	func_11775(); // 0x29c4 NEW_2
	return 2; // 0x29c6 Return
}


func_11703(var_216_bool)
{
	var_218_int = 0; var_219_int = 0; // 0x2db7 PushV
	var_220_string = "money"; // 0x2db8 PushS
	GetProperty(var_220_string, var_219_int); // 0x2db9 ObjFunc
	var_221_int = 1000; // 0x2dbb PushI
	var_216_bool = var_219_int >= var_221_int; // 0x2dbc GE2
	return 2; // 0x2dbd Return
}


func_11193(var_1262_bool)
{
	var_1264_int = 0; var_1265_string = ""; // 0x2bba PushV
	var_1265_string = "d8q04"; // 0x2bbb MovS
	func_10093(var_1264_int, var_1265_string); // 0x2bbc NEW_2
	var_1266_int = 2; // 0x2bbe PushI
	var_1267_bool = var_1264_int == var_1266_int; // 0x2bbf Eq
	if(var_1267_bool == 0) goto Label_11203; // 0x2bc0 JumpB
	var_1262_bool = 1; // 0x2bc1 MovB
	return 0; // 0x2bc2 Return
	
Label_11203:
	var_1262_bool = 0; // 0x2bc3 MovB
	return 0; // 0x2bc4 Return
}


func_10170(var_276_object, var_277_string, var_278_int)
{
	var_279_object = Obj(); var_280_object = Obj(); // 0x27ba PushV
	CreateInvItem(var_280_object); // 0x27bb Func
	SetItemName(var_277_string); // 0x27bd ObjFunc
	var_281_object = Obj(); var_282_object = Obj(); var_283_int = 0; // 0x27bf PushV
	var_281_object = var_276_object; // 0x27c0 Mov
	var_282_object = var_280_object; // 0x27c1 Mov
	var_283_int = var_278_int; // 0x27c2 Mov
	func_10151(var_282_object, var_283_int); // 0x27c3 NEW_2
	return 2; // 0x27c5 Return
}


func_11710()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2dbe PushV
	var_84_int = 685; // 0x2dbf PushI
	var_85_int = 2; // 0x2dc0 PushI
	var_86_int = 534500; // 0x2dc1 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x2dc2 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x2dc4 PushV
	var_88_object = var_83_object; // 0x2dc5 Mov
	var_89_int = 682; // 0x2dc6 MovI
	func_11983(var_87_bool, var_88_object, var_89_int); // 0x2dc7 NEW_2
	return 2; // 0x2dc9 Return
}


func_6596(var_2_object, var_1132_string)
{
	var_1133_bool = 0; // 0x19c5 PushV
	func_10306(var_1133_bool); // 0x19c6 NEW_2
	var_1134_bool = var_1133_bool == 0; // 0x19c8 Not
	if(var_1134_bool == 0) goto Label_6603; // 0x19c9 JumpB
	return 0; // 0x19ca Return
	
Label_6603:
	var_1135_bool = var_1132_string == var_2_object; // 0x19cb Eq
	if(var_1135_bool == 0) goto Label_6606; // 0x19cc JumpB
	return 0; // 0x19cd Return
	
Label_6606:
	var_1136_string = ""; var_1137_bool = 0; // 0x19ce PushV
	var_1136_string = var_1132_string; // 0x19cf Mov
	var_1138_string = ""; // 0x19d0 PushS
	var_1139_bool = var_1132_string == var_1138_string; // 0x19d1 Eq
	if(var_1139_bool == 0) goto Label_6613; // 0x19d2 JumpB
	var_1137_bool = 0; // 0x19d3 MovB
	goto Label_6614; // 0x19d4 Jump
	
Label_6614:
	func_10011(var_1136_string, var_1137_bool); // 0x19d6 NEW_2
	var_2_object = var_1132_string; // 0x19d8 TMov
	return 0; // 0x19d9 Return
	
Label_6613:
	var_1137_bool = 1; // 0x19d5 MovB
}


func_11205(var_1440_bool)
{
	var_1442_int = 0; var_1443_string = ""; // 0x2bc6 PushV
	var_1443_string = "d11q05"; // 0x2bc7 MovS
	func_10093(var_1442_int, var_1443_string); // 0x2bc8 NEW_2
	var_1444_int = 2; // 0x2bca PushI
	var_1445_bool = var_1442_int == var_1444_int; // 0x2bcb Eq
	if(var_1445_bool == 0) goto Label_11215; // 0x2bcc JumpB
	var_1440_bool = 1; // 0x2bcd MovB
	return 0; // 0x2bce Return
	
Label_11215:
	var_1440_bool = 0; // 0x2bcf MovB
	return 0; // 0x2bd0 Return
}


func_10183(var_198_bool, var_199_object, var_200_float)
{
	var_201_bool = var_199_object == 0; // 0x27c8 Not
	if(var_201_bool == 0) goto Label_10188; // 0x27c9 JumpB
	var_198_bool = 0; // 0x27ca MovB
	return 0; // 0x27cb Return
	
Label_10188:
	var_202_int = 0; // 0x27cc PushI
	var_203_bool = var_200_float > var_202_int; // 0x27cd GT
	if(var_203_bool == 0) goto Label_10195; // 0x27ce JumpB
	var_204_int = 8; // 0x27cf PushI
	SendWorldWndMessage(var_204_int); // 0x27d0 Func
	goto Label_10204; // 0x27d2 Jump
	
Label_10204:
	var_205_float = 0; // 0x27dc PushV
	var_205_float = var_200_float; // 0x27dd Mov
	func_10218(var_205_float); // 0x27de NEW_2
	var_209_bool = 0; var_210_object = Obj(); var_211_string = ""; var_212_float = 0; var_213_float = 0; var_214_float = 0; // 0x27e0 PushV
	var_210_object = var_199_object; // 0x27e1 Mov
	var_211_string = "reputation"; // 0x27e2 MovS
	var_212_float = var_200_float; // 0x27e3 Mov
	var_213_float = 0; // 0x27e4 MovI
	var_214_float = 1; // 0x27e5 MovI
	func_9708(var_209_bool, var_210_object, var_211_string, var_212_float, var_213_float, var_214_float); // 0x27e6 NEW_2
	var_198_bool = 1; // 0x27e8 MovB
	return 0; // 0x27e9 Return
	
Label_10195:
	var_233_int = 0; // 0x27d3 PushI
	var_234_bool = var_200_float < var_233_int; // 0x27d4 LT
	if(var_234_bool == 0) goto Label_10202; // 0x27d5 JumpB
	var_235_int = 9; // 0x27d6 PushI
	SendWorldWndMessage(var_235_int); // 0x27d7 Func
	goto Label_10204; // 0x27d9 Jump
	
Label_10202:
	var_198_bool = 0; // 0x27da MovB
	return 0; // 0x27db Return
}


func_10696()
{
	var_189_string = "ood4MladVlad1"; // 0x29c9 PushS
	var_190_int = 1; // 0x29ca PushI
	SetVariable(var_189_string, var_190_int); // 0x29cb Func
	return 0; // 0x29cd Return
}


func_5576(var_0_bool, var_1_object, var_2_object, var_3_object, var_930_object, var_931_object)
{
	var_0_bool = var_931_object; // 0x15c9 TMov
	var_1_object = var_930_object; // 0x15ca TMov
	var_3_object = 0; // 0x15cb TMovB
	var_936_int = 1; // 0x15cc PushI
	if(var_936_int == 0) goto Label_5693; // 0x15cd JumpB
	var_937_bool = 0; var_938_object = Obj(); // 0x15ce PushV
	var_938_object = var_1_object; // 0x15cf MovT
	func_11373(var_938_object); // 0x15d0 NEW_2
	if(var_937_bool == 0) goto Label_5607; // 0x15d2 JumpB
	var_943_string = ""; // 0x15d3 PushV
	var_943_string = "Fear"; // 0x15d4 MovS
	func_5723(var_931_object, var_943_string); // 0x15d5 NEW_2
	var_951_int = 512104; // 0x15d7 PushI
	SetMessage(var_951_int); // 0x15d8 TObjFunc
	ClearReplies(); // 0x15da TObjFunc
	var_952_int = 512105; // 0x15dc PushI
	var_953_int = 13334; // 0x15dd PushI
	var_954_int = 13331; // 0x15de PushI
	AddReply(var_952_int, var_953_int, var_954_int); // 0x15df TObjFunc
	var_955_int = 512106; // 0x15e1 PushI
	var_956_int = 13333; // 0x15e2 PushI
	var_957_int = 13332; // 0x15e3 PushI
	AddReply(var_955_int, var_956_int, var_957_int); // 0x15e4 TObjFunc
	goto Label_5693; // 0x15e6 Jump
	
Label_5693:
	var_958_bool = 0; // 0x163d PushV
	func_10306(var_958_bool); // 0x163e NEW_2
	if(var_958_bool == 0) goto Label_5708; // 0x1640 JumpB
	
Label_5697:
	lshWaitForAnimEnd(); // 0x1641 Func
	var_959_object = var_3_object; // 0x1643 PushT
	if(var_959_object == 0) goto Label_5702; // 0x1644 JumpB
	goto Label_5707; // 0x1645 Jump
	
Label_5707:
	goto Label_5722; // 0x164b Jump
	
Label_5722:
	return 0; // 0x165a Return
	
Label_5702:
	var_960_string = ""; // 0x1646 PushV
	var_960_string = var_2_object; // 0x1647 MovT
	func_9995(var_960_string); // 0x1648 NEW_2
	goto Label_5697; // 0x164a Jump
	
Label_5708:
	var_961_string = "all"; // 0x164c PushS
	var_962_string = "idle"; // 0x164d PushS
	PlayAnimation(var_961_string, var_962_string); // 0x164e Func
	
Label_5712:
	WaitForAnimEnd(); // 0x1650 Func
	var_963_object = var_3_object; // 0x1652 PushT
	if(var_963_object == 0) goto Label_5717; // 0x1653 JumpB
	goto Label_5722; // 0x1654 Jump
	
Label_5717:
	var_964_string = "all"; // 0x1655 PushS
	var_965_string = "idle"; // 0x1656 PushS
	PlayAnimation(var_964_string, var_965_string); // 0x1657 Func
	goto Label_5712; // 0x1659 Jump
	
Label_5607:
	var_966_string = ""; // 0x15e7 PushV
	var_966_string = "Neutral"; // 0x15e8 MovS
	func_5723(var_931_object, var_966_string); // 0x15e9 NEW_2
	var_967_int = 512515; // 0x15eb PushI
	SetMessage(var_967_int); // 0x15ec TObjFunc
	ClearReplies(); // 0x15ee TObjFunc
	var_968_bool = 0; var_969_object = Obj(); // 0x15f0 PushV
	var_969_object = var_1_object; // 0x15f1 MovT
	func_11361(var_969_object); // 0x15f2 NEW_2
	if(var_968_bool == 0) goto Label_5626; // 0x15f4 JumpB
	var_974_int = 512520; // 0x15f5 PushI
	var_975_int = 13691; // 0x15f6 PushI
	var_976_int = 13690; // 0x15f7 PushI
	AddReply(var_974_int, var_975_int, var_976_int); // 0x15f8 TObjFunc
	
Label_5626:
	var_977_bool = 0; // 0x15fa PushV
	var_977_bool = 0; // 0x15fb MovB
	var_978_bool = 0; var_979_object = Obj(); // 0x15fc PushV
	var_979_object = var_1_object; // 0x15fd MovT
	func_11385(var_979_object); // 0x15fe NEW_2
	if(var_978_bool == 0) goto Label_5639; // 0x1600 JumpB
	var_984_bool = 0; var_985_object = Obj(); // 0x1601 PushV
	var_985_object = var_1_object; // 0x1602 MovT
	func_11493(var_985_object); // 0x1603 NEW_2
	if(var_984_bool == 0) goto Label_5639; // 0x1605 JumpB
	var_977_bool = 1; // 0x1606 MovB
	
Label_5639:
	if(var_977_bool == 0) goto Label_5645; // 0x1607 JumpB
	var_990_int = 512516; // 0x1608 PushI
	var_991_int = 13688; // 0x1609 PushI
	var_992_int = 13686; // 0x160a PushI
	AddReply(var_990_int, var_991_int, var_992_int); // 0x160b TObjFunc
	
Label_5645:
	var_993_bool = 0; // 0x160d PushV
	var_993_bool = 0; // 0x160e MovB
	var_994_bool = 0; // 0x160f PushV
	var_994_bool = 0; // 0x1610 MovB
	var_995_bool = 0; var_996_object = Obj(); // 0x1611 PushV
	var_996_object = var_1_object; // 0x1612 MovT
	func_11397(var_996_object); // 0x1613 NEW_2
	if(var_995_bool == 0) goto Label_5660; // 0x1615 JumpB
	var_1001_bool = 0; var_1002_object = Obj(); // 0x1616 PushV
	var_1002_object = var_1_object; // 0x1617 MovT
	func_11505(var_1002_object); // 0x1618 NEW_2
	if(var_1001_bool == 0) goto Label_5660; // 0x161a JumpB
	var_994_bool = 1; // 0x161b MovB
	
Label_5660:
	if(var_994_bool == 0) goto Label_5668; // 0x161c JumpB
	var_1007_bool = 0; var_1008_object = Obj(); // 0x161d PushV
	var_1008_object = var_1_object; // 0x161e MovT
	func_11493(var_1008_object); // 0x161f NEW_2
	var_1009_bool = var_1007_bool == 0; // 0x1621 Not
	if(var_1009_bool == 0) goto Label_5668; // 0x1622 JumpB
	var_993_bool = 1; // 0x1623 MovB
	
Label_5668:
	if(var_993_bool == 0) goto Label_5674; // 0x1624 JumpB
	var_1010_int = 512526; // 0x1625 PushI
	var_1011_int = 13697; // 0x1626 PushI
	var_1012_int = 13696; // 0x1627 PushI
	AddReply(var_1010_int, var_1011_int, var_1012_int); // 0x1628 TObjFunc
	
Label_5674:
	var_1013_bool = 0; var_1014_object = Obj(); // 0x162a PushV
	var_1014_object = var_1_object; // 0x162b MovT
	func_11671(var_1013_bool, var_1014_object); // 0x162c NEW_2
	var_1015_bool = var_1013_bool == 0; // 0x162e Not
	if(var_1015_bool == 0) goto Label_5685; // 0x162f JumpB
	var_1016_int = 520909; // 0x1630 PushI
	var_1017_int = 22127; // 0x1631 PushI
	var_1018_int = 22126; // 0x1632 PushI
	AddReply(var_1016_int, var_1017_int, var_1018_int); // 0x1633 TObjFunc
	
Label_5685:
	var_1019_int = 512517; // 0x1635 PushI
	var_1020_int = -1; // 0x1636 PushI
	var_1021_int = 13687; // 0x1637 PushI
	AddReply(var_1019_int, var_1020_int, var_1021_int); // 0x1638 TObjFunc
	goto Label_5693; // 0x163a Jump
}


func_11723()
{
	var_177_object = Obj(); var_178_object = Obj(); // 0x2dcb PushV
	var_179_int = 620; // 0x2dcc PushI
	var_180_int = 1; // 0x2dcd PushI
	var_181_int = 532194; // 0x2dce PushI
	CreateDiaryEntry(var_178_object, var_179_int, var_180_int, var_181_int); // 0x2dcf Func
	var_182_bool = 0; var_183_object = Obj(); var_184_int = 0; // 0x2dd1 PushV
	var_183_object = var_178_object; // 0x2dd2 Mov
	var_184_int = 2; // 0x2dd3 MovI
	func_11983(var_182_bool, var_183_object, var_184_int); // 0x2dd4 NEW_2
	return 2; // 0x2dd6 Return
}


func_1996(var_2_object, var_276_string)
{
	var_277_bool = 0; // 0x7cd PushV
	func_10306(var_277_bool); // 0x7ce NEW_2
	var_278_bool = var_277_bool == 0; // 0x7d0 Not
	if(var_278_bool == 0) goto Label_2003; // 0x7d1 JumpB
	return 0; // 0x7d2 Return
	
Label_2003:
	var_279_bool = var_276_string == var_2_object; // 0x7d3 Eq
	if(var_279_bool == 0) goto Label_2006; // 0x7d4 JumpB
	return 0; // 0x7d5 Return
	
Label_2006:
	var_280_string = ""; var_281_bool = 0; // 0x7d6 PushV
	var_280_string = var_276_string; // 0x7d7 Mov
	var_282_string = ""; // 0x7d8 PushS
	var_283_bool = var_276_string == var_282_string; // 0x7d9 Eq
	if(var_283_bool == 0) goto Label_2013; // 0x7da JumpB
	var_281_bool = 0; // 0x7db MovB
	goto Label_2014; // 0x7dc Jump
	
Label_2014:
	func_10011(var_280_string, var_281_bool); // 0x7de NEW_2
	var_2_object = var_276_string; // 0x7e0 TMov
	return 0; // 0x7e1 Return
	
Label_2013:
	var_281_bool = 1; // 0x7dd MovB
}


func_10702()
{
	var_195_object = Obj(); var_196_object = Obj(); // 0x29ce PushV
	var_197_string = "d4q01"; // 0x29cf PushS
	var_198_int = 3; // 0x29d0 PushI
	SetVariable(var_197_string, var_198_int); // 0x29d1 Func
	var_199_object = Obj(); // 0x29d3 PushV
	func_12011(var_199_object); // 0x29d4 NEW_2
	var_196_object = var_199_object; // 0x29d5 Mov
	var_200_string = "d4q01MladVladGotoBigVlad"; // 0x29d7 PushS
	var_201_string = "pt_map_bigvlad"; // 0x29d8 PushS
	var_202_int = 1; // 0x29d9 PushI
	var_203_int = 511507; // 0x29da PushI
	var_204_float = 0; // 0x29db PushV
	func_10240(var_204_float); // 0x29dc NEW_2
	AddMark(var_200_string, var_201_string, var_202_int, var_203_int, var_204_float); // 0x29de ObjFunc
	func_11788(); // 0x29e1 NEW_2
	return 2; // 0x29e3 Return
}


func_11217(var_615_bool)
{
	var_617_int = 0; var_618_string = ""; // 0x2bd2 PushV
	var_618_string = "ood3MladVlad3"; // 0x2bd3 MovS
	func_10093(var_617_int, var_618_string); // 0x2bd4 NEW_2
	var_619_int = 0; // 0x2bd6 PushI
	var_620_bool = var_617_int == var_619_int; // 0x2bd7 Eq
	if(var_620_bool == 0) goto Label_11227; // 0x2bd8 JumpB
	var_615_bool = 1; // 0x2bd9 MovB
	return 0; // 0x2bda Return
	
Label_11227:
	var_615_bool = 0; // 0x2bdb MovB
	return 0; // 0x2bdc Return
}


func_9683(var_138_cvector)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); // 0x25d3 PushV
	GetPosition(var_140_cvector); // 0x25d4 Func
	var_138_cvector = var_140_cvector; // 0x25d6 Mov
	return 2; // 0x25d7 Return
}


func_9688(var_86_float)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0x25d8 PushV
	GetPosition(var_91_cvector); // 0x25d9 Func
	GetPosition(var_92_cvector); // 0x25db ObjFunc
	var_93_cvector = var_92_cvector - var_91_cvector; // 0x25dd Sub2
	var_86_float = var_93_cvector | var_93_cvector; // 0x25de Or2
	return 6; // 0x25df Return
}


func_11736()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x2dd8 PushV
	var_102_int = 37; // 0x2dd9 PushI
	var_103_int = 2; // 0x2dda PushI
	var_104_int = 512119; // 0x2ddb PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x2ddc Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x2dde PushV
	var_106_object = var_101_object; // 0x2ddf Mov
	var_107_int = -1; // 0x2de0 MovI
	func_11983(var_105_bool, var_106_object, var_107_int); // 0x2de1 NEW_2
	return 2; // 0x2de3 Return
}


func_11229(var_527_bool)
{
	var_529_int = 0; var_530_string = ""; // 0x2bde PushV
	var_530_string = "d2q03"; // 0x2bdf MovS
	func_10093(var_529_int, var_530_string); // 0x2be0 NEW_2
	var_531_int = 1; // 0x2be2 PushI
	var_532_bool = var_529_int == var_531_int; // 0x2be3 Eq
	if(var_532_bool == 0) goto Label_11239; // 0x2be4 JumpB
	var_527_bool = 1; // 0x2be5 MovB
	return 0; // 0x2be6 Return
	
Label_11239:
	var_527_bool = 0; // 0x2be7 MovB
	return 0; // 0x2be8 Return
}


func_9696(var_217_bool, var_218_object, var_219_string)
{
	var_220_bool = 0; var_221_bool = 0; // 0x25e0 PushV
	var_222_string = "HasProperty"; // 0x25e1 PushS
	var_223_int = 2; // 0x25e2 PushI
	var_224_bool = IsFuncExist(var_218_object, var_222_string, var_223_int); // 0x25e3 FuncExist
	var_225_bool = var_224_bool == 0; // 0x25e4 Not
	if(var_225_bool == 0) goto Label_9704; // 0x25e5 JumpB
	var_217_bool = 0; // 0x25e6 MovB
	return 2; // 0x25e7 Return
	
Label_9704:
	HasProperty(var_219_string, var_221_bool); // 0x25e8 ObjFunc
	var_217_bool = var_221_bool; // 0x25ea Mov
	return 2; // 0x25eb Return
}


func_10725()
{
	var_215_object = Obj(); var_216_object = Obj(); // 0x29e5 PushV
	var_217_string = "d4q01_subquest"; // 0x29e6 PushS
	var_218_int = 1; // 0x29e7 PushI
	SetVariable(var_217_string, var_218_int); // 0x29e8 Func
	var_219_object = Obj(); // 0x29ea PushV
	func_12011(var_219_object); // 0x29eb NEW_2
	var_216_object = var_219_object; // 0x29ec Mov
	var_220_string = "d4q01MladVladGotoOspina"; // 0x29ee PushS
	var_221_string = "pt_map_ospina"; // 0x29ef PushS
	var_222_int = 1; // 0x29f0 PushI
	var_223_int = 511503; // 0x29f1 PushI
	var_224_float = 0; // 0x29f2 PushV
	func_10240(var_224_float); // 0x29f3 NEW_2
	AddMark(var_220_string, var_221_string, var_222_int, var_223_int, var_224_float); // 0x29f5 ObjFunc
	return 2; // 0x29f7 Return
}


func_11749()
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x2de5 PushV
	var_125_int = 681; // 0x2de6 PushI
	var_126_int = 2; // 0x2de7 PushI
	var_127_int = 534423; // 0x2de8 PushI
	CreateDiaryEntry(var_124_object, var_125_int, var_126_int, var_127_int); // 0x2de9 Func
	var_128_bool = 0; var_129_object = Obj(); var_130_int = 0; // 0x2deb PushV
	var_129_object = var_124_object; // 0x2dec Mov
	var_130_int = 37; // 0x2ded MovI
	func_11983(var_128_bool, var_129_object, var_130_int); // 0x2dee NEW_2
	return 2; // 0x2df0 Return
}


func_11241(var_521_bool)
{
	var_523_int = 0; var_524_string = ""; // 0x2bea PushV
	var_524_string = "ood2MladVlad2"; // 0x2beb MovS
	func_10093(var_523_int, var_524_string); // 0x2bec NEW_2
	var_525_int = 0; // 0x2bee PushI
	var_526_bool = var_523_int == var_525_int; // 0x2bef Eq
	if(var_526_bool == 0) goto Label_11251; // 0x2bf0 JumpB
	var_521_bool = 1; // 0x2bf1 MovB
	return 0; // 0x2bf2 Return
	
Label_11251:
	var_521_bool = 0; // 0x2bf3 MovB
	return 0; // 0x2bf4 Return
}


func_10218(var_205_float)
{
	var_206_object = Obj(); var_207_object = Obj(); // 0x27ea PushV
	CreateFloatVector(var_207_object); // 0x27eb Func
	add(var_205_float); // 0x27ed ObjFunc
	var_208_int = 16; // 0x27ef PushI
	SendWorldWndMessage(var_208_int, var_207_object); // 0x27f0 Func
	return 2; // 0x27f2 Return
}


func_8172(var_0_bool, var_1_object, var_2_object, var_3_object, var_1050_object, var_1051_object)
{
	var_0_bool = var_1051_object; // 0x1fed TMov
	var_1_object = var_1050_object; // 0x1fee TMov
	var_3_object = 0; // 0x1fef TMovB
	var_1056_int = 1; // 0x1ff0 PushI
	if(var_1056_int == 0) goto Label_8206; // 0x1ff1 JumpB
	var_1057_string = ""; // 0x1ff2 PushV
	var_1057_string = "Neutral"; // 0x1ff3 MovS
	func_8236(var_1051_object, var_1057_string); // 0x1ff4 NEW_2
	var_1065_int = 520914; // 0x1ff6 PushI
	SetMessage(var_1065_int); // 0x1ff7 TObjFunc
	ClearReplies(); // 0x1ff9 TObjFunc
	var_1066_bool = 0; var_1067_object = Obj(); // 0x1ffb PushV
	var_1067_object = var_1_object; // 0x1ffc MovT
	func_11671(var_1066_bool, var_1067_object); // 0x1ffd NEW_2
	var_1068_bool = var_1066_bool == 0; // 0x1fff Not
	if(var_1068_bool == 0) goto Label_8198; // 0x2000 JumpB
	var_1069_int = 520917; // 0x2001 PushI
	var_1070_int = 22135; // 0x2002 PushI
	var_1071_int = 22134; // 0x2003 PushI
	AddReply(var_1069_int, var_1070_int, var_1071_int); // 0x2004 TObjFunc
	
Label_8198:
	var_1072_int = 520915; // 0x2006 PushI
	var_1073_int = -1; // 0x2007 PushI
	var_1074_int = 22132; // 0x2008 PushI
	AddReply(var_1072_int, var_1073_int, var_1074_int); // 0x2009 TObjFunc
	goto Label_8206; // 0x200b Jump
	
Label_8206:
	var_1075_bool = 0; // 0x200e PushV
	func_10306(var_1075_bool); // 0x200f NEW_2
	if(var_1075_bool == 0) goto Label_8221; // 0x2011 JumpB
	
Label_8210:
	lshWaitForAnimEnd(); // 0x2012 Func
	var_1076_object = var_3_object; // 0x2014 PushT
	if(var_1076_object == 0) goto Label_8215; // 0x2015 JumpB
	goto Label_8220; // 0x2016 Jump
	
Label_8220:
	goto Label_8235; // 0x201c Jump
	
Label_8235:
	return 0; // 0x202b Return
	
Label_8215:
	var_1077_string = ""; // 0x2017 PushV
	var_1077_string = var_2_object; // 0x2018 MovT
	func_9995(var_1077_string); // 0x2019 NEW_2
	goto Label_8210; // 0x201b Jump
	
Label_8221:
	var_1078_string = "all"; // 0x201d PushS
	var_1079_string = "idle"; // 0x201e PushS
	PlayAnimation(var_1078_string, var_1079_string); // 0x201f Func
	
Label_8225:
	WaitForAnimEnd(); // 0x2021 Func
	var_1080_object = var_3_object; // 0x2023 PushT
	if(var_1080_object == 0) goto Label_8230; // 0x2024 JumpB
	goto Label_8235; // 0x2025 Jump
	
Label_8230:
	var_1081_string = "all"; // 0x2026 PushS
	var_1082_string = "idle"; // 0x2027 PushS
	PlayAnimation(var_1081_string, var_1082_string); // 0x2028 Func
	goto Label_8225; // 0x202a Jump
}


func_9708(var_209_bool, var_210_object, var_211_string, var_212_float, var_213_float, var_214_float)
{
	var_215_float = 0; var_216_float = 0; // 0x25ec PushV
	var_217_bool = 0; var_218_object = Obj(); var_219_string = ""; // 0x25ed PushV
	var_218_object = var_210_object; // 0x25ee Mov
	var_219_string = var_211_string; // 0x25ef Mov
	func_9696(var_217_bool, var_218_object, var_219_string); // 0x25f0 NEW_2
	var_226_bool = var_217_bool == 0; // 0x25f2 Not
	if(var_226_bool == 0) goto Label_9718; // 0x25f3 JumpB
	var_209_bool = 0; // 0x25f4 MovB
	return 2; // 0x25f5 Return
	
Label_9718:
	GetProperty(var_211_string, var_216_float); // 0x25f6 ObjFunc
	var_227_float = 0; var_228_float = 0; var_229_float = 0; var_230_float = 0; // 0x25f8 PushV
	var_228_float = var_216_float + var_212_float; // 0x25f9 Add2
	var_229_float = var_213_float; // 0x25fa Mov
	var_230_float = var_214_float; // 0x25fb Mov
	func_10072(var_227_float, var_228_float, var_229_float, var_230_float); // 0x25fc NEW_2
	SetProperty(var_211_string, var_227_float); // 0x25fe ObjFunc
	var_209_bool = 1; // 0x2600 MovB
	return 2; // 0x2601 Return
}


func_8689(var_0_bool, var_1_object, var_2_object, var_3_object, var_1363_object, var_1364_object)
{
	var_0_bool = var_1364_object; // 0x21f2 TMov
	var_1_object = var_1363_object; // 0x21f3 TMov
	var_3_object = 0; // 0x21f4 TMovB
	var_1369_int = 1; // 0x21f5 PushI
	if(var_1369_int == 0) goto Label_8723; // 0x21f6 JumpB
	var_1370_string = ""; // 0x21f7 PushV
	var_1370_string = "Neutral"; // 0x21f8 MovS
	func_8753(var_1364_object, var_1370_string); // 0x21f9 NEW_2
	var_1378_int = 520934; // 0x21fb PushI
	SetMessage(var_1378_int); // 0x21fc TObjFunc
	ClearReplies(); // 0x21fe TObjFunc
	var_1379_bool = 0; var_1380_object = Obj(); // 0x2200 PushV
	var_1380_object = var_1_object; // 0x2201 MovT
	func_11671(var_1379_bool, var_1380_object); // 0x2202 NEW_2
	var_1381_bool = var_1379_bool == 0; // 0x2204 Not
	if(var_1381_bool == 0) goto Label_8715; // 0x2205 JumpB
	var_1382_int = 520935; // 0x2206 PushI
	var_1383_int = 22153; // 0x2207 PushI
	var_1384_int = 22152; // 0x2208 PushI
	AddReply(var_1382_int, var_1383_int, var_1384_int); // 0x2209 TObjFunc
	
Label_8715:
	var_1385_int = 520939; // 0x220b PushI
	var_1386_int = -1; // 0x220c PushI
	var_1387_int = 22156; // 0x220d PushI
	AddReply(var_1385_int, var_1386_int, var_1387_int); // 0x220e TObjFunc
	goto Label_8723; // 0x2210 Jump
	
Label_8723:
	var_1388_bool = 0; // 0x2213 PushV
	func_10306(var_1388_bool); // 0x2214 NEW_2
	if(var_1388_bool == 0) goto Label_8738; // 0x2216 JumpB
	
Label_8727:
	lshWaitForAnimEnd(); // 0x2217 Func
	var_1389_object = var_3_object; // 0x2219 PushT
	if(var_1389_object == 0) goto Label_8732; // 0x221a JumpB
	goto Label_8737; // 0x221b Jump
	
Label_8737:
	goto Label_8752; // 0x2221 Jump
	
Label_8752:
	return 0; // 0x2230 Return
	
Label_8732:
	var_1390_string = ""; // 0x221c PushV
	var_1390_string = var_2_object; // 0x221d MovT
	func_9995(var_1390_string); // 0x221e NEW_2
	goto Label_8727; // 0x2220 Jump
	
Label_8738:
	var_1391_string = "all"; // 0x2222 PushS
	var_1392_string = "idle"; // 0x2223 PushS
	PlayAnimation(var_1391_string, var_1392_string); // 0x2224 Func
	
Label_8742:
	WaitForAnimEnd(); // 0x2226 Func
	var_1393_object = var_3_object; // 0x2228 PushT
	if(var_1393_object == 0) goto Label_8747; // 0x2229 JumpB
	goto Label_8752; // 0x222a Jump
	
Label_8747:
	var_1394_string = "all"; // 0x222b PushS
	var_1395_string = "idle"; // 0x222c PushS
	PlayAnimation(var_1394_string, var_1395_string); // 0x222d Func
	goto Label_8742; // 0x222f Jump
}


func_11762()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x2df2 PushV
	var_108_int = 78; // 0x2df3 PushI
	var_109_int = 2; // 0x2df4 PushI
	var_110_int = 512160; // 0x2df5 PushI
	CreateDiaryEntry(var_107_object, var_108_int, var_109_int, var_110_int); // 0x2df6 Func
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; // 0x2df8 PushV
	var_112_object = var_107_object; // 0x2df9 Mov
	var_113_int = 26; // 0x2dfa MovI
	func_11983(var_111_bool, var_112_object, var_113_int); // 0x2dfb NEW_2
	return 2; // 0x2dfd Return
}


func_10228(var_105_bool, var_106_string, var_107_string)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x27f4 PushV
	FindActor(var_109_object, var_106_string); // 0x27f5 Func
	var_110_bool = var_109_object == 0; // 0x27f7 NullEq
	if(var_110_bool == 0) goto Label_10235; // 0x27f8 JumpB
	var_105_bool = 0; // 0x27f9 MovB
	return 2; // 0x27fa Return
	
Label_10235:
	Trigger(var_109_object, var_107_string); // 0x27fb Func
	var_105_bool = 1; // 0x27fd MovB
	return 2; // 0x27fe Return
}


func_11253(var_592_bool)
{
	var_594_int = 0; var_595_string = ""; // 0x2bf6 PushV
	var_595_string = "d3q02"; // 0x2bf7 MovS
	func_10093(var_594_int, var_595_string); // 0x2bf8 NEW_2
	var_596_int = 1; // 0x2bfa PushI
	var_597_bool = var_594_int == var_596_int; // 0x2bfb Eq
	if(var_597_bool == 0) goto Label_11263; // 0x2bfc JumpB
	var_592_bool = 1; // 0x2bfd MovB
	return 0; // 0x2bfe Return
	
Label_11263:
	var_592_bool = 0; // 0x2bff MovB
	return 0; // 0x2c00 Return
}


func_10745()
{
	var_82_string = "ood4MladVlad2"; // 0x29fa PushS
	var_83_int = 1; // 0x29fb PushI
	SetVariable(var_82_string, var_83_int); // 0x29fc Func
	return 0; // 0x29fe Return
}


func_3578(var_0_bool, var_664_int, var_665_object)
{
	var_667_object = Obj(); var_668_bool = 0; var_669_int = 0; var_670_bool = 0; var_671_object = Obj(); var_672_bool = 0; var_673_int = 0; var_674_bool = 0; // 0xdfa PushV
	var_0_bool = var_665_object; // 0xdfb TMov
	var_675_bool = 0; var_676_object = Obj(); var_677_float = 0; // 0xdfc PushV
	var_676_object = var_665_object; // 0xdfd Mov
	var_677_float = 70.0; // 0xdfe MovF
	func_9772(var_676_object, var_677_float); // 0xdff NEW_2
	var_678_bool = var_675_bool == 0; // 0xe01 Not
	if(var_678_bool == 0) goto Label_3589; // 0xe02 JumpB
	var_664_int = -2; // 0xe03 MovI
	return 8; // 0xe04 Return
	
Label_3589:
	CreateDialog(var_671_object); // 0xe05 Func
	var_679_int = 0; // 0xe07 PushV
	func_10300(var_679_int); // 0xe08 NEW_2
	SetNPCName(var_679_int); // 0xe0a ObjFunc
	var_680_int = 0; // 0xe0c PushV
	func_10298(var_680_int); // 0xe0d NEW_2
	SetNPCDescription(var_680_int); // 0xe0f ObjFunc
	var_681_string = ""; // 0xe11 PushV
	func_10302(var_681_string); // 0xe12 NEW_2
	SetPhoto(var_681_string); // 0xe14 ObjFunc
	var_682_string = ""; // 0xe16 PushV
	func_10304(var_682_string); // 0xe17 NEW_2
	SetPhoto2(var_682_string); // 0xe19 ObjFunc
	var_683_int = 0; // 0xe1b PushV
	func_12061(var_683_int); // 0xe1c NEW_2
	SetPlayerName(var_683_int); // 0xe1e ObjFunc
	var_673_int = -1; // 0xe20 MovI
	IsOverrideActive(var_672_bool); // 0xe21 Func
	var_684_bool = var_672_bool; // 0xe23 Push
	if(var_684_bool == 0) goto Label_3623; // 0xe24 JumpB
	var_664_int = -2; // 0xe25 MovI
	return 8; // 0xe26 Return
	
Label_3623:
	DoDialog(var_671_object); // 0xe27 Func
	var_685_bool = 0; var_686_object = Obj(); // 0xe29 PushV
	var_687_object = Obj(); // 0xe2a PushV
	func_10048(var_687_object); // 0xe2b NEW_2
	var_686_object = var_687_object; // 0xe2c Mov
	func_9857(var_685_bool, var_686_object); // 0xe2e NEW_2
	var_688_object = Obj(); var_689_object = Obj(); // 0xe30 PushV
	var_688_object = var_665_object; // 0xe31 Mov
	var_689_object = var_671_object; // 0xe32 Mov
	TaskCall(15); // 0xe33 TaskCall
	func_3659(var_690_object, var_691_object, var_692_string, var_693_bool, var_688_object, var_689_object); // 0xe34 NEW_2
	TaskReturn(); // 0xe35 TaskReturn
	IsDialogEnd(var_674_bool); // 0xe37 ObjFunc
	
Label_3641:
	var_772_bool = var_674_bool == 0; // 0xe39 Not
	if(var_772_bool == 0) goto Label_3648; // 0xe3a JumpB
	sync(); // 0xe3b Func
	IsDialogEnd(var_674_bool); // 0xe3d ObjFunc
	goto Label_3641; // 0xe3f Jump
	
Label_3648:
	var_773_object = Obj(); // 0xe40 PushV
	var_773_object = var_665_object; // 0xe41 Mov
	func_9840(); // 0xe42 NEW_2
	StopDialog(var_671_object); // 0xe44 Func
	GetReturnValue(var_673_int); // 0xe46 ObjFunc
	var_664_int = var_673_int; // 0xe48 Mov
	return 8; // 0xe49 Return
}


func_1531(var_0_bool, var_1473_int, var_1474_object)
{
	var_1476_object = Obj(); var_1477_bool = 0; var_1478_int = 0; var_1479_bool = 0; var_1480_object = Obj(); var_1481_bool = 0; var_1482_int = 0; var_1483_bool = 0; // 0x5fb PushV
	var_0_bool = var_1474_object; // 0x5fc TMov
	var_1484_bool = 0; var_1485_object = Obj(); var_1486_float = 0; // 0x5fd PushV
	var_1485_object = var_1474_object; // 0x5fe Mov
	var_1486_float = 70.0; // 0x5ff MovF
	func_9772(var_1485_object, var_1486_float); // 0x600 NEW_2
	var_1487_bool = var_1484_bool == 0; // 0x602 Not
	if(var_1487_bool == 0) goto Label_1542; // 0x603 JumpB
	var_1473_int = -2; // 0x604 MovI
	return 8; // 0x605 Return
	
Label_1542:
	CreateDialog(var_1480_object); // 0x606 Func
	var_1488_int = 0; // 0x608 PushV
	func_10300(var_1488_int); // 0x609 NEW_2
	SetNPCName(var_1488_int); // 0x60b ObjFunc
	var_1489_int = 0; // 0x60d PushV
	func_10298(var_1489_int); // 0x60e NEW_2
	SetNPCDescription(var_1489_int); // 0x610 ObjFunc
	var_1490_string = ""; // 0x612 PushV
	func_10302(var_1490_string); // 0x613 NEW_2
	SetPhoto(var_1490_string); // 0x615 ObjFunc
	var_1491_string = ""; // 0x617 PushV
	func_10304(var_1491_string); // 0x618 NEW_2
	SetPhoto2(var_1491_string); // 0x61a ObjFunc
	var_1492_int = 0; // 0x61c PushV
	func_12061(var_1492_int); // 0x61d NEW_2
	SetPlayerName(var_1492_int); // 0x61f ObjFunc
	var_1482_int = -1; // 0x621 MovI
	IsOverrideActive(var_1481_bool); // 0x622 Func
	var_1493_bool = var_1481_bool; // 0x624 Push
	if(var_1493_bool == 0) goto Label_1576; // 0x625 JumpB
	var_1473_int = -2; // 0x626 MovI
	return 8; // 0x627 Return
	
Label_1576:
	DoDialog(var_1480_object); // 0x628 Func
	var_1494_bool = 0; var_1495_object = Obj(); // 0x62a PushV
	var_1496_object = Obj(); // 0x62b PushV
	func_10048(var_1496_object); // 0x62c NEW_2
	var_1495_object = var_1496_object; // 0x62d Mov
	func_9857(var_1494_bool, var_1495_object); // 0x62f NEW_2
	var_1497_object = Obj(); var_1498_object = Obj(); // 0x631 PushV
	var_1497_object = var_1474_object; // 0x632 Mov
	var_1498_object = var_1480_object; // 0x633 Mov
	TaskCall(7); // 0x634 TaskCall
	func_1612(var_1499_object, var_1500_object, var_1501_string, var_1502_bool, var_1497_object, var_1498_object); // 0x635 NEW_2
	TaskReturn(); // 0x636 TaskReturn
	IsDialogEnd(var_1483_bool); // 0x638 ObjFunc
	
Label_1594:
	var_1527_bool = var_1483_bool == 0; // 0x63a Not
	if(var_1527_bool == 0) goto Label_1601; // 0x63b JumpB
	sync(); // 0x63c Func
	IsDialogEnd(var_1483_bool); // 0x63e ObjFunc
	goto Label_1594; // 0x640 Jump
	
Label_1601:
	var_1528_object = Obj(); // 0x641 PushV
	var_1528_object = var_1474_object; // 0x642 Mov
	func_9840(); // 0x643 NEW_2
	StopDialog(var_1480_object); // 0x645 Func
	GetReturnValue(var_1482_int); // 0x647 ObjFunc
	var_1473_int = var_1482_int; // 0x649 Mov
	return 8; // 0x64a Return
}


func_11775()
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x2dff PushV
	var_153_int = 79; // 0x2e00 PushI
	var_154_int = 2; // 0x2e01 PushI
	var_155_int = 512161; // 0x2e02 PushI
	CreateDiaryEntry(var_152_object, var_153_int, var_154_int, var_155_int); // 0x2e03 Func
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0; // 0x2e05 PushV
	var_157_object = var_152_object; // 0x2e06 Mov
	var_158_int = 26; // 0x2e07 MovI
	func_11983(var_156_bool, var_157_object, var_158_int); // 0x2e08 NEW_2
	return 2; // 0x2e0a Return
}


