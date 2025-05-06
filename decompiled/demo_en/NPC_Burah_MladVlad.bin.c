task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	var_0_bool = 1; // 0x38 TMovB
	func_145(); // 0x3a NEW_2
	func_5154(); // 0x3d NEW_2
	TaskCall(0); // 0x40 TaskCall
	func_0(); // 0x41 NEW_2
	TaskReturn(); // 0x42 TaskReturn
	return 0; // 0x44 Return
}


task_1_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_float, var_48_float, var_49_int)
{
	var_50_bool = 0; var_51_bool = 0; // 0x45 PushV
	IsOverrideActive(var_51_bool); // 0x46 Func
	var_52_bool = var_51_bool == 0; // 0x48 Not
	if(var_52_bool == 0) goto Label_88; // 0x49 JumpB
	func_145(); // 0x4b NEW_2
	EventDisable(0); // 0x4d EventDisable
	var_53_bool = 0; var_54_object = Obj(); // 0x4e PushV
	var_54_object = var_49_int; // 0x4f Mov
	func_4612(var_54_object); // 0x50 NEW_2
	EventEnable(0); // 0x52 EventEnable
	var_67_object = Obj(); // 0x53 PushV
	var_67_object = var_49_int; // 0x54 Mov
	func_5857(var_67_object); // 0x55 NEW_2
	var_0_bool = 0; // 0x57 TMovB
	
Label_88:
	return 2; // 0x58 Return
}


	task_1_event_10(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_float, var_48_float, var_49_int, var_50_object, var_51_object, var_71_object)
	{
	var_72_bool = 0; var_73_bool = 0; // 0x59 PushV
	IsPlayerActor(var_71_object, var_73_bool); // 0x5a Func
	var_74_bool = var_73_bool; // 0x5c Push
	if(var_74_bool == 0) goto Label_108; // 0x5d JumpB
	func_145(); // 0x5f NEW_2
	var_75_object = Obj(); // 0x61 PushV
	var_75_object = var_71_object; // 0x62 Mov
	TaskCall(2); // 0x63 TaskCall
	func_148(var_75_object); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_0_bool = 0; // 0x67 TMovB
	var_89_int = 20; // 0x68 PushI
	var_90_float = 10.0; // 0x69 PushF
	SetTimer(var_89_int, var_90_float); // 0x6a Func
	
Label_108:
	return 2; // 0x6c Return
	}


task_1_event_7(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_float, var_48_float, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x6d PushV
	var_52_int = 20; // 0x6e PushI
	var_53_bool = var_49_int == var_52_int; // 0x6f Eq
	if(var_53_bool == 0) goto Label_118; // 0x70 JumpB
	var_0_bool = 1; // 0x71 TMovB
	var_54_int = 20; // 0x72 PushI
	KillTimer(var_54_int); // 0x73 Func
	goto Label_144; // 0x75 Jump
	
Label_144:
	return 2; // 0x90 Return
	
Label_118:
	var_55_int = 21; // 0x76 PushI
	var_56_bool = var_49_int == var_55_int; // 0x77 Eq
	if(var_56_bool == 0) goto Label_144; // 0x78 JumpB
	var_57_bool = var_0_bool; // 0x79 PushT
	if(var_57_bool == 0) goto Label_144; // 0x7a JumpB
	var_58_string = "player"; // 0x7b PushS
	FindActor(var_51_object, var_58_string); // 0x7c Func
	var_59_bool = 0; // 0x7e PushV
	var_59_bool = 0; // 0x7f MovB
	var_60_object = var_51_object; // 0x80 Push
	if(var_60_object == 0) goto Label_138; // 0x81 JumpB
	var_61_float = 0; var_62_object = Obj(); // 0x82 PushV
	var_62_object = var_51_object; // 0x83 Mov
	func_4580(var_62_object); // 0x84 NEW_2
	var_69_float = 62500.0; // 0x86 PushF
	var_70_bool = var_61_float <= var_69_float; // 0x87 LE
	if(var_70_bool == 0) goto Label_138; // 0x88 JumpB
	var_59_bool = 1; // 0x89 MovB
	
Label_138:
	if(var_59_bool == 0) goto Label_143; // 0x8a JumpB
	var_71_object = Obj(); // 0x8b PushV
	var_71_object = var_51_object; // 0x8c Mov
	func_89(); // 0x8d NEW_2
	
Label_143:
	var_51_object = 0; // 0x8f SetNull
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	func_193(); // 0xa3 NEW_2
	func_5154(); // 0xa6 NEW_2
	TaskCall(0); // 0xa9 TaskCall
	func_0(); // 0xaa NEW_2
	TaskReturn(); // 0xab TaskReturn
	return 0; // 0xad Return
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_float, var_48_float, var_49_int)
{
	var_50_bool = 0; var_51_bool = 0; // 0xae PushV
	IsOverrideActive(var_51_bool); // 0xaf Func
	var_52_bool = var_51_bool == 0; // 0xb1 Not
	if(var_52_bool == 0) goto Label_192; // 0xb2 JumpB
	func_193(); // 0xb4 NEW_2
	EventDisable(0); // 0xb6 EventDisable
	var_53_bool = 0; var_54_object = Obj(); // 0xb7 PushV
	var_54_object = var_49_int; // 0xb8 Mov
	func_4612(var_54_object); // 0xb9 NEW_2
	EventEnable(0); // 0xbb EventEnable
	var_67_object = Obj(); // 0xbc PushV
	var_67_object = var_49_int; // 0xbd Mov
	func_5857(var_67_object); // 0xbe NEW_2
	
Label_192:
	return 2; // 0xc0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	func_5154(); // 0xf8 NEW_2
	TaskCall(0); // 0xfb TaskCall
	func_0(); // 0xfc NEW_2
	TaskReturn(); // 0xfd TaskReturn
	return 0; // 0xff Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x1c1 PushI
	if(var_51_int == 0) goto Label_540; // 0x1c2 JumpB
	func_4906(); // 0x1c4 NEW_2
	var_53_int = 36906; // 0x1c6 PushI
	var_54_bool = var_49_float == var_53_int; // 0x1c7 Eq
	if(var_54_bool == 0) goto Label_482; // 0x1c8 JumpB
	var_55_string = ""; // 0x1c9 PushV
	var_55_string = "Neutral"; // 0x1ca MovS
	func_426(var_50_int, var_55_string); // 0x1cb NEW_2
	var_72_int = 535231; // 0x1cd PushI
	SetMessage(var_72_int); // 0x1ce TObjFunc
	ClearReplies(); // 0x1d0 TObjFunc
	var_73_int = 535232; // 0x1d2 PushI
	var_74_int = 36953; // 0x1d3 PushI
	var_75_int = 36907; // 0x1d4 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1d5 TObjFunc
	var_76_int = 535233; // 0x1d7 PushI
	var_77_int = -1; // 0x1d8 PushI
	var_78_int = 36908; // 0x1d9 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x1da TObjFunc
	var_79_int = 535280; // 0x1dc PushI
	var_80_int = -1; // 0x1dd PushI
	var_81_int = 36956; // 0x1de PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_82_int = 36953; // 0x1e2 PushI
	var_83_bool = var_49_float == var_82_int; // 0x1e3 Eq
	if(var_83_bool == 0) goto Label_505; // 0x1e4 JumpB
	var_84_string = ""; // 0x1e5 PushV
	var_84_string = "Neutral"; // 0x1e6 MovS
	func_426(var_50_int, var_84_string); // 0x1e7 NEW_2
	var_85_int = 535277; // 0x1e9 PushI
	SetMessage(var_85_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_86_int = 535278; // 0x1ee PushI
	var_87_int = 36957; // 0x1ef PushI
	var_88_int = 36954; // 0x1f0 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x1f1 TObjFunc
	var_89_int = 535279; // 0x1f3 PushI
	var_90_int = 36957; // 0x1f4 PushI
	var_91_int = 36955; // 0x1f5 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x1f6 TObjFunc
	return 0; // 0x1f8 Return
	
Label_505:
	var_92_int = 36957; // 0x1f9 PushI
	var_93_bool = var_49_float == var_92_int; // 0x1fa Eq
	if(var_93_bool == 0) goto Label_528; // 0x1fb JumpB
	var_94_string = ""; // 0x1fc PushV
	var_94_string = "Neutral"; // 0x1fd MovS
	func_426(var_50_int, var_94_string); // 0x1fe NEW_2
	var_95_int = 535281; // 0x200 PushI
	SetMessage(var_95_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_96_int = 535282; // 0x205 PushI
	var_97_int = -1; // 0x206 PushI
	var_98_int = 36958; // 0x207 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x208 TObjFunc
	var_99_int = 535283; // 0x20a PushI
	var_100_int = -1; // 0x20b PushI
	var_101_int = 36959; // 0x20c PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_3_object = 1; // 0x210 TMovB
	var_102_bool = 0; // 0x211 PushV
	func_5163(var_102_bool); // 0x212 NEW_2
	if(var_102_bool == 0) goto Label_536; // 0x214 JumpB
	lshStopAnimation(); // 0x215 Func
	goto Label_538; // 0x217 Jump
	
Label_538:
	return 0; // 0x21a Return
	
Label_536:
	StopAnimation(); // 0x218 Func
	
Label_540:
	return 0; // 0x21c Return
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x2fb PushI
	if(var_51_int == 0) goto Label_1226; // 0x2fc JumpB
	func_4906(); // 0x2fe NEW_2
	var_53_int = 21076; // 0x300 PushI
	var_54_bool = var_50_int == var_53_int; // 0x301 Eq
	if(var_54_bool == 0) goto Label_776; // 0x302 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x303 PushV
	var_55_object = var_1_object; // 0x304 MovT
	var_56_object = var_0_bool; // 0x305 MovT
	func_5203(); // 0x306 NEW_2
	
Label_776:
	var_59_int = 21082; // 0x308 PushI
	var_60_bool = var_50_int == var_59_int; // 0x309 Eq
	if(var_60_bool == 0) goto Label_789; // 0x30a JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x30b PushV
	var_61_object = var_1_object; // 0x30c MovT
	var_62_object = var_0_bool; // 0x30d MovT
	func_5187(); // 0x30e NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x310 PushV
	var_79_object = var_1_object; // 0x311 MovT
	var_80_object = var_0_bool; // 0x312 MovT
	func_5485(); // 0x313 NEW_2
	
Label_789:
	var_83_int = 21085; // 0x315 PushI
	var_84_bool = var_50_int == var_83_int; // 0x316 Eq
	if(var_84_bool == 0) goto Label_802; // 0x317 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x318 PushV
	var_85_object = var_1_object; // 0x319 MovT
	var_86_object = var_0_bool; // 0x31a MovT
	func_5187(); // 0x31b NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x31d PushV
	var_87_object = var_1_object; // 0x31e MovT
	var_88_object = var_0_bool; // 0x31f MovT
	func_5485(); // 0x320 NEW_2
	
Label_802:
	var_89_int = 21224; // 0x322 PushI
	var_90_bool = var_49_float == var_89_int; // 0x323 Eq
	if(var_90_bool == 0) goto Label_885; // 0x324 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x325 PushV
	var_92_object = var_1_object; // 0x326 MovT
	func_5562(var_92_object); // 0x327 NEW_2
	if(var_91_bool == 0) goto Label_830; // 0x329 JumpB
	var_99_string = ""; // 0x32a PushV
	var_99_string = "Untrust"; // 0x32b MovS
	func_740(var_50_int, var_99_string); // 0x32c NEW_2
	var_116_int = 520042; // 0x32e PushI
	SetMessage(var_116_int); // 0x32f TObjFunc
	ClearReplies(); // 0x331 TObjFunc
	var_117_int = 520043; // 0x333 PushI
	var_118_int = 21227; // 0x334 PushI
	var_119_int = 21225; // 0x335 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x336 TObjFunc
	var_120_int = 520044; // 0x338 PushI
	var_121_int = -1; // 0x339 PushI
	var_122_int = 21226; // 0x33a PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x33b TObjFunc
	return 0; // 0x33d Return
	
Label_830:
	var_123_bool = 0; var_124_object = Obj(); // 0x33e PushV
	var_124_object = var_1_object; // 0x33f MovT
	func_5574(var_124_object); // 0x340 NEW_2
	if(var_123_bool == 0) goto Label_860; // 0x342 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x343 PushV
	var_129_object = var_1_object; // 0x344 MovT
	var_130_object = var_0_bool; // 0x345 MovT
	func_5181(); // 0x346 NEW_2
	var_133_string = ""; // 0x348 PushV
	var_133_string = "Neutral"; // 0x349 MovS
	func_740(var_50_int, var_133_string); // 0x34a NEW_2
	var_134_int = 519876; // 0x34c PushI
	SetMessage(var_134_int); // 0x34d TObjFunc
	ClearReplies(); // 0x34f TObjFunc
	var_135_int = 519877; // 0x351 PushI
	var_136_int = 21042; // 0x352 PushI
	var_137_int = 21041; // 0x353 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x354 TObjFunc
	var_138_int = 519905; // 0x356 PushI
	var_139_int = 21042; // 0x357 PushI
	var_140_int = 21073; // 0x358 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x359 TObjFunc
	return 0; // 0x35b Return
	
Label_860:
	var_141_string = ""; // 0x35c PushV
	var_141_string = "Neutral"; // 0x35d MovS
	func_740(var_50_int, var_141_string); // 0x35e NEW_2
	var_142_int = 519906; // 0x360 PushI
	SetMessage(var_142_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_143_bool = 0; var_144_object = Obj(); // 0x365 PushV
	var_144_object = var_1_object; // 0x366 MovT
	func_5586(var_144_object); // 0x367 NEW_2
	if(var_143_bool == 0) goto Label_879; // 0x369 JumpB
	var_149_int = 519907; // 0x36a PushI
	var_150_int = 21077; // 0x36b PushI
	var_151_int = 21076; // 0x36c PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x36d TObjFunc
	
Label_879:
	var_152_int = 519917; // 0x36f PushI
	var_153_int = -1; // 0x370 PushI
	var_154_int = 21086; // 0x371 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x372 TObjFunc
	return 0; // 0x374 Return
	
Label_885:
	var_155_int = 21077; // 0x375 PushI
	var_156_bool = var_49_float == var_155_int; // 0x376 Eq
	if(var_156_bool == 0) goto Label_919; // 0x377 JumpB
	var_157_string = ""; // 0x378 PushV
	var_157_string = "Neutral"; // 0x379 MovS
	func_740(var_50_int, var_157_string); // 0x37a NEW_2
	var_158_int = 519908; // 0x37c PushI
	SetMessage(var_158_int); // 0x37d TObjFunc
	ClearReplies(); // 0x37f TObjFunc
	var_159_bool = 0; var_160_object = Obj(); // 0x381 PushV
	var_160_object = var_1_object; // 0x382 MovT
	func_5550(var_160_object); // 0x383 NEW_2
	var_165_bool = var_159_bool == 0; // 0x385 Not
	if(var_165_bool == 0) goto Label_908; // 0x386 JumpB
	var_166_int = 519909; // 0x387 PushI
	var_167_int = 21079; // 0x388 PushI
	var_168_int = 21078; // 0x389 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x38a TObjFunc
	
Label_908:
	var_169_bool = 0; var_170_object = Obj(); // 0x38c PushV
	var_170_object = var_1_object; // 0x38d MovT
	func_5550(var_170_object); // 0x38e NEW_2
	if(var_169_bool == 0) goto Label_918; // 0x390 JumpB
	var_171_int = 519914; // 0x391 PushI
	var_172_int = 21084; // 0x392 PushI
	var_173_int = 21083; // 0x393 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x394 TObjFunc
	
Label_918:
	return 0; // 0x396 Return
	
Label_919:
	var_174_int = 21084; // 0x397 PushI
	var_175_bool = var_49_float == var_174_int; // 0x398 Eq
	if(var_175_bool == 0) goto Label_937; // 0x399 JumpB
	var_176_string = ""; // 0x39a PushV
	var_176_string = "Neutral"; // 0x39b MovS
	func_740(var_50_int, var_176_string); // 0x39c NEW_2
	var_177_int = 519915; // 0x39e PushI
	SetMessage(var_177_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_178_int = 519916; // 0x3a3 PushI
	var_179_int = -1; // 0x3a4 PushI
	var_180_int = 21085; // 0x3a5 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_181_int = 21079; // 0x3a9 PushI
	var_182_bool = var_49_float == var_181_int; // 0x3aa Eq
	if(var_182_bool == 0) goto Label_955; // 0x3ab JumpB
	var_183_string = ""; // 0x3ac PushV
	var_183_string = "Untrust"; // 0x3ad MovS
	func_740(var_50_int, var_183_string); // 0x3ae NEW_2
	var_184_int = 519910; // 0x3b0 PushI
	SetMessage(var_184_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_185_int = 519911; // 0x3b5 PushI
	var_186_int = 21081; // 0x3b6 PushI
	var_187_int = 21080; // 0x3b7 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x3b8 TObjFunc
	return 0; // 0x3ba Return
	
Label_955:
	var_188_int = 21081; // 0x3bb PushI
	var_189_bool = var_49_float == var_188_int; // 0x3bc Eq
	if(var_189_bool == 0) goto Label_973; // 0x3bd JumpB
	var_190_string = ""; // 0x3be PushV
	var_190_string = "Neutral"; // 0x3bf MovS
	func_740(var_50_int, var_190_string); // 0x3c0 NEW_2
	var_191_int = 519912; // 0x3c2 PushI
	SetMessage(var_191_int); // 0x3c3 TObjFunc
	ClearReplies(); // 0x3c5 TObjFunc
	var_192_int = 519913; // 0x3c7 PushI
	var_193_int = -1; // 0x3c8 PushI
	var_194_int = 21082; // 0x3c9 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x3ca TObjFunc
	return 0; // 0x3cc Return
	
Label_973:
	var_195_int = 21042; // 0x3cd PushI
	var_196_bool = var_49_float == var_195_int; // 0x3ce Eq
	if(var_196_bool == 0) goto Label_996; // 0x3cf JumpB
	var_197_string = ""; // 0x3d0 PushV
	var_197_string = "Untrust"; // 0x3d1 MovS
	func_740(var_50_int, var_197_string); // 0x3d2 NEW_2
	var_198_int = 519878; // 0x3d4 PushI
	SetMessage(var_198_int); // 0x3d5 TObjFunc
	ClearReplies(); // 0x3d7 TObjFunc
	var_199_int = 519879; // 0x3d9 PushI
	var_200_int = 21044; // 0x3da PushI
	var_201_int = 21043; // 0x3db PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x3dc TObjFunc
	var_202_int = 519902; // 0x3de PushI
	var_203_int = 21070; // 0x3df PushI
	var_204_int = 21069; // 0x3e0 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x3e1 TObjFunc
	return 0; // 0x3e3 Return
	
Label_996:
	var_205_int = 21070; // 0x3e4 PushI
	var_206_bool = var_49_float == var_205_int; // 0x3e5 Eq
	if(var_206_bool == 0) goto Label_1014; // 0x3e6 JumpB
	var_207_string = ""; // 0x3e7 PushV
	var_207_string = "Untrust"; // 0x3e8 MovS
	func_740(var_50_int, var_207_string); // 0x3e9 NEW_2
	var_208_int = 519903; // 0x3eb PushI
	SetMessage(var_208_int); // 0x3ec TObjFunc
	ClearReplies(); // 0x3ee TObjFunc
	var_209_int = 519904; // 0x3f0 PushI
	var_210_int = 21044; // 0x3f1 PushI
	var_211_int = 21071; // 0x3f2 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x3f3 TObjFunc
	return 0; // 0x3f5 Return
	
Label_1014:
	var_212_int = 21044; // 0x3f6 PushI
	var_213_bool = var_49_float == var_212_int; // 0x3f7 Eq
	if(var_213_bool == 0) goto Label_1037; // 0x3f8 JumpB
	var_214_string = ""; // 0x3f9 PushV
	var_214_string = "Neutral"; // 0x3fa MovS
	func_740(var_50_int, var_214_string); // 0x3fb NEW_2
	var_215_int = 519880; // 0x3fd PushI
	SetMessage(var_215_int); // 0x3fe TObjFunc
	ClearReplies(); // 0x400 TObjFunc
	var_216_int = 519881; // 0x402 PushI
	var_217_int = 21046; // 0x403 PushI
	var_218_int = 21045; // 0x404 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x405 TObjFunc
	var_219_int = 519897; // 0x407 PushI
	var_220_int = 21064; // 0x408 PushI
	var_221_int = 21063; // 0x409 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x40a TObjFunc
	return 0; // 0x40c Return
	
Label_1037:
	var_222_int = 21064; // 0x40d PushI
	var_223_bool = var_49_float == var_222_int; // 0x40e Eq
	if(var_223_bool == 0) goto Label_1055; // 0x40f JumpB
	var_224_string = ""; // 0x410 PushV
	var_224_string = "Sly"; // 0x411 MovS
	func_740(var_50_int, var_224_string); // 0x412 NEW_2
	var_225_int = 519898; // 0x414 PushI
	SetMessage(var_225_int); // 0x415 TObjFunc
	ClearReplies(); // 0x417 TObjFunc
	var_226_int = 519899; // 0x419 PushI
	var_227_int = 21066; // 0x41a PushI
	var_228_int = 21065; // 0x41b PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x41c TObjFunc
	return 0; // 0x41e Return
	
Label_1055:
	var_229_int = 21066; // 0x41f PushI
	var_230_bool = var_49_float == var_229_int; // 0x420 Eq
	if(var_230_bool == 0) goto Label_1073; // 0x421 JumpB
	var_231_string = ""; // 0x422 PushV
	var_231_string = "Sly"; // 0x423 MovS
	func_740(var_50_int, var_231_string); // 0x424 NEW_2
	var_232_int = 519900; // 0x426 PushI
	SetMessage(var_232_int); // 0x427 TObjFunc
	ClearReplies(); // 0x429 TObjFunc
	var_233_int = 519901; // 0x42b PushI
	var_234_int = 21046; // 0x42c PushI
	var_235_int = 21067; // 0x42d PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x42e TObjFunc
	return 0; // 0x430 Return
	
Label_1073:
	var_236_int = 21046; // 0x431 PushI
	var_237_bool = var_49_float == var_236_int; // 0x432 Eq
	if(var_237_bool == 0) goto Label_1096; // 0x433 JumpB
	var_238_string = ""; // 0x434 PushV
	var_238_string = "Neutral"; // 0x435 MovS
	func_740(var_50_int, var_238_string); // 0x436 NEW_2
	var_239_int = 519882; // 0x438 PushI
	SetMessage(var_239_int); // 0x439 TObjFunc
	ClearReplies(); // 0x43b TObjFunc
	var_240_int = 519883; // 0x43d PushI
	var_241_int = 21048; // 0x43e PushI
	var_242_int = 21047; // 0x43f PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x440 TObjFunc
	var_243_int = 519896; // 0x442 PushI
	var_244_int = 21048; // 0x443 PushI
	var_245_int = 21061; // 0x444 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x445 TObjFunc
	return 0; // 0x447 Return
	
Label_1096:
	var_246_int = 21048; // 0x448 PushI
	var_247_bool = var_49_float == var_246_int; // 0x449 Eq
	if(var_247_bool == 0) goto Label_1119; // 0x44a JumpB
	var_248_string = ""; // 0x44b PushV
	var_248_string = "Untrust"; // 0x44c MovS
	func_740(var_50_int, var_248_string); // 0x44d NEW_2
	var_249_int = 519884; // 0x44f PushI
	SetMessage(var_249_int); // 0x450 TObjFunc
	ClearReplies(); // 0x452 TObjFunc
	var_250_int = 519885; // 0x454 PushI
	var_251_int = 21050; // 0x455 PushI
	var_252_int = 21049; // 0x456 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x457 TObjFunc
	var_253_int = 519893; // 0x459 PushI
	var_254_int = 21058; // 0x45a PushI
	var_255_int = 21057; // 0x45b PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x45c TObjFunc
	return 0; // 0x45e Return
	
Label_1119:
	var_256_int = 21058; // 0x45f PushI
	var_257_bool = var_49_float == var_256_int; // 0x460 Eq
	if(var_257_bool == 0) goto Label_1137; // 0x461 JumpB
	var_258_string = ""; // 0x462 PushV
	var_258_string = "Neutral"; // 0x463 MovS
	func_740(var_50_int, var_258_string); // 0x464 NEW_2
	var_259_int = 519894; // 0x466 PushI
	SetMessage(var_259_int); // 0x467 TObjFunc
	ClearReplies(); // 0x469 TObjFunc
	var_260_int = 519895; // 0x46b PushI
	var_261_int = 21052; // 0x46c PushI
	var_262_int = 21059; // 0x46d PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x46e TObjFunc
	return 0; // 0x470 Return
	
Label_1137:
	var_263_int = 21050; // 0x471 PushI
	var_264_bool = var_49_float == var_263_int; // 0x472 Eq
	if(var_264_bool == 0) goto Label_1155; // 0x473 JumpB
	var_265_string = ""; // 0x474 PushV
	var_265_string = "Sly"; // 0x475 MovS
	func_740(var_50_int, var_265_string); // 0x476 NEW_2
	var_266_int = 519886; // 0x478 PushI
	SetMessage(var_266_int); // 0x479 TObjFunc
	ClearReplies(); // 0x47b TObjFunc
	var_267_int = 519887; // 0x47d PushI
	var_268_int = 21052; // 0x47e PushI
	var_269_int = 21051; // 0x47f PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x480 TObjFunc
	return 0; // 0x482 Return
	
Label_1155:
	var_270_int = 21052; // 0x483 PushI
	var_271_bool = var_49_float == var_270_int; // 0x484 Eq
	if(var_271_bool == 0) goto Label_1173; // 0x485 JumpB
	var_272_string = ""; // 0x486 PushV
	var_272_string = "Neutral"; // 0x487 MovS
	func_740(var_50_int, var_272_string); // 0x488 NEW_2
	var_273_int = 519888; // 0x48a PushI
	SetMessage(var_273_int); // 0x48b TObjFunc
	ClearReplies(); // 0x48d TObjFunc
	var_274_int = 519889; // 0x48f PushI
	var_275_int = 21054; // 0x490 PushI
	var_276_int = 21053; // 0x491 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x492 TObjFunc
	return 0; // 0x494 Return
	
Label_1173:
	var_277_int = 21054; // 0x495 PushI
	var_278_bool = var_49_float == var_277_int; // 0x496 Eq
	if(var_278_bool == 0) goto Label_1196; // 0x497 JumpB
	var_279_string = ""; // 0x498 PushV
	var_279_string = "Neutral"; // 0x499 MovS
	func_740(var_50_int, var_279_string); // 0x49a NEW_2
	var_280_int = 519890; // 0x49c PushI
	SetMessage(var_280_int); // 0x49d TObjFunc
	ClearReplies(); // 0x49f TObjFunc
	var_281_int = 519891; // 0x4a1 PushI
	var_282_int = -1; // 0x4a2 PushI
	var_283_int = 21055; // 0x4a3 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x4a4 TObjFunc
	var_284_int = 519892; // 0x4a6 PushI
	var_285_int = -1; // 0x4a7 PushI
	var_286_int = 21056; // 0x4a8 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x4a9 TObjFunc
	return 0; // 0x4ab Return
	
Label_1196:
	var_287_int = 21227; // 0x4ac PushI
	var_288_bool = var_49_float == var_287_int; // 0x4ad Eq
	if(var_288_bool == 0) goto Label_1214; // 0x4ae JumpB
	var_289_string = ""; // 0x4af PushV
	var_289_string = "Untrust"; // 0x4b0 MovS
	func_740(var_50_int, var_289_string); // 0x4b1 NEW_2
	var_290_int = 520045; // 0x4b3 PushI
	SetMessage(var_290_int); // 0x4b4 TObjFunc
	ClearReplies(); // 0x4b6 TObjFunc
	var_291_int = 520046; // 0x4b8 PushI
	var_292_int = -1; // 0x4b9 PushI
	var_293_int = 21228; // 0x4ba PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x4bb TObjFunc
	return 0; // 0x4bd Return
	
Label_1214:
	var_3_object = 1; // 0x4be TMovB
	var_294_bool = 0; // 0x4bf PushV
	func_5163(var_294_bool); // 0x4c0 NEW_2
	if(var_294_bool == 0) goto Label_1222; // 0x4c2 JumpB
	lshStopAnimation(); // 0x4c3 Func
	goto Label_1224; // 0x4c5 Jump
	
Label_1224:
	return 0; // 0x4c8 Return
	
Label_1222:
	StopAnimation(); // 0x4c6 Func
	
Label_1226:
	return 0; // 0x4ca Return
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x59a PushI
	if(var_51_int == 0) goto Label_1894; // 0x59b JumpB
	func_4906(); // 0x59d NEW_2
	var_53_int = 21192; // 0x59f PushI
	var_54_bool = var_50_int == var_53_int; // 0x5a0 Eq
	if(var_54_bool == 0) goto Label_1457; // 0x5a1 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x5a2 PushV
	var_55_object = var_1_object; // 0x5a3 MovT
	var_56_object = var_0_bool; // 0x5a4 MovT
	func_5209(); // 0x5a5 NEW_2
	var_75_object = Obj(); var_76_object = Obj(); // 0x5a7 PushV
	var_75_object = var_1_object; // 0x5a8 MovT
	var_76_object = var_0_bool; // 0x5a9 MovT
	func_5165(); // 0x5aa NEW_2
	var_101_object = Obj(); var_102_object = Obj(); // 0x5ac PushV
	var_101_object = var_1_object; // 0x5ad MovT
	var_102_object = var_0_bool; // 0x5ae MovT
	func_5229(); // 0x5af NEW_2
	
Label_1457:
	var_113_int = 21193; // 0x5b1 PushI
	var_114_bool = var_50_int == var_113_int; // 0x5b2 Eq
	if(var_114_bool == 0) goto Label_1475; // 0x5b3 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x5b4 PushV
	var_115_object = var_1_object; // 0x5b5 MovT
	var_116_object = var_0_bool; // 0x5b6 MovT
	func_5209(); // 0x5b7 NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x5b9 PushV
	var_117_object = var_1_object; // 0x5ba MovT
	var_118_object = var_0_bool; // 0x5bb MovT
	func_5165(); // 0x5bc NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x5be PushV
	var_119_object = var_1_object; // 0x5bf MovT
	var_120_object = var_0_bool; // 0x5c0 MovT
	func_5229(); // 0x5c1 NEW_2
	
Label_1475:
	var_121_int = 21194; // 0x5c3 PushI
	var_122_bool = var_50_int == var_121_int; // 0x5c4 Eq
	if(var_122_bool == 0) goto Label_1493; // 0x5c5 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x5c6 PushV
	var_123_object = var_1_object; // 0x5c7 MovT
	var_124_object = var_0_bool; // 0x5c8 MovT
	func_5209(); // 0x5c9 NEW_2
	var_125_object = Obj(); var_126_object = Obj(); // 0x5cb PushV
	var_125_object = var_1_object; // 0x5cc MovT
	var_126_object = var_0_bool; // 0x5cd MovT
	func_5165(); // 0x5ce NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x5d0 PushV
	var_127_object = var_1_object; // 0x5d1 MovT
	var_128_object = var_0_bool; // 0x5d2 MovT
	func_5229(); // 0x5d3 NEW_2
	
Label_1493:
	var_129_int = 21204; // 0x5d5 PushI
	var_130_bool = var_50_int == var_129_int; // 0x5d6 Eq
	if(var_130_bool == 0) goto Label_1501; // 0x5d7 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x5d8 PushV
	var_131_object = var_1_object; // 0x5d9 MovT
	var_132_object = var_0_bool; // 0x5da MovT
	func_5236(); // 0x5db NEW_2
	
Label_1501:
	var_135_int = 21212; // 0x5dd PushI
	var_136_bool = var_50_int == var_135_int; // 0x5de Eq
	if(var_136_bool == 0) goto Label_1514; // 0x5df JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x5e0 PushV
	var_137_object = var_1_object; // 0x5e1 MovT
	var_138_object = var_0_bool; // 0x5e2 MovT
	func_5242(); // 0x5e3 NEW_2
	var_165_object = Obj(); var_166_object = Obj(); // 0x5e5 PushV
	var_165_object = var_1_object; // 0x5e6 MovT
	var_166_object = var_0_bool; // 0x5e7 MovT
	func_5485(); // 0x5e8 NEW_2
	
Label_1514:
	var_169_int = 21213; // 0x5ea PushI
	var_170_bool = var_50_int == var_169_int; // 0x5eb Eq
	if(var_170_bool == 0) goto Label_1527; // 0x5ec JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x5ed PushV
	var_171_object = var_1_object; // 0x5ee MovT
	var_172_object = var_0_bool; // 0x5ef MovT
	func_5242(); // 0x5f0 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x5f2 PushV
	var_173_object = var_1_object; // 0x5f3 MovT
	var_174_object = var_0_bool; // 0x5f4 MovT
	func_5485(); // 0x5f5 NEW_2
	
Label_1527:
	var_175_int = 21181; // 0x5f7 PushI
	var_176_bool = var_49_float == var_175_int; // 0x5f8 Eq
	if(var_176_bool == 0) goto Label_1595; // 0x5f9 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x5fa PushV
	var_178_object = var_1_object; // 0x5fb MovT
	func_5598(var_178_object); // 0x5fc NEW_2
	var_183_bool = var_177_bool == 0; // 0x5fe Not
	if(var_183_bool == 0) goto Label_1561; // 0x5ff JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x600 PushV
	var_184_object = var_1_object; // 0x601 MovT
	var_185_object = var_0_bool; // 0x602 MovT
	func_5412(); // 0x603 NEW_2
	var_192_string = ""; // 0x605 PushV
	var_192_string = "Neutral"; // 0x606 MovS
	func_1411(var_50_int, var_192_string); // 0x607 NEW_2
	var_209_int = 520000; // 0x609 PushI
	SetMessage(var_209_int); // 0x60a TObjFunc
	ClearReplies(); // 0x60c TObjFunc
	var_210_int = 520001; // 0x60e PushI
	var_211_int = 21183; // 0x60f PushI
	var_212_int = 21182; // 0x610 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x611 TObjFunc
	var_213_int = 520017; // 0x613 PushI
	var_214_int = 21183; // 0x614 PushI
	var_215_int = 21199; // 0x615 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x616 TObjFunc
	return 0; // 0x618 Return
	
Label_1561:
	var_216_string = ""; // 0x619 PushV
	var_216_string = "Neutral"; // 0x61a MovS
	func_1411(var_50_int, var_216_string); // 0x61b NEW_2
	var_217_int = 520019; // 0x61d PushI
	SetMessage(var_217_int); // 0x61e TObjFunc
	ClearReplies(); // 0x620 TObjFunc
	var_218_bool = 0; // 0x622 PushV
	var_218_bool = 0; // 0x623 MovB
	var_219_bool = 0; var_220_object = Obj(); // 0x624 PushV
	var_220_object = var_1_object; // 0x625 MovT
	func_5610(var_220_object); // 0x626 NEW_2
	if(var_219_bool == 0) goto Label_1583; // 0x628 JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0x629 PushV
	var_226_object = var_1_object; // 0x62a MovT
	func_5598(var_226_object); // 0x62b NEW_2
	if(var_225_bool == 0) goto Label_1583; // 0x62d JumpB
	var_218_bool = 1; // 0x62e MovB
	
Label_1583:
	if(var_218_bool == 0) goto Label_1589; // 0x62f JumpB
	var_227_int = 520020; // 0x630 PushI
	var_228_int = 21205; // 0x631 PushI
	var_229_int = 21204; // 0x632 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x633 TObjFunc
	
Label_1589:
	var_230_int = 520030; // 0x635 PushI
	var_231_int = -1; // 0x636 PushI
	var_232_int = 21214; // 0x637 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x638 TObjFunc
	return 0; // 0x63a Return
	
Label_1595:
	var_233_int = 21205; // 0x63b PushI
	var_234_bool = var_49_float == var_233_int; // 0x63c Eq
	if(var_234_bool == 0) goto Label_1618; // 0x63d JumpB
	var_235_string = ""; // 0x63e PushV
	var_235_string = "Neutral"; // 0x63f MovS
	func_1411(var_50_int, var_235_string); // 0x640 NEW_2
	var_236_int = 520021; // 0x642 PushI
	SetMessage(var_236_int); // 0x643 TObjFunc
	ClearReplies(); // 0x645 TObjFunc
	var_237_int = 520022; // 0x647 PushI
	var_238_int = 21207; // 0x648 PushI
	var_239_int = 21206; // 0x649 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x64a TObjFunc
	var_240_int = 527733; // 0x64c PushI
	var_241_int = 29085; // 0x64d PushI
	var_242_int = 29084; // 0x64e PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x64f TObjFunc
	return 0; // 0x651 Return
	
Label_1618:
	var_243_int = 29085; // 0x652 PushI
	var_244_bool = var_49_float == var_243_int; // 0x653 Eq
	if(var_244_bool == 0) goto Label_1636; // 0x654 JumpB
	var_245_string = ""; // 0x655 PushV
	var_245_string = "Neutral"; // 0x656 MovS
	func_1411(var_50_int, var_245_string); // 0x657 NEW_2
	var_246_int = 527734; // 0x659 PushI
	SetMessage(var_246_int); // 0x65a TObjFunc
	ClearReplies(); // 0x65c TObjFunc
	var_247_int = 520029; // 0x65e PushI
	var_248_int = -1; // 0x65f PushI
	var_249_int = 21213; // 0x660 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x661 TObjFunc
	return 0; // 0x663 Return
	
Label_1636:
	var_250_int = 21207; // 0x664 PushI
	var_251_bool = var_49_float == var_250_int; // 0x665 Eq
	if(var_251_bool == 0) goto Label_1654; // 0x666 JumpB
	var_252_string = ""; // 0x667 PushV
	var_252_string = "Untrust"; // 0x668 MovS
	func_1411(var_50_int, var_252_string); // 0x669 NEW_2
	var_253_int = 520023; // 0x66b PushI
	SetMessage(var_253_int); // 0x66c TObjFunc
	ClearReplies(); // 0x66e TObjFunc
	var_254_int = 520024; // 0x670 PushI
	var_255_int = 21209; // 0x671 PushI
	var_256_int = 21208; // 0x672 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x673 TObjFunc
	return 0; // 0x675 Return
	
Label_1654:
	var_257_int = 21209; // 0x676 PushI
	var_258_bool = var_49_float == var_257_int; // 0x677 Eq
	if(var_258_bool == 0) goto Label_1677; // 0x678 JumpB
	var_259_string = ""; // 0x679 PushV
	var_259_string = "Neutral"; // 0x67a MovS
	func_1411(var_50_int, var_259_string); // 0x67b NEW_2
	var_260_int = 520025; // 0x67d PushI
	SetMessage(var_260_int); // 0x67e TObjFunc
	ClearReplies(); // 0x680 TObjFunc
	var_261_int = 520026; // 0x682 PushI
	var_262_int = 21211; // 0x683 PushI
	var_263_int = 21210; // 0x684 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x685 TObjFunc
	var_264_int = 527735; // 0x687 PushI
	var_265_int = 29087; // 0x688 PushI
	var_266_int = 29086; // 0x689 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x68a TObjFunc
	return 0; // 0x68c Return
	
Label_1677:
	var_267_int = 29087; // 0x68d PushI
	var_268_bool = var_49_float == var_267_int; // 0x68e Eq
	if(var_268_bool == 0) goto Label_1695; // 0x68f JumpB
	var_269_string = ""; // 0x690 PushV
	var_269_string = "Untrust"; // 0x691 MovS
	func_1411(var_50_int, var_269_string); // 0x692 NEW_2
	var_270_int = 527736; // 0x694 PushI
	SetMessage(var_270_int); // 0x695 TObjFunc
	ClearReplies(); // 0x697 TObjFunc
	var_271_int = 527737; // 0x699 PushI
	var_272_int = 21211; // 0x69a PushI
	var_273_int = 29088; // 0x69b PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x69c TObjFunc
	return 0; // 0x69e Return
	
Label_1695:
	var_274_int = 21211; // 0x69f PushI
	var_275_bool = var_49_float == var_274_int; // 0x6a0 Eq
	if(var_275_bool == 0) goto Label_1713; // 0x6a1 JumpB
	var_276_string = ""; // 0x6a2 PushV
	var_276_string = "Neutral"; // 0x6a3 MovS
	func_1411(var_50_int, var_276_string); // 0x6a4 NEW_2
	var_277_int = 520027; // 0x6a6 PushI
	SetMessage(var_277_int); // 0x6a7 TObjFunc
	ClearReplies(); // 0x6a9 TObjFunc
	var_278_int = 520028; // 0x6ab PushI
	var_279_int = -1; // 0x6ac PushI
	var_280_int = 21212; // 0x6ad PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x6ae TObjFunc
	return 0; // 0x6b0 Return
	
Label_1713:
	var_281_int = 21183; // 0x6b1 PushI
	var_282_bool = var_49_float == var_281_int; // 0x6b2 Eq
	if(var_282_bool == 0) goto Label_1736; // 0x6b3 JumpB
	var_283_string = ""; // 0x6b4 PushV
	var_283_string = "Untrust"; // 0x6b5 MovS
	func_1411(var_50_int, var_283_string); // 0x6b6 NEW_2
	var_284_int = 520002; // 0x6b8 PushI
	SetMessage(var_284_int); // 0x6b9 TObjFunc
	ClearReplies(); // 0x6bb TObjFunc
	var_285_int = 520003; // 0x6bd PushI
	var_286_int = 21185; // 0x6be PushI
	var_287_int = 21184; // 0x6bf PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x6c0 TObjFunc
	var_288_int = 527725; // 0x6c2 PushI
	var_289_int = 29074; // 0x6c3 PushI
	var_290_int = 29073; // 0x6c4 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x6c5 TObjFunc
	return 0; // 0x6c7 Return
	
Label_1736:
	var_291_int = 29074; // 0x6c8 PushI
	var_292_bool = var_49_float == var_291_int; // 0x6c9 Eq
	if(var_292_bool == 0) goto Label_1754; // 0x6ca JumpB
	var_293_string = ""; // 0x6cb PushV
	var_293_string = "Rage"; // 0x6cc MovS
	func_1411(var_50_int, var_293_string); // 0x6cd NEW_2
	var_294_int = 527726; // 0x6cf PushI
	SetMessage(var_294_int); // 0x6d0 TObjFunc
	ClearReplies(); // 0x6d2 TObjFunc
	var_295_int = 527727; // 0x6d4 PushI
	var_296_int = 21185; // 0x6d5 PushI
	var_297_int = 29075; // 0x6d6 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x6d7 TObjFunc
	return 0; // 0x6d9 Return
	
Label_1754:
	var_298_int = 21185; // 0x6da PushI
	var_299_bool = var_49_float == var_298_int; // 0x6db Eq
	if(var_299_bool == 0) goto Label_1777; // 0x6dc JumpB
	var_300_string = ""; // 0x6dd PushV
	var_300_string = "Sly"; // 0x6de MovS
	func_1411(var_50_int, var_300_string); // 0x6df NEW_2
	var_301_int = 520004; // 0x6e1 PushI
	SetMessage(var_301_int); // 0x6e2 TObjFunc
	ClearReplies(); // 0x6e4 TObjFunc
	var_302_int = 520005; // 0x6e6 PushI
	var_303_int = 21187; // 0x6e7 PushI
	var_304_int = 21186; // 0x6e8 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x6e9 TObjFunc
	var_305_int = 520015; // 0x6eb PushI
	var_306_int = 21187; // 0x6ec PushI
	var_307_int = 21196; // 0x6ed PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x6ee TObjFunc
	return 0; // 0x6f0 Return
	
Label_1777:
	var_308_int = 21187; // 0x6f1 PushI
	var_309_bool = var_49_float == var_308_int; // 0x6f2 Eq
	if(var_309_bool == 0) goto Label_1800; // 0x6f3 JumpB
	var_310_string = ""; // 0x6f4 PushV
	var_310_string = "Untrust"; // 0x6f5 MovS
	func_1411(var_50_int, var_310_string); // 0x6f6 NEW_2
	var_311_int = 520006; // 0x6f8 PushI
	SetMessage(var_311_int); // 0x6f9 TObjFunc
	ClearReplies(); // 0x6fb TObjFunc
	var_312_int = 520007; // 0x6fd PushI
	var_313_int = 21189; // 0x6fe PushI
	var_314_int = 21188; // 0x6ff PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x700 TObjFunc
	var_315_int = 527728; // 0x702 PushI
	var_316_int = 29079; // 0x703 PushI
	var_317_int = 29078; // 0x704 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x705 TObjFunc
	return 0; // 0x707 Return
	
Label_1800:
	var_318_int = 29079; // 0x708 PushI
	var_319_bool = var_49_float == var_318_int; // 0x709 Eq
	if(var_319_bool == 0) goto Label_1818; // 0x70a JumpB
	var_320_string = ""; // 0x70b PushV
	var_320_string = "Neutral"; // 0x70c MovS
	func_1411(var_50_int, var_320_string); // 0x70d NEW_2
	var_321_int = 527729; // 0x70f PushI
	SetMessage(var_321_int); // 0x710 TObjFunc
	ClearReplies(); // 0x712 TObjFunc
	var_322_int = 527730; // 0x714 PushI
	var_323_int = 29081; // 0x715 PushI
	var_324_int = 29080; // 0x716 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x717 TObjFunc
	return 0; // 0x719 Return
	
Label_1818:
	var_325_int = 29081; // 0x71a PushI
	var_326_bool = var_49_float == var_325_int; // 0x71b Eq
	if(var_326_bool == 0) goto Label_1836; // 0x71c JumpB
	var_327_string = ""; // 0x71d PushV
	var_327_string = "Neutral"; // 0x71e MovS
	func_1411(var_50_int, var_327_string); // 0x71f NEW_2
	var_328_int = 527731; // 0x721 PushI
	SetMessage(var_328_int); // 0x722 TObjFunc
	ClearReplies(); // 0x724 TObjFunc
	var_329_int = 527732; // 0x726 PushI
	var_330_int = 21189; // 0x727 PushI
	var_331_int = 29082; // 0x728 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x729 TObjFunc
	return 0; // 0x72b Return
	
Label_1836:
	var_332_int = 21189; // 0x72c PushI
	var_333_bool = var_49_float == var_332_int; // 0x72d Eq
	if(var_333_bool == 0) goto Label_1859; // 0x72e JumpB
	var_334_string = ""; // 0x72f PushV
	var_334_string = "Neutral"; // 0x730 MovS
	func_1411(var_50_int, var_334_string); // 0x731 NEW_2
	var_335_int = 520008; // 0x733 PushI
	SetMessage(var_335_int); // 0x734 TObjFunc
	ClearReplies(); // 0x736 TObjFunc
	var_336_int = 520009; // 0x738 PushI
	var_337_int = 21191; // 0x739 PushI
	var_338_int = 21190; // 0x73a PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x73b TObjFunc
	var_339_int = 520013; // 0x73d PushI
	var_340_int = -1; // 0x73e PushI
	var_341_int = 21194; // 0x73f PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x740 TObjFunc
	return 0; // 0x742 Return
	
Label_1859:
	var_342_int = 21191; // 0x743 PushI
	var_343_bool = var_49_float == var_342_int; // 0x744 Eq
	if(var_343_bool == 0) goto Label_1882; // 0x745 JumpB
	var_344_string = ""; // 0x746 PushV
	var_344_string = "Sly"; // 0x747 MovS
	func_1411(var_50_int, var_344_string); // 0x748 NEW_2
	var_345_int = 520010; // 0x74a PushI
	SetMessage(var_345_int); // 0x74b TObjFunc
	ClearReplies(); // 0x74d TObjFunc
	var_346_int = 520011; // 0x74f PushI
	var_347_int = -1; // 0x750 PushI
	var_348_int = 21192; // 0x751 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x752 TObjFunc
	var_349_int = 520012; // 0x754 PushI
	var_350_int = -1; // 0x755 PushI
	var_351_int = 21193; // 0x756 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x757 TObjFunc
	return 0; // 0x759 Return
	
Label_1882:
	var_3_object = 1; // 0x75a TMovB
	var_352_bool = 0; // 0x75b PushV
	func_5163(var_352_bool); // 0x75c NEW_2
	if(var_352_bool == 0) goto Label_1890; // 0x75e JumpB
	lshStopAnimation(); // 0x75f Func
	goto Label_1892; // 0x761 Jump
	
Label_1892:
	return 0; // 0x764 Return
	
Label_1890:
	StopAnimation(); // 0x762 Func
	
Label_1894:
	return 0; // 0x766 Return
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x836 PushI
	if(var_51_int == 0) goto Label_2594; // 0x837 JumpB
	func_4906(); // 0x839 NEW_2
	var_53_int = 21333; // 0x83b PushI
	var_54_bool = var_50_int == var_53_int; // 0x83c Eq
	if(var_54_bool == 0) goto Label_2125; // 0x83d JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x83e PushV
	var_55_object = var_1_object; // 0x83f MovT
	var_56_object = var_0_bool; // 0x840 MovT
	func_5339(var_56_object); // 0x841 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x843 PushV
	var_79_object = var_1_object; // 0x844 MovT
	var_80_object = var_0_bool; // 0x845 MovT
	func_5435(); // 0x846 NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0x848 PushV
	var_83_object = var_1_object; // 0x849 MovT
	var_84_object = var_0_bool; // 0x84a MovT
	func_5293(); // 0x84b NEW_2
	
Label_2125:
	var_135_int = 21335; // 0x84d PushI
	var_136_bool = var_50_int == var_135_int; // 0x84e Eq
	if(var_136_bool == 0) goto Label_2143; // 0x84f JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x850 PushV
	var_137_object = var_1_object; // 0x851 MovT
	var_138_object = var_0_bool; // 0x852 MovT
	func_5339(var_138_object); // 0x853 NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x855 PushV
	var_139_object = var_1_object; // 0x856 MovT
	var_140_object = var_0_bool; // 0x857 MovT
	func_5435(); // 0x858 NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0x85a PushV
	var_141_object = var_1_object; // 0x85b MovT
	var_142_object = var_0_bool; // 0x85c MovT
	func_5293(); // 0x85d NEW_2
	
Label_2143:
	var_143_int = 21349; // 0x85f PushI
	var_144_bool = var_50_int == var_143_int; // 0x860 Eq
	if(var_144_bool == 0) goto Label_2171; // 0x861 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x862 PushV
	var_145_object = var_1_object; // 0x863 MovT
	var_146_object = var_0_bool; // 0x864 MovT
	func_5329(var_146_object); // 0x865 NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x867 PushV
	var_163_object = var_1_object; // 0x868 MovT
	var_164_object = var_0_bool; // 0x869 MovT
	func_5429(); // 0x86a NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x86c PushV
	var_167_object = var_1_object; // 0x86d MovT
	var_168_object = var_0_bool; // 0x86e MovT
	func_5339(var_168_object); // 0x86f NEW_2
	var_169_object = Obj(); var_170_object = Obj(); // 0x871 PushV
	var_169_object = var_1_object; // 0x872 MovT
	var_170_object = var_0_bool; // 0x873 MovT
	func_5293(); // 0x874 NEW_2
	var_171_object = Obj(); var_172_object = Obj(); // 0x876 PushV
	var_171_object = var_1_object; // 0x877 MovT
	var_172_object = var_0_bool; // 0x878 MovT
	func_5419(var_172_object); // 0x879 NEW_2
	
Label_2171:
	var_176_int = 21350; // 0x87b PushI
	var_177_bool = var_50_int == var_176_int; // 0x87c Eq
	if(var_177_bool == 0) goto Label_2189; // 0x87d JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x87e PushV
	var_178_object = var_1_object; // 0x87f MovT
	var_179_object = var_0_bool; // 0x880 MovT
	func_5339(var_179_object); // 0x881 NEW_2
	var_180_object = Obj(); var_181_object = Obj(); // 0x883 PushV
	var_180_object = var_1_object; // 0x884 MovT
	var_181_object = var_0_bool; // 0x885 MovT
	func_5435(); // 0x886 NEW_2
	var_182_object = Obj(); var_183_object = Obj(); // 0x888 PushV
	var_182_object = var_1_object; // 0x889 MovT
	var_183_object = var_0_bool; // 0x88a MovT
	func_5293(); // 0x88b NEW_2
	
Label_2189:
	var_184_int = 21361; // 0x88d PushI
	var_185_bool = var_50_int == var_184_int; // 0x88e Eq
	if(var_185_bool == 0) goto Label_2217; // 0x88f JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0x890 PushV
	var_186_object = var_1_object; // 0x891 MovT
	var_187_object = var_0_bool; // 0x892 MovT
	func_5319(); // 0x893 NEW_2
	var_199_object = Obj(); var_200_object = Obj(); // 0x895 PushV
	var_199_object = var_1_object; // 0x896 MovT
	var_200_object = var_0_bool; // 0x897 MovT
	func_5447(var_200_object); // 0x898 NEW_2
	var_204_object = Obj(); var_205_object = Obj(); // 0x89a PushV
	var_204_object = var_1_object; // 0x89b MovT
	var_205_object = var_0_bool; // 0x89c MovT
	func_5457(var_205_object); // 0x89d NEW_2
	var_210_object = Obj(); var_211_object = Obj(); // 0x89f PushV
	var_210_object = var_1_object; // 0x8a0 MovT
	var_211_object = var_0_bool; // 0x8a1 MovT
	func_5468(var_211_object); // 0x8a2 NEW_2
	var_216_object = Obj(); var_217_object = Obj(); // 0x8a4 PushV
	var_216_object = var_1_object; // 0x8a5 MovT
	var_217_object = var_0_bool; // 0x8a6 MovT
	func_5435(); // 0x8a7 NEW_2
	
Label_2217:
	var_218_int = 21322; // 0x8a9 PushI
	var_219_bool = var_49_float == var_218_int; // 0x8aa Eq
	if(var_219_bool == 0) goto Label_2285; // 0x8ab JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x8ac PushV
	var_221_object = var_1_object; // 0x8ad MovT
	func_5622(var_221_object); // 0x8ae NEW_2
	if(var_220_bool == 0) goto Label_2250; // 0x8b0 JumpB
	var_228_object = Obj(); var_229_object = Obj(); // 0x8b1 PushV
	var_228_object = var_1_object; // 0x8b2 MovT
	var_229_object = var_0_bool; // 0x8b3 MovT
	func_5287(); // 0x8b4 NEW_2
	var_232_object = Obj(); var_233_object = Obj(); // 0x8b6 PushV
	var_232_object = var_1_object; // 0x8b7 MovT
	var_233_object = var_0_bool; // 0x8b8 MovT
	func_5441(); // 0x8b9 NEW_2
	var_236_string = ""; // 0x8bb PushV
	var_236_string = "Rage"; // 0x8bc MovS
	func_2079(var_50_int, var_236_string); // 0x8bd NEW_2
	var_253_int = 520138; // 0x8bf PushI
	SetMessage(var_253_int); // 0x8c0 TObjFunc
	ClearReplies(); // 0x8c2 TObjFunc
	var_254_int = 520139; // 0x8c4 PushI
	var_255_int = 21324; // 0x8c5 PushI
	var_256_int = 21323; // 0x8c6 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x8c7 TObjFunc
	return 0; // 0x8c9 Return
	
Label_2250:
	var_257_string = ""; // 0x8ca PushV
	var_257_string = "Rage"; // 0x8cb MovS
	func_2079(var_50_int, var_257_string); // 0x8cc NEW_2
	var_258_int = 520157; // 0x8ce PushI
	SetMessage(var_258_int); // 0x8cf TObjFunc
	ClearReplies(); // 0x8d1 TObjFunc
	var_259_bool = 0; var_260_object = Obj(); // 0x8d3 PushV
	var_260_object = var_1_object; // 0x8d4 MovT
	func_5634(var_260_object); // 0x8d5 NEW_2
	if(var_259_bool == 0) goto Label_2269; // 0x8d7 JumpB
	var_265_int = 520158; // 0x8d8 PushI
	var_266_int = 21346; // 0x8d9 PushI
	var_267_int = 21345; // 0x8da PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x8db TObjFunc
	
Label_2269:
	var_268_bool = 0; var_269_object = Obj(); // 0x8dd PushV
	var_269_object = var_1_object; // 0x8de MovT
	func_5646(var_269_object); // 0x8df NEW_2
	if(var_268_bool == 0) goto Label_2279; // 0x8e1 JumpB
	var_274_int = 520164; // 0x8e2 PushI
	var_275_int = 21352; // 0x8e3 PushI
	var_276_int = 21351; // 0x8e4 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x8e5 TObjFunc
	
Label_2279:
	var_277_int = 520180; // 0x8e7 PushI
	var_278_int = -1; // 0x8e8 PushI
	var_279_int = 21370; // 0x8e9 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x8ea TObjFunc
	return 0; // 0x8ec Return
	
Label_2285:
	var_280_int = 21352; // 0x8ed PushI
	var_281_bool = var_49_float == var_280_int; // 0x8ee Eq
	if(var_281_bool == 0) goto Label_2308; // 0x8ef JumpB
	var_282_string = ""; // 0x8f0 PushV
	var_282_string = "Neutral"; // 0x8f1 MovS
	func_2079(var_50_int, var_282_string); // 0x8f2 NEW_2
	var_283_int = 520165; // 0x8f4 PushI
	SetMessage(var_283_int); // 0x8f5 TObjFunc
	ClearReplies(); // 0x8f7 TObjFunc
	var_284_int = 520166; // 0x8f9 PushI
	var_285_int = 21354; // 0x8fa PushI
	var_286_int = 21353; // 0x8fb PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x8fc TObjFunc
	var_287_int = 520179; // 0x8fe PushI
	var_288_int = 21354; // 0x8ff PushI
	var_289_int = 21368; // 0x900 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x901 TObjFunc
	return 0; // 0x903 Return
	
Label_2308:
	var_290_int = 21354; // 0x904 PushI
	var_291_bool = var_49_float == var_290_int; // 0x905 Eq
	if(var_291_bool == 0) goto Label_2331; // 0x906 JumpB
	var_292_string = ""; // 0x907 PushV
	var_292_string = "Neutral"; // 0x908 MovS
	func_2079(var_50_int, var_292_string); // 0x909 NEW_2
	var_293_int = 520167; // 0x90b PushI
	SetMessage(var_293_int); // 0x90c TObjFunc
	ClearReplies(); // 0x90e TObjFunc
	var_294_int = 520168; // 0x910 PushI
	var_295_int = 21356; // 0x911 PushI
	var_296_int = 21355; // 0x912 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x913 TObjFunc
	var_297_int = 520178; // 0x915 PushI
	var_298_int = 21360; // 0x916 PushI
	var_299_int = 21366; // 0x917 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x918 TObjFunc
	return 0; // 0x91a Return
	
Label_2331:
	var_300_int = 21356; // 0x91b PushI
	var_301_bool = var_49_float == var_300_int; // 0x91c Eq
	if(var_301_bool == 0) goto Label_2349; // 0x91d JumpB
	var_302_string = ""; // 0x91e PushV
	var_302_string = "Fear"; // 0x91f MovS
	func_2079(var_50_int, var_302_string); // 0x920 NEW_2
	var_303_int = 520169; // 0x922 PushI
	SetMessage(var_303_int); // 0x923 TObjFunc
	ClearReplies(); // 0x925 TObjFunc
	var_304_int = 520170; // 0x927 PushI
	var_305_int = 21358; // 0x928 PushI
	var_306_int = 21357; // 0x929 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x92a TObjFunc
	return 0; // 0x92c Return
	
Label_2349:
	var_307_int = 21358; // 0x92d PushI
	var_308_bool = var_49_float == var_307_int; // 0x92e Eq
	if(var_308_bool == 0) goto Label_2372; // 0x92f JumpB
	var_309_string = ""; // 0x930 PushV
	var_309_string = "Fear"; // 0x931 MovS
	func_2079(var_50_int, var_309_string); // 0x932 NEW_2
	var_310_int = 520171; // 0x934 PushI
	SetMessage(var_310_int); // 0x935 TObjFunc
	ClearReplies(); // 0x937 TObjFunc
	var_311_int = 520172; // 0x939 PushI
	var_312_int = 21360; // 0x93a PushI
	var_313_int = 21359; // 0x93b PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x93c TObjFunc
	var_314_int = 520175; // 0x93e PushI
	var_315_int = 21363; // 0x93f PushI
	var_316_int = 21362; // 0x940 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x941 TObjFunc
	return 0; // 0x943 Return
	
Label_2372:
	var_317_int = 21363; // 0x944 PushI
	var_318_bool = var_49_float == var_317_int; // 0x945 Eq
	if(var_318_bool == 0) goto Label_2390; // 0x946 JumpB
	var_319_string = ""; // 0x947 PushV
	var_319_string = "Sly"; // 0x948 MovS
	func_2079(var_50_int, var_319_string); // 0x949 NEW_2
	var_320_int = 520176; // 0x94b PushI
	SetMessage(var_320_int); // 0x94c TObjFunc
	ClearReplies(); // 0x94e TObjFunc
	var_321_int = 520177; // 0x950 PushI
	var_322_int = 21360; // 0x951 PushI
	var_323_int = 21364; // 0x952 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x953 TObjFunc
	return 0; // 0x955 Return
	
Label_2390:
	var_324_int = 21360; // 0x956 PushI
	var_325_bool = var_49_float == var_324_int; // 0x957 Eq
	if(var_325_bool == 0) goto Label_2408; // 0x958 JumpB
	var_326_string = ""; // 0x959 PushV
	var_326_string = "Neutral"; // 0x95a MovS
	func_2079(var_50_int, var_326_string); // 0x95b NEW_2
	var_327_int = 520173; // 0x95d PushI
	SetMessage(var_327_int); // 0x95e TObjFunc
	ClearReplies(); // 0x960 TObjFunc
	var_328_int = 520174; // 0x962 PushI
	var_329_int = -1; // 0x963 PushI
	var_330_int = 21361; // 0x964 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x965 TObjFunc
	return 0; // 0x967 Return
	
Label_2408:
	var_331_int = 21346; // 0x968 PushI
	var_332_bool = var_49_float == var_331_int; // 0x969 Eq
	if(var_332_bool == 0) goto Label_2431; // 0x96a JumpB
	var_333_string = ""; // 0x96b PushV
	var_333_string = "Sly"; // 0x96c MovS
	func_2079(var_50_int, var_333_string); // 0x96d NEW_2
	var_334_int = 520159; // 0x96f PushI
	SetMessage(var_334_int); // 0x970 TObjFunc
	ClearReplies(); // 0x972 TObjFunc
	var_335_int = 520160; // 0x974 PushI
	var_336_int = 21348; // 0x975 PushI
	var_337_int = 21347; // 0x976 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x977 TObjFunc
	var_338_int = 520163; // 0x979 PushI
	var_339_int = -1; // 0x97a PushI
	var_340_int = 21350; // 0x97b PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x97c TObjFunc
	return 0; // 0x97e Return
	
Label_2431:
	var_341_int = 21348; // 0x97f PushI
	var_342_bool = var_49_float == var_341_int; // 0x980 Eq
	if(var_342_bool == 0) goto Label_2449; // 0x981 JumpB
	var_343_string = ""; // 0x982 PushV
	var_343_string = "Neutral"; // 0x983 MovS
	func_2079(var_50_int, var_343_string); // 0x984 NEW_2
	var_344_int = 520161; // 0x986 PushI
	SetMessage(var_344_int); // 0x987 TObjFunc
	ClearReplies(); // 0x989 TObjFunc
	var_345_int = 520162; // 0x98b PushI
	var_346_int = -1; // 0x98c PushI
	var_347_int = 21349; // 0x98d PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x98e TObjFunc
	return 0; // 0x990 Return
	
Label_2449:
	var_348_int = 21324; // 0x991 PushI
	var_349_bool = var_49_float == var_348_int; // 0x992 Eq
	if(var_349_bool == 0) goto Label_2472; // 0x993 JumpB
	var_350_string = ""; // 0x994 PushV
	var_350_string = "Rage"; // 0x995 MovS
	func_2079(var_50_int, var_350_string); // 0x996 NEW_2
	var_351_int = 520140; // 0x998 PushI
	SetMessage(var_351_int); // 0x999 TObjFunc
	ClearReplies(); // 0x99b TObjFunc
	var_352_int = 520141; // 0x99d PushI
	var_353_int = 21326; // 0x99e PushI
	var_354_int = 21325; // 0x99f PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x9a0 TObjFunc
	var_355_int = 520154; // 0x9a2 PushI
	var_356_int = 21341; // 0x9a3 PushI
	var_357_int = 21340; // 0x9a4 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x9a5 TObjFunc
	return 0; // 0x9a7 Return
	
Label_2472:
	var_358_int = 21341; // 0x9a8 PushI
	var_359_bool = var_49_float == var_358_int; // 0x9a9 Eq
	if(var_359_bool == 0) goto Label_2490; // 0x9aa JumpB
	var_360_string = ""; // 0x9ab PushV
	var_360_string = "Sly"; // 0x9ac MovS
	func_2079(var_50_int, var_360_string); // 0x9ad NEW_2
	var_361_int = 520155; // 0x9af PushI
	SetMessage(var_361_int); // 0x9b0 TObjFunc
	ClearReplies(); // 0x9b2 TObjFunc
	var_362_int = 520156; // 0x9b4 PushI
	var_363_int = 21326; // 0x9b5 PushI
	var_364_int = 21342; // 0x9b6 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x9b7 TObjFunc
	return 0; // 0x9b9 Return
	
Label_2490:
	var_365_int = 21326; // 0x9ba PushI
	var_366_bool = var_49_float == var_365_int; // 0x9bb Eq
	if(var_366_bool == 0) goto Label_2513; // 0x9bc JumpB
	var_367_string = ""; // 0x9bd PushV
	var_367_string = "Rage"; // 0x9be MovS
	func_2079(var_50_int, var_367_string); // 0x9bf NEW_2
	var_368_int = 520142; // 0x9c1 PushI
	SetMessage(var_368_int); // 0x9c2 TObjFunc
	ClearReplies(); // 0x9c4 TObjFunc
	var_369_int = 520143; // 0x9c6 PushI
	var_370_int = 21328; // 0x9c7 PushI
	var_371_int = 21327; // 0x9c8 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x9c9 TObjFunc
	var_372_int = 520153; // 0x9cb PushI
	var_373_int = 21330; // 0x9cc PushI
	var_374_int = 21338; // 0x9cd PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x9ce TObjFunc
	return 0; // 0x9d0 Return
	
Label_2513:
	var_375_int = 21328; // 0x9d1 PushI
	var_376_bool = var_49_float == var_375_int; // 0x9d2 Eq
	if(var_376_bool == 0) goto Label_2536; // 0x9d3 JumpB
	var_377_string = ""; // 0x9d4 PushV
	var_377_string = "Sly"; // 0x9d5 MovS
	func_2079(var_50_int, var_377_string); // 0x9d6 NEW_2
	var_378_int = 520144; // 0x9d8 PushI
	SetMessage(var_378_int); // 0x9d9 TObjFunc
	ClearReplies(); // 0x9db TObjFunc
	var_379_int = 520145; // 0x9dd PushI
	var_380_int = 21330; // 0x9de PushI
	var_381_int = 21329; // 0x9df PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x9e0 TObjFunc
	var_382_int = 520152; // 0x9e2 PushI
	var_383_int = 21330; // 0x9e3 PushI
	var_384_int = 21336; // 0x9e4 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x9e5 TObjFunc
	return 0; // 0x9e7 Return
	
Label_2536:
	var_385_int = 21330; // 0x9e8 PushI
	var_386_bool = var_49_float == var_385_int; // 0x9e9 Eq
	if(var_386_bool == 0) goto Label_2559; // 0x9ea JumpB
	var_387_string = ""; // 0x9eb PushV
	var_387_string = "Sly"; // 0x9ec MovS
	func_2079(var_50_int, var_387_string); // 0x9ed NEW_2
	var_388_int = 520146; // 0x9ef PushI
	SetMessage(var_388_int); // 0x9f0 TObjFunc
	ClearReplies(); // 0x9f2 TObjFunc
	var_389_int = 520147; // 0x9f4 PushI
	var_390_int = 21332; // 0x9f5 PushI
	var_391_int = 21331; // 0x9f6 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x9f7 TObjFunc
	var_392_int = 520151; // 0x9f9 PushI
	var_393_int = -1; // 0x9fa PushI
	var_394_int = 21335; // 0x9fb PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x9fc TObjFunc
	return 0; // 0x9fe Return
	
Label_2559:
	var_395_int = 21332; // 0x9ff PushI
	var_396_bool = var_49_float == var_395_int; // 0xa00 Eq
	if(var_396_bool == 0) goto Label_2582; // 0xa01 JumpB
	var_397_string = ""; // 0xa02 PushV
	var_397_string = "Neutral"; // 0xa03 MovS
	func_2079(var_50_int, var_397_string); // 0xa04 NEW_2
	var_398_int = 520148; // 0xa06 PushI
	SetMessage(var_398_int); // 0xa07 TObjFunc
	ClearReplies(); // 0xa09 TObjFunc
	var_399_int = 520149; // 0xa0b PushI
	var_400_int = -1; // 0xa0c PushI
	var_401_int = 21333; // 0xa0d PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xa0e TObjFunc
	var_402_int = 520150; // 0xa10 PushI
	var_403_int = -1; // 0xa11 PushI
	var_404_int = 21334; // 0xa12 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xa13 TObjFunc
	return 0; // 0xa15 Return
	
Label_2582:
	var_3_object = 1; // 0xa16 TMovB
	var_405_bool = 0; // 0xa17 PushV
	func_5163(var_405_bool); // 0xa18 NEW_2
	if(var_405_bool == 0) goto Label_2590; // 0xa1a JumpB
	lshStopAnimation(); // 0xa1b Func
	goto Label_2592; // 0xa1d Jump
	
Label_2592:
	return 0; // 0xa20 Return
	
Label_2590:
	StopAnimation(); // 0xa1e Func
	
Label_2594:
	return 0; // 0xa22 Return
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0xac5 PushI
	if(var_51_int == 0) goto Label_2833; // 0xac6 JumpB
	func_4906(); // 0xac8 NEW_2
	var_53_int = 21982; // 0xaca PushI
	var_54_bool = var_49_float == var_53_int; // 0xacb Eq
	if(var_54_bool == 0) goto Label_2785; // 0xacc JumpB
	var_55_string = ""; // 0xacd PushV
	var_55_string = "Neutral"; // 0xace MovS
	func_2734(var_50_int, var_55_string); // 0xacf NEW_2
	var_72_int = 520768; // 0xad1 PushI
	SetMessage(var_72_int); // 0xad2 TObjFunc
	ClearReplies(); // 0xad4 TObjFunc
	var_73_int = 520769; // 0xad6 PushI
	var_74_int = 21984; // 0xad7 PushI
	var_75_int = 21983; // 0xad8 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xad9 TObjFunc
	var_76_int = 520772; // 0xadb PushI
	var_77_int = 21987; // 0xadc PushI
	var_78_int = 21986; // 0xadd PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xade TObjFunc
	return 0; // 0xae0 Return
	
Label_2785:
	var_79_int = 21987; // 0xae1 PushI
	var_80_bool = var_49_float == var_79_int; // 0xae2 Eq
	if(var_80_bool == 0) goto Label_2803; // 0xae3 JumpB
	var_81_string = ""; // 0xae4 PushV
	var_81_string = "Neutral"; // 0xae5 MovS
	func_2734(var_50_int, var_81_string); // 0xae6 NEW_2
	var_82_int = 520773; // 0xae8 PushI
	SetMessage(var_82_int); // 0xae9 TObjFunc
	ClearReplies(); // 0xaeb TObjFunc
	var_83_int = 520774; // 0xaed PushI
	var_84_int = -1; // 0xaee PushI
	var_85_int = 21988; // 0xaef PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xaf0 TObjFunc
	return 0; // 0xaf2 Return
	
Label_2803:
	var_86_int = 21984; // 0xaf3 PushI
	var_87_bool = var_49_float == var_86_int; // 0xaf4 Eq
	if(var_87_bool == 0) goto Label_2821; // 0xaf5 JumpB
	var_88_string = ""; // 0xaf6 PushV
	var_88_string = "Neutral"; // 0xaf7 MovS
	func_2734(var_50_int, var_88_string); // 0xaf8 NEW_2
	var_89_int = 520770; // 0xafa PushI
	SetMessage(var_89_int); // 0xafb TObjFunc
	ClearReplies(); // 0xafd TObjFunc
	var_90_int = 520771; // 0xaff PushI
	var_91_int = -1; // 0xb00 PushI
	var_92_int = 21985; // 0xb01 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xb02 TObjFunc
	return 0; // 0xb04 Return
	
Label_2821:
	var_3_object = 1; // 0xb05 TMovB
	var_93_bool = 0; // 0xb06 PushV
	func_5163(var_93_bool); // 0xb07 NEW_2
	if(var_93_bool == 0) goto Label_2829; // 0xb09 JumpB
	lshStopAnimation(); // 0xb0a Func
	goto Label_2831; // 0xb0c Jump
	
Label_2831:
	return 0; // 0xb0f Return
	
Label_2829:
	StopAnimation(); // 0xb0d Func
	
Label_2833:
	return 0; // 0xb11 Return
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0xbb4 PushI
	if(var_51_int == 0) goto Label_3085; // 0xbb5 JumpB
	func_4906(); // 0xbb7 NEW_2
	var_53_int = 22403; // 0xbb9 PushI
	var_54_bool = var_50_int == var_53_int; // 0xbba Eq
	if(var_54_bool == 0) goto Label_3009; // 0xbbb JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xbbc PushV
	var_55_object = var_1_object; // 0xbbd MovT
	var_56_object = var_0_bool; // 0xbbe MovT
	func_5350(); // 0xbbf NEW_2
	
Label_3009:
	var_81_int = 22399; // 0xbc1 PushI
	var_82_bool = var_49_float == var_81_int; // 0xbc2 Eq
	if(var_82_bool == 0) goto Label_3032; // 0xbc3 JumpB
	var_83_string = ""; // 0xbc4 PushV
	var_83_string = "Untrust"; // 0xbc5 MovS
	func_2973(var_50_int, var_83_string); // 0xbc6 NEW_2
	var_100_int = 521202; // 0xbc8 PushI
	SetMessage(var_100_int); // 0xbc9 TObjFunc
	ClearReplies(); // 0xbcb TObjFunc
	var_101_int = 521203; // 0xbcd PushI
	var_102_int = 22402; // 0xbce PushI
	var_103_int = 22400; // 0xbcf PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xbd0 TObjFunc
	var_104_int = 521204; // 0xbd2 PushI
	var_105_int = -1; // 0xbd3 PushI
	var_106_int = 22401; // 0xbd4 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xbd5 TObjFunc
	return 0; // 0xbd7 Return
	
Label_3032:
	var_107_int = 22402; // 0xbd8 PushI
	var_108_bool = var_49_float == var_107_int; // 0xbd9 Eq
	if(var_108_bool == 0) goto Label_3055; // 0xbda JumpB
	var_109_string = ""; // 0xbdb PushV
	var_109_string = "Untrust"; // 0xbdc MovS
	func_2973(var_50_int, var_109_string); // 0xbdd NEW_2
	var_110_int = 521205; // 0xbdf PushI
	SetMessage(var_110_int); // 0xbe0 TObjFunc
	ClearReplies(); // 0xbe2 TObjFunc
	var_111_int = 528423; // 0xbe4 PushI
	var_112_int = 29808; // 0xbe5 PushI
	var_113_int = 29806; // 0xbe6 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xbe7 TObjFunc
	var_114_int = 528424; // 0xbe9 PushI
	var_115_int = 29808; // 0xbea PushI
	var_116_int = 29807; // 0xbeb PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xbec TObjFunc
	return 0; // 0xbee Return
	
Label_3055:
	var_117_int = 29808; // 0xbef PushI
	var_118_bool = var_49_float == var_117_int; // 0xbf0 Eq
	if(var_118_bool == 0) goto Label_3073; // 0xbf1 JumpB
	var_119_string = ""; // 0xbf2 PushV
	var_119_string = "Sly"; // 0xbf3 MovS
	func_2973(var_50_int, var_119_string); // 0xbf4 NEW_2
	var_120_int = 528425; // 0xbf6 PushI
	SetMessage(var_120_int); // 0xbf7 TObjFunc
	ClearReplies(); // 0xbf9 TObjFunc
	var_121_int = 521206; // 0xbfb PushI
	var_122_int = -1; // 0xbfc PushI
	var_123_int = 22403; // 0xbfd PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xbfe TObjFunc
	return 0; // 0xc00 Return
	
Label_3073:
	var_3_object = 1; // 0xc01 TMovB
	var_124_bool = 0; // 0xc02 PushV
	func_5163(var_124_bool); // 0xc03 NEW_2
	if(var_124_bool == 0) goto Label_3081; // 0xc05 JumpB
	lshStopAnimation(); // 0xc06 Func
	goto Label_3083; // 0xc08 Jump
	
Label_3083:
	return 0; // 0xc0b Return
	
Label_3081:
	StopAnimation(); // 0xc09 Func
	
Label_3085:
	return 0; // 0xc0d Return
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0xce7 PushI
	if(var_51_int == 0) goto Label_3753; // 0xce8 JumpB
	func_4906(); // 0xcea NEW_2
	var_53_int = 22637; // 0xcec PushI
	var_54_bool = var_50_int == var_53_int; // 0xced Eq
	if(var_54_bool == 0) goto Label_3316; // 0xcee JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xcef PushV
	var_55_object = var_1_object; // 0xcf0 MovT
	var_56_object = var_0_bool; // 0xcf1 MovT
	func_5361(); // 0xcf2 NEW_2
	
Label_3316:
	var_98_int = 22643; // 0xcf4 PushI
	var_99_bool = var_50_int == var_98_int; // 0xcf5 Eq
	if(var_99_bool == 0) goto Label_3324; // 0xcf6 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0xcf7 PushV
	var_100_object = var_1_object; // 0xcf8 MovT
	var_101_object = var_0_bool; // 0xcf9 MovT
	func_5361(); // 0xcfa NEW_2
	
Label_3324:
	var_102_int = 22646; // 0xcfc PushI
	var_103_bool = var_50_int == var_102_int; // 0xcfd Eq
	if(var_103_bool == 0) goto Label_3347; // 0xcfe JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0xcff PushV
	var_104_object = var_1_object; // 0xd00 MovT
	var_105_object = var_0_bool; // 0xd01 MovT
	func_5377(); // 0xd02 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0xd04 PushV
	var_124_object = var_1_object; // 0xd05 MovT
	var_125_object = var_0_bool; // 0xd06 MovT
	func_5479(); // 0xd07 NEW_2
	var_128_object = Obj(); var_129_object = Obj(); // 0xd09 PushV
	var_128_object = var_1_object; // 0xd0a MovT
	var_129_object = var_0_bool; // 0xd0b MovT
	func_5329(var_129_object); // 0xd0c NEW_2
	var_149_object = Obj(); var_150_object = Obj(); // 0xd0e PushV
	var_149_object = var_1_object; // 0xd0f MovT
	var_150_object = var_0_bool; // 0xd10 MovT
	func_5429(); // 0xd11 NEW_2
	
Label_3347:
	var_153_int = 25069; // 0xd13 PushI
	var_154_bool = var_50_int == var_153_int; // 0xd14 Eq
	if(var_154_bool == 0) goto Label_3355; // 0xd15 JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0xd16 PushV
	var_155_object = var_1_object; // 0xd17 MovT
	var_156_object = var_0_bool; // 0xd18 MovT
	func_5377(); // 0xd19 NEW_2
	
Label_3355:
	var_157_int = 22634; // 0xd1b PushI
	var_158_bool = var_49_float == var_157_int; // 0xd1c Eq
	if(var_158_bool == 0) goto Label_3433; // 0xd1d JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0xd1e PushV
	var_160_object = var_1_object; // 0xd1f MovT
	func_5491(var_160_object); // 0xd20 NEW_2
	if(var_159_bool == 0) goto Label_3388; // 0xd22 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0xd23 PushV
	var_167_object = var_1_object; // 0xd24 MovT
	var_168_object = var_0_bool; // 0xd25 MovT
	func_5391(); // 0xd26 NEW_2
	var_171_string = ""; // 0xd28 PushV
	var_171_string = "Rage"; // 0xd29 MovS
	func_3280(var_50_int, var_171_string); // 0xd2a NEW_2
	var_188_int = 521469; // 0xd2c PushI
	SetMessage(var_188_int); // 0xd2d TObjFunc
	ClearReplies(); // 0xd2f TObjFunc
	var_189_int = 523789; // 0xd31 PushI
	var_190_int = 25055; // 0xd32 PushI
	var_191_int = 25054; // 0xd33 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xd34 TObjFunc
	var_192_int = 523804; // 0xd36 PushI
	var_193_int = 25055; // 0xd37 PushI
	var_194_int = 25070; // 0xd38 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xd39 TObjFunc
	return 0; // 0xd3b Return
	
Label_3388:
	var_195_string = ""; // 0xd3c PushV
	var_195_string = "Rage"; // 0xd3d MovS
	func_3280(var_50_int, var_195_string); // 0xd3e NEW_2
	var_196_int = 521474; // 0xd40 PushI
	SetMessage(var_196_int); // 0xd41 TObjFunc
	ClearReplies(); // 0xd43 TObjFunc
	var_197_bool = 0; var_198_object = Obj(); // 0xd45 PushV
	var_198_object = var_1_object; // 0xd46 MovT
	func_5503(var_198_object); // 0xd47 NEW_2
	if(var_197_bool == 0) goto Label_3407; // 0xd49 JumpB
	var_203_int = 521475; // 0xd4a PushI
	var_204_int = 22642; // 0xd4b PushI
	var_205_int = 22640; // 0xd4c PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xd4d TObjFunc
	
Label_3407:
	var_206_bool = 0; // 0xd4f PushV
	var_206_bool = 0; // 0xd50 MovB
	var_207_bool = 0; var_208_object = Obj(); // 0xd51 PushV
	var_208_object = var_1_object; // 0xd52 MovT
	func_5503(var_208_object); // 0xd53 NEW_2
	var_209_bool = var_207_bool == 0; // 0xd55 Not
	if(var_209_bool == 0) goto Label_3421; // 0xd56 JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0xd57 PushV
	var_211_object = var_1_object; // 0xd58 MovT
	func_5515(var_210_bool, var_211_object); // 0xd59 NEW_2
	if(var_210_bool == 0) goto Label_3421; // 0xd5b JumpB
	var_206_bool = 1; // 0xd5c MovB
	
Label_3421:
	if(var_206_bool == 0) goto Label_3427; // 0xd5d JumpB
	var_219_int = 521479; // 0xd5e PushI
	var_220_int = 22645; // 0xd5f PushI
	var_221_int = 22644; // 0xd60 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xd61 TObjFunc
	
Label_3427:
	var_222_int = 521476; // 0xd63 PushI
	var_223_int = -1; // 0xd64 PushI
	var_224_int = 22641; // 0xd65 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xd66 TObjFunc
	return 0; // 0xd68 Return
	
Label_3433:
	var_225_int = 25111; // 0xd69 PushI
	var_226_bool = var_49_float == var_225_int; // 0xd6a Eq
	if(var_226_bool == 0) goto Label_3436; // 0xd6b JumpB
	
Label_3436:
	var_227_int = 25113; // 0xd6c PushI
	var_228_bool = var_49_float == var_227_int; // 0xd6d Eq
	if(var_228_bool == 0) goto Label_3454; // 0xd6e JumpB
	var_229_string = ""; // 0xd6f PushV
	var_229_string = "Fear"; // 0xd70 MovS
	func_3280(var_50_int, var_229_string); // 0xd71 NEW_2
	var_230_int = 523840; // 0xd73 PushI
	SetMessage(var_230_int); // 0xd74 TObjFunc
	ClearReplies(); // 0xd76 TObjFunc
	var_231_int = 523841; // 0xd78 PushI
	var_232_int = 25115; // 0xd79 PushI
	var_233_int = 25114; // 0xd7a PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xd7b TObjFunc
	return 0; // 0xd7d Return
	
Label_3454:
	var_234_int = 25115; // 0xd7e PushI
	var_235_bool = var_49_float == var_234_int; // 0xd7f Eq
	if(var_235_bool == 0) goto Label_3472; // 0xd80 JumpB
	var_236_string = ""; // 0xd81 PushV
	var_236_string = "Untrust"; // 0xd82 MovS
	func_3280(var_50_int, var_236_string); // 0xd83 NEW_2
	var_237_int = 523842; // 0xd85 PushI
	SetMessage(var_237_int); // 0xd86 TObjFunc
	ClearReplies(); // 0xd88 TObjFunc
	var_238_int = 523843; // 0xd8a PushI
	var_239_int = 25117; // 0xd8b PushI
	var_240_int = 25116; // 0xd8c PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xd8d TObjFunc
	return 0; // 0xd8f Return
	
Label_3472:
	var_241_int = 25117; // 0xd90 PushI
	var_242_bool = var_49_float == var_241_int; // 0xd91 Eq
	if(var_242_bool == 0) goto Label_3490; // 0xd92 JumpB
	var_243_string = ""; // 0xd93 PushV
	var_243_string = "Untrust"; // 0xd94 MovS
	func_3280(var_50_int, var_243_string); // 0xd95 NEW_2
	var_244_int = 523844; // 0xd97 PushI
	SetMessage(var_244_int); // 0xd98 TObjFunc
	ClearReplies(); // 0xd9a TObjFunc
	var_245_int = 523845; // 0xd9c PushI
	var_246_int = -1; // 0xd9d PushI
	var_247_int = 25118; // 0xd9e PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xd9f TObjFunc
	return 0; // 0xda1 Return
	
Label_3490:
	var_248_int = 22645; // 0xda2 PushI
	var_249_bool = var_49_float == var_248_int; // 0xda3 Eq
	if(var_249_bool == 0) goto Label_3513; // 0xda4 JumpB
	var_250_string = ""; // 0xda5 PushV
	var_250_string = "Sly"; // 0xda6 MovS
	func_3280(var_50_int, var_250_string); // 0xda7 NEW_2
	var_251_int = 521480; // 0xda9 PushI
	SetMessage(var_251_int); // 0xdaa TObjFunc
	ClearReplies(); // 0xdac TObjFunc
	var_252_int = 523798; // 0xdae PushI
	var_253_int = 25065; // 0xdaf PushI
	var_254_int = 25063; // 0xdb0 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xdb1 TObjFunc
	var_255_int = 523799; // 0xdb3 PushI
	var_256_int = 25066; // 0xdb4 PushI
	var_257_int = 25064; // 0xdb5 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xdb6 TObjFunc
	return 0; // 0xdb8 Return
	
Label_3513:
	var_258_int = 25066; // 0xdb9 PushI
	var_259_bool = var_49_float == var_258_int; // 0xdba Eq
	if(var_259_bool == 0) goto Label_3531; // 0xdbb JumpB
	var_260_string = ""; // 0xdbc PushV
	var_260_string = "Neutral"; // 0xdbd MovS
	func_3280(var_50_int, var_260_string); // 0xdbe NEW_2
	var_261_int = 523801; // 0xdc0 PushI
	SetMessage(var_261_int); // 0xdc1 TObjFunc
	ClearReplies(); // 0xdc3 TObjFunc
	var_262_int = 523802; // 0xdc5 PushI
	var_263_int = 25065; // 0xdc6 PushI
	var_264_int = 25067; // 0xdc7 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xdc8 TObjFunc
	return 0; // 0xdca Return
	
Label_3531:
	var_265_int = 25065; // 0xdcb PushI
	var_266_bool = var_49_float == var_265_int; // 0xdcc Eq
	if(var_266_bool == 0) goto Label_3554; // 0xdcd JumpB
	var_267_string = ""; // 0xdce PushV
	var_267_string = "Neutral"; // 0xdcf MovS
	func_3280(var_50_int, var_267_string); // 0xdd0 NEW_2
	var_268_int = 523800; // 0xdd2 PushI
	SetMessage(var_268_int); // 0xdd3 TObjFunc
	ClearReplies(); // 0xdd5 TObjFunc
	var_269_int = 521481; // 0xdd7 PushI
	var_270_int = -1; // 0xdd8 PushI
	var_271_int = 22646; // 0xdd9 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xdda TObjFunc
	var_272_int = 523803; // 0xddc PushI
	var_273_int = -1; // 0xddd PushI
	var_274_int = 25069; // 0xdde PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xddf TObjFunc
	return 0; // 0xde1 Return
	
Label_3554:
	var_275_int = 22642; // 0xde2 PushI
	var_276_bool = var_49_float == var_275_int; // 0xde3 Eq
	if(var_276_bool == 0) goto Label_3572; // 0xde4 JumpB
	var_277_string = ""; // 0xde5 PushV
	var_277_string = "Neutral"; // 0xde6 MovS
	func_3280(var_50_int, var_277_string); // 0xde7 NEW_2
	var_278_int = 521477; // 0xde9 PushI
	SetMessage(var_278_int); // 0xdea TObjFunc
	ClearReplies(); // 0xdec TObjFunc
	var_279_int = 521478; // 0xdee PushI
	var_280_int = -1; // 0xdef PushI
	var_281_int = 22643; // 0xdf0 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xdf1 TObjFunc
	return 0; // 0xdf3 Return
	
Label_3572:
	var_282_int = 25055; // 0xdf4 PushI
	var_283_bool = var_49_float == var_282_int; // 0xdf5 Eq
	if(var_283_bool == 0) goto Label_3595; // 0xdf6 JumpB
	var_284_string = ""; // 0xdf7 PushV
	var_284_string = "Rage"; // 0xdf8 MovS
	func_3280(var_50_int, var_284_string); // 0xdf9 NEW_2
	var_285_int = 523790; // 0xdfb PushI
	SetMessage(var_285_int); // 0xdfc TObjFunc
	ClearReplies(); // 0xdfe TObjFunc
	var_286_int = 523791; // 0xe00 PushI
	var_287_int = 25057; // 0xe01 PushI
	var_288_int = 25056; // 0xe02 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0xe03 TObjFunc
	var_289_int = 523805; // 0xe05 PushI
	var_290_int = 25057; // 0xe06 PushI
	var_291_int = 25072; // 0xe07 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xe08 TObjFunc
	return 0; // 0xe0a Return
	
Label_3595:
	var_292_int = 25057; // 0xe0b PushI
	var_293_bool = var_49_float == var_292_int; // 0xe0c Eq
	if(var_293_bool == 0) goto Label_3618; // 0xe0d JumpB
	var_294_string = ""; // 0xe0e PushV
	var_294_string = "Rage"; // 0xe0f MovS
	func_3280(var_50_int, var_294_string); // 0xe10 NEW_2
	var_295_int = 523792; // 0xe12 PushI
	SetMessage(var_295_int); // 0xe13 TObjFunc
	ClearReplies(); // 0xe15 TObjFunc
	var_296_int = 523793; // 0xe17 PushI
	var_297_int = 25059; // 0xe18 PushI
	var_298_int = 25058; // 0xe19 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xe1a TObjFunc
	var_299_int = 523797; // 0xe1c PushI
	var_300_int = 25059; // 0xe1d PushI
	var_301_int = 25062; // 0xe1e PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xe1f TObjFunc
	return 0; // 0xe21 Return
	
Label_3618:
	var_302_int = 25059; // 0xe22 PushI
	var_303_bool = var_49_float == var_302_int; // 0xe23 Eq
	if(var_303_bool == 0) goto Label_3641; // 0xe24 JumpB
	var_304_string = ""; // 0xe25 PushV
	var_304_string = "Rage"; // 0xe26 MovS
	func_3280(var_50_int, var_304_string); // 0xe27 NEW_2
	var_305_int = 523794; // 0xe29 PushI
	SetMessage(var_305_int); // 0xe2a TObjFunc
	ClearReplies(); // 0xe2c TObjFunc
	var_306_int = 523795; // 0xe2e PushI
	var_307_int = 25075; // 0xe2f PushI
	var_308_int = 25060; // 0xe30 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xe31 TObjFunc
	var_309_int = 523810; // 0xe33 PushI
	var_310_int = 25080; // 0xe34 PushI
	var_311_int = 25079; // 0xe35 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0xe36 TObjFunc
	return 0; // 0xe38 Return
	
Label_3641:
	var_312_int = 25080; // 0xe39 PushI
	var_313_bool = var_49_float == var_312_int; // 0xe3a Eq
	if(var_313_bool == 0) goto Label_3659; // 0xe3b JumpB
	var_314_string = ""; // 0xe3c PushV
	var_314_string = "Rage"; // 0xe3d MovS
	func_3280(var_50_int, var_314_string); // 0xe3e NEW_2
	var_315_int = 523811; // 0xe40 PushI
	SetMessage(var_315_int); // 0xe41 TObjFunc
	ClearReplies(); // 0xe43 TObjFunc
	var_316_int = 523812; // 0xe45 PushI
	var_317_int = 25075; // 0xe46 PushI
	var_318_int = 25081; // 0xe47 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xe48 TObjFunc
	return 0; // 0xe4a Return
	
Label_3659:
	var_319_int = 25075; // 0xe4b PushI
	var_320_bool = var_49_float == var_319_int; // 0xe4c Eq
	if(var_320_bool == 0) goto Label_3677; // 0xe4d JumpB
	var_321_string = ""; // 0xe4e PushV
	var_321_string = "Rage"; // 0xe4f MovS
	func_3280(var_50_int, var_321_string); // 0xe50 NEW_2
	var_322_int = 523806; // 0xe52 PushI
	SetMessage(var_322_int); // 0xe53 TObjFunc
	ClearReplies(); // 0xe55 TObjFunc
	var_323_int = 523807; // 0xe57 PushI
	var_324_int = 25077; // 0xe58 PushI
	var_325_int = 25076; // 0xe59 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xe5a TObjFunc
	return 0; // 0xe5c Return
	
Label_3677:
	var_326_int = 25077; // 0xe5d PushI
	var_327_bool = var_49_float == var_326_int; // 0xe5e Eq
	if(var_327_bool == 0) goto Label_3695; // 0xe5f JumpB
	var_328_string = ""; // 0xe60 PushV
	var_328_string = "Sly"; // 0xe61 MovS
	func_3280(var_50_int, var_328_string); // 0xe62 NEW_2
	var_329_int = 523808; // 0xe64 PushI
	SetMessage(var_329_int); // 0xe65 TObjFunc
	ClearReplies(); // 0xe67 TObjFunc
	var_330_int = 523809; // 0xe69 PushI
	var_331_int = 22636; // 0xe6a PushI
	var_332_int = 25078; // 0xe6b PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xe6c TObjFunc
	return 0; // 0xe6e Return
	
Label_3695:
	var_333_int = 22636; // 0xe6f PushI
	var_334_bool = var_49_float == var_333_int; // 0xe70 Eq
	if(var_334_bool == 0) goto Label_3718; // 0xe71 JumpB
	var_335_string = ""; // 0xe72 PushV
	var_335_string = "Rage"; // 0xe73 MovS
	func_3280(var_50_int, var_335_string); // 0xe74 NEW_2
	var_336_int = 521471; // 0xe76 PushI
	SetMessage(var_336_int); // 0xe77 TObjFunc
	ClearReplies(); // 0xe79 TObjFunc
	var_337_int = 523813; // 0xe7b PushI
	var_338_int = 25084; // 0xe7c PushI
	var_339_int = 25083; // 0xe7d PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xe7e TObjFunc
	var_340_int = 523815; // 0xe80 PushI
	var_341_int = 25084; // 0xe81 PushI
	var_342_int = 25085; // 0xe82 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xe83 TObjFunc
	return 0; // 0xe85 Return
	
Label_3718:
	var_343_int = 25084; // 0xe86 PushI
	var_344_bool = var_49_float == var_343_int; // 0xe87 Eq
	if(var_344_bool == 0) goto Label_3741; // 0xe88 JumpB
	var_345_string = ""; // 0xe89 PushV
	var_345_string = "Fear"; // 0xe8a MovS
	func_3280(var_50_int, var_345_string); // 0xe8b NEW_2
	var_346_int = 523814; // 0xe8d PushI
	SetMessage(var_346_int); // 0xe8e TObjFunc
	ClearReplies(); // 0xe90 TObjFunc
	var_347_int = 521472; // 0xe92 PushI
	var_348_int = -1; // 0xe93 PushI
	var_349_int = 22637; // 0xe94 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xe95 TObjFunc
	var_350_int = 521473; // 0xe97 PushI
	var_351_int = -1; // 0xe98 PushI
	var_352_int = 22638; // 0xe99 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xe9a TObjFunc
	return 0; // 0xe9c Return
	
Label_3741:
	var_3_object = 1; // 0xe9d TMovB
	var_353_bool = 0; // 0xe9e PushV
	func_5163(var_353_bool); // 0xe9f NEW_2
	if(var_353_bool == 0) goto Label_3749; // 0xea1 JumpB
	lshStopAnimation(); // 0xea2 Func
	goto Label_3751; // 0xea4 Jump
	
Label_3751:
	return 0; // 0xea7 Return
	
Label_3749:
	StopAnimation(); // 0xea5 Func
	
Label_3753:
	return 0; // 0xea9 Return
}


task_19_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0xf56 PushI
	if(var_51_int == 0) goto Label_4221; // 0xf57 JumpB
	func_4906(); // 0xf59 NEW_2
	var_53_int = 24800; // 0xf5b PushI
	var_54_bool = var_50_int == var_53_int; // 0xf5c Eq
	if(var_54_bool == 0) goto Label_3939; // 0xf5d JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xf5e PushV
	var_55_object = var_1_object; // 0xf5f MovT
	var_56_object = var_0_bool; // 0xf60 MovT
	func_5406(); // 0xf61 NEW_2
	
Label_3939:
	var_59_int = 23247; // 0xf63 PushI
	var_60_bool = var_50_int == var_59_int; // 0xf64 Eq
	if(var_60_bool == 0) goto Label_3947; // 0xf65 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0xf66 PushV
	var_61_object = var_1_object; // 0xf67 MovT
	var_62_object = var_0_bool; // 0xf68 MovT
	func_5397(); // 0xf69 NEW_2
	
Label_3947:
	var_88_int = 23248; // 0xf6b PushI
	var_89_bool = var_49_float == var_88_int; // 0xf6c Eq
	if(var_89_bool == 0) goto Label_3980; // 0xf6d JumpB
	var_90_string = ""; // 0xf6e PushV
	var_90_string = "Fear"; // 0xf6f MovS
	func_3903(var_50_int, var_90_string); // 0xf70 NEW_2
	var_107_int = 522079; // 0xf72 PushI
	SetMessage(var_107_int); // 0xf73 TObjFunc
	ClearReplies(); // 0xf75 TObjFunc
	var_108_bool = 0; var_109_object = Obj(); // 0xf77 PushV
	var_109_object = var_1_object; // 0xf78 MovT
	func_5538(var_109_object); // 0xf79 NEW_2
	if(var_108_bool == 0) goto Label_3969; // 0xf7b JumpB
	var_116_int = 523566; // 0xf7c PushI
	var_117_int = 24801; // 0xf7d PushI
	var_118_int = 24800; // 0xf7e PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0xf7f TObjFunc
	
Label_3969:
	var_119_int = 523569; // 0xf81 PushI
	var_120_int = 24804; // 0xf82 PushI
	var_121_int = 24803; // 0xf83 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xf84 TObjFunc
	var_122_int = 522080; // 0xf86 PushI
	var_123_int = -1; // 0xf87 PushI
	var_124_int = 23249; // 0xf88 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xf89 TObjFunc
	return 0; // 0xf8b Return
	
Label_3980:
	var_125_int = 24804; // 0xf8c PushI
	var_126_bool = var_49_float == var_125_int; // 0xf8d Eq
	if(var_126_bool == 0) goto Label_4003; // 0xf8e JumpB
	var_127_string = ""; // 0xf8f PushV
	var_127_string = "Sly"; // 0xf90 MovS
	func_3903(var_50_int, var_127_string); // 0xf91 NEW_2
	var_128_int = 523570; // 0xf93 PushI
	SetMessage(var_128_int); // 0xf94 TObjFunc
	ClearReplies(); // 0xf96 TObjFunc
	var_129_int = 523571; // 0xf98 PushI
	var_130_int = 24807; // 0xf99 PushI
	var_131_int = 24805; // 0xf9a PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xf9b TObjFunc
	var_132_int = 523572; // 0xf9d PushI
	var_133_int = -1; // 0xf9e PushI
	var_134_int = 24806; // 0xf9f PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xfa0 TObjFunc
	return 0; // 0xfa2 Return
	
Label_4003:
	var_135_int = 24807; // 0xfa3 PushI
	var_136_bool = var_49_float == var_135_int; // 0xfa4 Eq
	if(var_136_bool == 0) goto Label_4021; // 0xfa5 JumpB
	var_137_string = ""; // 0xfa6 PushV
	var_137_string = "Fear"; // 0xfa7 MovS
	func_3903(var_50_int, var_137_string); // 0xfa8 NEW_2
	var_138_int = 523573; // 0xfaa PushI
	SetMessage(var_138_int); // 0xfab TObjFunc
	ClearReplies(); // 0xfad TObjFunc
	var_139_int = 523574; // 0xfaf PushI
	var_140_int = 24809; // 0xfb0 PushI
	var_141_int = 24808; // 0xfb1 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xfb2 TObjFunc
	return 0; // 0xfb4 Return
	
Label_4021:
	var_142_int = 24811; // 0xfb5 PushI
	var_143_bool = var_49_float == var_142_int; // 0xfb6 Eq
	if(var_143_bool == 0) goto Label_4024; // 0xfb7 JumpB
	
Label_4024:
	var_144_int = 24809; // 0xfb8 PushI
	var_145_bool = var_49_float == var_144_int; // 0xfb9 Eq
	if(var_145_bool == 0) goto Label_4058; // 0xfba JumpB
	var_146_string = ""; // 0xfbb PushV
	var_146_string = "Sly"; // 0xfbc MovS
	func_3903(var_50_int, var_146_string); // 0xfbd NEW_2
	var_147_int = 523575; // 0xfbf PushI
	SetMessage(var_147_int); // 0xfc0 TObjFunc
	ClearReplies(); // 0xfc2 TObjFunc
	var_148_bool = 0; var_149_object = Obj(); // 0xfc4 PushV
	var_149_object = var_1_object; // 0xfc5 MovT
	func_5526(var_149_object); // 0xfc6 NEW_2
	var_154_bool = var_148_bool == 0; // 0xfc8 Not
	if(var_154_bool == 0) goto Label_4047; // 0xfc9 JumpB
	var_155_int = 522078; // 0xfca PushI
	var_156_int = -1; // 0xfcb PushI
	var_157_int = 23247; // 0xfcc PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xfcd TObjFunc
	
Label_4047:
	var_158_bool = 0; var_159_object = Obj(); // 0xfcf PushV
	var_159_object = var_1_object; // 0xfd0 MovT
	func_5526(var_159_object); // 0xfd1 NEW_2
	if(var_158_bool == 0) goto Label_4057; // 0xfd3 JumpB
	var_160_int = 522087; // 0xfd4 PushI
	var_161_int = 24814; // 0xfd5 PushI
	var_162_int = 23256; // 0xfd6 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xfd7 TObjFunc
	
Label_4057:
	return 0; // 0xfd9 Return
	
Label_4058:
	var_163_int = 24814; // 0xfda PushI
	var_164_bool = var_49_float == var_163_int; // 0xfdb Eq
	if(var_164_bool == 0) goto Label_4081; // 0xfdc JumpB
	var_165_string = ""; // 0xfdd PushV
	var_165_string = "Sly"; // 0xfde MovS
	func_3903(var_50_int, var_165_string); // 0xfdf NEW_2
	var_166_int = 523580; // 0xfe1 PushI
	SetMessage(var_166_int); // 0xfe2 TObjFunc
	ClearReplies(); // 0xfe4 TObjFunc
	var_167_int = 523582; // 0xfe6 PushI
	var_168_int = 24819; // 0xfe7 PushI
	var_169_int = 24817; // 0xfe8 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xfe9 TObjFunc
	var_170_int = 523583; // 0xfeb PushI
	var_171_int = -1; // 0xfec PushI
	var_172_int = 24818; // 0xfed PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xfee TObjFunc
	return 0; // 0xff0 Return
	
Label_4081:
	var_173_int = 24819; // 0xff1 PushI
	var_174_bool = var_49_float == var_173_int; // 0xff2 Eq
	if(var_174_bool == 0) goto Label_4104; // 0xff3 JumpB
	var_175_string = ""; // 0xff4 PushV
	var_175_string = "Sly"; // 0xff5 MovS
	func_3903(var_50_int, var_175_string); // 0xff6 NEW_2
	var_176_int = 523584; // 0xff8 PushI
	SetMessage(var_176_int); // 0xff9 TObjFunc
	ClearReplies(); // 0xffb TObjFunc
	var_177_int = 523585; // 0xffd PushI
	var_178_int = -1; // 0xffe PushI
	var_179_int = 24820; // 0xfff PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1000 TObjFunc
	var_180_int = 523586; // 0x1002 PushI
	var_181_int = -1; // 0x1003 PushI
	var_182_int = 24821; // 0x1004 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1005 TObjFunc
	return 0; // 0x1007 Return
	
Label_4104:
	var_183_int = 24801; // 0x1008 PushI
	var_184_bool = var_49_float == var_183_int; // 0x1009 Eq
	if(var_184_bool == 0) goto Label_4122; // 0x100a JumpB
	var_185_string = ""; // 0x100b PushV
	var_185_string = "Sly"; // 0x100c MovS
	func_3903(var_50_int, var_185_string); // 0x100d NEW_2
	var_186_int = 523567; // 0x100f PushI
	SetMessage(var_186_int); // 0x1010 TObjFunc
	ClearReplies(); // 0x1012 TObjFunc
	var_187_int = 523568; // 0x1014 PushI
	var_188_int = 24822; // 0x1015 PushI
	var_189_int = 24802; // 0x1016 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1017 TObjFunc
	return 0; // 0x1019 Return
	
Label_4122:
	var_190_int = 24822; // 0x101a PushI
	var_191_bool = var_49_float == var_190_int; // 0x101b Eq
	if(var_191_bool == 0) goto Label_4145; // 0x101c JumpB
	var_192_string = ""; // 0x101d PushV
	var_192_string = "Sly"; // 0x101e MovS
	func_3903(var_50_int, var_192_string); // 0x101f NEW_2
	var_193_int = 523587; // 0x1021 PushI
	SetMessage(var_193_int); // 0x1022 TObjFunc
	ClearReplies(); // 0x1024 TObjFunc
	var_194_int = 523588; // 0x1026 PushI
	var_195_int = 24824; // 0x1027 PushI
	var_196_int = 24823; // 0x1028 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1029 TObjFunc
	var_197_int = 523595; // 0x102b PushI
	var_198_int = -1; // 0x102c PushI
	var_199_int = 24830; // 0x102d PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x102e TObjFunc
	return 0; // 0x1030 Return
	
Label_4145:
	var_200_int = 24824; // 0x1031 PushI
	var_201_bool = var_49_float == var_200_int; // 0x1032 Eq
	if(var_201_bool == 0) goto Label_4163; // 0x1033 JumpB
	var_202_string = ""; // 0x1034 PushV
	var_202_string = "Neutral"; // 0x1035 MovS
	func_3903(var_50_int, var_202_string); // 0x1036 NEW_2
	var_203_int = 523589; // 0x1038 PushI
	SetMessage(var_203_int); // 0x1039 TObjFunc
	ClearReplies(); // 0x103b TObjFunc
	var_204_int = 523590; // 0x103d PushI
	var_205_int = 24826; // 0x103e PushI
	var_206_int = 24825; // 0x103f PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1040 TObjFunc
	return 0; // 0x1042 Return
	
Label_4163:
	var_207_int = 24826; // 0x1043 PushI
	var_208_bool = var_49_float == var_207_int; // 0x1044 Eq
	if(var_208_bool == 0) goto Label_4186; // 0x1045 JumpB
	var_209_string = ""; // 0x1046 PushV
	var_209_string = "Untrust"; // 0x1047 MovS
	func_3903(var_50_int, var_209_string); // 0x1048 NEW_2
	var_210_int = 523591; // 0x104a PushI
	SetMessage(var_210_int); // 0x104b TObjFunc
	ClearReplies(); // 0x104d TObjFunc
	var_211_int = 523592; // 0x104f PushI
	var_212_int = 24828; // 0x1050 PushI
	var_213_int = 24827; // 0x1051 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1052 TObjFunc
	var_214_int = 523594; // 0x1054 PushI
	var_215_int = -1; // 0x1055 PushI
	var_216_int = 24829; // 0x1056 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1057 TObjFunc
	return 0; // 0x1059 Return
	
Label_4186:
	var_217_int = 24828; // 0x105a PushI
	var_218_bool = var_49_float == var_217_int; // 0x105b Eq
	if(var_218_bool == 0) goto Label_4209; // 0x105c JumpB
	var_219_string = ""; // 0x105d PushV
	var_219_string = "Sly"; // 0x105e MovS
	func_3903(var_50_int, var_219_string); // 0x105f NEW_2
	var_220_int = 523593; // 0x1061 PushI
	SetMessage(var_220_int); // 0x1062 TObjFunc
	ClearReplies(); // 0x1064 TObjFunc
	var_221_int = 523596; // 0x1066 PushI
	var_222_int = -1; // 0x1067 PushI
	var_223_int = 24831; // 0x1068 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1069 TObjFunc
	var_224_int = 523597; // 0x106b PushI
	var_225_int = -1; // 0x106c PushI
	var_226_int = 24832; // 0x106d PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x106e TObjFunc
	return 0; // 0x1070 Return
	
Label_4209:
	var_3_object = 1; // 0x1071 TMovB
	var_227_bool = 0; // 0x1072 PushV
	func_5163(var_227_bool); // 0x1073 NEW_2
	if(var_227_bool == 0) goto Label_4217; // 0x1075 JumpB
	lshStopAnimation(); // 0x1076 Func
	goto Label_4219; // 0x1078 Jump
	
Label_4219:
	return 0; // 0x107b Return
	
Label_4217:
	StopAnimation(); // 0x1079 Func
	
Label_4221:
	return 0; // 0x107d Return
}


task_21_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x1120 PushI
	if(var_51_int == 0) goto Label_4424; // 0x1121 JumpB
	func_4906(); // 0x1123 NEW_2
	var_53_int = 42563; // 0x1125 PushI
	var_54_bool = var_49_float == var_53_int; // 0x1126 Eq
	if(var_54_bool == 0) goto Label_4412; // 0x1127 JumpB
	var_55_string = ""; // 0x1128 PushV
	var_55_string = "Neutral"; // 0x1129 MovS
	func_4361(var_50_int, var_55_string); // 0x112a NEW_2
	var_72_int = 540554; // 0x112c PushI
	SetMessage(var_72_int); // 0x112d TObjFunc
	ClearReplies(); // 0x112f TObjFunc
	var_73_int = 540555; // 0x1131 PushI
	var_74_int = -1; // 0x1132 PushI
	var_75_int = 42564; // 0x1133 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1134 TObjFunc
	var_76_int = 540794; // 0x1136 PushI
	var_77_int = -1; // 0x1137 PushI
	var_78_int = 42843; // 0x1138 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x1139 TObjFunc
	return 0; // 0x113b Return
	
Label_4412:
	var_3_object = 1; // 0x113c TMovB
	var_79_bool = 0; // 0x113d PushV
	func_5163(var_79_bool); // 0x113e NEW_2
	if(var_79_bool == 0) goto Label_4420; // 0x1140 JumpB
	lshStopAnimation(); // 0x1141 Func
	goto Label_4422; // 0x1143 Jump
	
Label_4422:
	return 0; // 0x1146 Return
	
Label_4420:
	StopAnimation(); // 0x1144 Func
	
Label_4424:
	return 0; // 0x1148 Return
}


task_22_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	func_5154(); // 0x11c7 NEW_2
	TaskCall(0); // 0x11ca TaskCall
	func_0(); // 0x11cb NEW_2
	TaskReturn(); // 0x11cc TaskReturn
	return 0; // 0x11ce Return
}


task_22_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int, var_49_object)
{
	var_50_bool = 0; var_51_bool = 0; // 0x11cf PushV
	IsOverrideActive(var_51_bool); // 0x11d0 Func
	var_52_bool = var_51_bool == 0; // 0x11d2 Not
	if(var_52_bool == 0) goto Label_4574; // 0x11d3 JumpB
	EventDisable(0); // 0x11d4 EventDisable
	var_53_bool = 0; var_54_object = Obj(); // 0x11d5 PushV
	var_54_object = var_49_object; // 0x11d6 Mov
	func_4612(var_54_object); // 0x11d7 NEW_2
	EventEnable(0); // 0x11d9 EventEnable
	var_67_object = Obj(); // 0x11da PushV
	var_67_object = var_49_object; // 0x11db Mov
	func_5857(var_67_object); // 0x11dc NEW_2
	
Label_4574:
	return 2; // 0x11de Return
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	return 0; // 0x1422 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	var_49_bool = GlobalVars[2]; // 0x1149 PushGE
	var_49_bool = 0; // 0x114a MovB
	GlobalVars[2] = var_49_bool; // 0x114b PopGE
	func_4432(var_46_float, var_47_float, var_48_int); // 0x114d NEW_2
	return 0; // 0x114f Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_91_bool = 0; // 0x2 PushV
	func_4632(var_91_bool); // 0x3 NEW_2
	var_92_bool = var_91_bool == 0; // 0x5 Not
	if(var_92_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_5634(var_552_bool)
{
	var_554_int = 0; var_555_string = ""; // 0x1603 PushV
	var_555_string = "b5q02"; // 0x1604 MovS
	func_4947(var_554_int, var_555_string); // 0x1605 NEW_2
	var_556_int = 0; // 0x1607 PushI
	var_557_bool = var_554_int == var_556_int; // 0x1608 Eq
	if(var_557_bool == 0) goto Label_5644; // 0x1609 JumpB
	var_552_bool = 1; // 0x160a MovB
	return 0; // 0x160b Return
	
Label_5644:
	var_552_bool = 0; // 0x160c MovB
	return 0; // 0x160d Return
}


func_4612(var_53_bool)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x1204 PushV
	GetPosition(var_56_cvector); // 0x1205 ObjFunc
	var_57_bool = 0; var_58_cvector = CVector(0,0,0); // 0x1207 PushV
	var_58_cvector = var_56_cvector; // 0x1208 Mov
	func_4602(var_57_bool, var_58_cvector); // 0x1209 NEW_2
	var_53_bool = var_57_bool; // 0x120a Mov
	return 2; // 0x120c Return
}


func_5124(var_195_int)
{
	var_196_int = 0; var_197_bool = 0; var_198_int = 0; var_199_bool = 0; // 0x1404 PushV
	var_198_int = 0; // 0x1405 MovI
	
Label_5126:
	var_200_string = "all"; // 0x1406 PushS
	var_201_string = ""; var_202_int = 0; // 0x1407 PushV
	var_202_int = var_198_int; // 0x1408 Mov
	func_5117(var_201_string, var_202_int); // 0x1409 NEW_2
	HasAnimation(var_199_bool, var_200_string, var_201_string); // 0x140b Func
	var_206_bool = var_199_bool == 0; // 0x140d Not
	if(var_206_bool == 0) goto Label_5136; // 0x140e JumpB
	goto Label_5139; // 0x140f Jump
	
Label_5139:
	var_195_int = var_198_int; // 0x1413 Mov
	return 4; // 0x1414 Return
	
Label_5136:
	var_207_int = 1; // 0x1410 PushI
	var_198_int = var_198_int + var_207_int; // 0x1411 Add2
	goto Label_5126; // 0x1412 Jump
}


func_4621()
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x120d PushV
	GetPosition(var_83_cvector); // 0x120e ObjFunc
	GetPosition(var_84_cvector); // 0x1210 Func
	var_85_cvector = var_83_cvector - var_84_cvector; // 0x1212 Sub2
	var_86_float = GetByIndex(var_85_cvector, 0); // 0x1213 PushE
	var_87_float = GetByIndex(var_85_cvector, 2); // 0x1214 PushE
	RotateAsync(var_86_float, var_87_float); // 0x1215 Func
	return 6; // 0x1217 Return
}


func_5646(var_561_bool)
{
	var_563_int = 0; var_564_string = ""; // 0x160f PushV
	var_564_string = "b5q02"; // 0x1610 MovS
	func_4947(var_563_int, var_564_string); // 0x1611 NEW_2
	var_565_int = 2; // 0x1613 PushI
	var_566_bool = var_563_int == var_565_int; // 0x1614 Eq
	if(var_566_bool == 0) goto Label_5656; // 0x1615 JumpB
	var_561_bool = 1; // 0x1616 MovB
	return 0; // 0x1617 Return
	
Label_5656:
	var_561_bool = 0; // 0x1618 MovB
	return 0; // 0x1619 Return
}


func_13(var_0_bool, var_132_bool, var_133_cvector, var_134_cvector)
{
	var_136_bool = 0; var_137_bool = 0; // 0xd PushV
	var_0_bool = 1; // 0xe TMovB
	var_138_int = 21; // 0xf PushI
	var_139_float = 0.5; // 0x10 PushF
	SetTimer(var_138_int, var_139_float); // 0x11 Func
	
Label_19:
	var_140_bool = 0; var_141_cvector = CVector(0,0,0); // 0x13 PushV
	var_141_cvector = var_133_cvector; // 0x14 Mov
	func_4602(var_140_bool, var_141_cvector); // 0x15 NEW_2
	var_150_bool = var_140_bool == 0; // 0x17 Not
	if(var_150_bool == 0) goto Label_26; // 0x18 JumpB
	goto Label_19; // 0x19 Jump
	
Label_26:
	var_151_bool = 0; // 0x1a PushB
	MovePoint(var_133_cvector, var_151_bool, var_137_bool); // 0x1b Func
	var_152_bool = var_137_bool; // 0x1d Push
	if(var_152_bool == 0) goto Label_32; // 0x1e JumpB
	goto Label_33; // 0x1f Jump
	
Label_33:
	var_153_int = 20; // 0x21 PushI
	KillTimer(var_153_int); // 0x22 Func
	var_154_int = 21; // 0x24 PushI
	KillTimer(var_154_int); // 0x25 Func
	var_0_bool = 0; // 0x27 TMovB
	WaitForAnimEnd(var_137_bool); // 0x28 Func
	var_155_bool = var_137_bool == 0; // 0x2a Not
	if(var_155_bool == 0) goto Label_46; // 0x2b JumpB
	var_132_bool = 0; // 0x2c MovB
	return 2; // 0x2d Return
	
Label_46:
	var_156_float = GetByIndex(var_134_cvector, 0); // 0x2e PushE
	var_157_float = GetByIndex(var_134_cvector, 2); // 0x2f PushE
	Rotate(var_156_float, var_157_float, var_137_bool); // 0x30 Func
	var_158_bool = var_137_bool == 0; // 0x32 Not
	if(var_158_bool == 0) goto Label_54; // 0x33 JumpB
	var_132_bool = 0; // 0x34 MovB
	return 2; // 0x35 Return
	
Label_54:
	var_132_bool = 1; // 0x36 MovB
	return 2; // 0x37 Return
	
Label_32:
	goto Label_19; // 0x20 Jump
}


func_3086(var_0_bool, var_635_int, var_636_object)
{
	var_638_object = Obj(); var_639_bool = 0; var_640_int = 0; var_641_bool = 0; var_642_object = Obj(); var_643_bool = 0; var_644_int = 0; var_645_bool = 0; // 0xc0e PushV
	var_0_bool = var_636_object; // 0xc0f TMov
	var_646_bool = 0; var_647_object = Obj(); var_648_float = 0; // 0xc10 PushV
	var_647_object = var_636_object; // 0xc11 Mov
	var_648_float = 70.0; // 0xc12 MovF
	func_4637(var_647_object, var_648_float); // 0xc13 NEW_2
	var_649_bool = var_646_bool == 0; // 0xc15 Not
	if(var_649_bool == 0) goto Label_3097; // 0xc16 JumpB
	var_635_int = -2; // 0xc17 MovI
	return 8; // 0xc18 Return
	
Label_3097:
	CreateDialog(var_642_object); // 0xc19 Func
	var_650_int = 0; // 0xc1b PushV
	func_5157(var_650_int); // 0xc1c NEW_2
	SetNPCName(var_650_int); // 0xc1e ObjFunc
	var_651_int = 0; // 0xc20 PushV
	func_5155(var_651_int); // 0xc21 NEW_2
	SetNPCDescription(var_651_int); // 0xc23 ObjFunc
	var_652_string = ""; // 0xc25 PushV
	func_5159(var_652_string); // 0xc26 NEW_2
	SetPhoto(var_652_string); // 0xc28 ObjFunc
	var_653_string = ""; // 0xc2a PushV
	func_5161(var_653_string); // 0xc2b NEW_2
	SetPhoto2(var_653_string); // 0xc2d ObjFunc
	var_654_int = 0; // 0xc2f PushV
	func_5840(var_654_int); // 0xc30 NEW_2
	SetPlayerName(var_654_int); // 0xc32 ObjFunc
	var_644_int = -1; // 0xc34 MovI
	IsOverrideActive(var_643_bool); // 0xc35 Func
	var_655_bool = var_643_bool; // 0xc37 Push
	if(var_655_bool == 0) goto Label_3131; // 0xc38 JumpB
	var_635_int = -2; // 0xc39 MovI
	return 8; // 0xc3a Return
	
Label_3131:
	DoDialog(var_642_object); // 0xc3b Func
	var_656_bool = 0; var_657_object = Obj(); // 0xc3d PushV
	var_658_object = Obj(); // 0xc3e PushV
	func_4913(var_658_object); // 0xc3f NEW_2
	var_657_object = var_658_object; // 0xc40 Mov
	func_4722(var_656_bool, var_657_object); // 0xc42 NEW_2
	var_659_object = Obj(); var_660_object = Obj(); // 0xc44 PushV
	var_659_object = var_636_object; // 0xc45 Mov
	var_660_object = var_642_object; // 0xc46 Mov
	TaskCall(17); // 0xc47 TaskCall
	func_3167(var_661_object, var_662_object, var_663_string, var_664_bool, var_659_object, var_660_object); // 0xc48 NEW_2
	TaskReturn(); // 0xc49 TaskReturn
	IsDialogEnd(var_645_bool); // 0xc4b ObjFunc
	
Label_3149:
	var_729_bool = var_645_bool == 0; // 0xc4d Not
	if(var_729_bool == 0) goto Label_3156; // 0xc4e JumpB
	sync(); // 0xc4f Func
	IsDialogEnd(var_645_bool); // 0xc51 ObjFunc
	goto Label_3149; // 0xc53 Jump
	
Label_3156:
	var_730_object = Obj(); // 0xc54 PushV
	var_730_object = var_636_object; // 0xc55 Mov
	func_4705(); // 0xc56 NEW_2
	StopDialog(var_642_object); // 0xc58 Func
	GetReturnValue(var_644_int); // 0xc5a ObjFunc
	var_635_int = var_644_int; // 0xc5c Mov
	return 8; // 0xc5d Return
}


func_5141(var_77_string, var_78_int)
{
	var_79_int = 0; // 0x1416 PushI
	var_80_bool = var_78_int == var_79_int; // 0x1417 Eq
	if(var_80_bool == 0) goto Label_5149; // 0x1418 JumpB
	var_81_string = "pt_"; // 0x1419 PushS
	var_82_string = GlobalVars[0]; // 0x141a PushGE
	var_77_string = var_81_string + var_82_string; // 0x141b Add2
	goto Label_5153; // 0x141c Jump
	
Label_5153:
	return 0; // 0x1421 Return
	
Label_5149:
	var_83_string = "pt_"; // 0x141d PushS
	var_84_string = GlobalVars[0]; // 0x141e PushGE
	var_85_int = var_83_string + var_84_string; // 0x141f Add
	var_77_string = var_85_int + var_78_int; // 0x1420 Add2
}


func_4632(var_87_bool)
{
	var_88_bool = 0; var_89_bool = 0; // 0x1218 PushV
	IsLoaded(var_89_bool); // 0x1219 Func
	var_87_bool = var_89_bool; // 0x121b Mov
	return 2; // 0x121c Return
}


func_5658()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x161a PushV
	var_67_int = 315; // 0x161b PushI
	var_68_int = 1; // 0x161c PushI
	var_69_int = 522057; // 0x161d PushI
	CreateDiaryEntry(var_66_object, var_67_int, var_68_int, var_69_int); // 0x161e Func
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; // 0x1620 PushV
	var_71_object = var_66_object; // 0x1621 Mov
	var_72_int = 313; // 0x1622 MovI
	func_5762(var_70_bool, var_71_object, var_72_int); // 0x1623 NEW_2
	return 2; // 0x1625 Return
}


func_541(var_0_bool, var_297_int, var_298_object)
{
	var_300_object = Obj(); var_301_bool = 0; var_302_int = 0; var_303_bool = 0; var_304_object = Obj(); var_305_bool = 0; var_306_int = 0; var_307_bool = 0; // 0x21d PushV
	var_0_bool = var_298_object; // 0x21e TMov
	var_308_bool = 0; var_309_object = Obj(); var_310_float = 0; // 0x21f PushV
	var_309_object = var_298_object; // 0x220 Mov
	var_310_float = 70.0; // 0x221 MovF
	func_4637(var_309_object, var_310_float); // 0x222 NEW_2
	var_311_bool = var_308_bool == 0; // 0x224 Not
	if(var_311_bool == 0) goto Label_552; // 0x225 JumpB
	var_297_int = -2; // 0x226 MovI
	return 8; // 0x227 Return
	
Label_552:
	CreateDialog(var_304_object); // 0x228 Func
	var_312_int = 0; // 0x22a PushV
	func_5157(var_312_int); // 0x22b NEW_2
	SetNPCName(var_312_int); // 0x22d ObjFunc
	var_313_int = 0; // 0x22f PushV
	func_5155(var_313_int); // 0x230 NEW_2
	SetNPCDescription(var_313_int); // 0x232 ObjFunc
	var_314_string = ""; // 0x234 PushV
	func_5159(var_314_string); // 0x235 NEW_2
	SetPhoto(var_314_string); // 0x237 ObjFunc
	var_315_string = ""; // 0x239 PushV
	func_5161(var_315_string); // 0x23a NEW_2
	SetPhoto2(var_315_string); // 0x23c ObjFunc
	var_316_int = 0; // 0x23e PushV
	func_5840(var_316_int); // 0x23f NEW_2
	SetPlayerName(var_316_int); // 0x241 ObjFunc
	var_306_int = -1; // 0x243 MovI
	IsOverrideActive(var_305_bool); // 0x244 Func
	var_317_bool = var_305_bool; // 0x246 Push
	if(var_317_bool == 0) goto Label_586; // 0x247 JumpB
	var_297_int = -2; // 0x248 MovI
	return 8; // 0x249 Return
	
Label_586:
	DoDialog(var_304_object); // 0x24a Func
	var_318_bool = 0; var_319_object = Obj(); // 0x24c PushV
	var_320_object = Obj(); // 0x24d PushV
	func_4913(var_320_object); // 0x24e NEW_2
	var_319_object = var_320_object; // 0x24f Mov
	func_4722(var_318_bool, var_319_object); // 0x251 NEW_2
	var_321_object = Obj(); var_322_object = Obj(); // 0x253 PushV
	var_321_object = var_298_object; // 0x254 Mov
	var_322_object = var_304_object; // 0x255 Mov
	TaskCall(7); // 0x256 TaskCall
	func_622(var_323_object, var_324_object, var_325_string, var_326_bool, var_321_object, var_322_object); // 0x257 NEW_2
	TaskReturn(); // 0x258 TaskReturn
	IsDialogEnd(var_307_bool); // 0x25a ObjFunc
	
Label_604:
	var_391_bool = var_307_bool == 0; // 0x25c Not
	if(var_391_bool == 0) goto Label_611; // 0x25d JumpB
	sync(); // 0x25e Func
	IsDialogEnd(var_307_bool); // 0x260 ObjFunc
	goto Label_604; // 0x262 Jump
	
Label_611:
	var_392_object = Obj(); // 0x263 PushV
	var_392_object = var_298_object; // 0x264 Mov
	func_4705(); // 0x265 NEW_2
	StopDialog(var_304_object); // 0x267 Func
	GetReturnValue(var_306_int); // 0x269 ObjFunc
	var_297_int = var_306_int; // 0x26b Mov
	return 8; // 0x26c Return
}


func_4637(var_81_bool, var_83_float)
{
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_bool = 0; var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_bool = 0; // 0x121d PushV
	GetPosition(var_94_cvector); // 0x121e ObjFunc
	GetEyesHeight(var_93_float); // 0x1220 ObjFunc
	var_102_float = GetByIndex(var_94_cvector, 1); // 0x1222 PushE
	var_102_float = var_102_float + var_93_float; // 0x1223 Add2
	SetByIndex(var_94_cvector, 1) = var_102_float; // 0x1224 PopE
	GetPosition(var_95_cvector); // 0x1225 Func
	GetEyesHeight(var_93_float); // 0x1227 Func
	var_103_float = GetByIndex(var_95_cvector, 1); // 0x1229 PushE
	var_103_float = var_103_float + var_93_float; // 0x122a Add2
	SetByIndex(var_95_cvector, 1) = var_103_float; // 0x122b PopE
	var_96_cvector = var_94_cvector - var_95_cvector; // 0x122c Sub2
	var_104_float = GetByIndex(var_96_cvector, 1); // 0x122d PushE
	var_104_float = 0; // 0x122e MovI
	SetByIndex(var_96_cvector, 1) = var_104_float; // 0x122f PopE
	var_105_int = var_96_cvector | var_96_cvector; // 0x1230 Or
	var_106_float = sqrt(var_105_int); // 0x1231 Sqrt
	var_96_cvector = var_96_cvector / var_96_cvector; // 0x1232 Div2
	var_97_cvector = -var_96_cvector; // 0x1233 Neg2
	var_107_float = var_96_cvector * var_83_float; // 0x1234 Mult
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); // 0x1235 PushV
	var_110_cvector = CVector(0.0, 1.0, 0.0); // 0x1236 PushVec
	var_109_cvector = var_97_cvector ^ var_110_cvector; // 0x1237 Xor2
	func_4919(var_108_cvector, var_109_cvector); // 0x1238 NEW_2
	var_116_int = 25; // 0x123a PushI
	var_117_float = var_108_cvector * var_116_int; // 0x123b Mult
	var_118_int = var_107_float + var_117_float; // 0x123c Add
	var_119_cvector = CVector(0.0, 10.0, 0.0); // 0x123d PushVec
	var_98_cvector = var_118_int - var_119_cvector; // 0x123e Sub2
	var_99_cvector = var_95_cvector + var_98_cvector; // 0x123f Add2
	IsOverrideActive(var_100_bool); // 0x1240 Func
	var_120_bool = var_100_bool; // 0x1242 Push
	if(var_120_bool == 0) goto Label_4678; // 0x1243 JumpB
	var_81_bool = 0; // 0x1244 MovB
	return 18; // 0x1245 Return
	
Label_4678:
	StopWorld(); // 0x1246 Func
	CameraTransit(var_99_cvector, var_97_cvector); // 0x1248 Func
	var_121_float = GetByIndex(var_98_cvector, 0); // 0x124a PushE
	var_122_float = GetByIndex(var_98_cvector, 2); // 0x124b PushE
	Rotate(var_121_float, var_122_float); // 0x124c Func
	var_123_bool = 0; // 0x124e PushV
	func_5163(var_123_bool); // 0x124f NEW_2
	if(var_123_bool == 0) goto Label_4691; // 0x1251 JumpB
	goto Label_4699; // 0x1252 Jump
	
Label_4699:
	CameraWaitForPlayFinish(); // 0x125b Func
	ResumeWorld(); // 0x125d Func
	var_81_bool = 1; // 0x125f MovB
	return 18; // 0x1260 Return
	
Label_4691:
	var_124_string = "head"; // 0x1253 PushS
	HasAnimationTrack(var_101_bool, var_124_string); // 0x1254 Func
	var_125_bool = var_101_bool; // 0x1256 Push
	if(var_125_bool == 0) goto Label_4699; // 0x1257 JumpB
	var_126_string = "head"; // 0x1258 PushS
	LookAsyncCamera(var_126_string); // 0x1259 Func
}


func_2079(var_2_object, var_530_string)
{
	var_531_bool = 0; // 0x820 PushV
	func_5163(var_531_bool); // 0x821 NEW_2
	var_532_bool = var_531_bool == 0; // 0x823 Not
	if(var_532_bool == 0) goto Label_2086; // 0x824 JumpB
	return 0; // 0x825 Return
	
Label_2086:
	var_533_bool = var_530_string == var_2_object; // 0x826 Eq
	if(var_533_bool == 0) goto Label_2089; // 0x827 JumpB
	return 0; // 0x828 Return
	
Label_2089:
	var_534_string = ""; var_535_bool = 0; // 0x829 PushV
	var_534_string = var_530_string; // 0x82a Mov
	var_536_string = ""; // 0x82b PushS
	var_537_bool = var_530_string == var_536_string; // 0x82c Eq
	if(var_537_bool == 0) goto Label_2096; // 0x82d JumpB
	var_535_bool = 0; // 0x82e MovB
	goto Label_2097; // 0x82f Jump
	
Label_2097:
	func_4876(var_534_string, var_535_bool); // 0x831 NEW_2
	var_2_object = var_530_string; // 0x833 TMov
	return 0; // 0x834 Return
	
Label_2096:
	var_535_bool = 1; // 0x830 MovB
}


func_5155(var_129_int)
{
	var_129_int = 515547; // 0x1423 MovI
	return 0; // 0x1424 Return
}


func_2595(var_0_bool, var_70_int, var_71_object)
{
	var_73_object = Obj(); var_74_bool = 0; var_75_int = 0; var_76_bool = 0; var_77_object = Obj(); var_78_bool = 0; var_79_int = 0; var_80_bool = 0; // 0xa23 PushV
	var_0_bool = var_71_object; // 0xa24 TMov
	var_81_bool = 0; var_82_object = Obj(); var_83_float = 0; // 0xa25 PushV
	var_82_object = var_71_object; // 0xa26 Mov
	var_83_float = 70.0; // 0xa27 MovF
	func_4637(var_82_object, var_83_float); // 0xa28 NEW_2
	var_127_bool = var_81_bool == 0; // 0xa2a Not
	if(var_127_bool == 0) goto Label_2606; // 0xa2b JumpB
	var_70_int = -2; // 0xa2c MovI
	return 8; // 0xa2d Return
	
Label_2606:
	CreateDialog(var_77_object); // 0xa2e Func
	var_128_int = 0; // 0xa30 PushV
	func_5157(var_128_int); // 0xa31 NEW_2
	SetNPCName(var_128_int); // 0xa33 ObjFunc
	var_129_int = 0; // 0xa35 PushV
	func_5155(var_129_int); // 0xa36 NEW_2
	SetNPCDescription(var_129_int); // 0xa38 ObjFunc
	var_130_string = ""; // 0xa3a PushV
	func_5159(var_130_string); // 0xa3b NEW_2
	SetPhoto(var_130_string); // 0xa3d ObjFunc
	var_131_string = ""; // 0xa3f PushV
	func_5161(var_131_string); // 0xa40 NEW_2
	SetPhoto2(var_131_string); // 0xa42 ObjFunc
	var_132_int = 0; // 0xa44 PushV
	func_5840(var_132_int); // 0xa45 NEW_2
	SetPlayerName(var_132_int); // 0xa47 ObjFunc
	var_79_int = -1; // 0xa49 MovI
	IsOverrideActive(var_78_bool); // 0xa4a Func
	var_140_bool = var_78_bool; // 0xa4c Push
	if(var_140_bool == 0) goto Label_2640; // 0xa4d JumpB
	var_70_int = -2; // 0xa4e MovI
	return 8; // 0xa4f Return
	
Label_2640:
	DoDialog(var_77_object); // 0xa50 Func
	var_141_bool = 0; var_142_object = Obj(); // 0xa52 PushV
	var_143_object = Obj(); // 0xa53 PushV
	func_4913(var_143_object); // 0xa54 NEW_2
	var_142_object = var_143_object; // 0xa55 Mov
	func_4722(var_141_bool, var_142_object); // 0xa57 NEW_2
	var_236_object = Obj(); var_237_object = Obj(); // 0xa59 PushV
	var_236_object = var_71_object; // 0xa5a Mov
	var_237_object = var_77_object; // 0xa5b Mov
	TaskCall(13); // 0xa5c TaskCall
	func_2676(var_238_object, var_239_object, var_240_string, var_241_bool, var_236_object, var_237_object); // 0xa5d NEW_2
	TaskReturn(); // 0xa5e TaskReturn
	IsDialogEnd(var_80_bool); // 0xa60 ObjFunc
	
Label_2658:
	var_285_bool = var_80_bool == 0; // 0xa62 Not
	if(var_285_bool == 0) goto Label_2665; // 0xa63 JumpB
	sync(); // 0xa64 Func
	IsDialogEnd(var_80_bool); // 0xa66 ObjFunc
	goto Label_2658; // 0xa68 Jump
	
Label_2665:
	var_286_object = Obj(); // 0xa69 PushV
	var_286_object = var_71_object; // 0xa6a Mov
	func_4705(); // 0xa6b NEW_2
	StopDialog(var_77_object); // 0xa6d Func
	GetReturnValue(var_79_int); // 0xa6f ObjFunc
	var_70_int = var_79_int; // 0xa71 Mov
	return 8; // 0xa72 Return
}


func_5157(var_128_int)
{
	var_128_int = 502872; // 0x1425 MovI
	return 0; // 0x1426 Return
}


func_5159(var_130_string)
{
	var_130_string = "ui/NPC_MladVlad.png"; // 0x1427 MovS
	return 0; // 0x1428 Return
}


func_5671()
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x1627 PushV
	var_89_int = 249; // 0x1628 PushI
	var_90_int = 2; // 0x1629 PushI
	var_91_int = 520665; // 0x162a PushI
	CreateDiaryEntry(var_88_object, var_89_int, var_90_int, var_91_int); // 0x162b Func
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; // 0x162d PushV
	var_93_object = var_88_object; // 0x162e Mov
	var_94_int = -1; // 0x162f MovI
	func_5762(var_92_bool, var_93_object, var_94_int); // 0x1630 NEW_2
	return 2; // 0x1632 Return
}


func_5161(var_131_string)
{
	var_131_string = "ui/NPC_MladVlad_b.png"; // 0x1429 MovS
	return 0; // 0x142a Return
}


func_5163(var_123_bool)
{
	var_123_bool = 1; // 0x142b MovB
	return 0; // 0x142c Return
}


func_5165()
{
	var_77_object = Obj(); var_78_string = ""; var_79_float = 0; // 0x142e PushV
	var_80_object = Obj(); // 0x142f PushV
	func_5790(var_80_object); // 0x1430 NEW_2
	var_77_object = var_80_object; // 0x1431 Mov
	var_78_string = "pt_map_burah_home"; // 0x1433 MovS
	var_79_float = 2; // 0x1434 MovI
	func_5807(var_77_object, var_78_string, var_79_float); // 0x1435 NEW_2
	var_100_object = Obj(); // 0x1437 PushV
	func_5790(var_100_object); // 0x1438 NEW_2
	ShowMap(var_100_object); // 0x143a ObjFunc
	return 0; // 0x143c Return
}


func_5684()
{
	var_188_object = Obj(); var_189_object = Obj(); // 0x1634 PushV
	var_190_int = 252; // 0x1635 PushI
	var_191_int = 2; // 0x1636 PushI
	var_192_int = 520668; // 0x1637 PushI
	CreateDiaryEntry(var_189_object, var_190_int, var_191_int, var_192_int); // 0x1638 Func
	var_193_bool = 0; var_194_object = Obj(); var_195_int = 0; // 0x163a PushV
	var_194_object = var_189_object; // 0x163b Mov
	var_195_int = 249; // 0x163c MovI
	func_5762(var_193_bool, var_194_object, var_195_int); // 0x163d NEW_2
	return 2; // 0x163f Return
}


func_5181()
{
	var_367_string = "oob1MladVlad1"; // 0x143e PushS
	var_368_int = 1; // 0x143f PushI
	SetVariable(var_367_string, var_368_int); // 0x1440 Func
	return 0; // 0x1442 Return
}


func_5697()
{
	var_110_object = Obj(); var_111_object = Obj(); // 0x1641 PushV
	var_112_int = 250; // 0x1642 PushI
	var_113_int = 2; // 0x1643 PushI
	var_114_int = 520666; // 0x1644 PushI
	CreateDiaryEntry(var_111_object, var_112_int, var_113_int, var_114_int); // 0x1645 Func
	var_115_bool = 0; var_116_object = Obj(); var_117_int = 0; // 0x1647 PushV
	var_116_object = var_111_object; // 0x1648 Mov
	var_117_int = 249; // 0x1649 MovI
	func_5762(var_115_bool, var_116_object, var_117_int); // 0x164a NEW_2
	return 2; // 0x164c Return
}


func_5187()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x1443 PushV
	var_65_object = Obj(); // 0x1444 PushV
	func_5790(var_65_object); // 0x1445 NEW_2
	var_64_object = var_65_object; // 0x1446 Mov
	var_72_string = "b1MladVladGotoGrif"; // 0x1448 PushS
	var_73_string = "pt_map_grif"; // 0x1449 PushS
	var_74_int = 3; // 0x144a PushI
	var_75_int = 520047; // 0x144b PushI
	var_76_float = 0; // 0x144c PushV
	func_5097(var_76_float); // 0x144d NEW_2
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x144f ObjFunc
	return 2; // 0x1451 Return
}


func_5710()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x164e PushV
	var_61_int = 293; // 0x164f PushI
	var_62_int = 2; // 0x1650 PushI
	var_63_int = 521491; // 0x1651 PushI
	CreateDiaryEntry(var_60_object, var_61_int, var_62_int, var_63_int); // 0x1652 Func
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; // 0x1654 PushV
	var_65_object = var_60_object; // 0x1655 Mov
	var_66_int = -1; // 0x1656 MovI
	func_5762(var_64_bool, var_65_object, var_66_int); // 0x1657 NEW_2
	return 2; // 0x1659 Return
}


func_5203()
{
	var_57_string = "oob1MladVlad2"; // 0x1454 PushS
	var_58_int = 1; // 0x1455 PushI
	SetVariable(var_57_string, var_58_int); // 0x1456 Func
	return 0; // 0x1458 Return
}


func_5209()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x1459 PushV
	var_59_string = "b2MladVladBurahHomeTalk"; // 0x145a PushS
	var_60_int = 1; // 0x145b PushI
	SetVariable(var_59_string, var_60_int); // 0x145c Func
	var_61_object = Obj(); // 0x145e PushV
	func_5790(var_61_object); // 0x145f NEW_2
	var_58_object = var_61_object; // 0x1460 Mov
	var_68_string = "b2BurahHome"; // 0x1462 PushS
	var_69_string = "pt_map_burah_home"; // 0x1463 PushS
	var_70_int = 3; // 0x1464 PushI
	var_71_int = 520460; // 0x1465 PushI
	var_72_float = 0; // 0x1466 PushV
	func_5097(var_72_float); // 0x1467 NEW_2
	AddMark(var_68_string, var_69_string, var_70_int, var_71_int, var_72_float); // 0x1469 ObjFunc
	return 2; // 0x146b Return
}


func_5723()
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x165b PushV
	var_110_int = 296; // 0x165c PushI
	var_111_int = 2; // 0x165d PushI
	var_112_int = 521494; // 0x165e PushI
	CreateDiaryEntry(var_109_object, var_110_int, var_111_int, var_112_int); // 0x165f Func
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0; // 0x1661 PushV
	var_114_object = var_109_object; // 0x1662 Mov
	var_115_int = 293; // 0x1663 MovI
	func_5762(var_113_bool, var_114_object, var_115_int); // 0x1664 NEW_2
	return 2; // 0x1666 Return
}


func_3167(var_0_bool, var_1_object, var_2_object, var_3_object, var_659_object, var_660_object)
{
	var_0_bool = var_660_object; // 0xc60 TMov
	var_1_object = var_659_object; // 0xc61 TMov
	var_3_object = 0; // 0xc62 TMovB
	var_665_int = 1; // 0xc63 PushI
	if(var_665_int == 0) goto Label_3250; // 0xc64 JumpB
	var_666_bool = 0; var_667_object = Obj(); // 0xc65 PushV
	var_667_object = var_1_object; // 0xc66 MovT
	func_5491(var_667_object); // 0xc67 NEW_2
	if(var_666_bool == 0) goto Label_3203; // 0xc69 JumpB
	var_672_object = Obj(); var_673_object = Obj(); // 0xc6a PushV
	var_672_object = var_1_object; // 0xc6b MovT
	var_673_object = var_0_bool; // 0xc6c MovT
	func_5391(); // 0xc6d NEW_2
	var_676_string = ""; // 0xc6f PushV
	var_676_string = "Rage"; // 0xc70 MovS
	func_3280(var_660_object, var_676_string); // 0xc71 NEW_2
	var_684_int = 521469; // 0xc73 PushI
	SetMessage(var_684_int); // 0xc74 TObjFunc
	ClearReplies(); // 0xc76 TObjFunc
	var_685_int = 523789; // 0xc78 PushI
	var_686_int = 25055; // 0xc79 PushI
	var_687_int = 25054; // 0xc7a PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0xc7b TObjFunc
	var_688_int = 523804; // 0xc7d PushI
	var_689_int = 25055; // 0xc7e PushI
	var_690_int = 25070; // 0xc7f PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0xc80 TObjFunc
	goto Label_3250; // 0xc82 Jump
	
Label_3250:
	var_691_bool = 0; // 0xcb2 PushV
	func_5163(var_691_bool); // 0xcb3 NEW_2
	if(var_691_bool == 0) goto Label_3265; // 0xcb5 JumpB
	
Label_3254:
	lshWaitForAnimEnd(); // 0xcb6 Func
	var_692_object = var_3_object; // 0xcb8 PushT
	if(var_692_object == 0) goto Label_3259; // 0xcb9 JumpB
	goto Label_3264; // 0xcba Jump
	
Label_3264:
	goto Label_3279; // 0xcc0 Jump
	
Label_3279:
	return 0; // 0xccf Return
	
Label_3259:
	var_693_string = ""; // 0xcbb PushV
	var_693_string = var_2_object; // 0xcbc MovT
	func_4860(var_693_string); // 0xcbd NEW_2
	goto Label_3254; // 0xcbf Jump
	
Label_3265:
	var_694_string = "all"; // 0xcc1 PushS
	var_695_string = "idle"; // 0xcc2 PushS
	PlayAnimation(var_694_string, var_695_string); // 0xcc3 Func
	
Label_3269:
	WaitForAnimEnd(); // 0xcc5 Func
	var_696_object = var_3_object; // 0xcc7 PushT
	if(var_696_object == 0) goto Label_3274; // 0xcc8 JumpB
	goto Label_3279; // 0xcc9 Jump
	
Label_3274:
	var_697_string = "all"; // 0xcca PushS
	var_698_string = "idle"; // 0xccb PushS
	PlayAnimation(var_697_string, var_698_string); // 0xccc Func
	goto Label_3269; // 0xcce Jump
	
Label_3203:
	var_699_string = ""; // 0xc83 PushV
	var_699_string = "Rage"; // 0xc84 MovS
	func_3280(var_660_object, var_699_string); // 0xc85 NEW_2
	var_700_int = 521474; // 0xc87 PushI
	SetMessage(var_700_int); // 0xc88 TObjFunc
	ClearReplies(); // 0xc8a TObjFunc
	var_701_bool = 0; var_702_object = Obj(); // 0xc8c PushV
	var_702_object = var_1_object; // 0xc8d MovT
	func_5503(var_702_object); // 0xc8e NEW_2
	if(var_701_bool == 0) goto Label_3222; // 0xc90 JumpB
	var_707_int = 521475; // 0xc91 PushI
	var_708_int = 22642; // 0xc92 PushI
	var_709_int = 22640; // 0xc93 PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0xc94 TObjFunc
	
Label_3222:
	var_710_bool = 0; // 0xc96 PushV
	var_710_bool = 0; // 0xc97 MovB
	var_711_bool = 0; var_712_object = Obj(); // 0xc98 PushV
	var_712_object = var_1_object; // 0xc99 MovT
	func_5503(var_712_object); // 0xc9a NEW_2
	var_713_bool = var_711_bool == 0; // 0xc9c Not
	if(var_713_bool == 0) goto Label_3236; // 0xc9d JumpB
	var_714_bool = 0; var_715_object = Obj(); // 0xc9e PushV
	var_715_object = var_1_object; // 0xc9f MovT
	func_5515(var_714_bool, var_715_object); // 0xca0 NEW_2
	if(var_714_bool == 0) goto Label_3236; // 0xca2 JumpB
	var_710_bool = 1; // 0xca3 MovB
	
Label_3236:
	if(var_710_bool == 0) goto Label_3242; // 0xca4 JumpB
	var_723_int = 521479; // 0xca5 PushI
	var_724_int = 22645; // 0xca6 PushI
	var_725_int = 22644; // 0xca7 PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0xca8 TObjFunc
	
Label_3242:
	var_726_int = 521476; // 0xcaa PushI
	var_727_int = -1; // 0xcab PushI
	var_728_int = 22641; // 0xcac PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0xcad TObjFunc
	goto Label_3250; // 0xcaf Jump
}


func_4705()
{
	var_287_bool = 0; var_288_bool = 0; // 0x1261 PushV
	CameraSwitchToNormal(); // 0x1262 Func
	var_289_bool = 0; // 0x1264 PushV
	func_5163(var_289_bool); // 0x1265 NEW_2
	if(var_289_bool == 0) goto Label_4713; // 0x1267 JumpB
	goto Label_4721; // 0x1268 Jump
	
Label_4721:
	return 2; // 0x1271 Return
	
Label_4713:
	var_290_string = "head"; // 0x1269 PushS
	HasAnimationTrack(var_288_bool, var_290_string); // 0x126a Func
	var_291_bool = var_288_bool; // 0x126c Push
	if(var_291_bool == 0) goto Label_4721; // 0x126d JumpB
	var_292_string = "head"; // 0x126e PushS
	UnlookAsync(var_292_string); // 0x126f Func
}


func_5736()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x1668 PushV
	var_84_int = 294; // 0x1669 PushI
	var_85_int = 2; // 0x166a PushI
	var_86_int = 521492; // 0x166b PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x166c Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x166e PushV
	var_88_object = var_83_object; // 0x166f Mov
	var_89_int = 293; // 0x1670 MovI
	func_5762(var_87_bool, var_88_object, var_89_int); // 0x1671 NEW_2
	return 2; // 0x1673 Return
}


func_5229()
{
	var_103_string = ""; var_104_bool = 0; // 0x146e PushV
	var_103_string = "burah_home@door1"; // 0x146f MovS
	var_104_bool = 0; // 0x1470 MovB
	func_4974(var_103_string, var_104_bool); // 0x1471 NEW_2
	return 0; // 0x1473 Return
}


func_622(var_0_bool, var_1_object, var_2_object, var_3_object, var_321_object, var_322_object)
{
	var_0_bool = var_322_object; // 0x26f TMov
	var_1_object = var_321_object; // 0x270 TMov
	var_3_object = 0; // 0x271 TMovB
	var_327_int = 1; // 0x272 PushI
	if(var_327_int == 0) goto Label_710; // 0x273 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x274 PushV
	var_329_object = var_1_object; // 0x275 MovT
	func_5562(var_329_object); // 0x276 NEW_2
	if(var_328_bool == 0) goto Label_653; // 0x278 JumpB
	var_336_string = ""; // 0x279 PushV
	var_336_string = "Untrust"; // 0x27a MovS
	func_740(var_322_object, var_336_string); // 0x27b NEW_2
	var_344_int = 520042; // 0x27d PushI
	SetMessage(var_344_int); // 0x27e TObjFunc
	ClearReplies(); // 0x280 TObjFunc
	var_345_int = 520043; // 0x282 PushI
	var_346_int = 21227; // 0x283 PushI
	var_347_int = 21225; // 0x284 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x285 TObjFunc
	var_348_int = 520044; // 0x287 PushI
	var_349_int = -1; // 0x288 PushI
	var_350_int = 21226; // 0x289 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x28a TObjFunc
	goto Label_710; // 0x28c Jump
	
Label_710:
	var_351_bool = 0; // 0x2c6 PushV
	func_5163(var_351_bool); // 0x2c7 NEW_2
	if(var_351_bool == 0) goto Label_725; // 0x2c9 JumpB
	
Label_714:
	lshWaitForAnimEnd(); // 0x2ca Func
	var_352_object = var_3_object; // 0x2cc PushT
	if(var_352_object == 0) goto Label_719; // 0x2cd JumpB
	goto Label_724; // 0x2ce Jump
	
Label_724:
	goto Label_739; // 0x2d4 Jump
	
Label_739:
	return 0; // 0x2e3 Return
	
Label_719:
	var_353_string = ""; // 0x2cf PushV
	var_353_string = var_2_object; // 0x2d0 MovT
	func_4860(var_353_string); // 0x2d1 NEW_2
	goto Label_714; // 0x2d3 Jump
	
Label_725:
	var_354_string = "all"; // 0x2d5 PushS
	var_355_string = "idle"; // 0x2d6 PushS
	PlayAnimation(var_354_string, var_355_string); // 0x2d7 Func
	
Label_729:
	WaitForAnimEnd(); // 0x2d9 Func
	var_356_object = var_3_object; // 0x2db PushT
	if(var_356_object == 0) goto Label_734; // 0x2dc JumpB
	goto Label_739; // 0x2dd Jump
	
Label_734:
	var_357_string = "all"; // 0x2de PushS
	var_358_string = "idle"; // 0x2df PushS
	PlayAnimation(var_357_string, var_358_string); // 0x2e0 Func
	goto Label_729; // 0x2e2 Jump
	
Label_653:
	var_359_bool = 0; var_360_object = Obj(); // 0x28d PushV
	var_360_object = var_1_object; // 0x28e MovT
	func_5574(var_360_object); // 0x28f NEW_2
	if(var_359_bool == 0) goto Label_683; // 0x291 JumpB
	var_365_object = Obj(); var_366_object = Obj(); // 0x292 PushV
	var_365_object = var_1_object; // 0x293 MovT
	var_366_object = var_0_bool; // 0x294 MovT
	func_5181(); // 0x295 NEW_2
	var_369_string = ""; // 0x297 PushV
	var_369_string = "Neutral"; // 0x298 MovS
	func_740(var_322_object, var_369_string); // 0x299 NEW_2
	var_370_int = 519876; // 0x29b PushI
	SetMessage(var_370_int); // 0x29c TObjFunc
	ClearReplies(); // 0x29e TObjFunc
	var_371_int = 519877; // 0x2a0 PushI
	var_372_int = 21042; // 0x2a1 PushI
	var_373_int = 21041; // 0x2a2 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x2a3 TObjFunc
	var_374_int = 519905; // 0x2a5 PushI
	var_375_int = 21042; // 0x2a6 PushI
	var_376_int = 21073; // 0x2a7 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x2a8 TObjFunc
	goto Label_710; // 0x2aa Jump
	
Label_683:
	var_377_string = ""; // 0x2ab PushV
	var_377_string = "Neutral"; // 0x2ac MovS
	func_740(var_322_object, var_377_string); // 0x2ad NEW_2
	var_378_int = 519906; // 0x2af PushI
	SetMessage(var_378_int); // 0x2b0 TObjFunc
	ClearReplies(); // 0x2b2 TObjFunc
	var_379_bool = 0; var_380_object = Obj(); // 0x2b4 PushV
	var_380_object = var_1_object; // 0x2b5 MovT
	func_5586(var_380_object); // 0x2b6 NEW_2
	if(var_379_bool == 0) goto Label_702; // 0x2b8 JumpB
	var_385_int = 519907; // 0x2b9 PushI
	var_386_int = 21077; // 0x2ba PushI
	var_387_int = 21076; // 0x2bb PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x2bc TObjFunc
	
Label_702:
	var_388_int = 519917; // 0x2be PushI
	var_389_int = -1; // 0x2bf PushI
	var_390_int = 21086; // 0x2c0 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x2c1 TObjFunc
	goto Label_710; // 0x2c3 Jump
}


func_4722(var_141_bool, var_142_object)
{
	var_146_int = 0; var_147_int = 0; var_148_int = 0; var_149_int = 0; // 0x1272 PushV
	var_150_string = "voice_common"; // 0x1273 PushS
	GetVariable(var_150_string, var_148_int); // 0x1274 Func
	var_151_int = var_148_int; // 0x1276 Push
	if(var_151_int == 0) goto Label_4760; // 0x1277 JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0x1278 PushV
	var_153_object = var_142_object; // 0x1279 Mov
	func_4780(var_153_object); // 0x127a NEW_2
	var_182_bool = var_152_bool == 0; // 0x127c Not
	if(var_182_bool == 0) goto Label_4742; // 0x127d JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x127e PushV
	var_184_object = var_142_object; // 0x127f Mov
	func_4817(var_184_object); // 0x1280 NEW_2
	var_218_bool = var_183_bool == 0; // 0x1282 Not
	if(var_218_bool == 0) goto Label_4742; // 0x1283 JumpB
	var_141_bool = 0; // 0x1284 MovB
	return 4; // 0x1285 Return
	
Label_4742:
	var_219_int = 2; // 0x1286 PushI
	irand(var_149_int, var_219_int); // 0x1287 Func
	var_220_int = var_149_int; // 0x1289 Push
	if(var_220_int == 0) goto Label_4755; // 0x128a JumpB
	var_221_string = "voice_common"; // 0x128b PushS
	var_222_int = 1; // 0x128c PushI
	var_223_int = var_148_int + var_222_int; // 0x128d Add
	var_224_int = 3; // 0x128e PushI
	var_225_int = var_223_int / var_224_int; // 0x128f Mod
	SetVariable(var_221_string, var_225_int); // 0x1290 Func
	goto Label_4759; // 0x1292 Jump
	
Label_4759:
	goto Label_4778; // 0x1297 Jump
	
Label_4778:
	var_141_bool = 1; // 0x12aa MovB
	return 4; // 0x12ab Return
	
Label_4755:
	var_226_string = "voice_common"; // 0x1293 PushS
	var_227_int = 0; // 0x1294 PushI
	SetVariable(var_226_string, var_227_int); // 0x1295 Func
	
Label_4760:
	var_228_bool = 0; var_229_object = Obj(); // 0x1298 PushV
	var_229_object = var_142_object; // 0x1299 Mov
	func_4817(var_229_object); // 0x129a NEW_2
	var_230_bool = var_228_bool == 0; // 0x129c Not
	if(var_230_bool == 0) goto Label_4774; // 0x129d JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0x129e PushV
	var_232_object = var_142_object; // 0x129f Mov
	func_4780(var_232_object); // 0x12a0 NEW_2
	var_233_bool = var_231_bool == 0; // 0x12a2 Not
	if(var_233_bool == 0) goto Label_4774; // 0x12a3 JumpB
	var_141_bool = 0; // 0x12a4 MovB
	return 4; // 0x12a5 Return
	
Label_4774:
	var_234_string = "voice_common"; // 0x12a6 PushS
	var_235_int = 1; // 0x12a7 PushI
	SetVariable(var_234_string, var_235_int); // 0x12a8 Func
}


func_5236()
{
	var_133_string = "oob2MladVlad1"; // 0x1475 PushS
	var_134_int = 1; // 0x1476 PushI
	SetVariable(var_133_string, var_134_int); // 0x1477 Func
	return 0; // 0x1479 Return
}


func_2676(var_0_bool, var_1_object, var_2_object, var_3_object, var_236_object, var_237_object)
{
	var_0_bool = var_237_object; // 0xa75 TMov
	var_1_object = var_236_object; // 0xa76 TMov
	var_3_object = 0; // 0xa77 TMovB
	var_242_int = 1; // 0xa78 PushI
	if(var_242_int == 0) goto Label_2704; // 0xa79 JumpB
	var_243_string = ""; // 0xa7a PushV
	var_243_string = "Neutral"; // 0xa7b MovS
	func_2734(var_237_object, var_243_string); // 0xa7c NEW_2
	var_260_int = 520768; // 0xa7e PushI
	SetMessage(var_260_int); // 0xa7f TObjFunc
	ClearReplies(); // 0xa81 TObjFunc
	var_261_int = 520769; // 0xa83 PushI
	var_262_int = 21984; // 0xa84 PushI
	var_263_int = 21983; // 0xa85 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0xa86 TObjFunc
	var_264_int = 520772; // 0xa88 PushI
	var_265_int = 21987; // 0xa89 PushI
	var_266_int = 21986; // 0xa8a PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0xa8b TObjFunc
	goto Label_2704; // 0xa8d Jump
	
Label_2704:
	var_267_bool = 0; // 0xa90 PushV
	func_5163(var_267_bool); // 0xa91 NEW_2
	if(var_267_bool == 0) goto Label_2719; // 0xa93 JumpB
	
Label_2708:
	lshWaitForAnimEnd(); // 0xa94 Func
	var_268_object = var_3_object; // 0xa96 PushT
	if(var_268_object == 0) goto Label_2713; // 0xa97 JumpB
	goto Label_2718; // 0xa98 Jump
	
Label_2718:
	goto Label_2733; // 0xa9e Jump
	
Label_2733:
	return 0; // 0xaad Return
	
Label_2713:
	var_269_string = ""; // 0xa99 PushV
	var_269_string = var_2_object; // 0xa9a MovT
	func_4860(var_269_string); // 0xa9b NEW_2
	goto Label_2708; // 0xa9d Jump
	
Label_2719:
	var_280_string = "all"; // 0xa9f PushS
	var_281_string = "idle"; // 0xaa0 PushS
	PlayAnimation(var_280_string, var_281_string); // 0xaa1 Func
	
Label_2723:
	WaitForAnimEnd(); // 0xaa3 Func
	var_282_object = var_3_object; // 0xaa5 PushT
	if(var_282_object == 0) goto Label_2728; // 0xaa6 JumpB
	goto Label_2733; // 0xaa7 Jump
	
Label_2728:
	var_283_string = "all"; // 0xaa8 PushS
	var_284_string = "idle"; // 0xaa9 PushS
	PlayAnimation(var_283_string, var_284_string); // 0xaaa Func
	goto Label_2723; // 0xaac Jump
}


func_5749(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x1675 PushV
	GetDiaryRoot(var_81_object); // 0x1676 Func
	var_82_bool = var_81_object == 0; // 0x1678 Not
	if(var_82_bool == 0) goto Label_5759; // 0x1679 JumpB
	var_83_string = "Can't retrieve diary root"; // 0x167a PushS
	Trace(var_83_string); // 0x167b Func
	var_79_object = 0; // 0x167d MovB
	return 2; // 0x167e Return
	
Label_5759:
	var_79_object = var_81_object; // 0x167f Mov
	return 2; // 0x1680 Return
}


func_5242()
{
	var_139_object = Obj(); var_140_object = Obj(); // 0x147a PushV
	var_141_int = 0; var_142_string = ""; // 0x147b PushV
	var_142_string = "b2TravnikMark"; // 0x147c MovS
	func_4947(var_141_int, var_142_string); // 0x147d NEW_2
	var_145_int = 0; // 0x147f PushI
	var_146_bool = var_141_int == var_145_int; // 0x1480 Eq
	if(var_146_bool == 0) goto Label_5286; // 0x1481 JumpB
	var_147_string = "b2TravnikMark"; // 0x1482 PushS
	var_148_int = 1; // 0x1483 PushI
	SetVariable(var_147_string, var_148_int); // 0x1484 Func
	var_149_object = Obj(); // 0x1486 PushV
	func_5790(var_149_object); // 0x1487 NEW_2
	var_140_object = var_149_object; // 0x1488 Mov
	var_150_string = "b2Travnik1"; // 0x148a PushS
	var_151_string = "pt_map_gatherer1"; // 0x148b PushS
	var_152_int = 3; // 0x148c PushI
	var_153_int = 520463; // 0x148d PushI
	var_154_float = 0; // 0x148e PushV
	func_5097(var_154_float); // 0x148f NEW_2
	AddMark(var_150_string, var_151_string, var_152_int, var_153_int, var_154_float); // 0x1491 ObjFunc
	var_155_string = "b2Travnik2"; // 0x1493 PushS
	var_156_string = "pt_map_gatherer2"; // 0x1494 PushS
	var_157_int = 3; // 0x1495 PushI
	var_158_int = 520464; // 0x1496 PushI
	var_159_float = 0; // 0x1497 PushV
	func_5097(var_159_float); // 0x1498 NEW_2
	AddMark(var_155_string, var_156_string, var_157_int, var_158_int, var_159_float); // 0x149a ObjFunc
	var_160_string = "b2Travnik3"; // 0x149c PushS
	var_161_string = "pt_map_gatherer3"; // 0x149d PushS
	var_162_int = 3; // 0x149e PushI
	var_163_int = 520465; // 0x149f PushI
	var_164_float = 0; // 0x14a0 PushV
	func_5097(var_164_float); // 0x14a1 NEW_2
	AddMark(var_160_string, var_161_string, var_162_int, var_163_int, var_164_float); // 0x14a3 ObjFunc
	var_140_object = 0; // 0x14a5 SetNull
	
Label_5286:
	return 2; // 0x14a6 Return
}


func_4222(var_0_bool, var_863_int, var_864_object)
{
	var_866_object = Obj(); var_867_bool = 0; var_868_int = 0; var_869_bool = 0; var_870_object = Obj(); var_871_bool = 0; var_872_int = 0; var_873_bool = 0; // 0x107e PushV
	var_0_bool = var_864_object; // 0x107f TMov
	var_874_bool = 0; var_875_object = Obj(); var_876_float = 0; // 0x1080 PushV
	var_875_object = var_864_object; // 0x1081 Mov
	var_876_float = 70.0; // 0x1082 MovF
	func_4637(var_875_object, var_876_float); // 0x1083 NEW_2
	var_877_bool = var_874_bool == 0; // 0x1085 Not
	if(var_877_bool == 0) goto Label_4233; // 0x1086 JumpB
	var_863_int = -2; // 0x1087 MovI
	return 8; // 0x1088 Return
	
Label_4233:
	CreateDialog(var_870_object); // 0x1089 Func
	var_878_int = 0; // 0x108b PushV
	func_5157(var_878_int); // 0x108c NEW_2
	SetNPCName(var_878_int); // 0x108e ObjFunc
	var_879_int = 0; // 0x1090 PushV
	func_5155(var_879_int); // 0x1091 NEW_2
	SetNPCDescription(var_879_int); // 0x1093 ObjFunc
	var_880_string = ""; // 0x1095 PushV
	func_5159(var_880_string); // 0x1096 NEW_2
	SetPhoto(var_880_string); // 0x1098 ObjFunc
	var_881_string = ""; // 0x109a PushV
	func_5161(var_881_string); // 0x109b NEW_2
	SetPhoto2(var_881_string); // 0x109d ObjFunc
	var_882_int = 0; // 0x109f PushV
	func_5840(var_882_int); // 0x10a0 NEW_2
	SetPlayerName(var_882_int); // 0x10a2 ObjFunc
	var_872_int = -1; // 0x10a4 MovI
	IsOverrideActive(var_871_bool); // 0x10a5 Func
	var_883_bool = var_871_bool; // 0x10a7 Push
	if(var_883_bool == 0) goto Label_4267; // 0x10a8 JumpB
	var_863_int = -2; // 0x10a9 MovI
	return 8; // 0x10aa Return
	
Label_4267:
	DoDialog(var_870_object); // 0x10ab Func
	var_884_bool = 0; var_885_object = Obj(); // 0x10ad PushV
	var_886_object = Obj(); // 0x10ae PushV
	func_4913(var_886_object); // 0x10af NEW_2
	var_885_object = var_886_object; // 0x10b0 Mov
	func_4722(var_884_bool, var_885_object); // 0x10b2 NEW_2
	var_887_object = Obj(); var_888_object = Obj(); // 0x10b4 PushV
	var_887_object = var_864_object; // 0x10b5 Mov
	var_888_object = var_870_object; // 0x10b6 Mov
	TaskCall(21); // 0x10b7 TaskCall
	func_4303(var_889_object, var_890_object, var_891_string, var_892_bool, var_887_object, var_888_object); // 0x10b8 NEW_2
	TaskReturn(); // 0x10b9 TaskReturn
	IsDialogEnd(var_873_bool); // 0x10bb ObjFunc
	
Label_4285:
	var_917_bool = var_873_bool == 0; // 0x10bd Not
	if(var_917_bool == 0) goto Label_4292; // 0x10be JumpB
	sync(); // 0x10bf Func
	IsDialogEnd(var_873_bool); // 0x10c1 ObjFunc
	goto Label_4285; // 0x10c3 Jump
	
Label_4292:
	var_918_object = Obj(); // 0x10c4 PushV
	var_918_object = var_864_object; // 0x10c5 Mov
	func_4705(); // 0x10c6 NEW_2
	StopDialog(var_870_object); // 0x10c8 Func
	GetReturnValue(var_872_int); // 0x10ca ObjFunc
	var_863_int = var_872_int; // 0x10cc Mov
	return 8; // 0x10cd Return
}


func_5762(var_70_bool, var_71_object, var_72_int)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0; // 0x1682 PushV
	var_79_object = Obj(); // 0x1683 PushV
	func_5749(var_79_object); // 0x1684 NEW_2
	var_76_object = var_79_object; // 0x1685 Mov
	Find(var_72_int, var_77_object); // 0x1687 ObjFunc
	var_84_bool = var_77_object == 0; // 0x1689 Not
	if(var_84_bool == 0) goto Label_5777; // 0x168a JumpB
	var_85_string = "Can't find diary parent with id: "; // 0x168b PushS
	var_86_int = var_85_string + var_72_int; // 0x168c Add
	Trace(var_86_int); // 0x168d Func
	var_70_bool = 0; // 0x168f MovB
	return 6; // 0x1690 Return
	
Label_5777:
	AddChild(var_71_object); // 0x1691 ObjFunc
	var_87_int = 7; // 0x1693 PushI
	SendWorldWndMessage(var_87_int); // 0x1694 Func
	GetCategory(var_78_int); // 0x1696 ObjFunc
	SetDiarySection(var_78_int); // 0x1698 Func
	var_70_bool = 0; // 0x169a MovB
	return 6; // 0x169b Return
}


func_145()
{
	Stop(); // 0x91 Func
	return 0; // 0x93 Return
}


func_148(var_75_object)
{
	var_76_bool = 0; var_77_bool = 0; // 0x94 PushV
	WaitForAnimEnd(var_77_bool); // 0x95 Func
	var_78_bool = var_77_bool == 0; // 0x97 Not
	if(var_78_bool == 0) goto Label_154; // 0x98 JumpB
	return 2; // 0x99 Return
	
Label_154:
	var_79_object = Obj(); // 0x9a PushV
	var_79_object = var_75_object; // 0x9b Mov
	func_4621(); // 0x9c NEW_2
	var_88_int = 6; // 0x9e PushI
	Sleep(var_88_int); // 0x9f Func
	return 2; // 0xa1 Return
}


func_5790(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); var_64_object = Obj(); var_65_object = Obj(); // 0x169e PushV
	GetMainOutdoorScene(var_64_object); // 0x169f Func
	var_66_bool = var_64_object == 0; // 0x16a1 NullEq
	if(var_66_bool == 0) goto Label_5801; // 0x16a2 JumpB
	var_67_string = "Can't find main outdoor scene"; // 0x16a3 PushS
	Trace(var_67_string); // 0x16a4 Func
	var_65_object = 0; // 0x16a6 SetNull
	var_61_object = var_65_object; // 0x16a7 Mov
	return 4; // 0x16a8 Return
	
Label_5801:
	GetMap(var_65_object); // 0x16a9 ObjFunc
	var_61_object = var_65_object; // 0x16ab Mov
	return 4; // 0x16ac Return
}


func_5287()
{
	var_524_string = "oob5MladVlad1"; // 0x14a8 PushS
	var_525_int = 1; // 0x14a9 PushI
	SetVariable(var_524_string, var_525_int); // 0x14aa Func
	return 0; // 0x14ac Return
}


func_3754(var_0_bool, var_733_int, var_734_object)
{
	var_736_object = Obj(); var_737_bool = 0; var_738_int = 0; var_739_bool = 0; var_740_object = Obj(); var_741_bool = 0; var_742_int = 0; var_743_bool = 0; // 0xeaa PushV
	var_0_bool = var_734_object; // 0xeab TMov
	var_744_bool = 0; var_745_object = Obj(); var_746_float = 0; // 0xeac PushV
	var_745_object = var_734_object; // 0xead Mov
	var_746_float = 70.0; // 0xeae MovF
	func_4637(var_745_object, var_746_float); // 0xeaf NEW_2
	var_747_bool = var_744_bool == 0; // 0xeb1 Not
	if(var_747_bool == 0) goto Label_3765; // 0xeb2 JumpB
	var_733_int = -2; // 0xeb3 MovI
	return 8; // 0xeb4 Return
	
Label_3765:
	CreateDialog(var_740_object); // 0xeb5 Func
	var_748_int = 0; // 0xeb7 PushV
	func_5157(var_748_int); // 0xeb8 NEW_2
	SetNPCName(var_748_int); // 0xeba ObjFunc
	var_749_int = 0; // 0xebc PushV
	func_5155(var_749_int); // 0xebd NEW_2
	SetNPCDescription(var_749_int); // 0xebf ObjFunc
	var_750_string = ""; // 0xec1 PushV
	func_5159(var_750_string); // 0xec2 NEW_2
	SetPhoto(var_750_string); // 0xec4 ObjFunc
	var_751_string = ""; // 0xec6 PushV
	func_5161(var_751_string); // 0xec7 NEW_2
	SetPhoto2(var_751_string); // 0xec9 ObjFunc
	var_752_int = 0; // 0xecb PushV
	func_5840(var_752_int); // 0xecc NEW_2
	SetPlayerName(var_752_int); // 0xece ObjFunc
	var_742_int = -1; // 0xed0 MovI
	IsOverrideActive(var_741_bool); // 0xed1 Func
	var_753_bool = var_741_bool; // 0xed3 Push
	if(var_753_bool == 0) goto Label_3799; // 0xed4 JumpB
	var_733_int = -2; // 0xed5 MovI
	return 8; // 0xed6 Return
	
Label_3799:
	DoDialog(var_740_object); // 0xed7 Func
	var_754_bool = 0; var_755_object = Obj(); // 0xed9 PushV
	var_756_object = Obj(); // 0xeda PushV
	func_4913(var_756_object); // 0xedb NEW_2
	var_755_object = var_756_object; // 0xedc Mov
	func_4722(var_754_bool, var_755_object); // 0xede NEW_2
	var_757_object = Obj(); var_758_object = Obj(); // 0xee0 PushV
	var_757_object = var_734_object; // 0xee1 Mov
	var_758_object = var_740_object; // 0xee2 Mov
	TaskCall(19); // 0xee3 TaskCall
	func_3835(var_759_object, var_760_object, var_761_string, var_762_bool, var_757_object, var_758_object); // 0xee4 NEW_2
	TaskReturn(); // 0xee5 TaskReturn
	IsDialogEnd(var_743_bool); // 0xee7 ObjFunc
	
Label_3817:
	var_796_bool = var_743_bool == 0; // 0xee9 Not
	if(var_796_bool == 0) goto Label_3824; // 0xeea JumpB
	sync(); // 0xeeb Func
	IsDialogEnd(var_743_bool); // 0xeed ObjFunc
	goto Label_3817; // 0xeef Jump
	
Label_3824:
	var_797_object = Obj(); // 0xef0 PushV
	var_797_object = var_734_object; // 0xef1 Mov
	func_4705(); // 0xef2 NEW_2
	StopDialog(var_740_object); // 0xef4 Func
	GetReturnValue(var_742_int); // 0xef6 ObjFunc
	var_733_int = var_742_int; // 0xef8 Mov
	return 8; // 0xef9 Return
}


func_4780(var_152_bool)
{
	var_154_string = ""; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_string = ""; var_159_string = ""; var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_string = ""; // 0x12ac PushV
	var_159_string = "c"; // 0x12ad MovS
	var_160_int = 0; // 0x12ae MovI
	
Label_4783:
	var_164_int = 1; // 0x12af PushI
	if(var_164_int == 0) goto Label_4796; // 0x12b0 JumpB
	var_165_int = 1; // 0x12b1 PushI
	var_166_int = var_160_int + var_165_int; // 0x12b2 Add
	var_167_int = var_159_string + var_166_int; // 0x12b3 Add
	HasProperty(var_167_int, var_161_bool); // 0x12b4 ObjFunc
	var_168_bool = var_161_bool == 0; // 0x12b6 Not
	if(var_168_bool == 0) goto Label_4793; // 0x12b7 JumpB
	goto Label_4796; // 0x12b8 Jump
	
Label_4796:
	var_169_bool = var_160_int == 0; // 0x12bc Not
	if(var_169_bool == 0) goto Label_4800; // 0x12bd JumpB
	var_152_bool = 0; // 0x12be MovB
	return 10; // 0x12bf Return
	
Label_4800:
	var_162_int = 0; // 0x12c0 MovI
	var_170_int = 1; // 0x12c1 PushI
	var_171_bool = var_160_int > var_170_int; // 0x12c2 GT
	if(var_171_bool == 0) goto Label_4806; // 0x12c3 JumpB
	irand(var_162_int, var_160_int); // 0x12c4 Func
	
Label_4806:
	var_172_int = 1; // 0x12c6 PushI
	var_173_int = var_162_int + var_172_int; // 0x12c7 Add
	var_174_int = var_159_string + var_173_int; // 0x12c8 Add
	GetProperty(var_174_int, var_163_string); // 0x12c9 ObjFunc
	var_175_bool = 0; var_176_string = ""; // 0x12cb PushV
	var_176_string = var_163_string; // 0x12cc Mov
	func_4891(var_175_bool, var_176_string); // 0x12cd NEW_2
	var_152_bool = var_175_bool; // 0x12ce Mov
	return 10; // 0x12d0 Return
	
Label_4793:
	var_181_int = 1; // 0x12b9 PushI
	var_160_int = var_160_int + var_181_int; // 0x12ba Add2
	goto Label_4783; // 0x12bb Jump
}


func_5293()
{
	var_85_string = "b5q02"; // 0x14ae PushS
	var_86_int = 1; // 0x14af PushI
	SetVariable(var_85_string, var_86_int); // 0x14b0 Func
	func_5671(); // 0x14b3 NEW_2
	func_5697(); // 0x14b6 NEW_2
	var_118_object = Obj(); var_119_string = ""; // 0x14b8 PushV
	var_119_string = "quest_b5_02"; // 0x14b9 MovS
	func_4952(var_118_object, var_119_string); // 0x14ba NEW_2
	var_126_bool = 0; var_127_string = ""; var_128_string = ""; // 0x14bc PushV
	var_127_string = "quest_b5_02"; // 0x14bd MovS
	var_128_string = "place_prophet"; // 0x14be MovS
	func_5061(var_126_bool, var_127_string, var_128_string); // 0x14bf NEW_2
	var_132_bool = 0; var_133_string = ""; var_134_string = ""; // 0x14c1 PushV
	var_133_string = "quest_b5_02"; // 0x14c2 MovS
	var_134_string = "maze_start"; // 0x14c3 MovS
	func_5061(var_132_bool, var_133_string, var_134_string); // 0x14c4 NEW_2
	return 0; // 0x14c6 Return
}


func_2734(var_2_object, var_243_string)
{
	var_244_bool = 0; // 0xaaf PushV
	func_5163(var_244_bool); // 0xab0 NEW_2
	var_245_bool = var_244_bool == 0; // 0xab2 Not
	if(var_245_bool == 0) goto Label_2741; // 0xab3 JumpB
	return 0; // 0xab4 Return
	
Label_2741:
	var_246_bool = var_243_string == var_2_object; // 0xab5 Eq
	if(var_246_bool == 0) goto Label_2744; // 0xab6 JumpB
	return 0; // 0xab7 Return
	
Label_2744:
	var_247_string = ""; var_248_bool = 0; // 0xab8 PushV
	var_247_string = var_243_string; // 0xab9 Mov
	var_249_string = ""; // 0xaba PushS
	var_250_bool = var_243_string == var_249_string; // 0xabb Eq
	if(var_250_bool == 0) goto Label_2751; // 0xabc JumpB
	var_248_bool = 0; // 0xabd MovB
	goto Label_2752; // 0xabe Jump
	
Label_2752:
	func_4876(var_247_string, var_248_bool); // 0xac0 NEW_2
	var_2_object = var_243_string; // 0xac2 TMov
	return 0; // 0xac3 Return
	
Label_2751:
	var_248_bool = 1; // 0xabf MovB
}


func_5807(var_77_object, var_78_string, var_79_float)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0; // 0x16af PushV
	GetMainOutdoorScene(var_87_object); // 0x16b0 Func
	var_89_bool = var_87_object == 0; // 0x16b2 NullEq
	if(var_89_bool == 0) goto Label_5816; // 0x16b3 JumpB
	var_90_string = "Can't find main outdoor scene"; // 0x16b4 PushS
	Trace(var_90_string); // 0x16b5 Func
	return 8; // 0x16b7 Return
	
Label_5816:
	GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector); // 0x16b8 ObjFunc
	var_91_bool = var_88_bool == 0; // 0x16ba Not
	if(var_91_bool == 0) goto Label_5826; // 0x16bb JumpB
	var_92_string = "Warning: outdoor scene locator "; // 0x16bc PushS
	var_93_int = var_92_string + var_78_string; // 0x16bd Add
	var_94_string = " doesnt exist"; // 0x16be PushS
	var_95_int = var_93_int + var_94_string; // 0x16bf Add
	Trace(var_95_int); // 0x16c0 Func
	
Label_5826:
	GetMap(var_77_object); // 0x16c2 ObjFunc
	var_96_bool = var_77_object == 0; // 0x16c4 NullEq
	if(var_96_bool == 0) goto Label_5834; // 0x16c5 JumpB
	var_97_string = "Can't find map"; // 0x16c6 PushS
	Trace(var_97_string); // 0x16c7 Func
	return 8; // 0x16c9 Return
	
Label_5834:
	var_98_float = GetByIndex(var_85_cvector, 0); // 0x16ca PushE
	var_99_float = GetByIndex(var_85_cvector, 2); // 0x16cb PushE
	SetMapParams(var_98_float, var_99_float, var_79_float); // 0x16cc ObjFunc
	return 8; // 0x16ce Return
}


func_193()
{
	StopGroup0(); // 0xc1 Func
	StopAnimation(); // 0xc3 Func
	return 0; // 0xc5 Return
}


func_198(var_159_int)
{
	var_160_string = ""; var_161_bool = 0; var_162_string = ""; var_163_int = 0; var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_string = ""; var_168_bool = 0; var_169_string = ""; var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_int = 0; // 0xc6 PushV
	var_174_int = var_159_int; // 0xc7 Push
	if(var_174_int == 0) goto Label_204; // 0xc8 JumpB
	var_175_string = "ptidle"; // 0xc9 PushS
	var_167_string = var_175_string + var_159_int; // 0xca Add2
	goto Label_205; // 0xcb Jump
	
Label_205:
	HasProperty(var_167_string, var_168_bool); // 0xcd Func
	var_176_bool = var_168_bool; // 0xcf Push
	if(var_176_bool == 0) goto Label_229; // 0xd0 JumpB
	GetProperty(var_167_string, var_169_string); // 0xd1 Func
	var_177_int = 0; var_178_string = ""; // 0xd3 PushV
	var_178_string = var_169_string; // 0xd4 Mov
	func_264(var_177_int, var_178_string); // 0xd5 NEW_2
	var_170_int = var_177_int; // 0xd6 Mov
	irand(var_171_int, var_170_int); // 0xd8 Func
	var_191_string = "all"; // 0xda PushS
	var_192_string = ""; var_193_string = ""; var_194_int = 0; // 0xdb PushV
	var_193_string = var_169_string; // 0xdc Mov
	var_194_int = var_171_int; // 0xdd Mov
	func_256(var_192_string, var_193_string, var_194_int); // 0xde NEW_2
	PlayAnimation(var_191_string, var_192_string); // 0xe0 Func
	WaitForAnimEnd(); // 0xe2 Func
	goto Label_246; // 0xe4 Jump
	
Label_246:
	return 14; // 0xf6 Return
	
Label_229:
	var_195_int = 0; // 0xe5 PushV
	func_5124(var_195_int); // 0xe6 NEW_2
	var_172_int = var_195_int; // 0xe7 Mov
	var_208_int = var_172_int; // 0xe9 Push
	if(var_208_int == 0) goto Label_246; // 0xea JumpB
	irand(var_173_int, var_172_int); // 0xeb Func
	var_209_string = "all"; // 0xed PushS
	var_210_string = ""; var_211_int = 0; // 0xee PushV
	var_211_int = var_173_int; // 0xef Mov
	func_5117(var_210_string, var_211_int); // 0xf0 NEW_2
	PlayAnimation(var_209_string, var_210_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	
Label_204:
	var_167_string = "ptidle"; // 0xcc MovS
}


func_5319()
{
	func_5684(); // 0x14c9 NEW_2
	var_196_bool = 0; var_197_string = ""; var_198_string = ""; // 0x14cb PushV
	var_197_string = "quest_b5_02"; // 0x14cc MovS
	var_198_string = "completed"; // 0x14cd MovS
	func_5061(var_196_bool, var_197_string, var_198_string); // 0x14ce NEW_2
	return 0; // 0x14d0 Return
}


func_1227(var_0_bool, var_395_int, var_396_object)
{
	var_398_object = Obj(); var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; // 0x4cb PushV
	var_0_bool = var_396_object; // 0x4cc TMov
	var_406_bool = 0; var_407_object = Obj(); var_408_float = 0; // 0x4cd PushV
	var_407_object = var_396_object; // 0x4ce Mov
	var_408_float = 70.0; // 0x4cf MovF
	func_4637(var_407_object, var_408_float); // 0x4d0 NEW_2
	var_409_bool = var_406_bool == 0; // 0x4d2 Not
	if(var_409_bool == 0) goto Label_1238; // 0x4d3 JumpB
	var_395_int = -2; // 0x4d4 MovI
	return 8; // 0x4d5 Return
	
Label_1238:
	CreateDialog(var_402_object); // 0x4d6 Func
	var_410_int = 0; // 0x4d8 PushV
	func_5157(var_410_int); // 0x4d9 NEW_2
	SetNPCName(var_410_int); // 0x4db ObjFunc
	var_411_int = 0; // 0x4dd PushV
	func_5155(var_411_int); // 0x4de NEW_2
	SetNPCDescription(var_411_int); // 0x4e0 ObjFunc
	var_412_string = ""; // 0x4e2 PushV
	func_5159(var_412_string); // 0x4e3 NEW_2
	SetPhoto(var_412_string); // 0x4e5 ObjFunc
	var_413_string = ""; // 0x4e7 PushV
	func_5161(var_413_string); // 0x4e8 NEW_2
	SetPhoto2(var_413_string); // 0x4ea ObjFunc
	var_414_int = 0; // 0x4ec PushV
	func_5840(var_414_int); // 0x4ed NEW_2
	SetPlayerName(var_414_int); // 0x4ef ObjFunc
	var_404_int = -1; // 0x4f1 MovI
	IsOverrideActive(var_403_bool); // 0x4f2 Func
	var_415_bool = var_403_bool; // 0x4f4 Push
	if(var_415_bool == 0) goto Label_1272; // 0x4f5 JumpB
	var_395_int = -2; // 0x4f6 MovI
	return 8; // 0x4f7 Return
	
Label_1272:
	DoDialog(var_402_object); // 0x4f8 Func
	var_416_bool = 0; var_417_object = Obj(); // 0x4fa PushV
	var_418_object = Obj(); // 0x4fb PushV
	func_4913(var_418_object); // 0x4fc NEW_2
	var_417_object = var_418_object; // 0x4fd Mov
	func_4722(var_416_bool, var_417_object); // 0x4ff NEW_2
	var_419_object = Obj(); var_420_object = Obj(); // 0x501 PushV
	var_419_object = var_396_object; // 0x502 Mov
	var_420_object = var_402_object; // 0x503 Mov
	TaskCall(9); // 0x504 TaskCall
	func_1308(var_421_object, var_422_object, var_423_string, var_424_bool, var_419_object, var_420_object); // 0x505 NEW_2
	TaskReturn(); // 0x506 TaskReturn
	IsDialogEnd(var_405_bool); // 0x508 ObjFunc
	
Label_1290:
	var_481_bool = var_405_bool == 0; // 0x50a Not
	if(var_481_bool == 0) goto Label_1297; // 0x50b JumpB
	sync(); // 0x50c Func
	IsDialogEnd(var_405_bool); // 0x50e ObjFunc
	goto Label_1290; // 0x510 Jump
	
Label_1297:
	var_482_object = Obj(); // 0x511 PushV
	var_482_object = var_396_object; // 0x512 Mov
	func_4705(); // 0x513 NEW_2
	StopDialog(var_402_object); // 0x515 Func
	GetReturnValue(var_404_int); // 0x517 ObjFunc
	var_395_int = var_404_int; // 0x519 Mov
	return 8; // 0x51a Return
}


func_4303(var_0_bool, var_1_object, var_2_object, var_3_object, var_887_object, var_888_object)
{
	var_0_bool = var_888_object; // 0x10d0 TMov
	var_1_object = var_887_object; // 0x10d1 TMov
	var_3_object = 0; // 0x10d2 TMovB
	var_893_int = 1; // 0x10d3 PushI
	if(var_893_int == 0) goto Label_4331; // 0x10d4 JumpB
	var_894_string = ""; // 0x10d5 PushV
	var_894_string = "Neutral"; // 0x10d6 MovS
	func_4361(var_888_object, var_894_string); // 0x10d7 NEW_2
	var_902_int = 540554; // 0x10d9 PushI
	SetMessage(var_902_int); // 0x10da TObjFunc
	ClearReplies(); // 0x10dc TObjFunc
	var_903_int = 540555; // 0x10de PushI
	var_904_int = -1; // 0x10df PushI
	var_905_int = 42564; // 0x10e0 PushI
	AddReply(var_903_int, var_904_int, var_905_int); // 0x10e1 TObjFunc
	var_906_int = 540794; // 0x10e3 PushI
	var_907_int = -1; // 0x10e4 PushI
	var_908_int = 42843; // 0x10e5 PushI
	AddReply(var_906_int, var_907_int, var_908_int); // 0x10e6 TObjFunc
	goto Label_4331; // 0x10e8 Jump
	
Label_4331:
	var_909_bool = 0; // 0x10eb PushV
	func_5163(var_909_bool); // 0x10ec NEW_2
	if(var_909_bool == 0) goto Label_4346; // 0x10ee JumpB
	
Label_4335:
	lshWaitForAnimEnd(); // 0x10ef Func
	var_910_object = var_3_object; // 0x10f1 PushT
	if(var_910_object == 0) goto Label_4340; // 0x10f2 JumpB
	goto Label_4345; // 0x10f3 Jump
	
Label_4345:
	goto Label_4360; // 0x10f9 Jump
	
Label_4360:
	return 0; // 0x1108 Return
	
Label_4340:
	var_911_string = ""; // 0x10f4 PushV
	var_911_string = var_2_object; // 0x10f5 MovT
	func_4860(var_911_string); // 0x10f6 NEW_2
	goto Label_4335; // 0x10f8 Jump
	
Label_4346:
	var_912_string = "all"; // 0x10fa PushS
	var_913_string = "idle"; // 0x10fb PushS
	PlayAnimation(var_912_string, var_913_string); // 0x10fc Func
	
Label_4350:
	WaitForAnimEnd(); // 0x10fe Func
	var_914_object = var_3_object; // 0x1100 PushT
	if(var_914_object == 0) goto Label_4355; // 0x1101 JumpB
	goto Label_4360; // 0x1102 Jump
	
Label_4355:
	var_915_string = "all"; // 0x1103 PushS
	var_916_string = "idle"; // 0x1104 PushS
	PlayAnimation(var_915_string, var_916_string); // 0x1105 Func
	goto Label_4350; // 0x1107 Jump
}


func_5840(var_132_int)
{
	var_133_int = 0; var_134_int = 0; // 0x16d0 PushV
	var_135_string = "branch"; // 0x16d1 PushS
	GetVariable(var_135_string, var_134_int); // 0x16d2 Func
	var_136_int = 0; // 0x16d4 PushI
	var_137_bool = var_134_int == var_136_int; // 0x16d5 Eq
	if(var_137_bool == 0) goto Label_5850; // 0x16d6 JumpB
	var_132_int = 1; // 0x16d7 MovI
	return 2; // 0x16d8 Return
	
Label_5850:
	var_138_int = 1; // 0x16da PushI
	var_139_bool = var_134_int == var_138_int; // 0x16db Eq
	if(var_139_bool == 0) goto Label_5855; // 0x16dc JumpB
	var_132_int = 2; // 0x16dd MovI
	return 2; // 0x16de Return
	
Label_5855:
	var_132_int = 3; // 0x16df MovI
	return 2; // 0x16e0 Return
}


func_5329(var_128_object)
{
	var_130_string = "money 4000 is given"; // 0x14d2 PushS
	Trace(var_130_string); // 0x14d3 Func
	var_131_object = Obj(); var_132_int = 0; // 0x14d5 PushV
	var_131_object = var_128_object; // 0x14d6 Mov
	var_132_int = 4000; // 0x14d7 MovI
	func_5003(var_131_object, var_132_int); // 0x14d8 NEW_2
	return 0; // 0x14da Return
}


func_3280(var_2_object, var_676_string)
{
	var_677_bool = 0; // 0xcd1 PushV
	func_5163(var_677_bool); // 0xcd2 NEW_2
	var_678_bool = var_677_bool == 0; // 0xcd4 Not
	if(var_678_bool == 0) goto Label_3287; // 0xcd5 JumpB
	return 0; // 0xcd6 Return
	
Label_3287:
	var_679_bool = var_676_string == var_2_object; // 0xcd7 Eq
	if(var_679_bool == 0) goto Label_3290; // 0xcd8 JumpB
	return 0; // 0xcd9 Return
	
Label_3290:
	var_680_string = ""; var_681_bool = 0; // 0xcda PushV
	var_680_string = var_676_string; // 0xcdb Mov
	var_682_string = ""; // 0xcdc PushS
	var_683_bool = var_676_string == var_682_string; // 0xcdd Eq
	if(var_683_bool == 0) goto Label_3297; // 0xcde JumpB
	var_681_bool = 0; // 0xcdf MovB
	goto Label_3298; // 0xce0 Jump
	
Label_3298:
	func_4876(var_680_string, var_681_bool); // 0xce2 NEW_2
	var_2_object = var_676_string; // 0xce4 TMov
	return 0; // 0xce5 Return
	
Label_3297:
	var_681_bool = 1; // 0xce1 MovB
}


func_4817(var_183_bool)
{
	var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = ""; var_190_string = ""; var_191_int = 0; var_192_bool = 0; var_193_int = 0; var_194_string = ""; // 0x12d1 PushV
	var_195_string = "d"; // 0x12d2 PushS
	var_196_int = 0; // 0x12d3 PushV
	func_5102(var_196_int); // 0x12d4 NEW_2
	var_202_int = var_195_string + var_196_int; // 0x12d6 Add
	var_203_string = "m"; // 0x12d7 PushS
	var_190_string = var_202_int + var_203_string; // 0x12d8 Add2
	var_191_int = 0; // 0x12d9 MovI
	
Label_4826:
	var_204_int = 1; // 0x12da PushI
	if(var_204_int == 0) goto Label_4839; // 0x12db JumpB
	var_205_int = 1; // 0x12dc PushI
	var_206_int = var_191_int + var_205_int; // 0x12dd Add
	var_207_int = var_190_string + var_206_int; // 0x12de Add
	HasProperty(var_207_int, var_192_bool); // 0x12df ObjFunc
	var_208_bool = var_192_bool == 0; // 0x12e1 Not
	if(var_208_bool == 0) goto Label_4836; // 0x12e2 JumpB
	goto Label_4839; // 0x12e3 Jump
	
Label_4839:
	var_209_bool = var_191_int == 0; // 0x12e7 Not
	if(var_209_bool == 0) goto Label_4843; // 0x12e8 JumpB
	var_183_bool = 0; // 0x12e9 MovB
	return 10; // 0x12ea Return
	
Label_4843:
	var_193_int = 0; // 0x12eb MovI
	var_210_int = 1; // 0x12ec PushI
	var_211_bool = var_191_int > var_210_int; // 0x12ed GT
	if(var_211_bool == 0) goto Label_4849; // 0x12ee JumpB
	irand(var_193_int, var_191_int); // 0x12ef Func
	
Label_4849:
	var_212_int = 1; // 0x12f1 PushI
	var_213_int = var_193_int + var_212_int; // 0x12f2 Add
	var_214_int = var_190_string + var_213_int; // 0x12f3 Add
	GetProperty(var_214_int, var_194_string); // 0x12f4 ObjFunc
	var_215_bool = 0; var_216_string = ""; // 0x12f6 PushV
	var_216_string = var_194_string; // 0x12f7 Mov
	func_4891(var_215_bool, var_216_string); // 0x12f8 NEW_2
	var_183_bool = var_215_bool; // 0x12f9 Mov
	return 10; // 0x12fb Return
	
Label_4836:
	var_217_int = 1; // 0x12e4 PushI
	var_191_int = var_191_int + var_217_int; // 0x12e5 Add2
	goto Label_4826; // 0x12e6 Jump
}


func_5339(var_55_object)
{
	var_57_string = "kerosene50 is given"; // 0x14dc PushS
	Trace(var_57_string); // 0x14dd Func
	var_58_object = Obj(); var_59_string = ""; var_60_int = 0; // 0x14df PushV
	var_58_object = var_55_object; // 0x14e0 Mov
	var_59_string = "kerosene"; // 0x14e1 MovS
	var_60_int = 50; // 0x14e2 MovI
	func_5041(var_58_object, var_59_string, var_60_int); // 0x14e3 NEW_2
	return 0; // 0x14e5 Return
}


func_5857(var_67_object)
{
	var_68_bool = GlobalVars[2]; // 0x16e2 PushGE
	var_69_bool = var_68_bool == 0; // 0x16e3 Not
	if(var_69_bool == 0) goto Label_5870; // 0x16e4 JumpB
	var_70_int = 0; var_71_object = Obj(); // 0x16e5 PushV
	var_71_object = var_67_object; // 0x16e6 Mov
	TaskCall(12); // 0x16e7 TaskCall
	func_2595(var_72_object, var_70_int, var_71_object); // 0x16e8 NEW_2
	TaskReturn(); // 0x16e9 TaskReturn
	var_293_bool = GlobalVars[2]; // 0x16eb PushGE
	var_293_bool = 1; // 0x16ec MovB
	GlobalVars[2] = var_293_bool; // 0x16ed PopGE
	
Label_5870:
	var_294_bool = 0; var_295_int = 0; // 0x16ee PushV
	var_295_int = 1; // 0x16ef MovI
	func_5111(var_294_bool, var_295_int); // 0x16f0 NEW_2
	if(var_294_bool == 0) goto Label_5882; // 0x16f2 JumpB
	var_297_int = 0; var_298_object = Obj(); // 0x16f3 PushV
	var_298_object = var_67_object; // 0x16f4 Mov
	TaskCall(6); // 0x16f5 TaskCall
	func_541(var_299_object, var_297_int, var_298_object); // 0x16f6 NEW_2
	TaskReturn(); // 0x16f7 TaskReturn
	return 0; // 0x16f9 Return
	
Label_5882:
	var_393_bool = 0; var_394_int = 0; // 0x16fa PushV
	var_394_int = 2; // 0x16fb MovI
	func_5111(var_393_bool, var_394_int); // 0x16fc NEW_2
	if(var_393_bool == 0) goto Label_5894; // 0x16fe JumpB
	var_395_int = 0; var_396_object = Obj(); // 0x16ff PushV
	var_396_object = var_67_object; // 0x1700 Mov
	TaskCall(8); // 0x1701 TaskCall
	func_1227(var_397_object, var_395_int, var_396_object); // 0x1702 NEW_2
	TaskReturn(); // 0x1703 TaskReturn
	return 0; // 0x1705 Return
	
Label_5894:
	var_483_bool = 0; var_484_int = 0; // 0x1706 PushV
	var_484_int = 5; // 0x1707 MovI
	func_5111(var_483_bool, var_484_int); // 0x1708 NEW_2
	if(var_483_bool == 0) goto Label_5906; // 0x170a JumpB
	var_485_int = 0; var_486_object = Obj(); // 0x170b PushV
	var_486_object = var_67_object; // 0x170c Mov
	TaskCall(10); // 0x170d TaskCall
	func_1895(var_487_object, var_485_int, var_486_object); // 0x170e NEW_2
	TaskReturn(); // 0x170f TaskReturn
	return 0; // 0x1711 Return
	
Label_5906:
	var_575_bool = 0; var_576_int = 0; // 0x1712 PushV
	var_576_int = 6; // 0x1713 MovI
	func_5111(var_575_bool, var_576_int); // 0x1714 NEW_2
	if(var_575_bool == 0) goto Label_5918; // 0x1716 JumpB
	var_577_int = 0; var_578_object = Obj(); // 0x1717 PushV
	var_578_object = var_67_object; // 0x1718 Mov
	TaskCall(14); // 0x1719 TaskCall
	func_2834(var_579_object, var_577_int, var_578_object); // 0x171a NEW_2
	TaskReturn(); // 0x171b TaskReturn
	return 0; // 0x171d Return
	
Label_5918:
	var_633_bool = 0; var_634_int = 0; // 0x171e PushV
	var_634_int = 8; // 0x171f MovI
	func_5111(var_633_bool, var_634_int); // 0x1720 NEW_2
	if(var_633_bool == 0) goto Label_5930; // 0x1722 JumpB
	var_635_int = 0; var_636_object = Obj(); // 0x1723 PushV
	var_636_object = var_67_object; // 0x1724 Mov
	TaskCall(16); // 0x1725 TaskCall
	func_3086(var_637_object, var_635_int, var_636_object); // 0x1726 NEW_2
	TaskReturn(); // 0x1727 TaskReturn
	return 0; // 0x1729 Return
	
Label_5930:
	var_731_bool = 0; var_732_int = 0; // 0x172a PushV
	var_732_int = 11; // 0x172b MovI
	func_5111(var_731_bool, var_732_int); // 0x172c NEW_2
	if(var_731_bool == 0) goto Label_5942; // 0x172e JumpB
	var_733_int = 0; var_734_object = Obj(); // 0x172f PushV
	var_734_object = var_67_object; // 0x1730 Mov
	TaskCall(18); // 0x1731 TaskCall
	func_3754(var_735_object, var_733_int, var_734_object); // 0x1732 NEW_2
	TaskReturn(); // 0x1733 TaskReturn
	return 0; // 0x1735 Return
	
Label_5942:
	var_798_bool = 0; // 0x1736 PushV
	var_798_bool = 0; // 0x1737 MovB
	var_799_bool = 0; var_800_int = 0; // 0x1738 PushV
	var_800_int = 12; // 0x1739 MovI
	func_5111(var_799_bool, var_800_int); // 0x173a NEW_2
	if(var_799_bool == 0) goto Label_5953; // 0x173c JumpB
	var_801_bool = GlobalVars[3]; // 0x173d PushGE
	var_802_bool = var_801_bool == 0; // 0x173e Not
	if(var_802_bool == 0) goto Label_5953; // 0x173f JumpB
	var_798_bool = 1; // 0x1740 MovB
	
Label_5953:
	if(var_798_bool == 0) goto Label_5964; // 0x1741 JumpB
	var_803_int = 0; var_804_object = Obj(); // 0x1742 PushV
	var_804_object = var_67_object; // 0x1743 Mov
	TaskCall(4); // 0x1744 TaskCall
	func_282(var_805_object, var_803_int, var_804_object); // 0x1745 NEW_2
	TaskReturn(); // 0x1746 TaskReturn
	var_862_bool = GlobalVars[3]; // 0x1748 PushGE
	var_862_bool = 1; // 0x1749 MovB
	GlobalVars[3] = var_862_bool; // 0x174a PopGE
	return 0; // 0x174b Return
	
Label_5964:
	var_863_int = 0; var_864_object = Obj(); // 0x174c PushV
	var_864_object = var_67_object; // 0x174d Mov
	TaskCall(20); // 0x174e TaskCall
	func_4222(var_865_object, var_863_int, var_864_object); // 0x174f NEW_2
	TaskReturn(); // 0x1750 TaskReturn
	return 0; // 0x1752 Return
}


func_740(var_2_object, var_336_string)
{
	var_337_bool = 0; // 0x2e5 PushV
	func_5163(var_337_bool); // 0x2e6 NEW_2
	var_338_bool = var_337_bool == 0; // 0x2e8 Not
	if(var_338_bool == 0) goto Label_747; // 0x2e9 JumpB
	return 0; // 0x2ea Return
	
Label_747:
	var_339_bool = var_336_string == var_2_object; // 0x2eb Eq
	if(var_339_bool == 0) goto Label_750; // 0x2ec JumpB
	return 0; // 0x2ed Return
	
Label_750:
	var_340_string = ""; var_341_bool = 0; // 0x2ee PushV
	var_340_string = var_336_string; // 0x2ef Mov
	var_342_string = ""; // 0x2f0 PushS
	var_343_bool = var_336_string == var_342_string; // 0x2f1 Eq
	if(var_343_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_341_bool = 0; // 0x2f3 MovB
	goto Label_758; // 0x2f4 Jump
	
Label_758:
	func_4876(var_340_string, var_341_bool); // 0x2f6 NEW_2
	var_2_object = var_336_string; // 0x2f8 TMov
	return 0; // 0x2f9 Return
	
Label_757:
	var_341_bool = 1; // 0x2f5 MovB
}


func_5350()
{
	var_57_object = Obj(); var_58_string = ""; var_59_string = ""; // 0x14e7 PushV
	var_60_object = Obj(); // 0x14e8 PushV
	func_4588(var_60_object); // 0x14e9 NEW_2
	var_57_object = var_60_object; // 0x14ea Mov
	var_58_string = "house_vlad"; // 0x14ec MovS
	var_59_string = "pt_maze_start"; // 0x14ed MovS
	func_5073(var_57_object, var_58_string, var_59_string); // 0x14ee NEW_2
	return 0; // 0x14f0 Return
}


func_5361()
{
	var_57_string = "b8q02"; // 0x14f2 PushS
	var_58_int = 1; // 0x14f3 PushI
	SetVariable(var_57_string, var_58_int); // 0x14f4 Func
	func_5710(); // 0x14f7 NEW_2
	func_5736(); // 0x14fa NEW_2
	var_90_object = Obj(); var_91_string = ""; // 0x14fc PushV
	var_91_string = "quest_b8_02"; // 0x14fd MovS
	func_4963(var_90_object, var_91_string); // 0x14fe NEW_2
	return 0; // 0x1500 Return
}


func_3835(var_0_bool, var_1_object, var_2_object, var_3_object, var_757_object, var_758_object)
{
	var_0_bool = var_758_object; // 0xefc TMov
	var_1_object = var_757_object; // 0xefd TMov
	var_3_object = 0; // 0xefe TMovB
	var_763_int = 1; // 0xeff PushI
	if(var_763_int == 0) goto Label_3873; // 0xf00 JumpB
	var_764_string = ""; // 0xf01 PushV
	var_764_string = "Fear"; // 0xf02 MovS
	func_3903(var_758_object, var_764_string); // 0xf03 NEW_2
	var_772_int = 522079; // 0xf05 PushI
	SetMessage(var_772_int); // 0xf06 TObjFunc
	ClearReplies(); // 0xf08 TObjFunc
	var_773_bool = 0; var_774_object = Obj(); // 0xf0a PushV
	var_774_object = var_1_object; // 0xf0b MovT
	func_5538(var_774_object); // 0xf0c NEW_2
	if(var_773_bool == 0) goto Label_3860; // 0xf0e JumpB
	var_779_int = 523566; // 0xf0f PushI
	var_780_int = 24801; // 0xf10 PushI
	var_781_int = 24800; // 0xf11 PushI
	AddReply(var_779_int, var_780_int, var_781_int); // 0xf12 TObjFunc
	
Label_3860:
	var_782_int = 523569; // 0xf14 PushI
	var_783_int = 24804; // 0xf15 PushI
	var_784_int = 24803; // 0xf16 PushI
	AddReply(var_782_int, var_783_int, var_784_int); // 0xf17 TObjFunc
	var_785_int = 522080; // 0xf19 PushI
	var_786_int = -1; // 0xf1a PushI
	var_787_int = 23249; // 0xf1b PushI
	AddReply(var_785_int, var_786_int, var_787_int); // 0xf1c TObjFunc
	goto Label_3873; // 0xf1e Jump
	
Label_3873:
	var_788_bool = 0; // 0xf21 PushV
	func_5163(var_788_bool); // 0xf22 NEW_2
	if(var_788_bool == 0) goto Label_3888; // 0xf24 JumpB
	
Label_3877:
	lshWaitForAnimEnd(); // 0xf25 Func
	var_789_object = var_3_object; // 0xf27 PushT
	if(var_789_object == 0) goto Label_3882; // 0xf28 JumpB
	goto Label_3887; // 0xf29 Jump
	
Label_3887:
	goto Label_3902; // 0xf2f Jump
	
Label_3902:
	return 0; // 0xf3e Return
	
Label_3882:
	var_790_string = ""; // 0xf2a PushV
	var_790_string = var_2_object; // 0xf2b MovT
	func_4860(var_790_string); // 0xf2c NEW_2
	goto Label_3877; // 0xf2e Jump
	
Label_3888:
	var_791_string = "all"; // 0xf30 PushS
	var_792_string = "idle"; // 0xf31 PushS
	PlayAnimation(var_791_string, var_792_string); // 0xf32 Func
	
Label_3892:
	WaitForAnimEnd(); // 0xf34 Func
	var_793_object = var_3_object; // 0xf36 PushT
	if(var_793_object == 0) goto Label_3897; // 0xf37 JumpB
	goto Label_3902; // 0xf38 Jump
	
Label_3897:
	var_794_string = "all"; // 0xf39 PushS
	var_795_string = "idle"; // 0xf3a PushS
	PlayAnimation(var_794_string, var_795_string); // 0xf3b Func
	goto Label_3892; // 0xf3d Jump
}


func_4860(var_269_string)
{
	var_270_bool = 0; var_271_float = 0; var_272_float = 0; var_273_bool = 0; var_274_float = 0; var_275_float = 0; // 0x12fc PushV
	lshHasAnimation(var_273_bool, var_269_string); // 0x12fd Func
	var_276_bool = var_273_bool; // 0x12ff Push
	if(var_276_bool == 0) goto Label_4871; // 0x1300 JumpB
	lshGetAnimTimes(var_269_string, var_274_float, var_275_float); // 0x1301 Func
	var_277_bool = 0; // 0x1303 PushB
	lshPlayAnimation(var_274_float, var_275_float, var_277_bool); // 0x1304 Func
	goto Label_4875; // 0x1306 Jump
	
Label_4875:
	return 6; // 0x130b Return
	
Label_4871:
	var_278_string = "Can't find lsh animation : "; // 0x1307 PushS
	var_279_int = var_278_string + var_269_string; // 0x1308 Add
	Trace(var_279_int); // 0x1309 Func
}


func_256(var_184_string, var_185_string, var_186_int)
{
	var_187_int = 0; // 0x101 PushI
	var_188_bool = var_186_int == var_187_int; // 0x102 Eq
	if(var_188_bool == 0) goto Label_262; // 0x103 JumpB
	var_184_string = var_185_string; // 0x104 Mov
	goto Label_263; // 0x105 Jump
	
Label_263:
	return 0; // 0x107 Return
	
Label_262:
	var_184_string = var_185_string + var_186_int; // 0x106 Add2
}


func_5377()
{
	var_106_int = 0; var_107_int = 0; // 0x1501 PushV
	func_5723(); // 0x1503 NEW_2
	var_116_bool = 0; var_117_string = ""; var_118_string = ""; // 0x1505 PushV
	var_117_string = "quest_b8_02"; // 0x1506 MovS
	var_118_string = "completed"; // 0x1507 MovS
	func_5061(var_116_bool, var_117_string, var_118_string); // 0x1508 NEW_2
	var_122_string = "b8q02_book"; // 0x150a PushS
	var_123_int = 1; // 0x150b PushI
	RemoveItemByType(var_107_int, var_122_string, var_123_int); // 0x150c ObjFunc
	return 2; // 0x150e Return
}


func_264(var_177_int, var_178_string)
{
	var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_bool = 0; // 0x108 PushV
	var_181_int = 0; // 0x109 MovI
	
Label_266:
	var_183_string = "all"; // 0x10a PushS
	var_184_string = ""; var_185_string = ""; var_186_int = 0; // 0x10b PushV
	var_185_string = var_178_string; // 0x10c Mov
	var_186_int = var_181_int; // 0x10d Mov
	func_256(var_184_string, var_185_string, var_186_int); // 0x10e NEW_2
	HasAnimation(var_182_bool, var_183_string, var_184_string); // 0x110 Func
	var_189_bool = var_182_bool == 0; // 0x112 Not
	if(var_189_bool == 0) goto Label_277; // 0x113 JumpB
	goto Label_280; // 0x114 Jump
	
Label_280:
	var_177_int = var_181_int; // 0x118 Mov
	return 4; // 0x119 Return
	
Label_277:
	var_190_int = 1; // 0x115 PushI
	var_181_int = var_181_int + var_190_int; // 0x116 Add2
	goto Label_266; // 0x117 Jump
}


func_4361(var_2_object, var_894_string)
{
	var_895_bool = 0; // 0x110a PushV
	func_5163(var_895_bool); // 0x110b NEW_2
	var_896_bool = var_895_bool == 0; // 0x110d Not
	if(var_896_bool == 0) goto Label_4368; // 0x110e JumpB
	return 0; // 0x110f Return
	
Label_4368:
	var_897_bool = var_894_string == var_2_object; // 0x1110 Eq
	if(var_897_bool == 0) goto Label_4371; // 0x1111 JumpB
	return 0; // 0x1112 Return
	
Label_4371:
	var_898_string = ""; var_899_bool = 0; // 0x1113 PushV
	var_898_string = var_894_string; // 0x1114 Mov
	var_900_string = ""; // 0x1115 PushS
	var_901_bool = var_894_string == var_900_string; // 0x1116 Eq
	if(var_901_bool == 0) goto Label_4378; // 0x1117 JumpB
	var_899_bool = 0; // 0x1118 MovB
	goto Label_4379; // 0x1119 Jump
	
Label_4379:
	func_4876(var_898_string, var_899_bool); // 0x111b NEW_2
	var_2_object = var_894_string; // 0x111d TMov
	return 0; // 0x111e Return
	
Label_4378:
	var_899_bool = 1; // 0x111a MovB
}


func_4876(var_247_string, var_248_bool)
{
	var_251_bool = 0; var_252_float = 0; var_253_float = 0; var_254_bool = 0; var_255_float = 0; var_256_float = 0; // 0x130c PushV
	lshHasAnimation(var_254_bool, var_247_string); // 0x130d Func
	var_257_bool = var_254_bool; // 0x130f Push
	if(var_257_bool == 0) goto Label_4886; // 0x1310 JumpB
	lshGetAnimTimes(var_247_string, var_255_float, var_256_float); // 0x1311 Func
	lshPlayAnimation(var_255_float, var_256_float, var_248_bool); // 0x1313 Func
	goto Label_4890; // 0x1315 Jump
	
Label_4890:
	return 6; // 0x131a Return
	
Label_4886:
	var_258_string = "Can't find lsh animation : "; // 0x1316 PushS
	var_259_int = var_258_string + var_247_string; // 0x1317 Add
	Trace(var_259_int); // 0x1318 Func
}


func_5391()
{
	var_674_string = "oob8MladVlad1"; // 0x1510 PushS
	var_675_int = 1; // 0x1511 PushI
	SetVariable(var_674_string, var_675_int); // 0x1512 Func
	return 0; // 0x1514 Return
}


func_2834(var_0_bool, var_577_int, var_578_object)
{
	var_580_object = Obj(); var_581_bool = 0; var_582_int = 0; var_583_bool = 0; var_584_object = Obj(); var_585_bool = 0; var_586_int = 0; var_587_bool = 0; // 0xb12 PushV
	var_0_bool = var_578_object; // 0xb13 TMov
	var_588_bool = 0; var_589_object = Obj(); var_590_float = 0; // 0xb14 PushV
	var_589_object = var_578_object; // 0xb15 Mov
	var_590_float = 70.0; // 0xb16 MovF
	func_4637(var_589_object, var_590_float); // 0xb17 NEW_2
	var_591_bool = var_588_bool == 0; // 0xb19 Not
	if(var_591_bool == 0) goto Label_2845; // 0xb1a JumpB
	var_577_int = -2; // 0xb1b MovI
	return 8; // 0xb1c Return
	
Label_2845:
	CreateDialog(var_584_object); // 0xb1d Func
	var_592_int = 0; // 0xb1f PushV
	func_5157(var_592_int); // 0xb20 NEW_2
	SetNPCName(var_592_int); // 0xb22 ObjFunc
	var_593_int = 0; // 0xb24 PushV
	func_5155(var_593_int); // 0xb25 NEW_2
	SetNPCDescription(var_593_int); // 0xb27 ObjFunc
	var_594_string = ""; // 0xb29 PushV
	func_5159(var_594_string); // 0xb2a NEW_2
	SetPhoto(var_594_string); // 0xb2c ObjFunc
	var_595_string = ""; // 0xb2e PushV
	func_5161(var_595_string); // 0xb2f NEW_2
	SetPhoto2(var_595_string); // 0xb31 ObjFunc
	var_596_int = 0; // 0xb33 PushV
	func_5840(var_596_int); // 0xb34 NEW_2
	SetPlayerName(var_596_int); // 0xb36 ObjFunc
	var_586_int = -1; // 0xb38 MovI
	IsOverrideActive(var_585_bool); // 0xb39 Func
	var_597_bool = var_585_bool; // 0xb3b Push
	if(var_597_bool == 0) goto Label_2879; // 0xb3c JumpB
	var_577_int = -2; // 0xb3d MovI
	return 8; // 0xb3e Return
	
Label_2879:
	DoDialog(var_584_object); // 0xb3f Func
	var_598_bool = 0; var_599_object = Obj(); // 0xb41 PushV
	var_600_object = Obj(); // 0xb42 PushV
	func_4913(var_600_object); // 0xb43 NEW_2
	var_599_object = var_600_object; // 0xb44 Mov
	func_4722(var_598_bool, var_599_object); // 0xb46 NEW_2
	var_601_object = Obj(); var_602_object = Obj(); // 0xb48 PushV
	var_601_object = var_578_object; // 0xb49 Mov
	var_602_object = var_584_object; // 0xb4a Mov
	TaskCall(15); // 0xb4b TaskCall
	func_2915(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object); // 0xb4c NEW_2
	TaskReturn(); // 0xb4d TaskReturn
	IsDialogEnd(var_587_bool); // 0xb4f ObjFunc
	
Label_2897:
	var_631_bool = var_587_bool == 0; // 0xb51 Not
	if(var_631_bool == 0) goto Label_2904; // 0xb52 JumpB
	sync(); // 0xb53 Func
	IsDialogEnd(var_587_bool); // 0xb55 ObjFunc
	goto Label_2897; // 0xb57 Jump
	
Label_2904:
	var_632_object = Obj(); // 0xb58 PushV
	var_632_object = var_578_object; // 0xb59 Mov
	func_4705(); // 0xb5a NEW_2
	StopDialog(var_584_object); // 0xb5c Func
	GetReturnValue(var_586_int); // 0xb5e ObjFunc
	var_577_int = var_586_int; // 0xb60 Mov
	return 8; // 0xb61 Return
}


func_5397()
{
	var_63_string = "b11q01KnowWhoKilled"; // 0x1516 PushS
	var_64_int = 1; // 0x1517 PushI
	SetVariable(var_63_string, var_64_int); // 0x1518 Func
	func_5658(); // 0x151b NEW_2
	return 0; // 0x151d Return
}


func_282(var_0_bool, var_803_int, var_804_object)
{
	var_806_object = Obj(); var_807_bool = 0; var_808_int = 0; var_809_bool = 0; var_810_object = Obj(); var_811_bool = 0; var_812_int = 0; var_813_bool = 0; // 0x11a PushV
	var_0_bool = var_804_object; // 0x11b TMov
	var_814_bool = 0; var_815_object = Obj(); var_816_float = 0; // 0x11c PushV
	var_815_object = var_804_object; // 0x11d Mov
	var_816_float = 70.0; // 0x11e MovF
	func_4637(var_815_object, var_816_float); // 0x11f NEW_2
	var_817_bool = var_814_bool == 0; // 0x121 Not
	if(var_817_bool == 0) goto Label_293; // 0x122 JumpB
	var_803_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	CreateDialog(var_810_object); // 0x125 Func
	var_818_int = 0; // 0x127 PushV
	func_5157(var_818_int); // 0x128 NEW_2
	SetNPCName(var_818_int); // 0x12a ObjFunc
	var_819_int = 0; // 0x12c PushV
	func_5155(var_819_int); // 0x12d NEW_2
	SetNPCDescription(var_819_int); // 0x12f ObjFunc
	var_820_string = ""; // 0x131 PushV
	func_5159(var_820_string); // 0x132 NEW_2
	SetPhoto(var_820_string); // 0x134 ObjFunc
	var_821_string = ""; // 0x136 PushV
	func_5161(var_821_string); // 0x137 NEW_2
	SetPhoto2(var_821_string); // 0x139 ObjFunc
	var_822_int = 0; // 0x13b PushV
	func_5840(var_822_int); // 0x13c NEW_2
	SetPlayerName(var_822_int); // 0x13e ObjFunc
	var_812_int = -1; // 0x140 MovI
	IsOverrideActive(var_811_bool); // 0x141 Func
	var_823_bool = var_811_bool; // 0x143 Push
	if(var_823_bool == 0) goto Label_327; // 0x144 JumpB
	var_803_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	DoDialog(var_810_object); // 0x147 Func
	var_824_bool = 0; var_825_object = Obj(); // 0x149 PushV
	var_826_object = Obj(); // 0x14a PushV
	func_4913(var_826_object); // 0x14b NEW_2
	var_825_object = var_826_object; // 0x14c Mov
	func_4722(var_824_bool, var_825_object); // 0x14e NEW_2
	var_827_object = Obj(); var_828_object = Obj(); // 0x150 PushV
	var_827_object = var_804_object; // 0x151 Mov
	var_828_object = var_810_object; // 0x152 Mov
	TaskCall(5); // 0x153 TaskCall
	func_363(var_829_object, var_830_object, var_831_string, var_832_bool, var_827_object, var_828_object); // 0x154 NEW_2
	TaskReturn(); // 0x155 TaskReturn
	IsDialogEnd(var_813_bool); // 0x157 ObjFunc
	
Label_345:
	var_860_bool = var_813_bool == 0; // 0x159 Not
	if(var_860_bool == 0) goto Label_352; // 0x15a JumpB
	sync(); // 0x15b Func
	IsDialogEnd(var_813_bool); // 0x15d ObjFunc
	goto Label_345; // 0x15f Jump
	
Label_352:
	var_861_object = Obj(); // 0x160 PushV
	var_861_object = var_804_object; // 0x161 Mov
	func_4705(); // 0x162 NEW_2
	StopDialog(var_810_object); // 0x164 Func
	GetReturnValue(var_812_int); // 0x166 ObjFunc
	var_803_int = var_812_int; // 0x168 Mov
	return 8; // 0x169 Return
}


func_4891(var_175_bool, var_176_string)
{
	var_177_bool = 0; var_178_bool = 0; // 0x131b PushV
	var_179_bool = 0; // 0x131c PushV
	func_5163(var_179_bool); // 0x131d NEW_2
	if(var_179_bool == 0) goto Label_4904; // 0x131f JumpB
	lshHasSpeech(var_178_bool, var_176_string); // 0x1320 Func
	var_180_bool = var_178_bool; // 0x1322 Push
	if(var_180_bool == 0) goto Label_4904; // 0x1323 JumpB
	lshPlaySpeech(var_176_string); // 0x1324 Func
	var_175_bool = 1; // 0x1326 MovB
	return 2; // 0x1327 Return
	
Label_4904:
	var_175_bool = 0; // 0x1328 MovB
	return 2; // 0x1329 Return
}


func_1308(var_0_bool, var_1_object, var_2_object, var_3_object, var_419_object, var_420_object)
{
	var_0_bool = var_420_object; // 0x51d TMov
	var_1_object = var_419_object; // 0x51e TMov
	var_3_object = 0; // 0x51f TMovB
	var_425_int = 1; // 0x520 PushI
	if(var_425_int == 0) goto Label_1381; // 0x521 JumpB
	var_426_bool = 0; var_427_object = Obj(); // 0x522 PushV
	var_427_object = var_1_object; // 0x523 MovT
	func_5598(var_427_object); // 0x524 NEW_2
	var_432_bool = var_426_bool == 0; // 0x526 Not
	if(var_432_bool == 0) goto Label_1345; // 0x527 JumpB
	var_433_object = Obj(); var_434_object = Obj(); // 0x528 PushV
	var_433_object = var_1_object; // 0x529 MovT
	var_434_object = var_0_bool; // 0x52a MovT
	func_5412(); // 0x52b NEW_2
	var_441_string = ""; // 0x52d PushV
	var_441_string = "Neutral"; // 0x52e MovS
	func_1411(var_420_object, var_441_string); // 0x52f NEW_2
	var_449_int = 520000; // 0x531 PushI
	SetMessage(var_449_int); // 0x532 TObjFunc
	ClearReplies(); // 0x534 TObjFunc
	var_450_int = 520001; // 0x536 PushI
	var_451_int = 21183; // 0x537 PushI
	var_452_int = 21182; // 0x538 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x539 TObjFunc
	var_453_int = 520017; // 0x53b PushI
	var_454_int = 21183; // 0x53c PushI
	var_455_int = 21199; // 0x53d PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x53e TObjFunc
	goto Label_1381; // 0x540 Jump
	
Label_1381:
	var_456_bool = 0; // 0x565 PushV
	func_5163(var_456_bool); // 0x566 NEW_2
	if(var_456_bool == 0) goto Label_1396; // 0x568 JumpB
	
Label_1385:
	lshWaitForAnimEnd(); // 0x569 Func
	var_457_object = var_3_object; // 0x56b PushT
	if(var_457_object == 0) goto Label_1390; // 0x56c JumpB
	goto Label_1395; // 0x56d Jump
	
Label_1395:
	goto Label_1410; // 0x573 Jump
	
Label_1410:
	return 0; // 0x582 Return
	
Label_1390:
	var_458_string = ""; // 0x56e PushV
	var_458_string = var_2_object; // 0x56f MovT
	func_4860(var_458_string); // 0x570 NEW_2
	goto Label_1385; // 0x572 Jump
	
Label_1396:
	var_459_string = "all"; // 0x574 PushS
	var_460_string = "idle"; // 0x575 PushS
	PlayAnimation(var_459_string, var_460_string); // 0x576 Func
	
Label_1400:
	WaitForAnimEnd(); // 0x578 Func
	var_461_object = var_3_object; // 0x57a PushT
	if(var_461_object == 0) goto Label_1405; // 0x57b JumpB
	goto Label_1410; // 0x57c Jump
	
Label_1405:
	var_462_string = "all"; // 0x57d PushS
	var_463_string = "idle"; // 0x57e PushS
	PlayAnimation(var_462_string, var_463_string); // 0x57f Func
	goto Label_1400; // 0x581 Jump
	
Label_1345:
	var_464_string = ""; // 0x541 PushV
	var_464_string = "Neutral"; // 0x542 MovS
	func_1411(var_420_object, var_464_string); // 0x543 NEW_2
	var_465_int = 520019; // 0x545 PushI
	SetMessage(var_465_int); // 0x546 TObjFunc
	ClearReplies(); // 0x548 TObjFunc
	var_466_bool = 0; // 0x54a PushV
	var_466_bool = 0; // 0x54b MovB
	var_467_bool = 0; var_468_object = Obj(); // 0x54c PushV
	var_468_object = var_1_object; // 0x54d MovT
	func_5610(var_468_object); // 0x54e NEW_2
	if(var_467_bool == 0) goto Label_1367; // 0x550 JumpB
	var_473_bool = 0; var_474_object = Obj(); // 0x551 PushV
	var_474_object = var_1_object; // 0x552 MovT
	func_5598(var_474_object); // 0x553 NEW_2
	if(var_473_bool == 0) goto Label_1367; // 0x555 JumpB
	var_466_bool = 1; // 0x556 MovB
	
Label_1367:
	if(var_466_bool == 0) goto Label_1373; // 0x557 JumpB
	var_475_int = 520020; // 0x558 PushI
	var_476_int = 21205; // 0x559 PushI
	var_477_int = 21204; // 0x55a PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x55b TObjFunc
	
Label_1373:
	var_478_int = 520030; // 0x55d PushI
	var_479_int = -1; // 0x55e PushI
	var_480_int = 21214; // 0x55f PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x560 TObjFunc
	goto Label_1381; // 0x562 Jump
}


func_5406()
{
	var_57_string = "oob11MladVlad1"; // 0x151f PushS
	var_58_int = 1; // 0x1520 PushI
	SetVariable(var_57_string, var_58_int); // 0x1521 Func
	return 0; // 0x1523 Return
}


func_5412()
{
	var_435_bool = 0; var_436_string = ""; var_437_string = ""; // 0x1525 PushV
	var_436_string = "quest_b2_01"; // 0x1526 MovS
	var_437_string = "place_mladvlad"; // 0x1527 MovS
	func_5061(var_435_bool, var_436_string, var_437_string); // 0x1528 NEW_2
	return 0; // 0x152a Return
}


func_4906()
{
	var_52_bool = 0; // 0x132a PushV
	func_5163(var_52_bool); // 0x132b NEW_2
	if(var_52_bool == 0) goto Label_4912; // 0x132d JumpB
	lshStopSpeech(); // 0x132e Func
	
Label_4912:
	return 0; // 0x1330 Return
}


func_5419(var_171_object)
{
	var_173_string = "money10000 is given"; // 0x152c PushS
	Trace(var_173_string); // 0x152d Func
	var_174_object = Obj(); var_175_int = 0; // 0x152f PushV
	var_174_object = var_171_object; // 0x1530 Mov
	var_175_int = 10000; // 0x1531 MovI
	func_5003(var_174_object, var_175_int); // 0x1532 NEW_2
	return 0; // 0x1534 Return
}


func_4913(var_143_object)
{
	var_144_object = Obj(); var_145_object = Obj(); // 0x1331 PushV
	self(var_145_object); // 0x1332 Func
	var_143_object = var_145_object; // 0x1334 Mov
	return 2; // 0x1335 Return
}


func_5429()
{
	var_151_string = "playsound"; // 0x1536 PushS
	var_152_string = "givemoney"; // 0x1537 PushS
	TriggerWorld(var_151_string, var_152_string); // 0x1538 Func
	return 0; // 0x153a Return
}


func_4919(var_108_cvector, var_109_cvector)
{
	var_111_float = 0; var_112_float = 0; // 0x1337 PushV
	var_113_int = var_109_cvector | var_109_cvector; // 0x1338 Or
	var_112_float = sqrt(var_113_int); // 0x1339 Sqrt2
	var_114_float = 0.0; // 0x133a PushF
	var_115_bool = var_112_float < var_114_float; // 0x133b LT
	if(var_115_bool == 0) goto Label_4927; // 0x133c JumpB
	var_108_cvector = CVector(0.0, 0.0, 0.0); // 0x133d MovV
	return 2; // 0x133e Return
	
Label_4927:
	var_108_cvector = var_109_cvector / var_109_cvector; // 0x133f Div2
	return 2; // 0x1340 Return
}


func_5435()
{
	var_81_string = "playsound"; // 0x153c PushS
	var_82_string = "giveitem"; // 0x153d PushS
	TriggerWorld(var_81_string, var_82_string); // 0x153e Func
	return 0; // 0x1540 Return
}


func_3903(var_2_object, var_764_string)
{
	var_765_bool = 0; // 0xf40 PushV
	func_5163(var_765_bool); // 0xf41 NEW_2
	var_766_bool = var_765_bool == 0; // 0xf43 Not
	if(var_766_bool == 0) goto Label_3910; // 0xf44 JumpB
	return 0; // 0xf45 Return
	
Label_3910:
	var_767_bool = var_764_string == var_2_object; // 0xf46 Eq
	if(var_767_bool == 0) goto Label_3913; // 0xf47 JumpB
	return 0; // 0xf48 Return
	
Label_3913:
	var_768_string = ""; var_769_bool = 0; // 0xf49 PushV
	var_768_string = var_764_string; // 0xf4a Mov
	var_770_string = ""; // 0xf4b PushS
	var_771_bool = var_764_string == var_770_string; // 0xf4c Eq
	if(var_771_bool == 0) goto Label_3920; // 0xf4d JumpB
	var_769_bool = 0; // 0xf4e MovB
	goto Label_3921; // 0xf4f Jump
	
Label_3921:
	func_4876(var_768_string, var_769_bool); // 0xf51 NEW_2
	var_2_object = var_764_string; // 0xf53 TMov
	return 0; // 0xf54 Return
	
Label_3920:
	var_769_bool = 1; // 0xf50 MovB
}


func_5441()
{
	var_528_string = "b5MladVladVisit"; // 0x1542 PushS
	var_529_int = 1; // 0x1543 PushI
	SetVariable(var_528_string, var_529_int); // 0x1544 Func
	return 0; // 0x1546 Return
}


func_4929(var_105_float, var_106_float)
{
	var_108_int = 0; // 0x1342 PushI
	var_109_bool = var_106_float < var_108_int; // 0x1343 LT
	if(var_109_bool == 0) goto Label_4935; // 0x1344 JumpB
	var_105_float = -var_106_float; // 0x1345 Neg2
	goto Label_4936; // 0x1346 Jump
	
Label_4936:
	return 0; // 0x1348 Return
	
Label_4935:
	var_105_float = var_106_float; // 0x1347 Mov
}


func_5447(var_199_object)
{
	var_201_string = "money 7000 is given"; // 0x1548 PushS
	Trace(var_201_string); // 0x1549 Func
	var_202_object = Obj(); var_203_int = 0; // 0x154b PushV
	var_202_object = var_199_object; // 0x154c Mov
	var_203_int = 7000; // 0x154d MovI
	func_5003(var_202_object, var_203_int); // 0x154e NEW_2
	return 0; // 0x1550 Return
}


func_4937(var_116_float, var_117_cvector)
{
	var_118_float = GetByIndex(var_117_cvector, 0); // 0x134a PushE
	var_119_float = GetByIndex(var_117_cvector, 0); // 0x134b PushE
	var_120_float = var_118_float * var_119_float; // 0x134c Mult
	var_121_float = GetByIndex(var_117_cvector, 2); // 0x134d PushE
	var_122_float = GetByIndex(var_117_cvector, 2); // 0x134e PushE
	var_123_float = var_121_float * var_122_float; // 0x134f Mult
	var_124_int = var_120_float + var_123_float; // 0x1350 Add
	var_116_float = sqrt(var_124_int); // 0x1351 Sqrt2
	return 0; // 0x1352 Return
}


func_4432(var_0_bool, var_1_object, var_2_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_cvector = CVector(0,0,0); // 0x1150 PushV
	var_72_bool = 1; // 0x1151 PushB
	SensePlayerOnly(var_72_bool); // 0x1152 Func
	func_4520(); // 0x1155 NEW_2
	GetScene(var_61_object); // 0x1157 Func
	var_2_object = 0; // 0x1159 TMovI
	
Label_4442:
	var_77_string = ""; var_78_int = 0; // 0x115a PushV
	var_78_int = var_2_object; // 0x115b MovT
	func_5141(var_77_string, var_78_int); // 0x115c NEW_2
	GetLocator(var_77_string, var_62_bool); // 0x115e ObjFunc
	var_86_bool = var_62_bool == 0; // 0x1160 Not
	if(var_86_bool == 0) goto Label_4451; // 0x1161 JumpB
	goto Label_4454; // 0x1162 Jump
	
Label_4454:
	var_87_bool = 0; // 0x1166 PushV
	func_4632(var_87_bool); // 0x1167 NEW_2
	var_90_bool = var_87_bool == 0; // 0x1169 Not
	if(var_90_bool == 0) goto Label_4464; // 0x116a JumpB
	TaskCall(0); // 0x116c TaskCall
	func_0(); // 0x116d NEW_2
	TaskReturn(); // 0x116e TaskReturn
	
Label_4464:
	func_4528(var_70_bool, var_71_cvector); // 0x1171 NEW_2
	
Label_4467:
	irand(var_63_int, var_70_bool); // 0x1173 Func
	var_111_string = ""; var_112_int = 0; // 0x1175 PushV
	var_112_int = var_63_int; // 0x1176 Mov
	func_5141(var_111_string, var_112_int); // 0x1177 NEW_2
	GetLocator(var_111_string, var_64_bool, var_65_cvector, var_66_cvector); // 0x1179 ObjFunc
	var_113_cvector = CVector(0,0,0); // 0x117b PushV
	func_4575(var_113_cvector); // 0x117c NEW_2
	var_67_cvector = var_65_cvector - var_113_cvector; // 0x117e Sub2
	var_116_float = 0; var_117_cvector = CVector(0,0,0); // 0x117f PushV
	var_117_cvector = var_67_cvector; // 0x1180 Mov
	func_4937(var_116_float, var_117_cvector); // 0x1181 NEW_2
	var_125_bool = var_116_float > var_1_object; // 0x1183 GT
	if(var_125_bool == 0) goto Label_4514; // 0x1184 JumpB
	GetHeight(var_68_float); // 0x1185 Func
	var_69_cvector = var_65_cvector; // 0x1187 Mov
	var_126_float = GetByIndex(var_69_cvector, 1); // 0x1188 PushE
	var_126_float = var_126_float + var_68_float; // 0x1189 Add2
	SetByIndex(var_69_cvector, 1) = var_126_float; // 0x118a PopE
	CanReachByPF(var_70_bool, var_69_cvector); // 0x118b Func
	var_127_bool = var_70_bool; // 0x118d Push
	if(var_127_bool == 0) goto Label_4514; // 0x118e JumpB
	var_128_int = var_67_cvector | var_67_cvector; // 0x118f Or
	var_129_float = sqrt(var_128_int); // 0x1190 Sqrt
	var_130_float = var_0_bool / var_129_float; // 0x1191 Div
	var_131_float = var_67_cvector * var_130_float; // 0x1192 Mult
	var_71_cvector = var_65_cvector - var_131_float; // 0x1193 Sub2
	var_132_bool = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); // 0x1194 PushV
	var_133_cvector = var_71_cvector; // 0x1195 Mov
	var_134_cvector = var_66_cvector; // 0x1196 Mov
	TaskCall(1); // 0x1197 TaskCall
	func_13(var_135_bool, var_132_bool, var_133_cvector, var_134_cvector); // 0x1198 NEW_2
	TaskReturn(); // 0x1199 TaskReturn
	if(var_135_bool == 0) goto Label_4514; // 0x119b JumpB
	var_159_int = 0; // 0x119c PushV
	var_159_int = var_63_int; // 0x119d Mov
	TaskCall(3); // 0x119e TaskCall
	func_198(var_159_int); // 0x119f NEW_2
	TaskReturn(); // 0x11a0 TaskReturn
	
Label_4514:
	var_212_int = 1; // 0x11a2 PushI
	Sleep(var_212_int); // 0x11a3 Func
	goto Label_4467; // 0x11a5 Jump
	
Label_4451:
	var_213_int = 1; // 0x1163 PushI
	var_2_object = var_2_object + var_213_int; // 0x1164 Add2
	goto Label_4442; // 0x1165 Jump
}


func_5457(var_204_object)
{
	var_206_string = "recipe2 is given"; // 0x1552 PushS
	Trace(var_206_string); // 0x1553 Func
	var_207_object = Obj(); var_208_string = ""; var_209_int = 0; // 0x1555 PushV
	var_207_object = var_204_object; // 0x1556 Mov
	var_208_string = "recipe2"; // 0x1557 MovS
	var_209_int = 1; // 0x1558 MovI
	func_5041(var_207_object, var_208_string, var_209_int); // 0x1559 NEW_2
	return 0; // 0x155b Return
}


func_4947(var_330_int, var_331_string)
{
	var_332_int = 0; var_333_int = 0; // 0x1353 PushV
	GetVariable(var_331_string, var_333_int); // 0x1354 Func
	var_330_int = var_333_int; // 0x1356 Mov
	return 2; // 0x1357 Return
}


func_4952(var_118_object, var_119_string)
{
	var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj(); var_123_object = Obj(); // 0x1358 PushV
	GetMainOutdoorScene(var_122_object); // 0x1359 Func
	var_124_string = ".bin"; // 0x135b PushS
	var_125_int = var_119_string + var_124_string; // 0x135c Add
	AddBlankActor(var_123_object, var_122_object, var_119_string, var_125_int); // 0x135d Func
	var_118_object = var_123_object; // 0x135f Mov
	return 4; // 0x1360 Return
}


func_5468(var_210_object)
{
	var_212_string = "recipe3 is given"; // 0x155d PushS
	Trace(var_212_string); // 0x155e Func
	var_213_object = Obj(); var_214_string = ""; var_215_int = 0; // 0x1560 PushV
	var_213_object = var_210_object; // 0x1561 Mov
	var_214_string = "recipe3"; // 0x1562 MovS
	var_215_int = 1; // 0x1563 MovI
	func_5041(var_213_object, var_214_string, var_215_int); // 0x1564 NEW_2
	return 0; // 0x1566 Return
}


func_2915(var_0_bool, var_1_object, var_2_object, var_3_object, var_601_object, var_602_object)
{
	var_0_bool = var_602_object; // 0xb64 TMov
	var_1_object = var_601_object; // 0xb65 TMov
	var_3_object = 0; // 0xb66 TMovB
	var_607_int = 1; // 0xb67 PushI
	if(var_607_int == 0) goto Label_2943; // 0xb68 JumpB
	var_608_string = ""; // 0xb69 PushV
	var_608_string = "Untrust"; // 0xb6a MovS
	func_2973(var_602_object, var_608_string); // 0xb6b NEW_2
	var_616_int = 521202; // 0xb6d PushI
	SetMessage(var_616_int); // 0xb6e TObjFunc
	ClearReplies(); // 0xb70 TObjFunc
	var_617_int = 521203; // 0xb72 PushI
	var_618_int = 22402; // 0xb73 PushI
	var_619_int = 22400; // 0xb74 PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0xb75 TObjFunc
	var_620_int = 521204; // 0xb77 PushI
	var_621_int = -1; // 0xb78 PushI
	var_622_int = 22401; // 0xb79 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0xb7a TObjFunc
	goto Label_2943; // 0xb7c Jump
	
Label_2943:
	var_623_bool = 0; // 0xb7f PushV
	func_5163(var_623_bool); // 0xb80 NEW_2
	if(var_623_bool == 0) goto Label_2958; // 0xb82 JumpB
	
Label_2947:
	lshWaitForAnimEnd(); // 0xb83 Func
	var_624_object = var_3_object; // 0xb85 PushT
	if(var_624_object == 0) goto Label_2952; // 0xb86 JumpB
	goto Label_2957; // 0xb87 Jump
	
Label_2957:
	goto Label_2972; // 0xb8d Jump
	
Label_2972:
	return 0; // 0xb9c Return
	
Label_2952:
	var_625_string = ""; // 0xb88 PushV
	var_625_string = var_2_object; // 0xb89 MovT
	func_4860(var_625_string); // 0xb8a NEW_2
	goto Label_2947; // 0xb8c Jump
	
Label_2958:
	var_626_string = "all"; // 0xb8e PushS
	var_627_string = "idle"; // 0xb8f PushS
	PlayAnimation(var_626_string, var_627_string); // 0xb90 Func
	
Label_2962:
	WaitForAnimEnd(); // 0xb92 Func
	var_628_object = var_3_object; // 0xb94 PushT
	if(var_628_object == 0) goto Label_2967; // 0xb95 JumpB
	goto Label_2972; // 0xb96 Jump
	
Label_2967:
	var_629_string = "all"; // 0xb97 PushS
	var_630_string = "idle"; // 0xb98 PushS
	PlayAnimation(var_629_string, var_630_string); // 0xb99 Func
	goto Label_2962; // 0xb9b Jump
}


func_4963(var_90_object, var_91_string)
{
	var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); // 0x1363 PushV
	GetMainOutdoorScene(var_94_object); // 0x1364 Func
	var_96_string = ".xml"; // 0x1366 PushS
	var_97_int = var_91_string + var_96_string; // 0x1367 Add
	AddBlankActorFromXml(var_95_object, var_94_object, var_91_string, var_97_int); // 0x1368 Func
	var_90_object = var_95_object; // 0x136a Mov
	return 4; // 0x136b Return
}


func_5479()
{
	var_126_string = "playsound"; // 0x1568 PushS
	var_127_string = "giveitem"; // 0x1569 PushS
	TriggerWorld(var_126_string, var_127_string); // 0x156a Func
	return 0; // 0x156c Return
}


func_1895(var_0_bool, var_485_int, var_486_object)
{
	var_488_object = Obj(); var_489_bool = 0; var_490_int = 0; var_491_bool = 0; var_492_object = Obj(); var_493_bool = 0; var_494_int = 0; var_495_bool = 0; // 0x767 PushV
	var_0_bool = var_486_object; // 0x768 TMov
	var_496_bool = 0; var_497_object = Obj(); var_498_float = 0; // 0x769 PushV
	var_497_object = var_486_object; // 0x76a Mov
	var_498_float = 70.0; // 0x76b MovF
	func_4637(var_497_object, var_498_float); // 0x76c NEW_2
	var_499_bool = var_496_bool == 0; // 0x76e Not
	if(var_499_bool == 0) goto Label_1906; // 0x76f JumpB
	var_485_int = -2; // 0x770 MovI
	return 8; // 0x771 Return
	
Label_1906:
	CreateDialog(var_492_object); // 0x772 Func
	var_500_int = 0; // 0x774 PushV
	func_5157(var_500_int); // 0x775 NEW_2
	SetNPCName(var_500_int); // 0x777 ObjFunc
	var_501_int = 0; // 0x779 PushV
	func_5155(var_501_int); // 0x77a NEW_2
	SetNPCDescription(var_501_int); // 0x77c ObjFunc
	var_502_string = ""; // 0x77e PushV
	func_5159(var_502_string); // 0x77f NEW_2
	SetPhoto(var_502_string); // 0x781 ObjFunc
	var_503_string = ""; // 0x783 PushV
	func_5161(var_503_string); // 0x784 NEW_2
	SetPhoto2(var_503_string); // 0x786 ObjFunc
	var_504_int = 0; // 0x788 PushV
	func_5840(var_504_int); // 0x789 NEW_2
	SetPlayerName(var_504_int); // 0x78b ObjFunc
	var_494_int = -1; // 0x78d MovI
	IsOverrideActive(var_493_bool); // 0x78e Func
	var_505_bool = var_493_bool; // 0x790 Push
	if(var_505_bool == 0) goto Label_1940; // 0x791 JumpB
	var_485_int = -2; // 0x792 MovI
	return 8; // 0x793 Return
	
Label_1940:
	DoDialog(var_492_object); // 0x794 Func
	var_506_bool = 0; var_507_object = Obj(); // 0x796 PushV
	var_508_object = Obj(); // 0x797 PushV
	func_4913(var_508_object); // 0x798 NEW_2
	var_507_object = var_508_object; // 0x799 Mov
	func_4722(var_506_bool, var_507_object); // 0x79b NEW_2
	var_509_object = Obj(); var_510_object = Obj(); // 0x79d PushV
	var_509_object = var_486_object; // 0x79e Mov
	var_510_object = var_492_object; // 0x79f Mov
	TaskCall(11); // 0x7a0 TaskCall
	func_1976(var_511_object, var_512_object, var_513_string, var_514_bool, var_509_object, var_510_object); // 0x7a1 NEW_2
	TaskReturn(); // 0x7a2 TaskReturn
	IsDialogEnd(var_495_bool); // 0x7a4 ObjFunc
	
Label_1958:
	var_573_bool = var_495_bool == 0; // 0x7a6 Not
	if(var_573_bool == 0) goto Label_1965; // 0x7a7 JumpB
	sync(); // 0x7a8 Func
	IsDialogEnd(var_495_bool); // 0x7aa ObjFunc
	goto Label_1958; // 0x7ac Jump
	
Label_1965:
	var_574_object = Obj(); // 0x7ad PushV
	var_574_object = var_486_object; // 0x7ae Mov
	func_4705(); // 0x7af NEW_2
	StopDialog(var_492_object); // 0x7b1 Func
	GetReturnValue(var_494_int); // 0x7b3 ObjFunc
	var_485_int = var_494_int; // 0x7b5 Mov
	return 8; // 0x7b6 Return
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_827_object, var_828_object)
{
	var_0_bool = var_828_object; // 0x16c TMov
	var_1_object = var_827_object; // 0x16d TMov
	var_3_object = 0; // 0x16e TMovB
	var_833_int = 1; // 0x16f PushI
	if(var_833_int == 0) goto Label_396; // 0x170 JumpB
	var_834_string = ""; // 0x171 PushV
	var_834_string = "Neutral"; // 0x172 MovS
	func_426(var_828_object, var_834_string); // 0x173 NEW_2
	var_842_int = 535231; // 0x175 PushI
	SetMessage(var_842_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_843_int = 535232; // 0x17a PushI
	var_844_int = 36953; // 0x17b PushI
	var_845_int = 36907; // 0x17c PushI
	AddReply(var_843_int, var_844_int, var_845_int); // 0x17d TObjFunc
	var_846_int = 535233; // 0x17f PushI
	var_847_int = -1; // 0x180 PushI
	var_848_int = 36908; // 0x181 PushI
	AddReply(var_846_int, var_847_int, var_848_int); // 0x182 TObjFunc
	var_849_int = 535280; // 0x184 PushI
	var_850_int = -1; // 0x185 PushI
	var_851_int = 36956; // 0x186 PushI
	AddReply(var_849_int, var_850_int, var_851_int); // 0x187 TObjFunc
	goto Label_396; // 0x189 Jump
	
Label_396:
	var_852_bool = 0; // 0x18c PushV
	func_5163(var_852_bool); // 0x18d NEW_2
	if(var_852_bool == 0) goto Label_411; // 0x18f JumpB
	
Label_400:
	lshWaitForAnimEnd(); // 0x190 Func
	var_853_object = var_3_object; // 0x192 PushT
	if(var_853_object == 0) goto Label_405; // 0x193 JumpB
	goto Label_410; // 0x194 Jump
	
Label_410:
	goto Label_425; // 0x19a Jump
	
Label_425:
	return 0; // 0x1a9 Return
	
Label_405:
	var_854_string = ""; // 0x195 PushV
	var_854_string = var_2_object; // 0x196 MovT
	func_4860(var_854_string); // 0x197 NEW_2
	goto Label_400; // 0x199 Jump
	
Label_411:
	var_855_string = "all"; // 0x19b PushS
	var_856_string = "idle"; // 0x19c PushS
	PlayAnimation(var_855_string, var_856_string); // 0x19d Func
	
Label_415:
	WaitForAnimEnd(); // 0x19f Func
	var_857_object = var_3_object; // 0x1a1 PushT
	if(var_857_object == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_425; // 0x1a3 Jump
	
Label_420:
	var_858_string = "all"; // 0x1a4 PushS
	var_859_string = "idle"; // 0x1a5 PushS
	PlayAnimation(var_858_string, var_859_string); // 0x1a6 Func
	goto Label_415; // 0x1a8 Jump
}


func_5485()
{
	var_167_string = "playsound"; // 0x156e PushS
	var_168_string = "mapmark"; // 0x156f PushS
	TriggerWorld(var_167_string, var_168_string); // 0x1570 Func
	return 0; // 0x1572 Return
}


func_4974(var_103_string, var_104_bool)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x136e PushV
	FindActor(var_106_object, var_103_string); // 0x136f Func
	var_107_bool = var_106_object == 0; // 0x1371 Not
	if(var_107_bool == 0) goto Label_4986; // 0x1372 JumpB
	var_108_string = "Door "; // 0x1373 PushS
	var_109_int = var_108_string + var_103_string; // 0x1374 Add
	var_110_string = " not found"; // 0x1375 PushS
	var_111_int = var_109_int + var_110_string; // 0x1376 Add
	Trace(var_111_int); // 0x1377 Func
	goto Label_4989; // 0x1379 Jump
	
Label_4989:
	return 2; // 0x137d Return
	
Label_4986:
	var_112_string = "locked"; // 0x137a PushS
	SetProperty(var_112_string, var_104_bool); // 0x137b ObjFunc
}


func_5491(var_666_bool)
{
	var_668_int = 0; var_669_string = ""; // 0x1574 PushV
	var_669_string = "oob8MladVlad1"; // 0x1575 MovS
	func_4947(var_668_int, var_669_string); // 0x1576 NEW_2
	var_670_int = 0; // 0x1578 PushI
	var_671_bool = var_668_int == var_670_int; // 0x1579 Eq
	if(var_671_bool == 0) goto Label_5501; // 0x157a JumpB
	var_666_bool = 1; // 0x157b MovB
	return 0; // 0x157c Return
	
Label_5501:
	var_666_bool = 0; // 0x157d MovB
	return 0; // 0x157e Return
}


func_5503(var_701_bool)
{
	var_703_int = 0; var_704_string = ""; // 0x1580 PushV
	var_704_string = "b8q02"; // 0x1581 MovS
	func_4947(var_703_int, var_704_string); // 0x1582 NEW_2
	var_705_int = 0; // 0x1584 PushI
	var_706_bool = var_703_int == var_705_int; // 0x1585 Eq
	if(var_706_bool == 0) goto Label_5513; // 0x1586 JumpB
	var_701_bool = 1; // 0x1587 MovB
	return 0; // 0x1588 Return
	
Label_5513:
	var_701_bool = 0; // 0x1589 MovB
	return 0; // 0x158a Return
}


func_4991(var_144_int, var_145_int)
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x137f PushV
	CreateIntVector(var_147_object); // 0x1380 Func
	add(var_144_int); // 0x1382 ObjFunc
	add(var_145_int); // 0x1384 ObjFunc
	var_148_int = 3; // 0x1386 PushI
	SendWorldWndMessage(var_148_int, var_147_object); // 0x1387 Func
	return 2; // 0x1389 Return
}


func_1411(var_2_object, var_441_string)
{
	var_442_bool = 0; // 0x584 PushV
	func_5163(var_442_bool); // 0x585 NEW_2
	var_443_bool = var_442_bool == 0; // 0x587 Not
	if(var_443_bool == 0) goto Label_1418; // 0x588 JumpB
	return 0; // 0x589 Return
	
Label_1418:
	var_444_bool = var_441_string == var_2_object; // 0x58a Eq
	if(var_444_bool == 0) goto Label_1421; // 0x58b JumpB
	return 0; // 0x58c Return
	
Label_1421:
	var_445_string = ""; var_446_bool = 0; // 0x58d PushV
	var_445_string = var_441_string; // 0x58e Mov
	var_447_string = ""; // 0x58f PushS
	var_448_bool = var_441_string == var_447_string; // 0x590 Eq
	if(var_448_bool == 0) goto Label_1428; // 0x591 JumpB
	var_446_bool = 0; // 0x592 MovB
	goto Label_1429; // 0x593 Jump
	
Label_1429:
	func_4876(var_445_string, var_446_bool); // 0x595 NEW_2
	var_2_object = var_441_string; // 0x597 TMov
	return 0; // 0x598 Return
	
Label_1428:
	var_446_bool = 1; // 0x594 MovB
}


func_5515(var_714_bool, var_715_object)
{
	var_716_bool = 0; var_717_object = Obj(); var_718_string = ""; // 0x158c PushV
	var_717_object = var_715_object; // 0x158d Mov
	var_718_string = "b8q02_book"; // 0x158e MovS
	func_5054(var_717_object, var_718_string); // 0x158f NEW_2
	if(var_716_bool == 0) goto Label_5524; // 0x1591 JumpB
	var_714_bool = 1; // 0x1592 MovB
	return 0; // 0x1593 Return
	
Label_5524:
	var_714_bool = 0; // 0x1594 MovB
	return 0; // 0x1595 Return
}


func_5003(var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0; // 0x138b PushV
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0; // 0x138c PushV
	var_135_object = var_131_object; // 0x138d Mov
	var_136_string = "money"; // 0x138e MovS
	var_137_int = var_132_int; // 0x138f Mov
	func_4595(var_136_string, var_137_int); // 0x1390 NEW_2
	var_141_int = 0; // 0x1392 PushI
	var_142_bool = var_132_int > var_141_int; // 0x1393 GT
	if(var_142_bool == 0) goto Label_5021; // 0x1394 JumpB
	var_143_string = "Money"; // 0x1395 PushS
	GetInvItemByName(var_134_int, var_143_string); // 0x1396 Func
	var_144_int = 0; var_145_int = 0; // 0x1398 PushV
	var_144_int = var_134_int; // 0x1399 Mov
	var_145_int = var_132_int; // 0x139a Mov
	func_4991(var_144_int, var_145_int); // 0x139b NEW_2
	
Label_5021:
	return 2; // 0x139d Return
}


func_5526(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0x1597 PushV
	var_151_string = "b11q01"; // 0x1598 MovS
	func_4947(var_150_int, var_151_string); // 0x1599 NEW_2
	var_152_int = 1000; // 0x159b PushI
	var_153_bool = var_150_int == var_152_int; // 0x159c Eq
	if(var_153_bool == 0) goto Label_5536; // 0x159d JumpB
	var_148_bool = 1; // 0x159e MovB
	return 0; // 0x159f Return
	
Label_5536:
	var_148_bool = 0; // 0x15a0 MovB
	return 0; // 0x15a1 Return
}


func_2973(var_2_object, var_608_string)
{
	var_609_bool = 0; // 0xb9e PushV
	func_5163(var_609_bool); // 0xb9f NEW_2
	var_610_bool = var_609_bool == 0; // 0xba1 Not
	if(var_610_bool == 0) goto Label_2980; // 0xba2 JumpB
	return 0; // 0xba3 Return
	
Label_2980:
	var_611_bool = var_608_string == var_2_object; // 0xba4 Eq
	if(var_611_bool == 0) goto Label_2983; // 0xba5 JumpB
	return 0; // 0xba6 Return
	
Label_2983:
	var_612_string = ""; var_613_bool = 0; // 0xba7 PushV
	var_612_string = var_608_string; // 0xba8 Mov
	var_614_string = ""; // 0xba9 PushS
	var_615_bool = var_608_string == var_614_string; // 0xbaa Eq
	if(var_615_bool == 0) goto Label_2990; // 0xbab JumpB
	var_613_bool = 0; // 0xbac MovB
	goto Label_2991; // 0xbad Jump
	
Label_2991:
	func_4876(var_612_string, var_613_bool); // 0xbaf NEW_2
	var_2_object = var_608_string; // 0xbb1 TMov
	return 0; // 0xbb2 Return
	
Label_2990:
	var_613_bool = 1; // 0xbae MovB
}


func_5022(var_64_object, var_65_int)
{
	var_66_int = 0; var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0; var_71_bool = 0; // 0x139e PushV
	GetItemID(var_69_int); // 0x139f ObjFunc
	var_72_string = "Category"; // 0x13a1 PushS
	GetInvItemProperty(var_70_int, var_69_int, var_72_string); // 0x13a2 Func
	AddItem(var_71_bool, var_64_object, var_70_int, var_65_int); // 0x13a4 ObjFunc
	var_73_bool = var_71_bool == 0; // 0x13a6 Not
	if(var_73_bool == 0) goto Label_5035; // 0x13a7 JumpB
	DropItems(var_64_object, var_65_int); // 0x13a8 ObjFunc
	goto Label_5040; // 0x13aa Jump
	
Label_5040:
	return 6; // 0x13b0 Return
	
Label_5035:
	var_74_int = 0; var_75_int = 0; // 0x13ab PushV
	var_74_int = var_69_int; // 0x13ac Mov
	var_75_int = var_65_int; // 0x13ad Mov
	func_4991(var_74_int, var_75_int); // 0x13ae NEW_2
}


func_5538(var_773_bool)
{
	var_775_int = 0; var_776_string = ""; // 0x15a3 PushV
	var_776_string = "oob11MladVlad1"; // 0x15a4 MovS
	func_4947(var_775_int, var_776_string); // 0x15a5 NEW_2
	var_777_int = 0; // 0x15a7 PushI
	var_778_bool = var_775_int == var_777_int; // 0x15a8 Eq
	if(var_778_bool == 0) goto Label_5548; // 0x15a9 JumpB
	var_773_bool = 1; // 0x15aa MovB
	return 0; // 0x15ab Return
	
Label_5548:
	var_773_bool = 0; // 0x15ac MovB
	return 0; // 0x15ad Return
}


func_4520()
{
	var_73_string = ""; var_74_string = ""; // 0x11a8 PushV
	var_75_string = "loc"; // 0x11a9 PushS
	GetProperty(var_75_string, var_74_string); // 0x11aa Func
	var_76_string = GlobalVars[0]; // 0x11ac PushGE
	var_76_string = var_74_string; // 0x11ad Mov
	GlobalVars[0] = var_76_string; // 0x11ae PopGE
	return 2; // 0x11af Return
}


func_426(var_2_object, var_834_string)
{
	var_835_bool = 0; // 0x1ab PushV
	func_5163(var_835_bool); // 0x1ac NEW_2
	var_836_bool = var_835_bool == 0; // 0x1ae Not
	if(var_836_bool == 0) goto Label_433; // 0x1af JumpB
	return 0; // 0x1b0 Return
	
Label_433:
	var_837_bool = var_834_string == var_2_object; // 0x1b1 Eq
	if(var_837_bool == 0) goto Label_436; // 0x1b2 JumpB
	return 0; // 0x1b3 Return
	
Label_436:
	var_838_string = ""; var_839_bool = 0; // 0x1b4 PushV
	var_838_string = var_834_string; // 0x1b5 Mov
	var_840_string = ""; // 0x1b6 PushS
	var_841_bool = var_834_string == var_840_string; // 0x1b7 Eq
	if(var_841_bool == 0) goto Label_443; // 0x1b8 JumpB
	var_839_bool = 0; // 0x1b9 MovB
	goto Label_444; // 0x1ba Jump
	
Label_444:
	func_4876(var_838_string, var_839_bool); // 0x1bc NEW_2
	var_2_object = var_834_string; // 0x1be TMov
	return 0; // 0x1bf Return
	
Label_443:
	var_839_bool = 1; // 0x1bb MovB
}


func_5550(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0x15af PushV
	var_162_string = "KnowGrif"; // 0x15b0 MovS
	func_4947(var_161_int, var_162_string); // 0x15b1 NEW_2
	var_163_int = 1; // 0x15b3 PushI
	var_164_bool = var_161_int == var_163_int; // 0x15b4 Eq
	if(var_164_bool == 0) goto Label_5560; // 0x15b5 JumpB
	var_159_bool = 1; // 0x15b6 MovB
	return 0; // 0x15b7 Return
	
Label_5560:
	var_159_bool = 0; // 0x15b8 MovB
	return 0; // 0x15b9 Return
}


func_4528(var_0_bool, var_1_object)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x11b0 PushV
	var_97_string = "all"; // 0x11b1 PushS
	var_98_string = "walk_stopl"; // 0x11b2 PushS
	GetAnimationOffset(var_95_cvector, var_97_string, var_98_string); // 0x11b3 Func
	var_99_string = "all"; // 0x11b5 PushS
	var_100_string = "walk_stopr"; // 0x11b6 PushS
	GetAnimationOffset(var_96_cvector, var_99_string, var_100_string); // 0x11b7 Func
	var_101_float = GetByIndex(var_95_cvector, 2); // 0x11b9 PushE
	var_102_float = GetByIndex(var_96_cvector, 2); // 0x11ba PushE
	var_103_int = var_101_float + var_102_float; // 0x11bb Add
	var_104_float = 2.0; // 0x11bc PushF
	var_0_bool = var_103_int / var_103_int; // 0x11bd Div2
	var_105_float = 0; var_106_float = 0; // 0x11be PushV
	var_107_float = GetByIndex(var_95_cvector, 2); // 0x11bf PushE
	var_106_float = var_107_float - var_0_bool; // 0x11c0 Sub2
	func_4929(var_105_float, var_106_float); // 0x11c1 NEW_2
	var_110_int = 40; // 0x11c3 PushI
	var_1_object = var_105_float + var_110_int; // 0x11c4 Add2
	return 4; // 0x11c5 Return
}


func_5041(var_58_object, var_59_string, var_60_int)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x13b1 PushV
	CreateInvItem(var_62_object); // 0x13b2 Func
	SetItemName(var_59_string); // 0x13b4 ObjFunc
	var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; // 0x13b6 PushV
	var_63_object = var_58_object; // 0x13b7 Mov
	var_64_object = var_62_object; // 0x13b8 Mov
	var_65_int = var_60_int; // 0x13b9 Mov
	func_5022(var_64_object, var_65_int); // 0x13ba NEW_2
	return 2; // 0x13bc Return
}


func_1976(var_0_bool, var_1_object, var_2_object, var_3_object, var_509_object, var_510_object)
{
	var_0_bool = var_510_object; // 0x7b9 TMov
	var_1_object = var_509_object; // 0x7ba TMov
	var_3_object = 0; // 0x7bb TMovB
	var_515_int = 1; // 0x7bc PushI
	if(var_515_int == 0) goto Label_2049; // 0x7bd JumpB
	var_516_bool = 0; var_517_object = Obj(); // 0x7be PushV
	var_517_object = var_1_object; // 0x7bf MovT
	func_5622(var_517_object); // 0x7c0 NEW_2
	if(var_516_bool == 0) goto Label_2012; // 0x7c2 JumpB
	var_522_object = Obj(); var_523_object = Obj(); // 0x7c3 PushV
	var_522_object = var_1_object; // 0x7c4 MovT
	var_523_object = var_0_bool; // 0x7c5 MovT
	func_5287(); // 0x7c6 NEW_2
	var_526_object = Obj(); var_527_object = Obj(); // 0x7c8 PushV
	var_526_object = var_1_object; // 0x7c9 MovT
	var_527_object = var_0_bool; // 0x7ca MovT
	func_5441(); // 0x7cb NEW_2
	var_530_string = ""; // 0x7cd PushV
	var_530_string = "Rage"; // 0x7ce MovS
	func_2079(var_510_object, var_530_string); // 0x7cf NEW_2
	var_538_int = 520138; // 0x7d1 PushI
	SetMessage(var_538_int); // 0x7d2 TObjFunc
	ClearReplies(); // 0x7d4 TObjFunc
	var_539_int = 520139; // 0x7d6 PushI
	var_540_int = 21324; // 0x7d7 PushI
	var_541_int = 21323; // 0x7d8 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x7d9 TObjFunc
	goto Label_2049; // 0x7db Jump
	
Label_2049:
	var_542_bool = 0; // 0x801 PushV
	func_5163(var_542_bool); // 0x802 NEW_2
	if(var_542_bool == 0) goto Label_2064; // 0x804 JumpB
	
Label_2053:
	lshWaitForAnimEnd(); // 0x805 Func
	var_543_object = var_3_object; // 0x807 PushT
	if(var_543_object == 0) goto Label_2058; // 0x808 JumpB
	goto Label_2063; // 0x809 Jump
	
Label_2063:
	goto Label_2078; // 0x80f Jump
	
Label_2078:
	return 0; // 0x81e Return
	
Label_2058:
	var_544_string = ""; // 0x80a PushV
	var_544_string = var_2_object; // 0x80b MovT
	func_4860(var_544_string); // 0x80c NEW_2
	goto Label_2053; // 0x80e Jump
	
Label_2064:
	var_545_string = "all"; // 0x810 PushS
	var_546_string = "idle"; // 0x811 PushS
	PlayAnimation(var_545_string, var_546_string); // 0x812 Func
	
Label_2068:
	WaitForAnimEnd(); // 0x814 Func
	var_547_object = var_3_object; // 0x816 PushT
	if(var_547_object == 0) goto Label_2073; // 0x817 JumpB
	goto Label_2078; // 0x818 Jump
	
Label_2073:
	var_548_string = "all"; // 0x819 PushS
	var_549_string = "idle"; // 0x81a PushS
	PlayAnimation(var_548_string, var_549_string); // 0x81b Func
	goto Label_2068; // 0x81d Jump
	
Label_2012:
	var_550_string = ""; // 0x7dc PushV
	var_550_string = "Rage"; // 0x7dd MovS
	func_2079(var_510_object, var_550_string); // 0x7de NEW_2
	var_551_int = 520157; // 0x7e0 PushI
	SetMessage(var_551_int); // 0x7e1 TObjFunc
	ClearReplies(); // 0x7e3 TObjFunc
	var_552_bool = 0; var_553_object = Obj(); // 0x7e5 PushV
	var_553_object = var_1_object; // 0x7e6 MovT
	func_5634(var_553_object); // 0x7e7 NEW_2
	if(var_552_bool == 0) goto Label_2031; // 0x7e9 JumpB
	var_558_int = 520158; // 0x7ea PushI
	var_559_int = 21346; // 0x7eb PushI
	var_560_int = 21345; // 0x7ec PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x7ed TObjFunc
	
Label_2031:
	var_561_bool = 0; var_562_object = Obj(); // 0x7ef PushV
	var_562_object = var_1_object; // 0x7f0 MovT
	func_5646(var_562_object); // 0x7f1 NEW_2
	if(var_561_bool == 0) goto Label_2041; // 0x7f3 JumpB
	var_567_int = 520164; // 0x7f4 PushI
	var_568_int = 21352; // 0x7f5 PushI
	var_569_int = 21351; // 0x7f6 PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x7f7 TObjFunc
	
Label_2041:
	var_570_int = 520180; // 0x7f9 PushI
	var_571_int = -1; // 0x7fa PushI
	var_572_int = 21370; // 0x7fb PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x7fc TObjFunc
	goto Label_2049; // 0x7fe Jump
}


func_5562(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0x15bb PushV
	var_331_string = "b1q01"; // 0x15bc MovS
	func_4947(var_330_int, var_331_string); // 0x15bd NEW_2
	var_334_int = 0; // 0x15bf PushI
	var_335_bool = var_330_int == var_334_int; // 0x15c0 Eq
	if(var_335_bool == 0) goto Label_5572; // 0x15c1 JumpB
	var_328_bool = 1; // 0x15c2 MovB
	return 0; // 0x15c3 Return
	
Label_5572:
	var_328_bool = 0; // 0x15c4 MovB
	return 0; // 0x15c5 Return
}


func_5054(var_716_bool, var_718_string)
{
	var_719_int = 0; var_720_bool = 0; var_721_int = 0; var_722_bool = 0; // 0x13be PushV
	GetInvItemByName(var_721_int, var_718_string); // 0x13bf Func
	HasItem(var_721_int, var_722_bool); // 0x13c1 ObjFunc
	var_716_bool = var_722_bool; // 0x13c3 Mov
	return 4; // 0x13c4 Return
}


func_5061(var_435_bool, var_436_string, var_437_string)
{
	var_438_object = Obj(); var_439_object = Obj(); // 0x13c5 PushV
	FindActor(var_439_object, var_436_string); // 0x13c6 Func
	var_440_bool = var_439_object == 0; // 0x13c8 NullEq
	if(var_440_bool == 0) goto Label_5068; // 0x13c9 JumpB
	var_435_bool = 0; // 0x13ca MovB
	return 2; // 0x13cb Return
	
Label_5068:
	Trigger(var_439_object, var_437_string); // 0x13cc Func
	var_435_bool = 1; // 0x13ce MovB
	return 2; // 0x13cf Return
}


func_5574(var_359_bool)
{
	var_361_int = 0; var_362_string = ""; // 0x15c7 PushV
	var_362_string = "oob1MladVlad1"; // 0x15c8 MovS
	func_4947(var_361_int, var_362_string); // 0x15c9 NEW_2
	var_363_int = 0; // 0x15cb PushI
	var_364_bool = var_361_int == var_363_int; // 0x15cc Eq
	if(var_364_bool == 0) goto Label_5584; // 0x15cd JumpB
	var_359_bool = 1; // 0x15ce MovB
	return 0; // 0x15cf Return
	
Label_5584:
	var_359_bool = 0; // 0x15d0 MovB
	return 0; // 0x15d1 Return
}


func_5073(var_57_object, var_58_string, var_59_string)
{
	var_64_object = Obj(); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x13d1 PushV
	var_72_bool = var_57_object == 0; // 0x13d2 Not
	if(var_72_bool == 0) goto Label_5077; // 0x13d3 JumpB
	return 8; // 0x13d4 Return
	
Label_5077:
	GetSceneByName(var_68_object, var_58_string); // 0x13d5 Func
	GetLocator(var_59_string, var_69_bool, var_70_cvector, var_71_cvector); // 0x13d7 ObjFunc
	var_73_bool = var_69_bool == 0; // 0x13d9 Not
	if(var_73_bool == 0) goto Label_5093; // 0x13da JumpB
	var_74_string = "Teleport location '"; // 0x13db PushS
	var_75_int = var_74_string + var_59_string; // 0x13dc Add
	var_76_string = "' not found in scene '"; // 0x13dd PushS
	var_77_int = var_75_int + var_76_string; // 0x13de Add
	var_78_int = var_77_int + var_58_string; // 0x13df Add
	var_79_string = "'"; // 0x13e0 PushS
	var_80_int = var_78_int + var_79_string; // 0x13e1 Add
	Trace(var_80_int); // 0x13e2 Func
	goto Label_5095; // 0x13e4 Jump
	
Label_5095:
	return 8; // 0x13e7 Return
	
Label_5093:
	Teleport(var_57_object, var_68_object, var_70_cvector, var_71_cvector); // 0x13e5 Func
}


func_5586(var_379_bool)
{
	var_381_int = 0; var_382_string = ""; // 0x15d3 PushV
	var_382_string = "oob1MladVlad2"; // 0x15d4 MovS
	func_4947(var_381_int, var_382_string); // 0x15d5 NEW_2
	var_383_int = 0; // 0x15d7 PushI
	var_384_bool = var_381_int == var_383_int; // 0x15d8 Eq
	if(var_384_bool == 0) goto Label_5596; // 0x15d9 JumpB
	var_379_bool = 1; // 0x15da MovB
	return 0; // 0x15db Return
	
Label_5596:
	var_379_bool = 0; // 0x15dc MovB
	return 0; // 0x15dd Return
}


func_5598(var_426_bool)
{
	var_428_int = 0; var_429_string = ""; // 0x15df PushV
	var_429_string = "b2MladVladBurahHomeTalk"; // 0x15e0 MovS
	func_4947(var_428_int, var_429_string); // 0x15e1 NEW_2
	var_430_int = 1; // 0x15e3 PushI
	var_431_bool = var_428_int == var_430_int; // 0x15e4 Eq
	if(var_431_bool == 0) goto Label_5608; // 0x15e5 JumpB
	var_426_bool = 1; // 0x15e6 MovB
	return 0; // 0x15e7 Return
	
Label_5608:
	var_426_bool = 0; // 0x15e8 MovB
	return 0; // 0x15e9 Return
}


func_4575(var_113_cvector)
{
	var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); // 0x11df PushV
	GetPosition(var_115_cvector); // 0x11e0 Func
	var_113_cvector = var_115_cvector; // 0x11e2 Mov
	return 2; // 0x11e3 Return
}


func_4580(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x11e4 PushV
	GetPosition(var_66_cvector); // 0x11e5 Func
	GetPosition(var_67_cvector); // 0x11e7 ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x11e9 Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x11ea Or2
	return 6; // 0x11eb Return
}


func_5097(var_72_float)
{
	var_73_float = 0; var_74_float = 0; // 0x13e9 PushV
	GetGameTime(var_74_float); // 0x13ea Func
	var_72_float = var_74_float; // 0x13ec Mov
	return 2; // 0x13ed Return
}


func_5610(var_467_bool)
{
	var_469_int = 0; var_470_string = ""; // 0x15eb PushV
	var_470_string = "oob2MladVlad1"; // 0x15ec MovS
	func_4947(var_469_int, var_470_string); // 0x15ed NEW_2
	var_471_int = 0; // 0x15ef PushI
	var_472_bool = var_469_int == var_471_int; // 0x15f0 Eq
	if(var_472_bool == 0) goto Label_5620; // 0x15f1 JumpB
	var_467_bool = 1; // 0x15f2 MovB
	return 0; // 0x15f3 Return
	
Label_5620:
	var_467_bool = 0; // 0x15f4 MovB
	return 0; // 0x15f5 Return
}


func_4588(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x11ec PushV
	var_63_string = "player"; // 0x11ed PushS
	FindActor(var_62_object, var_63_string); // 0x11ee Func
	var_60_object = var_62_object; // 0x11f0 Mov
	return 2; // 0x11f1 Return
}


func_5102(var_196_int)
{
	var_197_float = 0; var_198_float = 0; // 0x13ee PushV
	GetGameTime(var_198_float); // 0x13ef Func
	var_199_int = 1; // 0x13f1 PushI
	var_200_int = 0; // 0x13f2 PushV
	var_201_int = 24; // 0x13f3 PushI
	var_200_int = var_198_float / var_198_float; // 0x13f4 Div2
	var_196_int = var_199_int + var_200_int; // 0x13f5 Add2
	return 2; // 0x13f6 Return
}


func_4595(var_136_string, var_137_int)
{
	var_138_int = 0; var_139_int = 0; // 0x11f3 PushV
	GetProperty(var_136_string, var_139_int); // 0x11f4 ObjFunc
	var_140_int = var_139_int + var_137_int; // 0x11f6 Add
	SetProperty(var_136_string, var_140_int); // 0x11f7 ObjFunc
	return 2; // 0x11f9 Return
}


func_5622(var_516_bool)
{
	var_518_int = 0; var_519_string = ""; // 0x15f7 PushV
	var_519_string = "oob5MladVlad1"; // 0x15f8 MovS
	func_4947(var_518_int, var_519_string); // 0x15f9 NEW_2
	var_520_int = 0; // 0x15fb PushI
	var_521_bool = var_518_int == var_520_int; // 0x15fc Eq
	if(var_521_bool == 0) goto Label_5632; // 0x15fd JumpB
	var_516_bool = 1; // 0x15fe MovB
	return 0; // 0x15ff Return
	
Label_5632:
	var_516_bool = 0; // 0x1600 MovB
	return 0; // 0x1601 Return
}


func_5111(var_294_bool, var_295_int)
{
	var_296_int = 0; // 0x13f8 PushV
	func_5102(var_296_int); // 0x13f9 NEW_2
	var_294_bool = var_296_int == var_295_int; // 0x13fb Eq2
	return 0; // 0x13fc Return
}


func_4602(var_140_bool, var_141_cvector)
{
	var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_bool = 0; // 0x11fa PushV
	GetPosition(var_145_cvector); // 0x11fb Func
	var_146_cvector = var_141_cvector - var_145_cvector; // 0x11fd Sub2
	var_148_float = GetByIndex(var_146_cvector, 0); // 0x11fe PushE
	var_149_float = GetByIndex(var_146_cvector, 2); // 0x11ff PushE
	Rotate(var_148_float, var_149_float, var_147_bool); // 0x1200 Func
	var_140_bool = var_147_bool; // 0x1202 Mov
	return 6; // 0x1203 Return
}


func_5117(var_201_string, var_202_int)
{
	var_203_string = ""; var_204_string = ""; // 0x13fd PushV
	var_204_string = "idle"; // 0x13fe MovS
	var_205_int = var_202_int; // 0x13ff Push
	if(var_205_int == 0) goto Label_5122; // 0x1400 JumpB
	var_204_string = var_204_string + var_202_int; // 0x1401 Add2
	
Label_5122:
	var_201_string = var_204_string; // 0x1402 Mov
	return 2; // 0x1403 Return
}


