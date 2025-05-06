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
	func_10500(); // 0x3d NEW_2
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
	func_9948(var_79_object); // 0x50 NEW_2
	EventEnable(0); // 0x52 EventEnable
	var_92_object = Obj(); // 0x53 PushV
	var_92_object = var_74_int; // 0x54 Mov
	func_12329(var_92_object); // 0x55 NEW_2
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
	func_9889(var_87_object); // 0x84 NEW_2
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
	func_10500(); // 0xa6 NEW_2
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
	func_9948(var_79_object); // 0xb9 NEW_2
	EventEnable(0); // 0xbb EventEnable
	var_92_object = Obj(); // 0xbc PushV
	var_92_object = var_74_int; // 0xbd Mov
	func_12329(var_92_object); // 0xbe NEW_2
	
Label_192:
	return 2; // 0xc0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	func_10500(); // 0xf8 NEW_2
	TaskCall(0); // 0xfb TaskCall
	func_0(); // 0xfc NEW_2
	TaskReturn(); // 0xfd TaskReturn
	return 0; // 0xff Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x1c1 PushI
	if(var_76_int == 0) goto Label_563; // 0x1c2 JumpB
	func_10244(); // 0x1c4 NEW_2
	var_78_int = 484; // 0x1c6 PushI
	var_79_bool = var_74_float == var_78_int; // 0x1c7 Eq
	if(var_79_bool == 0) goto Label_482; // 0x1c8 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x1c9 PushV
	var_80_object = var_1_object; // 0x1ca MovT
	var_81_object = var_0_bool; // 0x1cb MovT
	func_11245(); // 0x1cc NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x1ce PushV
	var_84_object = var_1_object; // 0x1cf MovT
	var_85_object = var_0_bool; // 0x1d0 MovT
	func_10765(); // 0x1d1 NEW_2
	var_88_string = ""; // 0x1d3 PushV
	var_88_string = "Neutral"; // 0x1d4 MovS
	func_426(var_75_int, var_88_string); // 0x1d5 NEW_2
	var_105_int = 500416; // 0x1d7 PushI
	SetMessage(var_105_int); // 0x1d8 TObjFunc
	ClearReplies(); // 0x1da TObjFunc
	var_106_int = 533500; // 0x1dc PushI
	var_107_int = 35031; // 0x1dd PushI
	var_108_int = 35030; // 0x1de PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_109_int = 35031; // 0x1e2 PushI
	var_110_bool = var_74_float == var_109_int; // 0x1e3 Eq
	if(var_110_bool == 0) goto Label_505; // 0x1e4 JumpB
	var_111_string = ""; // 0x1e5 PushV
	var_111_string = "Neutral"; // 0x1e6 MovS
	func_426(var_75_int, var_111_string); // 0x1e7 NEW_2
	var_112_int = 533501; // 0x1e9 PushI
	SetMessage(var_112_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_113_int = 500417; // 0x1ee PushI
	var_114_int = 487; // 0x1ef PushI
	var_115_int = 485; // 0x1f0 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x1f1 TObjFunc
	var_116_int = 500418; // 0x1f3 PushI
	var_117_int = 9271; // 0x1f4 PushI
	var_118_int = 486; // 0x1f5 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x1f6 TObjFunc
	return 0; // 0x1f8 Return
	
Label_505:
	var_119_int = 487; // 0x1f9 PushI
	var_120_bool = var_74_float == var_119_int; // 0x1fa Eq
	if(var_120_bool == 0) goto Label_528; // 0x1fb JumpB
	var_121_string = ""; // 0x1fc PushV
	var_121_string = "Neutral"; // 0x1fd MovS
	func_426(var_75_int, var_121_string); // 0x1fe NEW_2
	var_122_int = 500419; // 0x200 PushI
	SetMessage(var_122_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_123_int = 500420; // 0x205 PushI
	var_124_int = 9271; // 0x206 PushI
	var_125_int = 488; // 0x207 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x208 TObjFunc
	var_126_int = 500422; // 0x20a PushI
	var_127_int = 9271; // 0x20b PushI
	var_128_int = 490; // 0x20c PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_129_int = 9271; // 0x210 PushI
	var_130_bool = var_74_float == var_129_int; // 0x211 Eq
	if(var_130_bool == 0) goto Label_551; // 0x212 JumpB
	var_131_string = ""; // 0x213 PushV
	var_131_string = "Neutral"; // 0x214 MovS
	func_426(var_75_int, var_131_string); // 0x215 NEW_2
	var_132_int = 508445; // 0x217 PushI
	SetMessage(var_132_int); // 0x218 TObjFunc
	ClearReplies(); // 0x21a TObjFunc
	var_133_int = 508446; // 0x21c PushI
	var_134_int = -1; // 0x21d PushI
	var_135_int = 9275; // 0x21e PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x21f TObjFunc
	var_136_int = 508447; // 0x221 PushI
	var_137_int = -1; // 0x222 PushI
	var_138_int = 9276; // 0x223 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x224 TObjFunc
	return 0; // 0x226 Return
	
Label_551:
	var_3_object = 1; // 0x227 TMovB
	var_139_bool = 0; // 0x228 PushV
	func_10509(var_139_bool); // 0x229 NEW_2
	if(var_139_bool == 0) goto Label_559; // 0x22b JumpB
	lshStopAnimation(); // 0x22c Func
	goto Label_561; // 0x22e Jump
	
Label_561:
	return 0; // 0x231 Return
	
Label_559:
	StopAnimation(); // 0x22f Func
	
Label_563:
	return 0; // 0x233 Return
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x2ee PushI
	if(var_76_int == 0) goto Label_1091; // 0x2ef JumpB
	func_10244(); // 0x2f1 NEW_2
	var_78_int = 8297; // 0x2f3 PushI
	var_79_bool = var_75_int == var_78_int; // 0x2f4 Eq
	if(var_79_bool == 0) goto Label_773; // 0x2f5 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x2f6 PushV
	var_80_object = var_1_object; // 0x2f7 MovT
	var_81_object = var_0_bool; // 0x2f8 MovT
	func_10777(); // 0x2f9 NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x2fb PushV
	var_84_object = var_1_object; // 0x2fc MovT
	var_85_object = var_0_bool; // 0x2fd MovT
	func_10605(); // 0x2fe NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x300 PushV
	var_88_object = var_1_object; // 0x301 MovT
	var_89_object = var_0_bool; // 0x302 MovT
	func_10511(var_89_object); // 0x303 NEW_2
	
Label_773:
	var_109_int = 8298; // 0x305 PushI
	var_110_bool = var_75_int == var_109_int; // 0x306 Eq
	if(var_110_bool == 0) goto Label_791; // 0x307 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x308 PushV
	var_111_object = var_1_object; // 0x309 MovT
	var_112_object = var_0_bool; // 0x30a MovT
	func_10777(); // 0x30b NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x30d PushV
	var_113_object = var_1_object; // 0x30e MovT
	var_114_object = var_0_bool; // 0x30f MovT
	func_10605(); // 0x310 NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0x312 PushV
	var_115_object = var_1_object; // 0x313 MovT
	var_116_object = var_0_bool; // 0x314 MovT
	func_10511(var_116_object); // 0x315 NEW_2
	
Label_791:
	var_117_int = 8553; // 0x317 PushI
	var_118_bool = var_75_int == var_117_int; // 0x318 Eq
	if(var_118_bool == 0) goto Label_809; // 0x319 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x31a PushV
	var_119_object = var_1_object; // 0x31b MovT
	var_120_object = var_0_bool; // 0x31c MovT
	func_10777(); // 0x31d NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0x31f PushV
	var_121_object = var_1_object; // 0x320 MovT
	var_122_object = var_0_bool; // 0x321 MovT
	func_10605(); // 0x322 NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x324 PushV
	var_123_object = var_1_object; // 0x325 MovT
	var_124_object = var_0_bool; // 0x326 MovT
	func_10511(var_124_object); // 0x327 NEW_2
	
Label_809:
	var_125_int = 35526; // 0x329 PushI
	var_126_bool = var_75_int == var_125_int; // 0x32a Eq
	if(var_126_bool == 0) goto Label_817; // 0x32b JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x32c PushV
	var_127_object = var_1_object; // 0x32d MovT
	var_128_object = var_0_bool; // 0x32e MovT
	func_10771(); // 0x32f NEW_2
	
Label_817:
	var_131_int = 7635; // 0x331 PushI
	var_132_bool = var_74_float == var_131_int; // 0x332 Eq
	if(var_132_bool == 0) goto Label_864; // 0x333 JumpB
	var_133_string = ""; // 0x334 PushV
	var_133_string = "Neutral"; // 0x335 MovS
	func_727(var_75_int, var_133_string); // 0x336 NEW_2
	var_150_int = 506929; // 0x338 PushI
	SetMessage(var_150_int); // 0x339 TObjFunc
	ClearReplies(); // 0x33b TObjFunc
	var_151_bool = 0; // 0x33d PushV
	var_151_bool = 0; // 0x33e MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x33f PushV
	var_153_object = var_1_object; // 0x340 MovT
	func_11480(var_153_object); // 0x341 NEW_2
	if(var_152_bool == 0) goto Label_842; // 0x343 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x344 PushV
	var_161_object = var_1_object; // 0x345 MovT
	func_11456(var_161_object); // 0x346 NEW_2
	if(var_160_bool == 0) goto Label_842; // 0x348 JumpB
	var_151_bool = 1; // 0x349 MovB
	
Label_842:
	if(var_151_bool == 0) goto Label_848; // 0x34a JumpB
	var_166_int = 506930; // 0x34b PushI
	var_167_int = 7637; // 0x34c PushI
	var_168_int = 7636; // 0x34d PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x34e TObjFunc
	
Label_848:
	var_169_bool = 0; var_170_object = Obj(); // 0x350 PushV
	var_170_object = var_1_object; // 0x351 MovT
	func_11468(var_170_object); // 0x352 NEW_2
	if(var_169_bool == 0) goto Label_858; // 0x354 JumpB
	var_175_int = 533959; // 0x355 PushI
	var_176_int = 10443; // 0x356 PushI
	var_177_int = 35526; // 0x357 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x358 TObjFunc
	
Label_858:
	var_178_int = 507746; // 0x35a PushI
	var_179_int = -1; // 0x35b PushI
	var_180_int = 8547; // 0x35c PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x35d TObjFunc
	return 0; // 0x35f Return
	
Label_864:
	var_181_int = 10443; // 0x360 PushI
	var_182_bool = var_74_float == var_181_int; // 0x361 Eq
	if(var_182_bool == 0) goto Label_887; // 0x362 JumpB
	var_183_string = ""; // 0x363 PushV
	var_183_string = "Neutral"; // 0x364 MovS
	func_727(var_75_int, var_183_string); // 0x365 NEW_2
	var_184_int = 509500; // 0x367 PushI
	SetMessage(var_184_int); // 0x368 TObjFunc
	ClearReplies(); // 0x36a TObjFunc
	var_185_int = 509501; // 0x36c PushI
	var_186_int = 10445; // 0x36d PushI
	var_187_int = 10444; // 0x36e PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x36f TObjFunc
	var_188_int = 509514; // 0x371 PushI
	var_189_int = 10458; // 0x372 PushI
	var_190_int = 10457; // 0x373 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x374 TObjFunc
	return 0; // 0x376 Return
	
Label_887:
	var_191_int = 10458; // 0x377 PushI
	var_192_bool = var_74_float == var_191_int; // 0x378 Eq
	if(var_192_bool == 0) goto Label_905; // 0x379 JumpB
	var_193_string = ""; // 0x37a PushV
	var_193_string = "Neutral"; // 0x37b MovS
	func_727(var_75_int, var_193_string); // 0x37c NEW_2
	var_194_int = 509515; // 0x37e PushI
	SetMessage(var_194_int); // 0x37f TObjFunc
	ClearReplies(); // 0x381 TObjFunc
	var_195_int = 509516; // 0x383 PushI
	var_196_int = 10445; // 0x384 PushI
	var_197_int = 10459; // 0x385 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x386 TObjFunc
	return 0; // 0x388 Return
	
Label_905:
	var_198_int = 10445; // 0x389 PushI
	var_199_bool = var_74_float == var_198_int; // 0x38a Eq
	if(var_199_bool == 0) goto Label_933; // 0x38b JumpB
	var_200_string = ""; // 0x38c PushV
	var_200_string = "Fear"; // 0x38d MovS
	func_727(var_75_int, var_200_string); // 0x38e NEW_2
	var_201_int = 509502; // 0x390 PushI
	SetMessage(var_201_int); // 0x391 TObjFunc
	ClearReplies(); // 0x393 TObjFunc
	var_202_int = 509503; // 0x395 PushI
	var_203_int = 10447; // 0x396 PushI
	var_204_int = 10446; // 0x397 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x398 TObjFunc
	var_205_int = 509510; // 0x39a PushI
	var_206_int = -1; // 0x39b PushI
	var_207_int = 10453; // 0x39c PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x39d TObjFunc
	var_208_int = 509511; // 0x39f PushI
	var_209_int = 10455; // 0x3a0 PushI
	var_210_int = 10454; // 0x3a1 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x3a2 TObjFunc
	return 0; // 0x3a4 Return
	
Label_933:
	var_211_int = 10455; // 0x3a5 PushI
	var_212_bool = var_74_float == var_211_int; // 0x3a6 Eq
	if(var_212_bool == 0) goto Label_951; // 0x3a7 JumpB
	var_213_string = ""; // 0x3a8 PushV
	var_213_string = "Neutral"; // 0x3a9 MovS
	func_727(var_75_int, var_213_string); // 0x3aa NEW_2
	var_214_int = 509512; // 0x3ac PushI
	SetMessage(var_214_int); // 0x3ad TObjFunc
	ClearReplies(); // 0x3af TObjFunc
	var_215_int = 509513; // 0x3b1 PushI
	var_216_int = -1; // 0x3b2 PushI
	var_217_int = 10456; // 0x3b3 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x3b4 TObjFunc
	return 0; // 0x3b6 Return
	
Label_951:
	var_218_int = 10447; // 0x3b7 PushI
	var_219_bool = var_74_float == var_218_int; // 0x3b8 Eq
	if(var_219_bool == 0) goto Label_974; // 0x3b9 JumpB
	var_220_string = ""; // 0x3ba PushV
	var_220_string = "Fear"; // 0x3bb MovS
	func_727(var_75_int, var_220_string); // 0x3bc NEW_2
	var_221_int = 509504; // 0x3be PushI
	SetMessage(var_221_int); // 0x3bf TObjFunc
	ClearReplies(); // 0x3c1 TObjFunc
	var_222_int = 509505; // 0x3c3 PushI
	var_223_int = 10449; // 0x3c4 PushI
	var_224_int = 10448; // 0x3c5 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x3c6 TObjFunc
	var_225_int = 509509; // 0x3c8 PushI
	var_226_int = -1; // 0x3c9 PushI
	var_227_int = 10452; // 0x3ca PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x3cb TObjFunc
	return 0; // 0x3cd Return
	
Label_974:
	var_228_int = 10449; // 0x3ce PushI
	var_229_bool = var_74_float == var_228_int; // 0x3cf Eq
	if(var_229_bool == 0) goto Label_997; // 0x3d0 JumpB
	var_230_string = ""; // 0x3d1 PushV
	var_230_string = "Fear"; // 0x3d2 MovS
	func_727(var_75_int, var_230_string); // 0x3d3 NEW_2
	var_231_int = 509506; // 0x3d5 PushI
	SetMessage(var_231_int); // 0x3d6 TObjFunc
	ClearReplies(); // 0x3d8 TObjFunc
	var_232_int = 509507; // 0x3da PushI
	var_233_int = -1; // 0x3db PushI
	var_234_int = 10450; // 0x3dc PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x3dd TObjFunc
	var_235_int = 509508; // 0x3df PushI
	var_236_int = -1; // 0x3e0 PushI
	var_237_int = 10451; // 0x3e1 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x3e2 TObjFunc
	return 0; // 0x3e4 Return
	
Label_997:
	var_238_int = 7637; // 0x3e5 PushI
	var_239_bool = var_74_float == var_238_int; // 0x3e6 Eq
	if(var_239_bool == 0) goto Label_1020; // 0x3e7 JumpB
	var_240_string = ""; // 0x3e8 PushV
	var_240_string = "Untrust"; // 0x3e9 MovS
	func_727(var_75_int, var_240_string); // 0x3ea NEW_2
	var_241_int = 506931; // 0x3ec PushI
	SetMessage(var_241_int); // 0x3ed TObjFunc
	ClearReplies(); // 0x3ef TObjFunc
	var_242_int = 506932; // 0x3f1 PushI
	var_243_int = 7639; // 0x3f2 PushI
	var_244_int = 7638; // 0x3f3 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x3f4 TObjFunc
	var_245_int = 507752; // 0x3f6 PushI
	var_246_int = -1; // 0x3f7 PushI
	var_247_int = 8553; // 0x3f8 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x3f9 TObjFunc
	return 0; // 0x3fb Return
	
Label_1020:
	var_248_int = 7639; // 0x3fc PushI
	var_249_bool = var_74_float == var_248_int; // 0x3fd Eq
	if(var_249_bool == 0) goto Label_1038; // 0x3fe JumpB
	var_250_string = ""; // 0x3ff PushV
	var_250_string = "Untrust"; // 0x400 MovS
	func_727(var_75_int, var_250_string); // 0x401 NEW_2
	var_251_int = 506933; // 0x403 PushI
	SetMessage(var_251_int); // 0x404 TObjFunc
	ClearReplies(); // 0x406 TObjFunc
	var_252_int = 507753; // 0x408 PushI
	var_253_int = 8555; // 0x409 PushI
	var_254_int = 8554; // 0x40a PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x40b TObjFunc
	return 0; // 0x40d Return
	
Label_1038:
	var_255_int = 8555; // 0x40e PushI
	var_256_bool = var_74_float == var_255_int; // 0x40f Eq
	if(var_256_bool == 0) goto Label_1056; // 0x410 JumpB
	var_257_string = ""; // 0x411 PushV
	var_257_string = "Untrust"; // 0x412 MovS
	func_727(var_75_int, var_257_string); // 0x413 NEW_2
	var_258_int = 507754; // 0x415 PushI
	SetMessage(var_258_int); // 0x416 TObjFunc
	ClearReplies(); // 0x418 TObjFunc
	var_259_int = 506934; // 0x41a PushI
	var_260_int = 8296; // 0x41b PushI
	var_261_int = 7640; // 0x41c PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x41d TObjFunc
	return 0; // 0x41f Return
	
Label_1056:
	var_262_int = 8296; // 0x420 PushI
	var_263_bool = var_74_float == var_262_int; // 0x421 Eq
	if(var_263_bool == 0) goto Label_1079; // 0x422 JumpB
	var_264_string = ""; // 0x423 PushV
	var_264_string = "Sly"; // 0x424 MovS
	func_727(var_75_int, var_264_string); // 0x425 NEW_2
	var_265_int = 507515; // 0x427 PushI
	SetMessage(var_265_int); // 0x428 TObjFunc
	ClearReplies(); // 0x42a TObjFunc
	var_266_int = 507516; // 0x42c PushI
	var_267_int = -1; // 0x42d PushI
	var_268_int = 8297; // 0x42e PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x42f TObjFunc
	var_269_int = 507517; // 0x431 PushI
	var_270_int = -1; // 0x432 PushI
	var_271_int = 8298; // 0x433 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x434 TObjFunc
	return 0; // 0x436 Return
	
Label_1079:
	var_3_object = 1; // 0x437 TMovB
	var_272_bool = 0; // 0x438 PushV
	func_10509(var_272_bool); // 0x439 NEW_2
	if(var_272_bool == 0) goto Label_1087; // 0x43b JumpB
	lshStopAnimation(); // 0x43c Func
	goto Label_1089; // 0x43e Jump
	
Label_1089:
	return 0; // 0x441 Return
	
Label_1087:
	StopAnimation(); // 0x43f Func
	
Label_1091:
	return 0; // 0x443 Return
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x538 PushI
	if(var_76_int == 0) goto Label_2118; // 0x539 JumpB
	func_10244(); // 0x53b NEW_2
	var_78_int = 11259; // 0x53d PushI
	var_79_bool = var_75_int == var_78_int; // 0x53e Eq
	if(var_79_bool == 0) goto Label_1349; // 0x53f JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x540 PushV
	var_80_object = var_1_object; // 0x541 MovT
	var_81_object = var_0_bool; // 0x542 MovT
	func_10863(); // 0x543 NEW_2
	
Label_1349:
	var_84_int = 35907; // 0x545 PushI
	var_85_bool = var_75_int == var_84_int; // 0x546 Eq
	if(var_85_bool == 0) goto Label_1357; // 0x547 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x548 PushV
	var_86_object = var_1_object; // 0x549 MovT
	var_87_object = var_0_bool; // 0x54a MovT
	func_10869(); // 0x54b NEW_2
	
Label_1357:
	var_129_int = 35908; // 0x54d PushI
	var_130_bool = var_75_int == var_129_int; // 0x54e Eq
	if(var_130_bool == 0) goto Label_1365; // 0x54f JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x550 PushV
	var_131_object = var_1_object; // 0x551 MovT
	var_132_object = var_0_bool; // 0x552 MovT
	func_10869(); // 0x553 NEW_2
	
Label_1365:
	var_133_int = 11358; // 0x555 PushI
	var_134_bool = var_75_int == var_133_int; // 0x556 Eq
	if(var_134_bool == 0) goto Label_1373; // 0x557 JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0x558 PushV
	var_135_object = var_1_object; // 0x559 MovT
	var_136_object = var_0_bool; // 0x55a MovT
	func_10549(); // 0x55b NEW_2
	
Label_1373:
	var_139_int = 11394; // 0x55d PushI
	var_140_bool = var_75_int == var_139_int; // 0x55e Eq
	if(var_140_bool == 0) goto Label_1381; // 0x55f JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x560 PushV
	var_141_object = var_1_object; // 0x561 MovT
	var_142_object = var_0_bool; // 0x562 MovT
	func_10731(); // 0x563 NEW_2
	
Label_1381:
	var_145_int = 11404; // 0x565 PushI
	var_146_bool = var_75_int == var_145_int; // 0x566 Eq
	if(var_146_bool == 0) goto Label_1394; // 0x567 JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x568 PushV
	var_147_object = var_1_object; // 0x569 MovT
	var_148_object = var_0_bool; // 0x56a MovT
	func_10892(); // 0x56b NEW_2
	var_165_object = Obj(); var_166_object = Obj(); // 0x56d PushV
	var_165_object = var_1_object; // 0x56e MovT
	var_166_object = var_0_bool; // 0x56f MovT
	func_10700(); // 0x570 NEW_2
	
Label_1394:
	var_191_int = 11407; // 0x572 PushI
	var_192_bool = var_75_int == var_191_int; // 0x573 Eq
	if(var_192_bool == 0) goto Label_1407; // 0x574 JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x575 PushV
	var_193_object = var_1_object; // 0x576 MovT
	var_194_object = var_0_bool; // 0x577 MovT
	func_10892(); // 0x578 NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0x57a PushV
	var_195_object = var_1_object; // 0x57b MovT
	var_196_object = var_0_bool; // 0x57c MovT
	func_10700(); // 0x57d NEW_2
	
Label_1407:
	var_197_int = 22116; // 0x57f PushI
	var_198_bool = var_75_int == var_197_int; // 0x580 Eq
	if(var_198_bool == 0) goto Label_1425; // 0x581 JumpB
	var_199_object = Obj(); var_200_object = Obj(); // 0x582 PushV
	var_199_object = var_1_object; // 0x583 MovT
	var_200_object = var_0_bool; // 0x584 MovT
	func_10531(); // 0x585 NEW_2
	var_212_object = Obj(); var_213_object = Obj(); // 0x587 PushV
	var_212_object = var_1_object; // 0x588 MovT
	var_213_object = var_0_bool; // 0x589 MovT
	func_10815(); // 0x58a NEW_2
	var_216_object = Obj(); var_217_object = Obj(); // 0x58c PushV
	var_216_object = var_1_object; // 0x58d MovT
	var_217_object = var_0_bool; // 0x58e MovT
	func_10542(var_217_object); // 0x58f NEW_2
	
Label_1425:
	var_236_int = 11258; // 0x591 PushI
	var_237_bool = var_74_float == var_236_int; // 0x592 Eq
	if(var_237_bool == 0) goto Label_1530; // 0x593 JumpB
	var_238_string = ""; // 0x594 PushV
	var_238_string = "Neutral"; // 0x595 MovS
	func_1313(var_75_int, var_238_string); // 0x596 NEW_2
	var_255_int = 510212; // 0x598 PushI
	SetMessage(var_255_int); // 0x599 TObjFunc
	ClearReplies(); // 0x59b TObjFunc
	var_256_bool = 0; // 0x59d PushV
	var_256_bool = 0; // 0x59e MovB
	var_257_bool = 0; var_258_object = Obj(); // 0x59f PushV
	var_258_object = var_1_object; // 0x5a0 MovT
	func_11504(var_258_object); // 0x5a1 NEW_2
	if(var_257_bool == 0) goto Label_1450; // 0x5a3 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x5a4 PushV
	var_266_object = var_1_object; // 0x5a5 MovT
	func_11516(var_266_object); // 0x5a6 NEW_2
	if(var_265_bool == 0) goto Label_1450; // 0x5a8 JumpB
	var_256_bool = 1; // 0x5a9 MovB
	
Label_1450:
	if(var_256_bool == 0) goto Label_1456; // 0x5aa JumpB
	var_271_int = 510213; // 0x5ab PushI
	var_272_int = 11260; // 0x5ac PushI
	var_273_int = 11259; // 0x5ad PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x5ae TObjFunc
	
Label_1456:
	var_274_bool = 0; // 0x5b0 PushV
	var_274_bool = 0; // 0x5b1 MovB
	var_275_bool = 0; var_276_object = Obj(); // 0x5b2 PushV
	var_276_object = var_1_object; // 0x5b3 MovT
	func_11312(var_276_object); // 0x5b4 NEW_2
	if(var_275_bool == 0) goto Label_1470; // 0x5b6 JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x5b7 PushV
	var_282_object = var_1_object; // 0x5b8 MovT
	func_11492(var_282_object); // 0x5b9 NEW_2
	var_287_bool = var_281_bool == 0; // 0x5bb Not
	if(var_287_bool == 0) goto Label_1470; // 0x5bc JumpB
	var_274_bool = 1; // 0x5bd MovB
	
Label_1470:
	if(var_274_bool == 0) goto Label_1476; // 0x5be JumpB
	var_288_int = 510302; // 0x5bf PushI
	var_289_int = 11359; // 0x5c0 PushI
	var_290_int = 11358; // 0x5c1 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x5c2 TObjFunc
	
Label_1476:
	var_291_bool = 0; // 0x5c4 PushV
	var_291_bool = 1; // 0x5c5 MovB
	var_292_bool = 0; // 0x5c6 PushV
	var_292_bool = 0; // 0x5c7 MovB
	var_293_bool = 0; var_294_object = Obj(); // 0x5c8 PushV
	var_294_object = var_1_object; // 0x5c9 MovT
	func_11528(var_294_object); // 0x5ca NEW_2
	if(var_293_bool == 0) goto Label_1491; // 0x5cc JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0x5cd PushV
	var_300_object = var_1_object; // 0x5ce MovT
	func_11444(var_300_object); // 0x5cf NEW_2
	if(var_299_bool == 0) goto Label_1491; // 0x5d1 JumpB
	var_292_bool = 1; // 0x5d2 MovB
	
Label_1491:
	if(var_292_bool == 0) goto Label_1507; // 0x5d3 JumpB
	var_305_bool = 0; // 0x5d4 PushV
	var_305_bool = 0; // 0x5d5 MovB
	var_306_bool = 0; var_307_object = Obj(); // 0x5d6 PushV
	var_307_object = var_1_object; // 0x5d7 MovT
	func_11540(var_307_object); // 0x5d8 NEW_2
	if(var_306_bool == 0) goto Label_1505; // 0x5da JumpB
	var_312_bool = 0; var_313_object = Obj(); // 0x5db PushV
	var_313_object = var_1_object; // 0x5dc MovT
	func_11444(var_313_object); // 0x5dd NEW_2
	if(var_312_bool == 0) goto Label_1505; // 0x5df JumpB
	var_305_bool = 1; // 0x5e0 MovB
	
Label_1505:
	if(var_305_bool == 0) goto Label_1507; // 0x5e1 JumpB
	var_291_bool = 0; // 0x5e2 MovB
	
Label_1507:
	if(var_291_bool == 0) goto Label_1513; // 0x5e3 JumpB
	var_314_int = 510334; // 0x5e4 PushI
	var_315_int = 11395; // 0x5e5 PushI
	var_316_int = 11394; // 0x5e6 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x5e7 TObjFunc
	
Label_1513:
	var_317_bool = 0; var_318_object = Obj(); // 0x5e9 PushV
	var_318_object = var_1_object; // 0x5ea MovT
	func_11922(var_317_bool, var_318_object); // 0x5eb NEW_2
	var_329_bool = var_317_bool == 0; // 0x5ed Not
	if(var_329_bool == 0) goto Label_1524; // 0x5ee JumpB
	var_330_int = 520897; // 0x5ef PushI
	var_331_int = 22115; // 0x5f0 PushI
	var_332_int = 22114; // 0x5f1 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x5f2 TObjFunc
	
Label_1524:
	var_333_int = 520896; // 0x5f4 PushI
	var_334_int = -1; // 0x5f5 PushI
	var_335_int = 22113; // 0x5f6 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x5f7 TObjFunc
	return 0; // 0x5f9 Return
	
Label_1530:
	var_336_int = 22115; // 0x5fa PushI
	var_337_bool = var_74_float == var_336_int; // 0x5fb Eq
	if(var_337_bool == 0) goto Label_1558; // 0x5fc JumpB
	var_338_string = ""; // 0x5fd PushV
	var_338_string = "Neutral"; // 0x5fe MovS
	func_1313(var_75_int, var_338_string); // 0x5ff NEW_2
	var_339_int = 520898; // 0x601 PushI
	SetMessage(var_339_int); // 0x602 TObjFunc
	ClearReplies(); // 0x604 TObjFunc
	var_340_bool = 0; var_341_object = Obj(); // 0x606 PushV
	var_341_object = var_1_object; // 0x607 MovT
	func_11932(var_340_bool, var_341_object); // 0x608 NEW_2
	if(var_340_bool == 0) goto Label_1552; // 0x60a JumpB
	var_348_int = 520899; // 0x60b PushI
	var_349_int = -1; // 0x60c PushI
	var_350_int = 22116; // 0x60d PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x60e TObjFunc
	
Label_1552:
	var_351_int = 520900; // 0x610 PushI
	var_352_int = -1; // 0x611 PushI
	var_353_int = 22117; // 0x612 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x613 TObjFunc
	return 0; // 0x615 Return
	
Label_1558:
	var_354_int = 11395; // 0x616 PushI
	var_355_bool = var_74_float == var_354_int; // 0x617 Eq
	if(var_355_bool == 0) goto Label_1581; // 0x618 JumpB
	var_356_string = ""; // 0x619 PushV
	var_356_string = "Fear"; // 0x61a MovS
	func_1313(var_75_int, var_356_string); // 0x61b NEW_2
	var_357_int = 510335; // 0x61d PushI
	SetMessage(var_357_int); // 0x61e TObjFunc
	ClearReplies(); // 0x620 TObjFunc
	var_358_int = 510336; // 0x622 PushI
	var_359_int = 11399; // 0x623 PushI
	var_360_int = 11396; // 0x624 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x625 TObjFunc
	var_361_int = 510337; // 0x627 PushI
	var_362_int = 11398; // 0x628 PushI
	var_363_int = 11397; // 0x629 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x62a TObjFunc
	return 0; // 0x62c Return
	
Label_1581:
	var_364_int = 11398; // 0x62d PushI
	var_365_bool = var_74_float == var_364_int; // 0x62e Eq
	if(var_365_bool == 0) goto Label_1599; // 0x62f JumpB
	var_366_string = ""; // 0x630 PushV
	var_366_string = "Fear"; // 0x631 MovS
	func_1313(var_75_int, var_366_string); // 0x632 NEW_2
	var_367_int = 510338; // 0x634 PushI
	SetMessage(var_367_int); // 0x635 TObjFunc
	ClearReplies(); // 0x637 TObjFunc
	var_368_int = 510341; // 0x639 PushI
	var_369_int = 11402; // 0x63a PushI
	var_370_int = 11401; // 0x63b PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x63c TObjFunc
	return 0; // 0x63e Return
	
Label_1599:
	var_371_int = 11399; // 0x63f PushI
	var_372_bool = var_74_float == var_371_int; // 0x640 Eq
	if(var_372_bool == 0) goto Label_1622; // 0x641 JumpB
	var_373_string = ""; // 0x642 PushV
	var_373_string = "Fear"; // 0x643 MovS
	func_1313(var_75_int, var_373_string); // 0x644 NEW_2
	var_374_int = 510339; // 0x646 PushI
	SetMessage(var_374_int); // 0x647 TObjFunc
	ClearReplies(); // 0x649 TObjFunc
	var_375_int = 510340; // 0x64b PushI
	var_376_int = 11402; // 0x64c PushI
	var_377_int = 11400; // 0x64d PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x64e TObjFunc
	var_378_int = 534414; // 0x650 PushI
	var_379_int = 36040; // 0x651 PushI
	var_380_int = 36039; // 0x652 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x653 TObjFunc
	return 0; // 0x655 Return
	
Label_1622:
	var_381_int = 36040; // 0x656 PushI
	var_382_bool = var_74_float == var_381_int; // 0x657 Eq
	if(var_382_bool == 0) goto Label_1640; // 0x658 JumpB
	var_383_string = ""; // 0x659 PushV
	var_383_string = "Fear"; // 0x65a MovS
	func_1313(var_75_int, var_383_string); // 0x65b NEW_2
	var_384_int = 534415; // 0x65d PushI
	SetMessage(var_384_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_385_int = 534416; // 0x662 PushI
	var_386_int = 11402; // 0x663 PushI
	var_387_int = 36041; // 0x664 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x665 TObjFunc
	return 0; // 0x667 Return
	
Label_1640:
	var_388_int = 11402; // 0x668 PushI
	var_389_bool = var_74_float == var_388_int; // 0x669 Eq
	if(var_389_bool == 0) goto Label_1663; // 0x66a JumpB
	var_390_string = ""; // 0x66b PushV
	var_390_string = "Sly"; // 0x66c MovS
	func_1313(var_75_int, var_390_string); // 0x66d NEW_2
	var_391_int = 510342; // 0x66f PushI
	SetMessage(var_391_int); // 0x670 TObjFunc
	ClearReplies(); // 0x672 TObjFunc
	var_392_int = 510343; // 0x674 PushI
	var_393_int = -1; // 0x675 PushI
	var_394_int = 11404; // 0x676 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x677 TObjFunc
	var_395_int = 510344; // 0x679 PushI
	var_396_int = 11406; // 0x67a PushI
	var_397_int = 11405; // 0x67b PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x67c TObjFunc
	return 0; // 0x67e Return
	
Label_1663:
	var_398_int = 11406; // 0x67f PushI
	var_399_bool = var_74_float == var_398_int; // 0x680 Eq
	if(var_399_bool == 0) goto Label_1681; // 0x681 JumpB
	var_400_string = ""; // 0x682 PushV
	var_400_string = "Sly"; // 0x683 MovS
	func_1313(var_75_int, var_400_string); // 0x684 NEW_2
	var_401_int = 510345; // 0x686 PushI
	SetMessage(var_401_int); // 0x687 TObjFunc
	ClearReplies(); // 0x689 TObjFunc
	var_402_int = 510346; // 0x68b PushI
	var_403_int = -1; // 0x68c PushI
	var_404_int = 11407; // 0x68d PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x68e TObjFunc
	return 0; // 0x690 Return
	
Label_1681:
	var_405_int = 11359; // 0x691 PushI
	var_406_bool = var_74_float == var_405_int; // 0x692 Eq
	if(var_406_bool == 0) goto Label_1699; // 0x693 JumpB
	var_407_string = ""; // 0x694 PushV
	var_407_string = "Neutral"; // 0x695 MovS
	func_1313(var_75_int, var_407_string); // 0x696 NEW_2
	var_408_int = 510303; // 0x698 PushI
	SetMessage(var_408_int); // 0x699 TObjFunc
	ClearReplies(); // 0x69b TObjFunc
	var_409_int = 510304; // 0x69d PushI
	var_410_int = 11039; // 0x69e PushI
	var_411_int = 11360; // 0x69f PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x6a0 TObjFunc
	return 0; // 0x6a2 Return
	
Label_1699:
	var_412_int = 11039; // 0x6a3 PushI
	var_413_bool = var_74_float == var_412_int; // 0x6a4 Eq
	if(var_413_bool == 0) goto Label_1722; // 0x6a5 JumpB
	var_414_string = ""; // 0x6a6 PushV
	var_414_string = "Neutral"; // 0x6a7 MovS
	func_1313(var_75_int, var_414_string); // 0x6a8 NEW_2
	var_415_int = 510017; // 0x6aa PushI
	SetMessage(var_415_int); // 0x6ab TObjFunc
	ClearReplies(); // 0x6ad TObjFunc
	var_416_int = 510018; // 0x6af PushI
	var_417_int = 11041; // 0x6b0 PushI
	var_418_int = 11040; // 0x6b1 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x6b2 TObjFunc
	var_419_int = 510028; // 0x6b4 PushI
	var_420_int = -1; // 0x6b5 PushI
	var_421_int = 11050; // 0x6b6 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x6b7 TObjFunc
	return 0; // 0x6b9 Return
	
Label_1722:
	var_422_int = 11041; // 0x6ba PushI
	var_423_bool = var_74_float == var_422_int; // 0x6bb Eq
	if(var_423_bool == 0) goto Label_1745; // 0x6bc JumpB
	var_424_string = ""; // 0x6bd PushV
	var_424_string = "Neutral"; // 0x6be MovS
	func_1313(var_75_int, var_424_string); // 0x6bf NEW_2
	var_425_int = 510019; // 0x6c1 PushI
	SetMessage(var_425_int); // 0x6c2 TObjFunc
	ClearReplies(); // 0x6c4 TObjFunc
	var_426_int = 510020; // 0x6c6 PushI
	var_427_int = 11043; // 0x6c7 PushI
	var_428_int = 11042; // 0x6c8 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x6c9 TObjFunc
	var_429_int = 510027; // 0x6cb PushI
	var_430_int = -1; // 0x6cc PushI
	var_431_int = 11049; // 0x6cd PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x6ce TObjFunc
	return 0; // 0x6d0 Return
	
Label_1745:
	var_432_int = 11043; // 0x6d1 PushI
	var_433_bool = var_74_float == var_432_int; // 0x6d2 Eq
	if(var_433_bool == 0) goto Label_1768; // 0x6d3 JumpB
	var_434_string = ""; // 0x6d4 PushV
	var_434_string = "Untrust"; // 0x6d5 MovS
	func_1313(var_75_int, var_434_string); // 0x6d6 NEW_2
	var_435_int = 510021; // 0x6d8 PushI
	SetMessage(var_435_int); // 0x6d9 TObjFunc
	ClearReplies(); // 0x6db TObjFunc
	var_436_int = 510022; // 0x6dd PushI
	var_437_int = 11045; // 0x6de PushI
	var_438_int = 11044; // 0x6df PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x6e0 TObjFunc
	var_439_int = 510026; // 0x6e2 PushI
	var_440_int = -1; // 0x6e3 PushI
	var_441_int = 11048; // 0x6e4 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x6e5 TObjFunc
	return 0; // 0x6e7 Return
	
Label_1768:
	var_442_int = 11045; // 0x6e8 PushI
	var_443_bool = var_74_float == var_442_int; // 0x6e9 Eq
	if(var_443_bool == 0) goto Label_1791; // 0x6ea JumpB
	var_444_string = ""; // 0x6eb PushV
	var_444_string = "Untrust"; // 0x6ec MovS
	func_1313(var_75_int, var_444_string); // 0x6ed NEW_2
	var_445_int = 510023; // 0x6ef PushI
	SetMessage(var_445_int); // 0x6f0 TObjFunc
	ClearReplies(); // 0x6f2 TObjFunc
	var_446_int = 510024; // 0x6f4 PushI
	var_447_int = -1; // 0x6f5 PushI
	var_448_int = 11046; // 0x6f6 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x6f7 TObjFunc
	var_449_int = 510025; // 0x6f9 PushI
	var_450_int = -1; // 0x6fa PushI
	var_451_int = 11047; // 0x6fb PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x6fc TObjFunc
	return 0; // 0x6fe Return
	
Label_1791:
	var_452_int = 11260; // 0x6ff PushI
	var_453_bool = var_74_float == var_452_int; // 0x700 Eq
	if(var_453_bool == 0) goto Label_1814; // 0x701 JumpB
	var_454_string = ""; // 0x702 PushV
	var_454_string = "Untrust"; // 0x703 MovS
	func_1313(var_75_int, var_454_string); // 0x704 NEW_2
	var_455_int = 510214; // 0x706 PushI
	SetMessage(var_455_int); // 0x707 TObjFunc
	ClearReplies(); // 0x709 TObjFunc
	var_456_int = 510305; // 0x70b PushI
	var_457_int = 11364; // 0x70c PushI
	var_458_int = 11361; // 0x70d PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x70e TObjFunc
	var_459_int = 510306; // 0x710 PushI
	var_460_int = 11363; // 0x711 PushI
	var_461_int = 11362; // 0x712 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x713 TObjFunc
	return 0; // 0x715 Return
	
Label_1814:
	var_462_int = 11363; // 0x716 PushI
	var_463_bool = var_74_float == var_462_int; // 0x717 Eq
	if(var_463_bool == 0) goto Label_1837; // 0x718 JumpB
	var_464_string = ""; // 0x719 PushV
	var_464_string = "Neutral"; // 0x71a MovS
	func_1313(var_75_int, var_464_string); // 0x71b NEW_2
	var_465_int = 510307; // 0x71d PushI
	SetMessage(var_465_int); // 0x71e TObjFunc
	ClearReplies(); // 0x720 TObjFunc
	var_466_int = 534368; // 0x722 PushI
	var_467_int = 11364; // 0x723 PushI
	var_468_int = 35974; // 0x724 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x725 TObjFunc
	var_469_int = 534369; // 0x727 PushI
	var_470_int = 11366; // 0x728 PushI
	var_471_int = 35975; // 0x729 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x72a TObjFunc
	return 0; // 0x72c Return
	
Label_1837:
	var_472_int = 11364; // 0x72d PushI
	var_473_bool = var_74_float == var_472_int; // 0x72e Eq
	if(var_473_bool == 0) goto Label_1860; // 0x72f JumpB
	var_474_string = ""; // 0x730 PushV
	var_474_string = "Untrust"; // 0x731 MovS
	func_1313(var_75_int, var_474_string); // 0x732 NEW_2
	var_475_int = 510308; // 0x734 PushI
	SetMessage(var_475_int); // 0x735 TObjFunc
	ClearReplies(); // 0x737 TObjFunc
	var_476_int = 510309; // 0x739 PushI
	var_477_int = 11370; // 0x73a PushI
	var_478_int = 11365; // 0x73b PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x73c TObjFunc
	var_479_int = 510311; // 0x73e PushI
	var_480_int = 11366; // 0x73f PushI
	var_481_int = 11367; // 0x740 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x741 TObjFunc
	return 0; // 0x743 Return
	
Label_1860:
	var_482_int = 11366; // 0x744 PushI
	var_483_bool = var_74_float == var_482_int; // 0x745 Eq
	if(var_483_bool == 0) goto Label_1883; // 0x746 JumpB
	var_484_string = ""; // 0x747 PushV
	var_484_string = "Neutral"; // 0x748 MovS
	func_1313(var_75_int, var_484_string); // 0x749 NEW_2
	var_485_int = 510310; // 0x74b PushI
	SetMessage(var_485_int); // 0x74c TObjFunc
	ClearReplies(); // 0x74e TObjFunc
	var_486_int = 510312; // 0x750 PushI
	var_487_int = 35894; // 0x751 PushI
	var_488_int = 11369; // 0x752 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x753 TObjFunc
	var_489_int = 534370; // 0x755 PushI
	var_490_int = 11371; // 0x756 PushI
	var_491_int = 35978; // 0x757 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x758 TObjFunc
	return 0; // 0x75a Return
	
Label_1883:
	var_492_int = 11370; // 0x75b PushI
	var_493_bool = var_74_float == var_492_int; // 0x75c Eq
	if(var_493_bool == 0) goto Label_1901; // 0x75d JumpB
	var_494_string = ""; // 0x75e PushV
	var_494_string = "Neutral"; // 0x75f MovS
	func_1313(var_75_int, var_494_string); // 0x760 NEW_2
	var_495_int = 510313; // 0x762 PushI
	SetMessage(var_495_int); // 0x763 TObjFunc
	ClearReplies(); // 0x765 TObjFunc
	var_496_int = 510315; // 0x767 PushI
	var_497_int = 11371; // 0x768 PushI
	var_498_int = 11372; // 0x769 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x76a TObjFunc
	return 0; // 0x76c Return
	
Label_1901:
	var_499_int = 11371; // 0x76d PushI
	var_500_bool = var_74_float == var_499_int; // 0x76e Eq
	if(var_500_bool == 0) goto Label_1924; // 0x76f JumpB
	var_501_string = ""; // 0x770 PushV
	var_501_string = "Sly"; // 0x771 MovS
	func_1313(var_75_int, var_501_string); // 0x772 NEW_2
	var_502_int = 510314; // 0x774 PushI
	SetMessage(var_502_int); // 0x775 TObjFunc
	ClearReplies(); // 0x777 TObjFunc
	var_503_int = 510317; // 0x779 PushI
	var_504_int = 35894; // 0x77a PushI
	var_505_int = 11375; // 0x77b PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x77c TObjFunc
	var_506_int = 510323; // 0x77e PushI
	var_507_int = 35894; // 0x77f PushI
	var_508_int = 11381; // 0x780 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x781 TObjFunc
	return 0; // 0x783 Return
	
Label_1924:
	var_509_int = 35894; // 0x784 PushI
	var_510_bool = var_74_float == var_509_int; // 0x785 Eq
	if(var_510_bool == 0) goto Label_1947; // 0x786 JumpB
	var_511_string = ""; // 0x787 PushV
	var_511_string = "Sly"; // 0x788 MovS
	func_1313(var_75_int, var_511_string); // 0x789 NEW_2
	var_512_int = 534299; // 0x78b PushI
	SetMessage(var_512_int); // 0x78c TObjFunc
	ClearReplies(); // 0x78e TObjFunc
	var_513_int = 534300; // 0x790 PushI
	var_514_int = 35896; // 0x791 PushI
	var_515_int = 35895; // 0x792 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x793 TObjFunc
	var_516_int = 534317; // 0x795 PushI
	var_517_int = 35914; // 0x796 PushI
	var_518_int = 35913; // 0x797 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x798 TObjFunc
	return 0; // 0x79a Return
	
Label_1947:
	var_519_int = 35914; // 0x79b PushI
	var_520_bool = var_74_float == var_519_int; // 0x79c Eq
	if(var_520_bool == 0) goto Label_1965; // 0x79d JumpB
	var_521_string = ""; // 0x79e PushV
	var_521_string = "Untrust"; // 0x79f MovS
	func_1313(var_75_int, var_521_string); // 0x7a0 NEW_2
	var_522_int = 534318; // 0x7a2 PushI
	SetMessage(var_522_int); // 0x7a3 TObjFunc
	ClearReplies(); // 0x7a5 TObjFunc
	var_523_int = 534319; // 0x7a7 PushI
	var_524_int = 35902; // 0x7a8 PushI
	var_525_int = 35915; // 0x7a9 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x7aa TObjFunc
	return 0; // 0x7ac Return
	
Label_1965:
	var_526_int = 35896; // 0x7ad PushI
	var_527_bool = var_74_float == var_526_int; // 0x7ae Eq
	if(var_527_bool == 0) goto Label_1988; // 0x7af JumpB
	var_528_string = ""; // 0x7b0 PushV
	var_528_string = "Rage"; // 0x7b1 MovS
	func_1313(var_75_int, var_528_string); // 0x7b2 NEW_2
	var_529_int = 534301; // 0x7b4 PushI
	SetMessage(var_529_int); // 0x7b5 TObjFunc
	ClearReplies(); // 0x7b7 TObjFunc
	var_530_int = 534413; // 0x7b9 PushI
	var_531_int = 35902; // 0x7ba PushI
	var_532_int = 36037; // 0x7bb PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x7bc TObjFunc
	var_533_int = 534302; // 0x7be PushI
	var_534_int = 35898; // 0x7bf PushI
	var_535_int = 35897; // 0x7c0 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x7c1 TObjFunc
	return 0; // 0x7c3 Return
	
Label_1988:
	var_536_int = 35898; // 0x7c4 PushI
	var_537_bool = var_74_float == var_536_int; // 0x7c5 Eq
	if(var_537_bool == 0) goto Label_2006; // 0x7c6 JumpB
	var_538_string = ""; // 0x7c7 PushV
	var_538_string = "Rage"; // 0x7c8 MovS
	func_1313(var_75_int, var_538_string); // 0x7c9 NEW_2
	var_539_int = 534303; // 0x7cb PushI
	SetMessage(var_539_int); // 0x7cc TObjFunc
	ClearReplies(); // 0x7ce TObjFunc
	var_540_int = 534304; // 0x7d0 PushI
	var_541_int = 35900; // 0x7d1 PushI
	var_542_int = 35899; // 0x7d2 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x7d3 TObjFunc
	return 0; // 0x7d5 Return
	
Label_2006:
	var_543_int = 35900; // 0x7d6 PushI
	var_544_bool = var_74_float == var_543_int; // 0x7d7 Eq
	if(var_544_bool == 0) goto Label_2024; // 0x7d8 JumpB
	var_545_string = ""; // 0x7d9 PushV
	var_545_string = "Neutral"; // 0x7da MovS
	func_1313(var_75_int, var_545_string); // 0x7db NEW_2
	var_546_int = 534305; // 0x7dd PushI
	SetMessage(var_546_int); // 0x7de TObjFunc
	ClearReplies(); // 0x7e0 TObjFunc
	var_547_int = 534306; // 0x7e2 PushI
	var_548_int = 35902; // 0x7e3 PushI
	var_549_int = 35901; // 0x7e4 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x7e5 TObjFunc
	return 0; // 0x7e7 Return
	
Label_2024:
	var_550_int = 35902; // 0x7e8 PushI
	var_551_bool = var_74_float == var_550_int; // 0x7e9 Eq
	if(var_551_bool == 0) goto Label_2047; // 0x7ea JumpB
	var_552_string = ""; // 0x7eb PushV
	var_552_string = "Rage"; // 0x7ec MovS
	func_1313(var_75_int, var_552_string); // 0x7ed NEW_2
	var_553_int = 534307; // 0x7ef PushI
	SetMessage(var_553_int); // 0x7f0 TObjFunc
	ClearReplies(); // 0x7f2 TObjFunc
	var_554_int = 534308; // 0x7f4 PushI
	var_555_int = 35904; // 0x7f5 PushI
	var_556_int = 35903; // 0x7f6 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x7f7 TObjFunc
	var_557_int = 534314; // 0x7f9 PushI
	var_558_int = 35910; // 0x7fa PushI
	var_559_int = 35909; // 0x7fb PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x7fc TObjFunc
	return 0; // 0x7fe Return
	
Label_2047:
	var_560_int = 35910; // 0x7ff PushI
	var_561_bool = var_74_float == var_560_int; // 0x800 Eq
	if(var_561_bool == 0) goto Label_2065; // 0x801 JumpB
	var_562_string = ""; // 0x802 PushV
	var_562_string = "Neutral"; // 0x803 MovS
	func_1313(var_75_int, var_562_string); // 0x804 NEW_2
	var_563_int = 534315; // 0x806 PushI
	SetMessage(var_563_int); // 0x807 TObjFunc
	ClearReplies(); // 0x809 TObjFunc
	var_564_int = 534316; // 0x80b PushI
	var_565_int = 35906; // 0x80c PushI
	var_566_int = 35911; // 0x80d PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x80e TObjFunc
	return 0; // 0x810 Return
	
Label_2065:
	var_567_int = 35904; // 0x811 PushI
	var_568_bool = var_74_float == var_567_int; // 0x812 Eq
	if(var_568_bool == 0) goto Label_2083; // 0x813 JumpB
	var_569_string = ""; // 0x814 PushV
	var_569_string = "Neutral"; // 0x815 MovS
	func_1313(var_75_int, var_569_string); // 0x816 NEW_2
	var_570_int = 534309; // 0x818 PushI
	SetMessage(var_570_int); // 0x819 TObjFunc
	ClearReplies(); // 0x81b TObjFunc
	var_571_int = 534310; // 0x81d PushI
	var_572_int = 35906; // 0x81e PushI
	var_573_int = 35905; // 0x81f PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x820 TObjFunc
	return 0; // 0x822 Return
	
Label_2083:
	var_574_int = 35906; // 0x823 PushI
	var_575_bool = var_74_float == var_574_int; // 0x824 Eq
	if(var_575_bool == 0) goto Label_2106; // 0x825 JumpB
	var_576_string = ""; // 0x826 PushV
	var_576_string = "Neutral"; // 0x827 MovS
	func_1313(var_75_int, var_576_string); // 0x828 NEW_2
	var_577_int = 534311; // 0x82a PushI
	SetMessage(var_577_int); // 0x82b TObjFunc
	ClearReplies(); // 0x82d TObjFunc
	var_578_int = 534312; // 0x82f PushI
	var_579_int = -1; // 0x830 PushI
	var_580_int = 35907; // 0x831 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x832 TObjFunc
	var_581_int = 534313; // 0x834 PushI
	var_582_int = -1; // 0x835 PushI
	var_583_int = 35908; // 0x836 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x837 TObjFunc
	return 0; // 0x839 Return
	
Label_2106:
	var_3_object = 1; // 0x83a TMovB
	var_584_bool = 0; // 0x83b PushV
	func_10509(var_584_bool); // 0x83c NEW_2
	if(var_584_bool == 0) goto Label_2114; // 0x83e JumpB
	lshStopAnimation(); // 0x83f Func
	goto Label_2116; // 0x841 Jump
	
Label_2116:
	return 0; // 0x844 Return
	
Label_2114:
	StopAnimation(); // 0x842 Func
	
Label_2118:
	return 0; // 0x846 Return
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x938 PushI
	if(var_76_int == 0) goto Label_3297; // 0x939 JumpB
	func_10244(); // 0x93b NEW_2
	var_78_int = 12610; // 0x93d PushI
	var_79_bool = var_75_int == var_78_int; // 0x93e Eq
	if(var_79_bool == 0) goto Label_2383; // 0x93f JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x940 PushV
	var_80_object = var_1_object; // 0x941 MovT
	var_81_object = var_0_bool; // 0x942 MovT
	func_10960(); // 0x943 NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x945 PushV
	var_84_object = var_1_object; // 0x946 MovT
	var_85_object = var_0_bool; // 0x947 MovT
	func_10966(); // 0x948 NEW_2
	var_151_object = Obj(); var_152_object = Obj(); // 0x94a PushV
	var_151_object = var_1_object; // 0x94b MovT
	var_152_object = var_0_bool; // 0x94c MovT
	func_10799(); // 0x94d NEW_2
	
Label_2383:
	var_177_int = 12613; // 0x94f PushI
	var_178_bool = var_75_int == var_177_int; // 0x950 Eq
	if(var_178_bool == 0) goto Label_2401; // 0x951 JumpB
	var_179_object = Obj(); var_180_object = Obj(); // 0x952 PushV
	var_179_object = var_1_object; // 0x953 MovT
	var_180_object = var_0_bool; // 0x954 MovT
	func_10960(); // 0x955 NEW_2
	var_181_object = Obj(); var_182_object = Obj(); // 0x957 PushV
	var_181_object = var_1_object; // 0x958 MovT
	var_182_object = var_0_bool; // 0x959 MovT
	func_10966(); // 0x95a NEW_2
	var_183_object = Obj(); var_184_object = Obj(); // 0x95c PushV
	var_183_object = var_1_object; // 0x95d MovT
	var_184_object = var_0_bool; // 0x95e MovT
	func_10799(); // 0x95f NEW_2
	
Label_2401:
	var_185_int = 11955; // 0x961 PushI
	var_186_bool = var_75_int == var_185_int; // 0x962 Eq
	if(var_186_bool == 0) goto Label_2409; // 0x963 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x964 PushV
	var_187_object = var_1_object; // 0x965 MovT
	var_188_object = var_0_bool; // 0x966 MovT
	func_10911(); // 0x967 NEW_2
	
Label_2409:
	var_191_int = 12243; // 0x969 PushI
	var_192_bool = var_75_int == var_191_int; // 0x96a Eq
	if(var_192_bool == 0) goto Label_2427; // 0x96b JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x96c PushV
	var_193_object = var_1_object; // 0x96d MovT
	var_194_object = var_0_bool; // 0x96e MovT
	func_10917(); // 0x96f NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0x971 PushV
	var_213_object = var_1_object; // 0x972 MovT
	var_214_object = var_0_bool; // 0x973 MovT
	func_10940(); // 0x974 NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0x976 PushV
	var_225_object = var_1_object; // 0x977 MovT
	var_226_object = var_0_bool; // 0x978 MovT
	func_10837(); // 0x979 NEW_2
	
Label_2427:
	var_232_int = 12244; // 0x97b PushI
	var_233_bool = var_75_int == var_232_int; // 0x97c Eq
	if(var_233_bool == 0) goto Label_2445; // 0x97d JumpB
	var_234_object = Obj(); var_235_object = Obj(); // 0x97e PushV
	var_234_object = var_1_object; // 0x97f MovT
	var_235_object = var_0_bool; // 0x980 MovT
	func_10917(); // 0x981 NEW_2
	var_236_object = Obj(); var_237_object = Obj(); // 0x983 PushV
	var_236_object = var_1_object; // 0x984 MovT
	var_237_object = var_0_bool; // 0x985 MovT
	func_10940(); // 0x986 NEW_2
	var_238_object = Obj(); var_239_object = Obj(); // 0x988 PushV
	var_238_object = var_1_object; // 0x989 MovT
	var_239_object = var_0_bool; // 0x98a MovT
	func_10837(); // 0x98b NEW_2
	
Label_2445:
	var_240_int = 13075; // 0x98d PushI
	var_241_bool = var_75_int == var_240_int; // 0x98e Eq
	if(var_241_bool == 0) goto Label_2453; // 0x98f JumpB
	var_242_object = Obj(); var_243_object = Obj(); // 0x990 PushV
	var_242_object = var_1_object; // 0x991 MovT
	var_243_object = var_0_bool; // 0x992 MovT
	func_11010(); // 0x993 NEW_2
	
Label_2453:
	var_246_int = 37888; // 0x995 PushI
	var_247_bool = var_75_int == var_246_int; // 0x996 Eq
	if(var_247_bool == 0) goto Label_2471; // 0x997 JumpB
	var_248_object = Obj(); var_249_object = Obj(); // 0x998 PushV
	var_248_object = var_1_object; // 0x999 MovT
	var_249_object = var_0_bool; // 0x99a MovT
	func_10853(var_249_object); // 0x99b NEW_2
	var_269_object = Obj(); var_270_object = Obj(); // 0x99d PushV
	var_269_object = var_1_object; // 0x99e MovT
	var_270_object = var_0_bool; // 0x99f MovT
	func_10605(); // 0x9a0 NEW_2
	var_273_object = Obj(); var_274_object = Obj(); // 0x9a2 PushV
	var_273_object = var_1_object; // 0x9a3 MovT
	var_274_object = var_0_bool; // 0x9a4 MovT
	func_10754(var_274_object); // 0x9a5 NEW_2
	
Label_2471:
	var_294_int = 13077; // 0x9a7 PushI
	var_295_bool = var_75_int == var_294_int; // 0x9a8 Eq
	if(var_295_bool == 0) goto Label_2489; // 0x9a9 JumpB
	var_296_object = Obj(); var_297_object = Obj(); // 0x9aa PushV
	var_296_object = var_1_object; // 0x9ab MovT
	var_297_object = var_0_bool; // 0x9ac MovT
	func_10853(var_297_object); // 0x9ad NEW_2
	var_298_object = Obj(); var_299_object = Obj(); // 0x9af PushV
	var_298_object = var_1_object; // 0x9b0 MovT
	var_299_object = var_0_bool; // 0x9b1 MovT
	func_10605(); // 0x9b2 NEW_2
	var_300_object = Obj(); var_301_object = Obj(); // 0x9b4 PushV
	var_300_object = var_1_object; // 0x9b5 MovT
	var_301_object = var_0_bool; // 0x9b6 MovT
	func_10754(var_301_object); // 0x9b7 NEW_2
	
Label_2489:
	var_302_int = 22120; // 0x9b9 PushI
	var_303_bool = var_75_int == var_302_int; // 0x9ba Eq
	if(var_303_bool == 0) goto Label_2507; // 0x9bb JumpB
	var_304_object = Obj(); var_305_object = Obj(); // 0x9bc PushV
	var_304_object = var_1_object; // 0x9bd MovT
	var_305_object = var_0_bool; // 0x9be MovT
	func_10815(); // 0x9bf NEW_2
	var_308_object = Obj(); var_309_object = Obj(); // 0x9c1 PushV
	var_308_object = var_1_object; // 0x9c2 MovT
	var_309_object = var_0_bool; // 0x9c3 MovT
	func_10531(); // 0x9c4 NEW_2
	var_321_object = Obj(); var_322_object = Obj(); // 0x9c6 PushV
	var_321_object = var_1_object; // 0x9c7 MovT
	var_322_object = var_0_bool; // 0x9c8 MovT
	func_10542(var_322_object); // 0x9c9 NEW_2
	
Label_2507:
	var_325_int = 12592; // 0x9cb PushI
	var_326_bool = var_74_float == var_325_int; // 0x9cc Eq
	if(var_326_bool == 0) goto Label_2609; // 0x9cd JumpB
	var_327_bool = 0; // 0x9ce PushV
	var_327_bool = 0; // 0x9cf MovB
	var_328_bool = 0; var_329_object = Obj(); // 0x9d0 PushV
	var_329_object = var_1_object; // 0x9d1 MovT
	func_11576(var_329_object); // 0x9d2 NEW_2
	if(var_328_bool == 0) goto Label_2524; // 0x9d4 JumpB
	var_336_bool = 0; var_337_object = Obj(); // 0x9d5 PushV
	var_337_object = var_1_object; // 0x9d6 MovT
	func_11552(var_337_object); // 0x9d7 NEW_2
	var_342_bool = var_336_bool == 0; // 0x9d9 Not
	if(var_342_bool == 0) goto Label_2524; // 0x9da JumpB
	var_327_bool = 1; // 0x9db MovB
	
Label_2524:
	if(var_327_bool == 0) goto Label_2545; // 0x9dc JumpB
	var_343_object = Obj(); var_344_object = Obj(); // 0x9dd PushV
	var_343_object = var_1_object; // 0x9de MovT
	var_344_object = var_0_bool; // 0x9df MovT
	func_10659(); // 0x9e0 NEW_2
	var_347_string = ""; // 0x9e2 PushV
	var_347_string = "Neutral"; // 0x9e3 MovS
	func_2337(var_75_int, var_347_string); // 0x9e4 NEW_2
	var_364_int = 511395; // 0x9e6 PushI
	SetMessage(var_364_int); // 0x9e7 TObjFunc
	ClearReplies(); // 0x9e9 TObjFunc
	var_365_int = 511396; // 0x9eb PushI
	var_366_int = 12594; // 0x9ec PushI
	var_367_int = 12593; // 0x9ed PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x9ee TObjFunc
	return 0; // 0x9f0 Return
	
Label_2545:
	var_368_string = ""; // 0x9f1 PushV
	var_368_string = "Neutral"; // 0x9f2 MovS
	func_2337(var_75_int, var_368_string); // 0x9f3 NEW_2
	var_369_int = 510814; // 0x9f5 PushI
	SetMessage(var_369_int); // 0x9f6 TObjFunc
	ClearReplies(); // 0x9f8 TObjFunc
	var_370_bool = 0; // 0x9fa PushV
	var_370_bool = 0; // 0x9fb MovB
	var_371_bool = 0; var_372_object = Obj(); // 0x9fc PushV
	var_372_object = var_1_object; // 0x9fd MovT
	func_11564(var_372_object); // 0x9fe NEW_2
	if(var_371_bool == 0) goto Label_2567; // 0xa00 JumpB
	var_377_bool = 0; var_378_object = Obj(); // 0xa01 PushV
	var_378_object = var_1_object; // 0xa02 MovT
	func_11552(var_378_object); // 0xa03 NEW_2
	if(var_377_bool == 0) goto Label_2567; // 0xa05 JumpB
	var_370_bool = 1; // 0xa06 MovB
	
Label_2567:
	if(var_370_bool == 0) goto Label_2573; // 0xa07 JumpB
	var_379_int = 510815; // 0xa08 PushI
	var_380_int = 11956; // 0xa09 PushI
	var_381_int = 11955; // 0xa0a PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xa0b TObjFunc
	
Label_2573:
	var_382_bool = 0; // 0xa0d PushV
	var_382_bool = 0; // 0xa0e MovB
	var_383_bool = 0; var_384_object = Obj(); // 0xa0f PushV
	var_384_object = var_1_object; // 0xa10 MovT
	func_11600(var_384_object); // 0xa11 NEW_2
	if(var_383_bool == 0) goto Label_2586; // 0xa13 JumpB
	var_389_bool = 0; var_390_object = Obj(); // 0xa14 PushV
	var_390_object = var_1_object; // 0xa15 MovT
	func_11588(var_390_object); // 0xa16 NEW_2
	if(var_389_bool == 0) goto Label_2586; // 0xa18 JumpB
	var_382_bool = 1; // 0xa19 MovB
	
Label_2586:
	if(var_382_bool == 0) goto Label_2592; // 0xa1a JumpB
	var_395_int = 511862; // 0xa1b PushI
	var_396_int = 37886; // 0xa1c PushI
	var_397_int = 13075; // 0xa1d PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xa1e TObjFunc
	
Label_2592:
	var_398_bool = 0; var_399_object = Obj(); // 0xa20 PushV
	var_399_object = var_1_object; // 0xa21 MovT
	func_11922(var_398_bool, var_399_object); // 0xa22 NEW_2
	var_410_bool = var_398_bool == 0; // 0xa24 Not
	if(var_410_bool == 0) goto Label_2603; // 0xa25 JumpB
	var_411_int = 520901; // 0xa26 PushI
	var_412_int = 22119; // 0xa27 PushI
	var_413_int = 22118; // 0xa28 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xa29 TObjFunc
	
Label_2603:
	var_414_int = 511408; // 0xa2b PushI
	var_415_int = -1; // 0xa2c PushI
	var_416_int = 12605; // 0xa2d PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xa2e TObjFunc
	return 0; // 0xa30 Return
	
Label_2609:
	var_417_int = 22119; // 0xa31 PushI
	var_418_bool = var_74_float == var_417_int; // 0xa32 Eq
	if(var_418_bool == 0) goto Label_2637; // 0xa33 JumpB
	var_419_string = ""; // 0xa34 PushV
	var_419_string = "Neutral"; // 0xa35 MovS
	func_2337(var_75_int, var_419_string); // 0xa36 NEW_2
	var_420_int = 520902; // 0xa38 PushI
	SetMessage(var_420_int); // 0xa39 TObjFunc
	ClearReplies(); // 0xa3b TObjFunc
	var_421_bool = 0; var_422_object = Obj(); // 0xa3d PushV
	var_422_object = var_1_object; // 0xa3e MovT
	func_11932(var_421_bool, var_422_object); // 0xa3f NEW_2
	if(var_421_bool == 0) goto Label_2631; // 0xa41 JumpB
	var_429_int = 520903; // 0xa42 PushI
	var_430_int = -1; // 0xa43 PushI
	var_431_int = 22120; // 0xa44 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0xa45 TObjFunc
	
Label_2631:
	var_432_int = 520904; // 0xa47 PushI
	var_433_int = -1; // 0xa48 PushI
	var_434_int = 22121; // 0xa49 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0xa4a TObjFunc
	return 0; // 0xa4c Return
	
Label_2637:
	var_435_int = 37886; // 0xa4d PushI
	var_436_bool = var_74_float == var_435_int; // 0xa4e Eq
	if(var_436_bool == 0) goto Label_2660; // 0xa4f JumpB
	var_437_string = ""; // 0xa50 PushV
	var_437_string = "Neutral"; // 0xa51 MovS
	func_2337(var_75_int, var_437_string); // 0xa52 NEW_2
	var_438_int = 536127; // 0xa54 PushI
	SetMessage(var_438_int); // 0xa55 TObjFunc
	ClearReplies(); // 0xa57 TObjFunc
	var_439_int = 536128; // 0xa59 PushI
	var_440_int = 13076; // 0xa5a PushI
	var_441_int = 37887; // 0xa5b PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0xa5c TObjFunc
	var_442_int = 511864; // 0xa5e PushI
	var_443_int = -1; // 0xa5f PushI
	var_444_int = 13077; // 0xa60 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0xa61 TObjFunc
	return 0; // 0xa63 Return
	
Label_2660:
	var_445_int = 13076; // 0xa64 PushI
	var_446_bool = var_74_float == var_445_int; // 0xa65 Eq
	if(var_446_bool == 0) goto Label_2678; // 0xa66 JumpB
	var_447_string = ""; // 0xa67 PushV
	var_447_string = "Neutral"; // 0xa68 MovS
	func_2337(var_75_int, var_447_string); // 0xa69 NEW_2
	var_448_int = 511863; // 0xa6b PushI
	SetMessage(var_448_int); // 0xa6c TObjFunc
	ClearReplies(); // 0xa6e TObjFunc
	var_449_int = 536129; // 0xa70 PushI
	var_450_int = -1; // 0xa71 PushI
	var_451_int = 37888; // 0xa72 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0xa73 TObjFunc
	return 0; // 0xa75 Return
	
Label_2678:
	var_452_int = 11956; // 0xa76 PushI
	var_453_bool = var_74_float == var_452_int; // 0xa77 Eq
	if(var_453_bool == 0) goto Label_2701; // 0xa78 JumpB
	var_454_string = ""; // 0xa79 PushV
	var_454_string = "Rage"; // 0xa7a MovS
	func_2337(var_75_int, var_454_string); // 0xa7b NEW_2
	var_455_int = 510816; // 0xa7d PushI
	SetMessage(var_455_int); // 0xa7e TObjFunc
	ClearReplies(); // 0xa80 TObjFunc
	var_456_int = 510817; // 0xa82 PushI
	var_457_int = 11958; // 0xa83 PushI
	var_458_int = 11957; // 0xa84 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0xa85 TObjFunc
	var_459_int = 511019; // 0xa87 PushI
	var_460_int = 12191; // 0xa88 PushI
	var_461_int = 12190; // 0xa89 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xa8a TObjFunc
	return 0; // 0xa8c Return
	
Label_2701:
	var_462_int = 12191; // 0xa8d PushI
	var_463_bool = var_74_float == var_462_int; // 0xa8e Eq
	if(var_463_bool == 0) goto Label_2719; // 0xa8f JumpB
	var_464_string = ""; // 0xa90 PushV
	var_464_string = "Neutral"; // 0xa91 MovS
	func_2337(var_75_int, var_464_string); // 0xa92 NEW_2
	var_465_int = 511020; // 0xa94 PushI
	SetMessage(var_465_int); // 0xa95 TObjFunc
	ClearReplies(); // 0xa97 TObjFunc
	var_466_int = 511021; // 0xa99 PushI
	var_467_int = 12193; // 0xa9a PushI
	var_468_int = 12192; // 0xa9b PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0xa9c TObjFunc
	return 0; // 0xa9e Return
	
Label_2719:
	var_469_int = 12193; // 0xa9f PushI
	var_470_bool = var_74_float == var_469_int; // 0xaa0 Eq
	if(var_470_bool == 0) goto Label_2742; // 0xaa1 JumpB
	var_471_string = ""; // 0xaa2 PushV
	var_471_string = "Neutral"; // 0xaa3 MovS
	func_2337(var_75_int, var_471_string); // 0xaa4 NEW_2
	var_472_int = 511022; // 0xaa6 PushI
	SetMessage(var_472_int); // 0xaa7 TObjFunc
	ClearReplies(); // 0xaa9 TObjFunc
	var_473_int = 511023; // 0xaab PushI
	var_474_int = 12202; // 0xaac PushI
	var_475_int = 12194; // 0xaad PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0xaae TObjFunc
	var_476_int = 511024; // 0xab0 PushI
	var_477_int = 12196; // 0xab1 PushI
	var_478_int = 12195; // 0xab2 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0xab3 TObjFunc
	return 0; // 0xab5 Return
	
Label_2742:
	var_479_int = 12196; // 0xab6 PushI
	var_480_bool = var_74_float == var_479_int; // 0xab7 Eq
	if(var_480_bool == 0) goto Label_2760; // 0xab8 JumpB
	var_481_string = ""; // 0xab9 PushV
	var_481_string = "Neutral"; // 0xaba MovS
	func_2337(var_75_int, var_481_string); // 0xabb NEW_2
	var_482_int = 511025; // 0xabd PushI
	SetMessage(var_482_int); // 0xabe TObjFunc
	ClearReplies(); // 0xac0 TObjFunc
	var_483_int = 511026; // 0xac2 PushI
	var_484_int = 12198; // 0xac3 PushI
	var_485_int = 12197; // 0xac4 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0xac5 TObjFunc
	return 0; // 0xac7 Return
	
Label_2760:
	var_486_int = 12198; // 0xac8 PushI
	var_487_bool = var_74_float == var_486_int; // 0xac9 Eq
	if(var_487_bool == 0) goto Label_2778; // 0xaca JumpB
	var_488_string = ""; // 0xacb PushV
	var_488_string = "Fear"; // 0xacc MovS
	func_2337(var_75_int, var_488_string); // 0xacd NEW_2
	var_489_int = 511027; // 0xacf PushI
	SetMessage(var_489_int); // 0xad0 TObjFunc
	ClearReplies(); // 0xad2 TObjFunc
	var_490_int = 511029; // 0xad4 PushI
	var_491_int = 12202; // 0xad5 PushI
	var_492_int = 12201; // 0xad6 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0xad7 TObjFunc
	return 0; // 0xad9 Return
	
Label_2778:
	var_493_int = 12202; // 0xada PushI
	var_494_bool = var_74_float == var_493_int; // 0xadb Eq
	if(var_494_bool == 0) goto Label_2801; // 0xadc JumpB
	var_495_string = ""; // 0xadd PushV
	var_495_string = "Neutral"; // 0xade MovS
	func_2337(var_75_int, var_495_string); // 0xadf NEW_2
	var_496_int = 511030; // 0xae1 PushI
	SetMessage(var_496_int); // 0xae2 TObjFunc
	ClearReplies(); // 0xae4 TObjFunc
	var_497_int = 511031; // 0xae6 PushI
	var_498_int = 12205; // 0xae7 PushI
	var_499_int = 12203; // 0xae8 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0xae9 TObjFunc
	var_500_int = 511032; // 0xaeb PushI
	var_501_int = 12205; // 0xaec PushI
	var_502_int = 12204; // 0xaed PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0xaee TObjFunc
	return 0; // 0xaf0 Return
	
Label_2801:
	var_503_int = 12205; // 0xaf1 PushI
	var_504_bool = var_74_float == var_503_int; // 0xaf2 Eq
	if(var_504_bool == 0) goto Label_2824; // 0xaf3 JumpB
	var_505_string = ""; // 0xaf4 PushV
	var_505_string = "Untrust"; // 0xaf5 MovS
	func_2337(var_75_int, var_505_string); // 0xaf6 NEW_2
	var_506_int = 511033; // 0xaf8 PushI
	SetMessage(var_506_int); // 0xaf9 TObjFunc
	ClearReplies(); // 0xafb TObjFunc
	var_507_int = 511034; // 0xafd PushI
	var_508_int = 12208; // 0xafe PushI
	var_509_int = 12207; // 0xaff PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0xb00 TObjFunc
	var_510_int = 511037; // 0xb02 PushI
	var_511_int = 12211; // 0xb03 PushI
	var_512_int = 12210; // 0xb04 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0xb05 TObjFunc
	return 0; // 0xb07 Return
	
Label_2824:
	var_513_int = 12211; // 0xb08 PushI
	var_514_bool = var_74_float == var_513_int; // 0xb09 Eq
	if(var_514_bool == 0) goto Label_2847; // 0xb0a JumpB
	var_515_string = ""; // 0xb0b PushV
	var_515_string = "Neutral"; // 0xb0c MovS
	func_2337(var_75_int, var_515_string); // 0xb0d NEW_2
	var_516_int = 511038; // 0xb0f PushI
	SetMessage(var_516_int); // 0xb10 TObjFunc
	ClearReplies(); // 0xb12 TObjFunc
	var_517_int = 511039; // 0xb14 PushI
	var_518_int = 12213; // 0xb15 PushI
	var_519_int = 12212; // 0xb16 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0xb17 TObjFunc
	var_520_int = 511054; // 0xb19 PushI
	var_521_int = 12222; // 0xb1a PushI
	var_522_int = 12231; // 0xb1b PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0xb1c TObjFunc
	return 0; // 0xb1e Return
	
Label_2847:
	var_523_int = 12213; // 0xb1f PushI
	var_524_bool = var_74_float == var_523_int; // 0xb20 Eq
	if(var_524_bool == 0) goto Label_2865; // 0xb21 JumpB
	var_525_string = ""; // 0xb22 PushV
	var_525_string = "Neutral"; // 0xb23 MovS
	func_2337(var_75_int, var_525_string); // 0xb24 NEW_2
	var_526_int = 511040; // 0xb26 PushI
	SetMessage(var_526_int); // 0xb27 TObjFunc
	ClearReplies(); // 0xb29 TObjFunc
	var_527_int = 511041; // 0xb2b PushI
	var_528_int = 12215; // 0xb2c PushI
	var_529_int = 12214; // 0xb2d PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0xb2e TObjFunc
	return 0; // 0xb30 Return
	
Label_2865:
	var_530_int = 12215; // 0xb31 PushI
	var_531_bool = var_74_float == var_530_int; // 0xb32 Eq
	if(var_531_bool == 0) goto Label_2883; // 0xb33 JumpB
	var_532_string = ""; // 0xb34 PushV
	var_532_string = "Neutral"; // 0xb35 MovS
	func_2337(var_75_int, var_532_string); // 0xb36 NEW_2
	var_533_int = 511042; // 0xb38 PushI
	SetMessage(var_533_int); // 0xb39 TObjFunc
	ClearReplies(); // 0xb3b TObjFunc
	var_534_int = 511043; // 0xb3d PushI
	var_535_int = 12222; // 0xb3e PushI
	var_536_int = 12216; // 0xb3f PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0xb40 TObjFunc
	return 0; // 0xb42 Return
	
Label_2883:
	var_537_int = 12208; // 0xb43 PushI
	var_538_bool = var_74_float == var_537_int; // 0xb44 Eq
	if(var_538_bool == 0) goto Label_2901; // 0xb45 JumpB
	var_539_string = ""; // 0xb46 PushV
	var_539_string = "Sly"; // 0xb47 MovS
	func_2337(var_75_int, var_539_string); // 0xb48 NEW_2
	var_540_int = 511035; // 0xb4a PushI
	SetMessage(var_540_int); // 0xb4b TObjFunc
	ClearReplies(); // 0xb4d TObjFunc
	var_541_int = 511036; // 0xb4f PushI
	var_542_int = 12217; // 0xb50 PushI
	var_543_int = 12209; // 0xb51 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0xb52 TObjFunc
	return 0; // 0xb54 Return
	
Label_2901:
	var_544_int = 12217; // 0xb55 PushI
	var_545_bool = var_74_float == var_544_int; // 0xb56 Eq
	if(var_545_bool == 0) goto Label_2924; // 0xb57 JumpB
	var_546_string = ""; // 0xb58 PushV
	var_546_string = "Neutral"; // 0xb59 MovS
	func_2337(var_75_int, var_546_string); // 0xb5a NEW_2
	var_547_int = 511044; // 0xb5c PushI
	SetMessage(var_547_int); // 0xb5d TObjFunc
	ClearReplies(); // 0xb5f TObjFunc
	var_548_int = 511045; // 0xb61 PushI
	var_549_int = 12222; // 0xb62 PushI
	var_550_int = 12218; // 0xb63 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0xb64 TObjFunc
	var_551_int = 511046; // 0xb66 PushI
	var_552_int = 12220; // 0xb67 PushI
	var_553_int = 12219; // 0xb68 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0xb69 TObjFunc
	return 0; // 0xb6b Return
	
Label_2924:
	var_554_int = 12220; // 0xb6c PushI
	var_555_bool = var_74_float == var_554_int; // 0xb6d Eq
	if(var_555_bool == 0) goto Label_2942; // 0xb6e JumpB
	var_556_string = ""; // 0xb6f PushV
	var_556_string = "Neutral"; // 0xb70 MovS
	func_2337(var_75_int, var_556_string); // 0xb71 NEW_2
	var_557_int = 511047; // 0xb73 PushI
	SetMessage(var_557_int); // 0xb74 TObjFunc
	ClearReplies(); // 0xb76 TObjFunc
	var_558_int = 511048; // 0xb78 PushI
	var_559_int = 12222; // 0xb79 PushI
	var_560_int = 12221; // 0xb7a PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0xb7b TObjFunc
	return 0; // 0xb7d Return
	
Label_2942:
	var_561_int = 11958; // 0xb7e PushI
	var_562_bool = var_74_float == var_561_int; // 0xb7f Eq
	if(var_562_bool == 0) goto Label_2965; // 0xb80 JumpB
	var_563_string = ""; // 0xb81 PushV
	var_563_string = "Rage"; // 0xb82 MovS
	func_2337(var_75_int, var_563_string); // 0xb83 NEW_2
	var_564_int = 510818; // 0xb85 PushI
	SetMessage(var_564_int); // 0xb86 TObjFunc
	ClearReplies(); // 0xb88 TObjFunc
	var_565_int = 510819; // 0xb8a PushI
	var_566_int = 12222; // 0xb8b PushI
	var_567_int = 11959; // 0xb8c PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0xb8d TObjFunc
	var_568_int = 510830; // 0xb8f PushI
	var_569_int = 11971; // 0xb90 PushI
	var_570_int = 11970; // 0xb91 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0xb92 TObjFunc
	return 0; // 0xb94 Return
	
Label_2965:
	var_571_int = 11971; // 0xb95 PushI
	var_572_bool = var_74_float == var_571_int; // 0xb96 Eq
	if(var_572_bool == 0) goto Label_2988; // 0xb97 JumpB
	var_573_string = ""; // 0xb98 PushV
	var_573_string = "Rage"; // 0xb99 MovS
	func_2337(var_75_int, var_573_string); // 0xb9a NEW_2
	var_574_int = 510831; // 0xb9c PushI
	SetMessage(var_574_int); // 0xb9d TObjFunc
	ClearReplies(); // 0xb9f TObjFunc
	var_575_int = 510832; // 0xba1 PushI
	var_576_int = 12222; // 0xba2 PushI
	var_577_int = 11972; // 0xba3 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0xba4 TObjFunc
	var_578_int = 510833; // 0xba6 PushI
	var_579_int = 12227; // 0xba7 PushI
	var_580_int = 11974; // 0xba8 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0xba9 TObjFunc
	return 0; // 0xbab Return
	
Label_2988:
	var_581_int = 12227; // 0xbac PushI
	var_582_bool = var_74_float == var_581_int; // 0xbad Eq
	if(var_582_bool == 0) goto Label_3006; // 0xbae JumpB
	var_583_string = ""; // 0xbaf PushV
	var_583_string = "Sly"; // 0xbb0 MovS
	func_2337(var_75_int, var_583_string); // 0xbb1 NEW_2
	var_584_int = 511052; // 0xbb3 PushI
	SetMessage(var_584_int); // 0xbb4 TObjFunc
	ClearReplies(); // 0xbb6 TObjFunc
	var_585_int = 511053; // 0xbb8 PushI
	var_586_int = 12198; // 0xbb9 PushI
	var_587_int = 12228; // 0xbba PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0xbbb TObjFunc
	return 0; // 0xbbd Return
	
Label_3006:
	var_588_int = 12222; // 0xbbe PushI
	var_589_bool = var_74_float == var_588_int; // 0xbbf Eq
	if(var_589_bool == 0) goto Label_3034; // 0xbc0 JumpB
	var_590_string = ""; // 0xbc1 PushV
	var_590_string = "Rage"; // 0xbc2 MovS
	func_2337(var_75_int, var_590_string); // 0xbc3 NEW_2
	var_591_int = 511049; // 0xbc5 PushI
	SetMessage(var_591_int); // 0xbc6 TObjFunc
	ClearReplies(); // 0xbc8 TObjFunc
	var_592_int = 511050; // 0xbca PushI
	var_593_int = 12233; // 0xbcb PushI
	var_594_int = 12223; // 0xbcc PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0xbcd TObjFunc
	var_595_int = 511051; // 0xbcf PushI
	var_596_int = 12233; // 0xbd0 PushI
	var_597_int = 12224; // 0xbd1 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0xbd2 TObjFunc
	var_598_int = 511059; // 0xbd4 PushI
	var_599_int = 12240; // 0xbd5 PushI
	var_600_int = 12239; // 0xbd6 PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0xbd7 TObjFunc
	return 0; // 0xbd9 Return
	
Label_3034:
	var_601_int = 12240; // 0xbda PushI
	var_602_bool = var_74_float == var_601_int; // 0xbdb Eq
	if(var_602_bool == 0) goto Label_3052; // 0xbdc JumpB
	var_603_string = ""; // 0xbdd PushV
	var_603_string = "Neutral"; // 0xbde MovS
	func_2337(var_75_int, var_603_string); // 0xbdf NEW_2
	var_604_int = 511060; // 0xbe1 PushI
	SetMessage(var_604_int); // 0xbe2 TObjFunc
	ClearReplies(); // 0xbe4 TObjFunc
	var_605_int = 511061; // 0xbe6 PushI
	var_606_int = 12233; // 0xbe7 PushI
	var_607_int = 12241; // 0xbe8 PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0xbe9 TObjFunc
	return 0; // 0xbeb Return
	
Label_3052:
	var_608_int = 12233; // 0xbec PushI
	var_609_bool = var_74_float == var_608_int; // 0xbed Eq
	if(var_609_bool == 0) goto Label_3075; // 0xbee JumpB
	var_610_string = ""; // 0xbef PushV
	var_610_string = "Rage"; // 0xbf0 MovS
	func_2337(var_75_int, var_610_string); // 0xbf1 NEW_2
	var_611_int = 511055; // 0xbf3 PushI
	SetMessage(var_611_int); // 0xbf4 TObjFunc
	ClearReplies(); // 0xbf6 TObjFunc
	var_612_int = 511056; // 0xbf8 PushI
	var_613_int = 12237; // 0xbf9 PushI
	var_614_int = 12235; // 0xbfa PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0xbfb TObjFunc
	var_615_int = 511057; // 0xbfd PushI
	var_616_int = 12237; // 0xbfe PushI
	var_617_int = 12236; // 0xbff PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0xc00 TObjFunc
	return 0; // 0xc02 Return
	
Label_3075:
	var_618_int = 12237; // 0xc03 PushI
	var_619_bool = var_74_float == var_618_int; // 0xc04 Eq
	if(var_619_bool == 0) goto Label_3098; // 0xc05 JumpB
	var_620_string = ""; // 0xc06 PushV
	var_620_string = "Sly"; // 0xc07 MovS
	func_2337(var_75_int, var_620_string); // 0xc08 NEW_2
	var_621_int = 511058; // 0xc0a PushI
	SetMessage(var_621_int); // 0xc0b TObjFunc
	ClearReplies(); // 0xc0d TObjFunc
	var_622_int = 511062; // 0xc0f PushI
	var_623_int = -1; // 0xc10 PushI
	var_624_int = 12243; // 0xc11 PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0xc12 TObjFunc
	var_625_int = 511063; // 0xc14 PushI
	var_626_int = -1; // 0xc15 PushI
	var_627_int = 12244; // 0xc16 PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0xc17 TObjFunc
	return 0; // 0xc19 Return
	
Label_3098:
	var_628_int = 12594; // 0xc1a PushI
	var_629_bool = var_74_float == var_628_int; // 0xc1b Eq
	if(var_629_bool == 0) goto Label_3116; // 0xc1c JumpB
	var_630_string = ""; // 0xc1d PushV
	var_630_string = "Sly"; // 0xc1e MovS
	func_2337(var_75_int, var_630_string); // 0xc1f NEW_2
	var_631_int = 511397; // 0xc21 PushI
	SetMessage(var_631_int); // 0xc22 TObjFunc
	ClearReplies(); // 0xc24 TObjFunc
	var_632_int = 511398; // 0xc26 PushI
	var_633_int = 12596; // 0xc27 PushI
	var_634_int = 12595; // 0xc28 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0xc29 TObjFunc
	return 0; // 0xc2b Return
	
Label_3116:
	var_635_int = 12596; // 0xc2c PushI
	var_636_bool = var_74_float == var_635_int; // 0xc2d Eq
	if(var_636_bool == 0) goto Label_3139; // 0xc2e JumpB
	var_637_string = ""; // 0xc2f PushV
	var_637_string = "Fear"; // 0xc30 MovS
	func_2337(var_75_int, var_637_string); // 0xc31 NEW_2
	var_638_int = 511399; // 0xc33 PushI
	SetMessage(var_638_int); // 0xc34 TObjFunc
	ClearReplies(); // 0xc36 TObjFunc
	var_639_int = 511400; // 0xc38 PushI
	var_640_int = 12598; // 0xc39 PushI
	var_641_int = 12597; // 0xc3a PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0xc3b TObjFunc
	var_642_int = 536121; // 0xc3d PushI
	var_643_int = 37879; // 0xc3e PushI
	var_644_int = 37878; // 0xc3f PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0xc40 TObjFunc
	return 0; // 0xc42 Return
	
Label_3139:
	var_645_int = 37879; // 0xc43 PushI
	var_646_bool = var_74_float == var_645_int; // 0xc44 Eq
	if(var_646_bool == 0) goto Label_3162; // 0xc45 JumpB
	var_647_string = ""; // 0xc46 PushV
	var_647_string = "Untrust"; // 0xc47 MovS
	func_2337(var_75_int, var_647_string); // 0xc48 NEW_2
	var_648_int = 536122; // 0xc4a PushI
	SetMessage(var_648_int); // 0xc4b TObjFunc
	ClearReplies(); // 0xc4d TObjFunc
	var_649_int = 538494; // 0xc4f PushI
	var_650_int = 40382; // 0xc50 PushI
	var_651_int = 40381; // 0xc51 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0xc52 TObjFunc
	var_652_int = 538496; // 0xc54 PushI
	var_653_int = 12607; // 0xc55 PushI
	var_654_int = 40383; // 0xc56 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0xc57 TObjFunc
	return 0; // 0xc59 Return
	
Label_3162:
	var_655_int = 40382; // 0xc5a PushI
	var_656_bool = var_74_float == var_655_int; // 0xc5b Eq
	if(var_656_bool == 0) goto Label_3180; // 0xc5c JumpB
	var_657_string = ""; // 0xc5d PushV
	var_657_string = "Untrust"; // 0xc5e MovS
	func_2337(var_75_int, var_657_string); // 0xc5f NEW_2
	var_658_int = 538495; // 0xc61 PushI
	SetMessage(var_658_int); // 0xc62 TObjFunc
	ClearReplies(); // 0xc64 TObjFunc
	var_659_int = 536123; // 0xc66 PushI
	var_660_int = 12607; // 0xc67 PushI
	var_661_int = 37880; // 0xc68 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0xc69 TObjFunc
	return 0; // 0xc6b Return
	
Label_3180:
	var_662_int = 12598; // 0xc6c PushI
	var_663_bool = var_74_float == var_662_int; // 0xc6d Eq
	if(var_663_bool == 0) goto Label_3203; // 0xc6e JumpB
	var_664_string = ""; // 0xc6f PushV
	var_664_string = "Fear"; // 0xc70 MovS
	func_2337(var_75_int, var_664_string); // 0xc71 NEW_2
	var_665_int = 511401; // 0xc73 PushI
	SetMessage(var_665_int); // 0xc74 TObjFunc
	ClearReplies(); // 0xc76 TObjFunc
	var_666_int = 511409; // 0xc78 PushI
	var_667_int = 12607; // 0xc79 PushI
	var_668_int = 12606; // 0xc7a PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0xc7b TObjFunc
	var_669_int = 538497; // 0xc7d PushI
	var_670_int = 12607; // 0xc7e PushI
	var_671_int = 40384; // 0xc7f PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0xc80 TObjFunc
	return 0; // 0xc82 Return
	
Label_3203:
	var_672_int = 12607; // 0xc83 PushI
	var_673_bool = var_74_float == var_672_int; // 0xc84 Eq
	if(var_673_bool == 0) goto Label_3226; // 0xc85 JumpB
	var_674_string = ""; // 0xc86 PushV
	var_674_string = "Untrust"; // 0xc87 MovS
	func_2337(var_75_int, var_674_string); // 0xc88 NEW_2
	var_675_int = 511410; // 0xc8a PushI
	SetMessage(var_675_int); // 0xc8b TObjFunc
	ClearReplies(); // 0xc8d TObjFunc
	var_676_int = 511411; // 0xc8f PushI
	var_677_int = 12609; // 0xc90 PushI
	var_678_int = 12608; // 0xc91 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0xc92 TObjFunc
	var_679_int = 536124; // 0xc94 PushI
	var_680_int = 37884; // 0xc95 PushI
	var_681_int = 37882; // 0xc96 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0xc97 TObjFunc
	return 0; // 0xc99 Return
	
Label_3226:
	var_682_int = 12609; // 0xc9a PushI
	var_683_bool = var_74_float == var_682_int; // 0xc9b Eq
	if(var_683_bool == 0) goto Label_3244; // 0xc9c JumpB
	var_684_string = ""; // 0xc9d PushV
	var_684_string = "Sly"; // 0xc9e MovS
	func_2337(var_75_int, var_684_string); // 0xc9f NEW_2
	var_685_int = 511412; // 0xca1 PushI
	SetMessage(var_685_int); // 0xca2 TObjFunc
	ClearReplies(); // 0xca4 TObjFunc
	var_686_int = 536125; // 0xca6 PushI
	var_687_int = 37884; // 0xca7 PushI
	var_688_int = 37883; // 0xca8 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0xca9 TObjFunc
	return 0; // 0xcab Return
	
Label_3244:
	var_689_int = 37884; // 0xcac PushI
	var_690_bool = var_74_float == var_689_int; // 0xcad Eq
	if(var_690_bool == 0) goto Label_3267; // 0xcae JumpB
	var_691_string = ""; // 0xcaf PushV
	var_691_string = "Sly"; // 0xcb0 MovS
	func_2337(var_75_int, var_691_string); // 0xcb1 NEW_2
	var_692_int = 536126; // 0xcb3 PushI
	SetMessage(var_692_int); // 0xcb4 TObjFunc
	ClearReplies(); // 0xcb6 TObjFunc
	var_693_int = 511413; // 0xcb8 PushI
	var_694_int = -1; // 0xcb9 PushI
	var_695_int = 12610; // 0xcba PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0xcbb TObjFunc
	var_696_int = 511414; // 0xcbd PushI
	var_697_int = 12612; // 0xcbe PushI
	var_698_int = 12611; // 0xcbf PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0xcc0 TObjFunc
	return 0; // 0xcc2 Return
	
Label_3267:
	var_699_int = 12612; // 0xcc3 PushI
	var_700_bool = var_74_float == var_699_int; // 0xcc4 Eq
	if(var_700_bool == 0) goto Label_3285; // 0xcc5 JumpB
	var_701_string = ""; // 0xcc6 PushV
	var_701_string = "Sly"; // 0xcc7 MovS
	func_2337(var_75_int, var_701_string); // 0xcc8 NEW_2
	var_702_int = 511415; // 0xcca PushI
	SetMessage(var_702_int); // 0xccb TObjFunc
	ClearReplies(); // 0xccd TObjFunc
	var_703_int = 511416; // 0xccf PushI
	var_704_int = -1; // 0xcd0 PushI
	var_705_int = 12613; // 0xcd1 PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0xcd2 TObjFunc
	return 0; // 0xcd4 Return
	
Label_3285:
	var_3_object = 1; // 0xcd5 TMovB
	var_706_bool = 0; // 0xcd6 PushV
	func_10509(var_706_bool); // 0xcd7 NEW_2
	if(var_706_bool == 0) goto Label_3293; // 0xcd9 JumpB
	lshStopAnimation(); // 0xcda Func
	goto Label_3295; // 0xcdc Jump
	
Label_3295:
	return 0; // 0xcdf Return
	
Label_3293:
	StopAnimation(); // 0xcdd Func
	
Label_3297:
	return 0; // 0xce1 Return
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0xded PushI
	if(var_76_int == 0) goto Label_4060; // 0xdee JumpB
	func_10244(); // 0xdf0 NEW_2
	var_78_int = 12969; // 0xdf2 PushI
	var_79_bool = var_75_int == var_78_int; // 0xdf3 Eq
	if(var_79_bool == 0) goto Label_3578; // 0xdf4 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xdf5 PushV
	var_80_object = var_1_object; // 0xdf6 MovT
	var_81_object = var_0_bool; // 0xdf7 MovT
	func_11251(); // 0xdf8 NEW_2
	
Label_3578:
	var_151_int = 12970; // 0xdfa PushI
	var_152_bool = var_75_int == var_151_int; // 0xdfb Eq
	if(var_152_bool == 0) goto Label_3586; // 0xdfc JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0xdfd PushV
	var_153_object = var_1_object; // 0xdfe MovT
	var_154_object = var_0_bool; // 0xdff MovT
	func_11251(); // 0xe00 NEW_2
	
Label_3586:
	var_155_int = 13743; // 0xe02 PushI
	var_156_bool = var_75_int == var_155_int; // 0xe03 Eq
	if(var_156_bool == 0) goto Label_3594; // 0xe04 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0xe05 PushV
	var_157_object = var_1_object; // 0xe06 MovT
	var_158_object = var_0_bool; // 0xe07 MovT
	func_11097(); // 0xe08 NEW_2
	
Label_3594:
	var_161_int = 13745; // 0xe0a PushI
	var_162_bool = var_75_int == var_161_int; // 0xe0b Eq
	if(var_162_bool == 0) goto Label_3607; // 0xe0c JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0xe0d PushV
	var_163_object = var_1_object; // 0xe0e MovT
	var_164_object = var_0_bool; // 0xe0f MovT
	func_10605(); // 0xe10 NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0xe12 PushV
	var_167_object = var_1_object; // 0xe13 MovT
	var_168_object = var_0_bool; // 0xe14 MovT
	func_10521(var_168_object); // 0xe15 NEW_2
	
Label_3607:
	var_188_int = 13746; // 0xe17 PushI
	var_189_bool = var_75_int == var_188_int; // 0xe18 Eq
	if(var_189_bool == 0) goto Label_3615; // 0xe19 JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0xe1a PushV
	var_190_object = var_1_object; // 0xe1b MovT
	var_191_object = var_0_bool; // 0xe1c MovT
	func_11103(); // 0xe1d NEW_2
	
Label_3615:
	var_194_int = 13748; // 0xe1f PushI
	var_195_bool = var_75_int == var_194_int; // 0xe20 Eq
	if(var_195_bool == 0) goto Label_3628; // 0xe21 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0xe22 PushV
	var_196_object = var_1_object; // 0xe23 MovT
	var_197_object = var_0_bool; // 0xe24 MovT
	func_11090(var_197_object); // 0xe25 NEW_2
	var_236_object = Obj(); var_237_object = Obj(); // 0xe27 PushV
	var_236_object = var_1_object; // 0xe28 MovT
	var_237_object = var_0_bool; // 0xe29 MovT
	func_11109(); // 0xe2a NEW_2
	
Label_3628:
	var_238_int = 22124; // 0xe2c PushI
	var_239_bool = var_75_int == var_238_int; // 0xe2d Eq
	if(var_239_bool == 0) goto Label_3646; // 0xe2e JumpB
	var_240_object = Obj(); var_241_object = Obj(); // 0xe2f PushV
	var_240_object = var_1_object; // 0xe30 MovT
	var_241_object = var_0_bool; // 0xe31 MovT
	func_10531(); // 0xe32 NEW_2
	var_253_object = Obj(); var_254_object = Obj(); // 0xe34 PushV
	var_253_object = var_1_object; // 0xe35 MovT
	var_254_object = var_0_bool; // 0xe36 MovT
	func_10542(var_254_object); // 0xe37 NEW_2
	var_257_object = Obj(); var_258_object = Obj(); // 0xe39 PushV
	var_257_object = var_1_object; // 0xe3a MovT
	var_258_object = var_0_bool; // 0xe3b MovT
	func_10815(); // 0xe3c NEW_2
	
Label_3646:
	var_261_int = 12947; // 0xe3e PushI
	var_262_bool = var_74_float == var_261_int; // 0xe3f Eq
	if(var_262_bool == 0) goto Label_3774; // 0xe40 JumpB
	var_263_bool = 0; // 0xe41 PushV
	var_263_bool = 0; // 0xe42 MovB
	var_264_bool = 0; // 0xe43 PushV
	var_264_bool = 0; // 0xe44 MovB
	var_265_bool = 0; var_266_object = Obj(); // 0xe45 PushV
	var_266_object = var_1_object; // 0xe46 MovT
	func_11732(var_266_object); // 0xe47 NEW_2
	if(var_265_bool == 0) goto Label_3665; // 0xe49 JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0xe4a PushV
	var_272_object = var_1_object; // 0xe4b MovT
	func_11672(var_272_object); // 0xe4c NEW_2
	var_277_bool = var_271_bool == 0; // 0xe4e Not
	if(var_277_bool == 0) goto Label_3665; // 0xe4f JumpB
	var_264_bool = 1; // 0xe50 MovB
	
Label_3665:
	if(var_264_bool == 0) goto Label_3673; // 0xe51 JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0xe52 PushV
	var_279_object = var_1_object; // 0xe53 MovT
	func_11684(var_279_object); // 0xe54 NEW_2
	var_284_bool = var_278_bool == 0; // 0xe56 Not
	if(var_284_bool == 0) goto Label_3673; // 0xe57 JumpB
	var_263_bool = 1; // 0xe58 MovB
	
Label_3673:
	if(var_263_bool == 0) goto Label_3710; // 0xe59 JumpB
	var_285_object = Obj(); var_286_object = Obj(); // 0xe5a PushV
	var_285_object = var_1_object; // 0xe5b MovT
	var_286_object = var_0_bool; // 0xe5c MovT
	func_11111(); // 0xe5d NEW_2
	var_289_string = ""; // 0xe5f PushV
	var_289_string = "Rage"; // 0xe60 MovS
	func_3542(var_75_int, var_289_string); // 0xe61 NEW_2
	var_306_int = 511741; // 0xe63 PushI
	SetMessage(var_306_int); // 0xe64 TObjFunc
	ClearReplies(); // 0xe66 TObjFunc
	var_307_int = 511743; // 0xe68 PushI
	var_308_int = 12951; // 0xe69 PushI
	var_309_int = 12949; // 0xe6a PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xe6b TObjFunc
	var_310_int = 511742; // 0xe6d PushI
	var_311_int = 12950; // 0xe6e PushI
	var_312_int = 12948; // 0xe6f PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0xe70 TObjFunc
	var_313_bool = 0; var_314_object = Obj(); // 0xe72 PushV
	var_314_object = var_1_object; // 0xe73 MovT
	func_11660(var_314_object); // 0xe74 NEW_2
	var_319_bool = var_313_bool == 0; // 0xe76 Not
	if(var_319_bool == 0) goto Label_3709; // 0xe77 JumpB
	var_320_int = 512586; // 0xe78 PushI
	var_321_int = 13766; // 0xe79 PushI
	var_322_int = 13753; // 0xe7a PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xe7b TObjFunc
	
Label_3709:
	return 0; // 0xe7d Return
	
Label_3710:
	var_323_string = ""; // 0xe7e PushV
	var_323_string = "Neutral"; // 0xe7f MovS
	func_3542(var_75_int, var_323_string); // 0xe80 NEW_2
	var_324_int = 512573; // 0xe82 PushI
	SetMessage(var_324_int); // 0xe83 TObjFunc
	ClearReplies(); // 0xe85 TObjFunc
	var_325_bool = 0; // 0xe87 PushV
	var_325_bool = 0; // 0xe88 MovB
	var_326_bool = 0; var_327_object = Obj(); // 0xe89 PushV
	var_327_object = var_1_object; // 0xe8a MovT
	func_11696(var_327_object); // 0xe8b NEW_2
	if(var_326_bool == 0) goto Label_3732; // 0xe8d JumpB
	var_332_bool = 0; var_333_object = Obj(); // 0xe8e PushV
	var_333_object = var_1_object; // 0xe8f MovT
	func_11708(var_333_object); // 0xe90 NEW_2
	if(var_332_bool == 0) goto Label_3732; // 0xe92 JumpB
	var_325_bool = 1; // 0xe93 MovB
	
Label_3732:
	if(var_325_bool == 0) goto Label_3738; // 0xe94 JumpB
	var_338_int = 512574; // 0xe95 PushI
	var_339_int = 13744; // 0xe96 PushI
	var_340_int = 13743; // 0xe97 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0xe98 TObjFunc
	
Label_3738:
	var_341_bool = 0; // 0xe9a PushV
	var_341_bool = 0; // 0xe9b MovB
	var_342_bool = 0; var_343_object = Obj(); // 0xe9c PushV
	var_343_object = var_1_object; // 0xe9d MovT
	func_11672(var_343_object); // 0xe9e NEW_2
	if(var_342_bool == 0) goto Label_3751; // 0xea0 JumpB
	var_344_bool = 0; var_345_object = Obj(); // 0xea1 PushV
	var_345_object = var_1_object; // 0xea2 MovT
	func_11720(var_345_object); // 0xea3 NEW_2
	if(var_344_bool == 0) goto Label_3751; // 0xea5 JumpB
	var_341_bool = 1; // 0xea6 MovB
	
Label_3751:
	if(var_341_bool == 0) goto Label_3757; // 0xea7 JumpB
	var_350_int = 512577; // 0xea8 PushI
	var_351_int = 13747; // 0xea9 PushI
	var_352_int = 13746; // 0xeaa PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xeab TObjFunc
	
Label_3757:
	var_353_bool = 0; var_354_object = Obj(); // 0xead PushV
	var_354_object = var_1_object; // 0xeae MovT
	func_11922(var_353_bool, var_354_object); // 0xeaf NEW_2
	var_365_bool = var_353_bool == 0; // 0xeb1 Not
	if(var_365_bool == 0) goto Label_3768; // 0xeb2 JumpB
	var_366_int = 520905; // 0xeb3 PushI
	var_367_int = 22123; // 0xeb4 PushI
	var_368_int = 22122; // 0xeb5 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0xeb6 TObjFunc
	
Label_3768:
	var_369_int = 512580; // 0xeb8 PushI
	var_370_int = -1; // 0xeb9 PushI
	var_371_int = 13749; // 0xeba PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xebb TObjFunc
	return 0; // 0xebd Return
	
Label_3774:
	var_372_int = 22123; // 0xebe PushI
	var_373_bool = var_74_float == var_372_int; // 0xebf Eq
	if(var_373_bool == 0) goto Label_3802; // 0xec0 JumpB
	var_374_string = ""; // 0xec1 PushV
	var_374_string = "Neutral"; // 0xec2 MovS
	func_3542(var_75_int, var_374_string); // 0xec3 NEW_2
	var_375_int = 520906; // 0xec5 PushI
	SetMessage(var_375_int); // 0xec6 TObjFunc
	ClearReplies(); // 0xec8 TObjFunc
	var_376_bool = 0; var_377_object = Obj(); // 0xeca PushV
	var_377_object = var_1_object; // 0xecb MovT
	func_11932(var_376_bool, var_377_object); // 0xecc NEW_2
	if(var_376_bool == 0) goto Label_3796; // 0xece JumpB
	var_384_int = 520907; // 0xecf PushI
	var_385_int = -1; // 0xed0 PushI
	var_386_int = 22124; // 0xed1 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0xed2 TObjFunc
	
Label_3796:
	var_387_int = 520908; // 0xed4 PushI
	var_388_int = -1; // 0xed5 PushI
	var_389_int = 22125; // 0xed6 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0xed7 TObjFunc
	return 0; // 0xed9 Return
	
Label_3802:
	var_390_int = 13747; // 0xeda PushI
	var_391_bool = var_74_float == var_390_int; // 0xedb Eq
	if(var_391_bool == 0) goto Label_3825; // 0xedc JumpB
	var_392_string = ""; // 0xedd PushV
	var_392_string = "Neutral"; // 0xede MovS
	func_3542(var_75_int, var_392_string); // 0xedf NEW_2
	var_393_int = 512578; // 0xee1 PushI
	SetMessage(var_393_int); // 0xee2 TObjFunc
	ClearReplies(); // 0xee4 TObjFunc
	var_394_int = 512598; // 0xee6 PushI
	var_395_int = 13770; // 0xee7 PushI
	var_396_int = 13769; // 0xee8 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0xee9 TObjFunc
	var_397_int = 512603; // 0xeeb PushI
	var_398_int = 13772; // 0xeec PushI
	var_399_int = 13775; // 0xeed PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0xeee TObjFunc
	return 0; // 0xef0 Return
	
Label_3825:
	var_400_int = 13770; // 0xef1 PushI
	var_401_bool = var_74_float == var_400_int; // 0xef2 Eq
	if(var_401_bool == 0) goto Label_3848; // 0xef3 JumpB
	var_402_string = ""; // 0xef4 PushV
	var_402_string = "Rage"; // 0xef5 MovS
	func_3542(var_75_int, var_402_string); // 0xef6 NEW_2
	var_403_int = 512599; // 0xef8 PushI
	SetMessage(var_403_int); // 0xef9 TObjFunc
	ClearReplies(); // 0xefb TObjFunc
	var_404_int = 512600; // 0xefd PushI
	var_405_int = 13772; // 0xefe PushI
	var_406_int = 13771; // 0xeff PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0xf00 TObjFunc
	var_407_int = 512602; // 0xf02 PushI
	var_408_int = 13772; // 0xf03 PushI
	var_409_int = 13773; // 0xf04 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0xf05 TObjFunc
	return 0; // 0xf07 Return
	
Label_3848:
	var_410_int = 13772; // 0xf08 PushI
	var_411_bool = var_74_float == var_410_int; // 0xf09 Eq
	if(var_411_bool == 0) goto Label_3866; // 0xf0a JumpB
	var_412_string = ""; // 0xf0b PushV
	var_412_string = "Rage"; // 0xf0c MovS
	func_3542(var_75_int, var_412_string); // 0xf0d NEW_2
	var_413_int = 512601; // 0xf0f PushI
	SetMessage(var_413_int); // 0xf10 TObjFunc
	ClearReplies(); // 0xf12 TObjFunc
	var_414_int = 512579; // 0xf14 PushI
	var_415_int = -1; // 0xf15 PushI
	var_416_int = 13748; // 0xf16 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xf17 TObjFunc
	return 0; // 0xf19 Return
	
Label_3866:
	var_417_int = 13744; // 0xf1a PushI
	var_418_bool = var_74_float == var_417_int; // 0xf1b Eq
	if(var_418_bool == 0) goto Label_3889; // 0xf1c JumpB
	var_419_string = ""; // 0xf1d PushV
	var_419_string = "Neutral"; // 0xf1e MovS
	func_3542(var_75_int, var_419_string); // 0xf1f NEW_2
	var_420_int = 512575; // 0xf21 PushI
	SetMessage(var_420_int); // 0xf22 TObjFunc
	ClearReplies(); // 0xf24 TObjFunc
	var_421_int = 512576; // 0xf26 PushI
	var_422_int = -1; // 0xf27 PushI
	var_423_int = 13745; // 0xf28 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xf29 TObjFunc
	var_424_int = 515778; // 0xf2b PushI
	var_425_int = 16850; // 0xf2c PushI
	var_426_int = 16849; // 0xf2d PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0xf2e TObjFunc
	return 0; // 0xf30 Return
	
Label_3889:
	var_427_int = 16850; // 0xf31 PushI
	var_428_bool = var_74_float == var_427_int; // 0xf32 Eq
	if(var_428_bool == 0) goto Label_3907; // 0xf33 JumpB
	var_429_string = ""; // 0xf34 PushV
	var_429_string = "Neutral"; // 0xf35 MovS
	func_3542(var_75_int, var_429_string); // 0xf36 NEW_2
	var_430_int = 515779; // 0xf38 PushI
	SetMessage(var_430_int); // 0xf39 TObjFunc
	ClearReplies(); // 0xf3b TObjFunc
	var_431_int = 515780; // 0xf3d PushI
	var_432_int = -1; // 0xf3e PushI
	var_433_int = 16851; // 0xf3f PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0xf40 TObjFunc
	return 0; // 0xf42 Return
	
Label_3907:
	var_434_int = 13766; // 0xf43 PushI
	var_435_bool = var_74_float == var_434_int; // 0xf44 Eq
	if(var_435_bool == 0) goto Label_3925; // 0xf45 JumpB
	var_436_string = ""; // 0xf46 PushV
	var_436_string = "Neutral"; // 0xf47 MovS
	func_3542(var_75_int, var_436_string); // 0xf48 NEW_2
	var_437_int = 512596; // 0xf4a PushI
	SetMessage(var_437_int); // 0xf4b TObjFunc
	ClearReplies(); // 0xf4d TObjFunc
	var_438_int = 512597; // 0xf4f PushI
	var_439_int = 12960; // 0xf50 PushI
	var_440_int = 13767; // 0xf51 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xf52 TObjFunc
	return 0; // 0xf54 Return
	
Label_3925:
	var_441_int = 12950; // 0xf55 PushI
	var_442_bool = var_74_float == var_441_int; // 0xf56 Eq
	if(var_442_bool == 0) goto Label_3943; // 0xf57 JumpB
	var_443_string = ""; // 0xf58 PushV
	var_443_string = "Sly"; // 0xf59 MovS
	func_3542(var_75_int, var_443_string); // 0xf5a NEW_2
	var_444_int = 511744; // 0xf5c PushI
	SetMessage(var_444_int); // 0xf5d TObjFunc
	ClearReplies(); // 0xf5f TObjFunc
	var_445_int = 511746; // 0xf61 PushI
	var_446_int = 12954; // 0xf62 PushI
	var_447_int = 12952; // 0xf63 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xf64 TObjFunc
	return 0; // 0xf66 Return
	
Label_3943:
	var_448_int = 12954; // 0xf67 PushI
	var_449_bool = var_74_float == var_448_int; // 0xf68 Eq
	if(var_449_bool == 0) goto Label_3961; // 0xf69 JumpB
	var_450_string = ""; // 0xf6a PushV
	var_450_string = "Neutral"; // 0xf6b MovS
	func_3542(var_75_int, var_450_string); // 0xf6c NEW_2
	var_451_int = 511748; // 0xf6e PushI
	SetMessage(var_451_int); // 0xf6f TObjFunc
	ClearReplies(); // 0xf71 TObjFunc
	var_452_int = 511749; // 0xf73 PushI
	var_453_int = 12951; // 0xf74 PushI
	var_454_int = 12955; // 0xf75 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0xf76 TObjFunc
	return 0; // 0xf78 Return
	
Label_3961:
	var_455_int = 12951; // 0xf79 PushI
	var_456_bool = var_74_float == var_455_int; // 0xf7a Eq
	if(var_456_bool == 0) goto Label_3979; // 0xf7b JumpB
	var_457_string = ""; // 0xf7c PushV
	var_457_string = "Rage"; // 0xf7d MovS
	func_3542(var_75_int, var_457_string); // 0xf7e NEW_2
	var_458_int = 511745; // 0xf80 PushI
	SetMessage(var_458_int); // 0xf81 TObjFunc
	ClearReplies(); // 0xf83 TObjFunc
	var_459_int = 511747; // 0xf85 PushI
	var_460_int = 12957; // 0xf86 PushI
	var_461_int = 12953; // 0xf87 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xf88 TObjFunc
	return 0; // 0xf8a Return
	
Label_3979:
	var_462_int = 12957; // 0xf8b PushI
	var_463_bool = var_74_float == var_462_int; // 0xf8c Eq
	if(var_463_bool == 0) goto Label_4002; // 0xf8d JumpB
	var_464_string = ""; // 0xf8e PushV
	var_464_string = "Rage"; // 0xf8f MovS
	func_3542(var_75_int, var_464_string); // 0xf90 NEW_2
	var_465_int = 511750; // 0xf92 PushI
	SetMessage(var_465_int); // 0xf93 TObjFunc
	ClearReplies(); // 0xf95 TObjFunc
	var_466_int = 511751; // 0xf97 PushI
	var_467_int = 12960; // 0xf98 PushI
	var_468_int = 12958; // 0xf99 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0xf9a TObjFunc
	var_469_int = 511752; // 0xf9c PushI
	var_470_int = -1; // 0xf9d PushI
	var_471_int = 12959; // 0xf9e PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0xf9f TObjFunc
	return 0; // 0xfa1 Return
	
Label_4002:
	var_472_int = 12960; // 0xfa2 PushI
	var_473_bool = var_74_float == var_472_int; // 0xfa3 Eq
	if(var_473_bool == 0) goto Label_4025; // 0xfa4 JumpB
	var_474_string = ""; // 0xfa5 PushV
	var_474_string = "Sly"; // 0xfa6 MovS
	func_3542(var_75_int, var_474_string); // 0xfa7 NEW_2
	var_475_int = 511753; // 0xfa9 PushI
	SetMessage(var_475_int); // 0xfaa TObjFunc
	ClearReplies(); // 0xfac TObjFunc
	var_476_int = 511754; // 0xfae PushI
	var_477_int = 12964; // 0xfaf PushI
	var_478_int = 12962; // 0xfb0 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0xfb1 TObjFunc
	var_479_int = 515777; // 0xfb3 PushI
	var_480_int = -1; // 0xfb4 PushI
	var_481_int = 16848; // 0xfb5 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0xfb6 TObjFunc
	return 0; // 0xfb8 Return
	
Label_4025:
	var_482_int = 12964; // 0xfb9 PushI
	var_483_bool = var_74_float == var_482_int; // 0xfba Eq
	if(var_483_bool == 0) goto Label_4048; // 0xfbb JumpB
	var_484_string = ""; // 0xfbc PushV
	var_484_string = "Sly"; // 0xfbd MovS
	func_3542(var_75_int, var_484_string); // 0xfbe NEW_2
	var_485_int = 511756; // 0xfc0 PushI
	SetMessage(var_485_int); // 0xfc1 TObjFunc
	ClearReplies(); // 0xfc3 TObjFunc
	var_486_int = 511761; // 0xfc5 PushI
	var_487_int = -1; // 0xfc6 PushI
	var_488_int = 12969; // 0xfc7 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0xfc8 TObjFunc
	var_489_int = 511762; // 0xfca PushI
	var_490_int = -1; // 0xfcb PushI
	var_491_int = 12970; // 0xfcc PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0xfcd TObjFunc
	return 0; // 0xfcf Return
	
Label_4048:
	var_3_object = 1; // 0xfd0 TMovB
	var_492_bool = 0; // 0xfd1 PushV
	func_10509(var_492_bool); // 0xfd2 NEW_2
	if(var_492_bool == 0) goto Label_4056; // 0xfd4 JumpB
	lshStopAnimation(); // 0xfd5 Func
	goto Label_4058; // 0xfd7 Jump
	
Label_4058:
	return 0; // 0xfda Return
	
Label_4056:
	StopAnimation(); // 0xfd8 Func
	
Label_4060:
	return 0; // 0xfdc Return
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x10d8 PushI
	if(var_76_int == 0) goto Label_4827; // 0x10d9 JumpB
	func_10244(); // 0x10db NEW_2
	var_78_int = 13670; // 0x10dd PushI
	var_79_bool = var_75_int == var_78_int; // 0x10de Eq
	if(var_79_bool == 0) goto Label_4335; // 0x10df JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x10e0 PushV
	var_80_object = var_1_object; // 0x10e1 MovT
	var_81_object = var_0_bool; // 0x10e2 MovT
	func_11056(); // 0x10e3 NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x10e5 PushV
	var_84_object = var_1_object; // 0x10e6 MovT
	var_85_object = var_0_bool; // 0x10e7 MovT
	func_11016(); // 0x10e8 NEW_2
	var_152_object = Obj(); var_153_object = Obj(); // 0x10ea PushV
	var_152_object = var_1_object; // 0x10eb MovT
	var_153_object = var_0_bool; // 0x10ec MovT
	func_11068(); // 0x10ed NEW_2
	
Label_4335:
	var_156_int = 13671; // 0x10ef PushI
	var_157_bool = var_75_int == var_156_int; // 0x10f0 Eq
	if(var_157_bool == 0) goto Label_4348; // 0x10f1 JumpB
	var_158_object = Obj(); var_159_object = Obj(); // 0x10f2 PushV
	var_158_object = var_1_object; // 0x10f3 MovT
	var_159_object = var_0_bool; // 0x10f4 MovT
	func_11056(); // 0x10f5 NEW_2
	var_160_object = Obj(); var_161_object = Obj(); // 0x10f7 PushV
	var_160_object = var_1_object; // 0x10f8 MovT
	var_161_object = var_0_bool; // 0x10f9 MovT
	func_11068(); // 0x10fa NEW_2
	
Label_4348:
	var_162_int = 13692; // 0x10fc PushI
	var_163_bool = var_75_int == var_162_int; // 0x10fd Eq
	if(var_163_bool == 0) goto Label_4356; // 0x10fe JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0x10ff PushV
	var_164_object = var_1_object; // 0x1100 MovT
	var_165_object = var_0_bool; // 0x1101 MovT
	func_11016(); // 0x1102 NEW_2
	
Label_4356:
	var_166_int = 13686; // 0x1104 PushI
	var_167_bool = var_75_int == var_166_int; // 0x1105 Eq
	if(var_167_bool == 0) goto Label_4364; // 0x1106 JumpB
	var_168_object = Obj(); var_169_object = Obj(); // 0x1107 PushV
	var_168_object = var_1_object; // 0x1108 MovT
	var_169_object = var_0_bool; // 0x1109 MovT
	func_11062(); // 0x110a NEW_2
	
Label_4364:
	var_172_int = 13689; // 0x110c PushI
	var_173_bool = var_75_int == var_172_int; // 0x110d Eq
	if(var_173_bool == 0) goto Label_4382; // 0x110e JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0x110f PushV
	var_174_object = var_1_object; // 0x1110 MovT
	var_175_object = var_0_bool; // 0x1111 MovT
	func_10605(); // 0x1112 NEW_2
	var_178_object = Obj(); var_179_object = Obj(); // 0x1114 PushV
	var_178_object = var_1_object; // 0x1115 MovT
	var_179_object = var_0_bool; // 0x1116 MovT
	func_11117(); // 0x1117 NEW_2
	var_201_object = Obj(); var_202_object = Obj(); // 0x1119 PushV
	var_201_object = var_1_object; // 0x111a MovT
	var_202_object = var_0_bool; // 0x111b MovT
	func_10595(var_202_object); // 0x111c NEW_2
	
Label_4382:
	var_222_int = 37901; // 0x111e PushI
	var_223_bool = var_75_int == var_222_int; // 0x111f Eq
	if(var_223_bool == 0) goto Label_4400; // 0x1120 JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0x1121 PushV
	var_224_object = var_1_object; // 0x1122 MovT
	var_225_object = var_0_bool; // 0x1123 MovT
	func_11117(); // 0x1124 NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0x1126 PushV
	var_226_object = var_1_object; // 0x1127 MovT
	var_227_object = var_0_bool; // 0x1128 MovT
	func_10595(var_227_object); // 0x1129 NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0x112b PushV
	var_228_object = var_1_object; // 0x112c MovT
	var_229_object = var_0_bool; // 0x112d MovT
	func_10605(); // 0x112e NEW_2
	
Label_4400:
	var_230_int = 13696; // 0x1130 PushI
	var_231_bool = var_75_int == var_230_int; // 0x1131 Eq
	if(var_231_bool == 0) goto Label_4408; // 0x1132 JumpB
	var_232_object = Obj(); var_233_object = Obj(); // 0x1133 PushV
	var_232_object = var_1_object; // 0x1134 MovT
	var_233_object = var_0_bool; // 0x1135 MovT
	func_11074(); // 0x1136 NEW_2
	
Label_4408:
	var_236_int = 13698; // 0x1138 PushI
	var_237_bool = var_75_int == var_236_int; // 0x1139 Eq
	if(var_237_bool == 0) goto Label_4416; // 0x113a JumpB
	var_238_object = Obj(); var_239_object = Obj(); // 0x113b PushV
	var_238_object = var_1_object; // 0x113c MovT
	var_239_object = var_0_bool; // 0x113d MovT
	func_11080(); // 0x113e NEW_2
	
Label_4416:
	var_251_int = 37902; // 0x1140 PushI
	var_252_bool = var_75_int == var_251_int; // 0x1141 Eq
	if(var_252_bool == 0) goto Label_4424; // 0x1142 JumpB
	var_253_object = Obj(); var_254_object = Obj(); // 0x1143 PushV
	var_253_object = var_1_object; // 0x1144 MovT
	var_254_object = var_0_bool; // 0x1145 MovT
	func_11080(); // 0x1146 NEW_2
	
Label_4424:
	var_255_int = 22128; // 0x1148 PushI
	var_256_bool = var_75_int == var_255_int; // 0x1149 Eq
	if(var_256_bool == 0) goto Label_4442; // 0x114a JumpB
	var_257_object = Obj(); var_258_object = Obj(); // 0x114b PushV
	var_257_object = var_1_object; // 0x114c MovT
	var_258_object = var_0_bool; // 0x114d MovT
	func_10815(); // 0x114e NEW_2
	var_261_object = Obj(); var_262_object = Obj(); // 0x1150 PushV
	var_261_object = var_1_object; // 0x1151 MovT
	var_262_object = var_0_bool; // 0x1152 MovT
	func_10542(var_262_object); // 0x1153 NEW_2
	var_265_object = Obj(); var_266_object = Obj(); // 0x1155 PushV
	var_265_object = var_1_object; // 0x1156 MovT
	var_266_object = var_0_bool; // 0x1157 MovT
	func_10531(); // 0x1158 NEW_2
	
Label_4442:
	var_278_int = 13330; // 0x115a PushI
	var_279_bool = var_74_float == var_278_int; // 0x115b Eq
	if(var_279_bool == 0) goto Label_4554; // 0x115c JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x115d PushV
	var_281_object = var_1_object; // 0x115e MovT
	func_11624(var_281_object); // 0x115f NEW_2
	if(var_280_bool == 0) goto Label_4470; // 0x1161 JumpB
	var_288_string = ""; // 0x1162 PushV
	var_288_string = "Fear"; // 0x1163 MovS
	func_4289(var_75_int, var_288_string); // 0x1164 NEW_2
	var_305_int = 512104; // 0x1166 PushI
	SetMessage(var_305_int); // 0x1167 TObjFunc
	ClearReplies(); // 0x1169 TObjFunc
	var_306_int = 512105; // 0x116b PushI
	var_307_int = 13334; // 0x116c PushI
	var_308_int = 13331; // 0x116d PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x116e TObjFunc
	var_309_int = 512106; // 0x1170 PushI
	var_310_int = 13333; // 0x1171 PushI
	var_311_int = 13332; // 0x1172 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x1173 TObjFunc
	return 0; // 0x1175 Return
	
Label_4470:
	var_312_string = ""; // 0x1176 PushV
	var_312_string = "Neutral"; // 0x1177 MovS
	func_4289(var_75_int, var_312_string); // 0x1178 NEW_2
	var_313_int = 512515; // 0x117a PushI
	SetMessage(var_313_int); // 0x117b TObjFunc
	ClearReplies(); // 0x117d TObjFunc
	var_314_bool = 0; var_315_object = Obj(); // 0x117f PushV
	var_315_object = var_1_object; // 0x1180 MovT
	func_11612(var_315_object); // 0x1181 NEW_2
	if(var_314_bool == 0) goto Label_4489; // 0x1183 JumpB
	var_320_int = 512520; // 0x1184 PushI
	var_321_int = 13691; // 0x1185 PushI
	var_322_int = 13690; // 0x1186 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x1187 TObjFunc
	
Label_4489:
	var_323_bool = 0; // 0x1189 PushV
	var_323_bool = 0; // 0x118a MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x118b PushV
	var_325_object = var_1_object; // 0x118c MovT
	func_11636(var_325_object); // 0x118d NEW_2
	if(var_324_bool == 0) goto Label_4502; // 0x118f JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x1190 PushV
	var_331_object = var_1_object; // 0x1191 MovT
	func_11744(var_331_object); // 0x1192 NEW_2
	if(var_330_bool == 0) goto Label_4502; // 0x1194 JumpB
	var_323_bool = 1; // 0x1195 MovB
	
Label_4502:
	if(var_323_bool == 0) goto Label_4508; // 0x1196 JumpB
	var_336_int = 512516; // 0x1197 PushI
	var_337_int = 13688; // 0x1198 PushI
	var_338_int = 13686; // 0x1199 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x119a TObjFunc
	
Label_4508:
	var_339_bool = 0; // 0x119c PushV
	var_339_bool = 0; // 0x119d MovB
	var_340_bool = 0; // 0x119e PushV
	var_340_bool = 0; // 0x119f MovB
	var_341_bool = 0; var_342_object = Obj(); // 0x11a0 PushV
	var_342_object = var_1_object; // 0x11a1 MovT
	func_11648(var_342_object); // 0x11a2 NEW_2
	if(var_341_bool == 0) goto Label_4523; // 0x11a4 JumpB
	var_347_bool = 0; var_348_object = Obj(); // 0x11a5 PushV
	var_348_object = var_1_object; // 0x11a6 MovT
	func_11756(var_348_object); // 0x11a7 NEW_2
	if(var_347_bool == 0) goto Label_4523; // 0x11a9 JumpB
	var_340_bool = 1; // 0x11aa MovB
	
Label_4523:
	if(var_340_bool == 0) goto Label_4531; // 0x11ab JumpB
	var_353_bool = 0; var_354_object = Obj(); // 0x11ac PushV
	var_354_object = var_1_object; // 0x11ad MovT
	func_11744(var_354_object); // 0x11ae NEW_2
	var_355_bool = var_353_bool == 0; // 0x11b0 Not
	if(var_355_bool == 0) goto Label_4531; // 0x11b1 JumpB
	var_339_bool = 1; // 0x11b2 MovB
	
Label_4531:
	if(var_339_bool == 0) goto Label_4537; // 0x11b3 JumpB
	var_356_int = 512526; // 0x11b4 PushI
	var_357_int = 13697; // 0x11b5 PushI
	var_358_int = 13696; // 0x11b6 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x11b7 TObjFunc
	
Label_4537:
	var_359_bool = 0; var_360_object = Obj(); // 0x11b9 PushV
	var_360_object = var_1_object; // 0x11ba MovT
	func_11922(var_359_bool, var_360_object); // 0x11bb NEW_2
	var_371_bool = var_359_bool == 0; // 0x11bd Not
	if(var_371_bool == 0) goto Label_4548; // 0x11be JumpB
	var_372_int = 520909; // 0x11bf PushI
	var_373_int = 22127; // 0x11c0 PushI
	var_374_int = 22126; // 0x11c1 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x11c2 TObjFunc
	
Label_4548:
	var_375_int = 512517; // 0x11c4 PushI
	var_376_int = -1; // 0x11c5 PushI
	var_377_int = 13687; // 0x11c6 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x11c7 TObjFunc
	return 0; // 0x11c9 Return
	
Label_4554:
	var_378_int = 22127; // 0x11ca PushI
	var_379_bool = var_74_float == var_378_int; // 0x11cb Eq
	if(var_379_bool == 0) goto Label_4582; // 0x11cc JumpB
	var_380_string = ""; // 0x11cd PushV
	var_380_string = "Neutral"; // 0x11ce MovS
	func_4289(var_75_int, var_380_string); // 0x11cf NEW_2
	var_381_int = 520910; // 0x11d1 PushI
	SetMessage(var_381_int); // 0x11d2 TObjFunc
	ClearReplies(); // 0x11d4 TObjFunc
	var_382_bool = 0; var_383_object = Obj(); // 0x11d6 PushV
	var_383_object = var_1_object; // 0x11d7 MovT
	func_11932(var_382_bool, var_383_object); // 0x11d8 NEW_2
	if(var_382_bool == 0) goto Label_4576; // 0x11da JumpB
	var_390_int = 520911; // 0x11db PushI
	var_391_int = -1; // 0x11dc PushI
	var_392_int = 22128; // 0x11dd PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x11de TObjFunc
	
Label_4576:
	var_393_int = 520912; // 0x11e0 PushI
	var_394_int = -1; // 0x11e1 PushI
	var_395_int = 22129; // 0x11e2 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x11e3 TObjFunc
	return 0; // 0x11e5 Return
	
Label_4582:
	var_396_int = 13697; // 0x11e6 PushI
	var_397_bool = var_74_float == var_396_int; // 0x11e7 Eq
	if(var_397_bool == 0) goto Label_4605; // 0x11e8 JumpB
	var_398_string = ""; // 0x11e9 PushV
	var_398_string = "Neutral"; // 0x11ea MovS
	func_4289(var_75_int, var_398_string); // 0x11eb NEW_2
	var_399_int = 512527; // 0x11ed PushI
	SetMessage(var_399_int); // 0x11ee TObjFunc
	ClearReplies(); // 0x11f0 TObjFunc
	var_400_int = 512528; // 0x11f2 PushI
	var_401_int = -1; // 0x11f3 PushI
	var_402_int = 13698; // 0x11f4 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x11f5 TObjFunc
	var_403_int = 536143; // 0x11f7 PushI
	var_404_int = -1; // 0x11f8 PushI
	var_405_int = 37902; // 0x11f9 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x11fa TObjFunc
	return 0; // 0x11fc Return
	
Label_4605:
	var_406_int = 13688; // 0x11fd PushI
	var_407_bool = var_74_float == var_406_int; // 0x11fe Eq
	if(var_407_bool == 0) goto Label_4628; // 0x11ff JumpB
	var_408_string = ""; // 0x1200 PushV
	var_408_string = "Neutral"; // 0x1201 MovS
	func_4289(var_75_int, var_408_string); // 0x1202 NEW_2
	var_409_int = 512518; // 0x1204 PushI
	SetMessage(var_409_int); // 0x1205 TObjFunc
	ClearReplies(); // 0x1207 TObjFunc
	var_410_int = 512519; // 0x1209 PushI
	var_411_int = -1; // 0x120a PushI
	var_412_int = 13689; // 0x120b PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x120c TObjFunc
	var_413_int = 536142; // 0x120e PushI
	var_414_int = -1; // 0x120f PushI
	var_415_int = 37901; // 0x1210 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x1211 TObjFunc
	return 0; // 0x1213 Return
	
Label_4628:
	var_416_int = 13691; // 0x1214 PushI
	var_417_bool = var_74_float == var_416_int; // 0x1215 Eq
	if(var_417_bool == 0) goto Label_4646; // 0x1216 JumpB
	var_418_string = ""; // 0x1217 PushV
	var_418_string = "Neutral"; // 0x1218 MovS
	func_4289(var_75_int, var_418_string); // 0x1219 NEW_2
	var_419_int = 512521; // 0x121b PushI
	SetMessage(var_419_int); // 0x121c TObjFunc
	ClearReplies(); // 0x121e TObjFunc
	var_420_int = 512522; // 0x1220 PushI
	var_421_int = -1; // 0x1221 PushI
	var_422_int = 13692; // 0x1222 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x1223 TObjFunc
	return 0; // 0x1225 Return
	
Label_4646:
	var_423_int = 13333; // 0x1226 PushI
	var_424_bool = var_74_float == var_423_int; // 0x1227 Eq
	if(var_424_bool == 0) goto Label_4664; // 0x1228 JumpB
	var_425_string = ""; // 0x1229 PushV
	var_425_string = "Neutral"; // 0x122a MovS
	func_4289(var_75_int, var_425_string); // 0x122b NEW_2
	var_426_int = 512107; // 0x122d PushI
	SetMessage(var_426_int); // 0x122e TObjFunc
	ClearReplies(); // 0x1230 TObjFunc
	var_427_int = 512493; // 0x1232 PushI
	var_428_int = 13334; // 0x1233 PushI
	var_429_int = 13662; // 0x1234 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x1235 TObjFunc
	return 0; // 0x1237 Return
	
Label_4664:
	var_430_int = 13334; // 0x1238 PushI
	var_431_bool = var_74_float == var_430_int; // 0x1239 Eq
	if(var_431_bool == 0) goto Label_4687; // 0x123a JumpB
	var_432_string = ""; // 0x123b PushV
	var_432_string = "Neutral"; // 0x123c MovS
	func_4289(var_75_int, var_432_string); // 0x123d NEW_2
	var_433_int = 512108; // 0x123f PushI
	SetMessage(var_433_int); // 0x1240 TObjFunc
	ClearReplies(); // 0x1242 TObjFunc
	var_434_int = 512109; // 0x1244 PushI
	var_435_int = 13336; // 0x1245 PushI
	var_436_int = 13335; // 0x1246 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x1247 TObjFunc
	var_437_int = 541861; // 0x1249 PushI
	var_438_int = 13667; // 0x124a PushI
	var_439_int = 44088; // 0x124b PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x124c TObjFunc
	return 0; // 0x124e Return
	
Label_4687:
	var_440_int = 13336; // 0x124f PushI
	var_441_bool = var_74_float == var_440_int; // 0x1250 Eq
	if(var_441_bool == 0) goto Label_4710; // 0x1251 JumpB
	var_442_string = ""; // 0x1252 PushV
	var_442_string = "Sly"; // 0x1253 MovS
	func_4289(var_75_int, var_442_string); // 0x1254 NEW_2
	var_443_int = 512110; // 0x1256 PushI
	SetMessage(var_443_int); // 0x1257 TObjFunc
	ClearReplies(); // 0x1259 TObjFunc
	var_444_int = 512111; // 0x125b PushI
	var_445_int = 13338; // 0x125c PushI
	var_446_int = 13337; // 0x125d PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x125e TObjFunc
	var_447_int = 541862; // 0x1260 PushI
	var_448_int = 13667; // 0x1261 PushI
	var_449_int = 44090; // 0x1262 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x1263 TObjFunc
	return 0; // 0x1265 Return
	
Label_4710:
	var_450_int = 13338; // 0x1266 PushI
	var_451_bool = var_74_float == var_450_int; // 0x1267 Eq
	if(var_451_bool == 0) goto Label_4733; // 0x1268 JumpB
	var_452_string = ""; // 0x1269 PushV
	var_452_string = "Fear"; // 0x126a MovS
	func_4289(var_75_int, var_452_string); // 0x126b NEW_2
	var_453_int = 512112; // 0x126d PushI
	SetMessage(var_453_int); // 0x126e TObjFunc
	ClearReplies(); // 0x1270 TObjFunc
	var_454_int = 512494; // 0x1272 PushI
	var_455_int = 13665; // 0x1273 PushI
	var_456_int = 13664; // 0x1274 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x1275 TObjFunc
	var_457_int = 541863; // 0x1277 PushI
	var_458_int = 44093; // 0x1278 PushI
	var_459_int = 44092; // 0x1279 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x127a TObjFunc
	return 0; // 0x127c Return
	
Label_4733:
	var_460_int = 44093; // 0x127d PushI
	var_461_bool = var_74_float == var_460_int; // 0x127e Eq
	if(var_461_bool == 0) goto Label_4751; // 0x127f JumpB
	var_462_string = ""; // 0x1280 PushV
	var_462_string = "Sly"; // 0x1281 MovS
	func_4289(var_75_int, var_462_string); // 0x1282 NEW_2
	var_463_int = 541864; // 0x1284 PushI
	SetMessage(var_463_int); // 0x1285 TObjFunc
	ClearReplies(); // 0x1287 TObjFunc
	var_464_int = 541865; // 0x1289 PushI
	var_465_int = 13667; // 0x128a PushI
	var_466_int = 44094; // 0x128b PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x128c TObjFunc
	return 0; // 0x128e Return
	
Label_4751:
	var_467_int = 13665; // 0x128f PushI
	var_468_bool = var_74_float == var_467_int; // 0x1290 Eq
	if(var_468_bool == 0) goto Label_4774; // 0x1291 JumpB
	var_469_string = ""; // 0x1292 PushV
	var_469_string = "Fear"; // 0x1293 MovS
	func_4289(var_75_int, var_469_string); // 0x1294 NEW_2
	var_470_int = 512495; // 0x1296 PushI
	SetMessage(var_470_int); // 0x1297 TObjFunc
	ClearReplies(); // 0x1299 TObjFunc
	var_471_int = 512496; // 0x129b PushI
	var_472_int = 13667; // 0x129c PushI
	var_473_int = 13666; // 0x129d PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x129e TObjFunc
	var_474_int = 541866; // 0x12a0 PushI
	var_475_int = 13667; // 0x12a1 PushI
	var_476_int = 44096; // 0x12a2 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x12a3 TObjFunc
	return 0; // 0x12a5 Return
	
Label_4774:
	var_477_int = 13667; // 0x12a6 PushI
	var_478_bool = var_74_float == var_477_int; // 0x12a7 Eq
	if(var_478_bool == 0) goto Label_4792; // 0x12a8 JumpB
	var_479_string = ""; // 0x12a9 PushV
	var_479_string = "Neutral"; // 0x12aa MovS
	func_4289(var_75_int, var_479_string); // 0x12ab NEW_2
	var_480_int = 512497; // 0x12ad PushI
	SetMessage(var_480_int); // 0x12ae TObjFunc
	ClearReplies(); // 0x12b0 TObjFunc
	var_481_int = 512498; // 0x12b2 PushI
	var_482_int = 13669; // 0x12b3 PushI
	var_483_int = 13668; // 0x12b4 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x12b5 TObjFunc
	return 0; // 0x12b7 Return
	
Label_4792:
	var_484_int = 13669; // 0x12b8 PushI
	var_485_bool = var_74_float == var_484_int; // 0x12b9 Eq
	if(var_485_bool == 0) goto Label_4815; // 0x12ba JumpB
	var_486_string = ""; // 0x12bb PushV
	var_486_string = "Sly"; // 0x12bc MovS
	func_4289(var_75_int, var_486_string); // 0x12bd NEW_2
	var_487_int = 512499; // 0x12bf PushI
	SetMessage(var_487_int); // 0x12c0 TObjFunc
	ClearReplies(); // 0x12c2 TObjFunc
	var_488_int = 512500; // 0x12c4 PushI
	var_489_int = -1; // 0x12c5 PushI
	var_490_int = 13670; // 0x12c6 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x12c7 TObjFunc
	var_491_int = 512501; // 0x12c9 PushI
	var_492_int = -1; // 0x12ca PushI
	var_493_int = 13671; // 0x12cb PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x12cc TObjFunc
	return 0; // 0x12ce Return
	
Label_4815:
	var_3_object = 1; // 0x12cf TMovB
	var_494_bool = 0; // 0x12d0 PushV
	func_10509(var_494_bool); // 0x12d1 NEW_2
	if(var_494_bool == 0) goto Label_4823; // 0x12d3 JumpB
	lshStopAnimation(); // 0x12d4 Func
	goto Label_4825; // 0x12d6 Jump
	
Label_4825:
	return 0; // 0x12d9 Return
	
Label_4823:
	StopAnimation(); // 0x12d7 Func
	
Label_4827:
	return 0; // 0x12db Return
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x1441 PushI
	if(var_76_int == 0) goto Label_6676; // 0x1442 JumpB
	func_10244(); // 0x1444 NEW_2
	var_78_int = 34829; // 0x1446 PushI
	var_79_bool = var_75_int == var_78_int; // 0x1447 Eq
	if(var_79_bool == 0) goto Label_5198; // 0x1448 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x1449 PushV
	var_80_object = var_1_object; // 0x144a MovT
	var_81_object = var_0_bool; // 0x144b MovT
	func_11229(); // 0x144c NEW_2
	
Label_5198:
	var_123_int = 37748; // 0x144e PushI
	var_124_bool = var_75_int == var_123_int; // 0x144f Eq
	if(var_124_bool == 0) goto Label_5206; // 0x1450 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x1451 PushV
	var_125_object = var_1_object; // 0x1452 MovT
	var_126_object = var_0_bool; // 0x1453 MovT
	func_11229(); // 0x1454 NEW_2
	
Label_5206:
	var_127_int = 14856; // 0x1456 PushI
	var_128_bool = var_75_int == var_127_int; // 0x1457 Eq
	if(var_128_bool == 0) goto Label_5224; // 0x1458 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x1459 PushV
	var_129_object = var_1_object; // 0x145a MovT
	var_130_object = var_0_bool; // 0x145b MovT
	func_11156(); // 0x145c NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x145e PushV
	var_133_object = var_1_object; // 0x145f MovT
	var_134_object = var_0_bool; // 0x1460 MovT
	func_11293(); // 0x1461 NEW_2
	var_159_object = Obj(); var_160_object = Obj(); // 0x1463 PushV
	var_159_object = var_1_object; // 0x1464 MovT
	var_160_object = var_0_bool; // 0x1465 MovT
	func_10821(); // 0x1466 NEW_2
	
Label_5224:
	var_185_int = 14857; // 0x1468 PushI
	var_186_bool = var_75_int == var_185_int; // 0x1469 Eq
	if(var_186_bool == 0) goto Label_5242; // 0x146a JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x146b PushV
	var_187_object = var_1_object; // 0x146c MovT
	var_188_object = var_0_bool; // 0x146d MovT
	func_11156(); // 0x146e NEW_2
	var_189_object = Obj(); var_190_object = Obj(); // 0x1470 PushV
	var_189_object = var_1_object; // 0x1471 MovT
	var_190_object = var_0_bool; // 0x1472 MovT
	func_11293(); // 0x1473 NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x1475 PushV
	var_191_object = var_1_object; // 0x1476 MovT
	var_192_object = var_0_bool; // 0x1477 MovT
	func_10821(); // 0x1478 NEW_2
	
Label_5242:
	var_193_int = 14858; // 0x147a PushI
	var_194_bool = var_75_int == var_193_int; // 0x147b Eq
	if(var_194_bool == 0) goto Label_5260; // 0x147c JumpB
	var_195_object = Obj(); var_196_object = Obj(); // 0x147d PushV
	var_195_object = var_1_object; // 0x147e MovT
	var_196_object = var_0_bool; // 0x147f MovT
	func_11156(); // 0x1480 NEW_2
	var_197_object = Obj(); var_198_object = Obj(); // 0x1482 PushV
	var_197_object = var_1_object; // 0x1483 MovT
	var_198_object = var_0_bool; // 0x1484 MovT
	func_11293(); // 0x1485 NEW_2
	var_199_object = Obj(); var_200_object = Obj(); // 0x1487 PushV
	var_199_object = var_1_object; // 0x1488 MovT
	var_200_object = var_0_bool; // 0x1489 MovT
	func_10821(); // 0x148a NEW_2
	
Label_5260:
	var_201_int = 14839; // 0x148c PushI
	var_202_bool = var_75_int == var_201_int; // 0x148d Eq
	if(var_202_bool == 0) goto Label_5268; // 0x148e JumpB
	var_203_object = Obj(); var_204_object = Obj(); // 0x148f PushV
	var_203_object = var_1_object; // 0x1490 MovT
	var_204_object = var_0_bool; // 0x1491 MovT
	func_11162(); // 0x1492 NEW_2
	
Label_5268:
	var_207_int = 40671; // 0x1494 PushI
	var_208_bool = var_75_int == var_207_int; // 0x1495 Eq
	if(var_208_bool == 0) goto Label_5286; // 0x1496 JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0x1497 PushV
	var_209_object = var_1_object; // 0x1498 MovT
	var_210_object = var_0_bool; // 0x1499 MovT
	func_11168(); // 0x149a NEW_2
	var_238_object = Obj(); var_239_object = Obj(); // 0x149c PushV
	var_238_object = var_1_object; // 0x149d MovT
	var_239_object = var_0_bool; // 0x149e MovT
	func_10737(); // 0x149f NEW_2
	var_248_object = Obj(); var_249_object = Obj(); // 0x14a1 PushV
	var_248_object = var_1_object; // 0x14a2 MovT
	var_249_object = var_0_bool; // 0x14a3 MovT
	func_10611(); // 0x14a4 NEW_2
	
Label_5286:
	var_255_int = 40672; // 0x14a6 PushI
	var_256_bool = var_75_int == var_255_int; // 0x14a7 Eq
	if(var_256_bool == 0) goto Label_5304; // 0x14a8 JumpB
	var_257_object = Obj(); var_258_object = Obj(); // 0x14a9 PushV
	var_257_object = var_1_object; // 0x14aa MovT
	var_258_object = var_0_bool; // 0x14ab MovT
	func_11168(); // 0x14ac NEW_2
	var_259_object = Obj(); var_260_object = Obj(); // 0x14ae PushV
	var_259_object = var_1_object; // 0x14af MovT
	var_260_object = var_0_bool; // 0x14b0 MovT
	func_10737(); // 0x14b1 NEW_2
	var_261_object = Obj(); var_262_object = Obj(); // 0x14b3 PushV
	var_261_object = var_1_object; // 0x14b4 MovT
	var_262_object = var_0_bool; // 0x14b5 MovT
	func_10611(); // 0x14b6 NEW_2
	
Label_5304:
	var_263_int = 40667; // 0x14b8 PushI
	var_264_bool = var_75_int == var_263_int; // 0x14b9 Eq
	if(var_264_bool == 0) goto Label_5322; // 0x14ba JumpB
	var_265_object = Obj(); var_266_object = Obj(); // 0x14bb PushV
	var_265_object = var_1_object; // 0x14bc MovT
	var_266_object = var_0_bool; // 0x14bd MovT
	func_11168(); // 0x14be NEW_2
	var_267_object = Obj(); var_268_object = Obj(); // 0x14c0 PushV
	var_267_object = var_1_object; // 0x14c1 MovT
	var_268_object = var_0_bool; // 0x14c2 MovT
	func_10737(); // 0x14c3 NEW_2
	var_269_object = Obj(); var_270_object = Obj(); // 0x14c5 PushV
	var_269_object = var_1_object; // 0x14c6 MovT
	var_270_object = var_0_bool; // 0x14c7 MovT
	func_10611(); // 0x14c8 NEW_2
	
Label_5322:
	var_271_int = 14862; // 0x14ca PushI
	var_272_bool = var_75_int == var_271_int; // 0x14cb Eq
	if(var_272_bool == 0) goto Label_5330; // 0x14cc JumpB
	var_273_object = Obj(); var_274_object = Obj(); // 0x14cd PushV
	var_273_object = var_1_object; // 0x14ce MovT
	var_274_object = var_0_bool; // 0x14cf MovT
	func_11205(); // 0x14d0 NEW_2
	
Label_5330:
	var_277_int = 14894; // 0x14d2 PushI
	var_278_bool = var_75_int == var_277_int; // 0x14d3 Eq
	if(var_278_bool == 0) goto Label_5338; // 0x14d4 JumpB
	var_279_object = Obj(); var_280_object = Obj(); // 0x14d5 PushV
	var_279_object = var_1_object; // 0x14d6 MovT
	var_280_object = var_0_bool; // 0x14d7 MovT
	func_11211(); // 0x14d8 NEW_2
	
Label_5338:
	var_283_int = 14873; // 0x14da PushI
	var_284_bool = var_75_int == var_283_int; // 0x14db Eq
	if(var_284_bool == 0) goto Label_5346; // 0x14dc JumpB
	var_285_object = Obj(); var_286_object = Obj(); // 0x14dd PushV
	var_285_object = var_1_object; // 0x14de MovT
	var_286_object = var_0_bool; // 0x14df MovT
	func_11223(); // 0x14e0 NEW_2
	
Label_5346:
	var_289_int = 14867; // 0x14e2 PushI
	var_290_bool = var_75_int == var_289_int; // 0x14e3 Eq
	if(var_290_bool == 0) goto Label_5354; // 0x14e4 JumpB
	var_291_object = Obj(); var_292_object = Obj(); // 0x14e5 PushV
	var_291_object = var_1_object; // 0x14e6 MovT
	var_292_object = var_0_bool; // 0x14e7 MovT
	func_11217(); // 0x14e8 NEW_2
	
Label_5354:
	var_295_int = 22141; // 0x14ea PushI
	var_296_bool = var_75_int == var_295_int; // 0x14eb Eq
	if(var_296_bool == 0) goto Label_5372; // 0x14ec JumpB
	var_297_object = Obj(); var_298_object = Obj(); // 0x14ed PushV
	var_297_object = var_1_object; // 0x14ee MovT
	var_298_object = var_0_bool; // 0x14ef MovT
	func_10531(); // 0x14f0 NEW_2
	var_310_object = Obj(); var_311_object = Obj(); // 0x14f2 PushV
	var_310_object = var_1_object; // 0x14f3 MovT
	var_311_object = var_0_bool; // 0x14f4 MovT
	func_10542(var_311_object); // 0x14f5 NEW_2
	var_330_object = Obj(); var_331_object = Obj(); // 0x14f7 PushV
	var_330_object = var_1_object; // 0x14f8 MovT
	var_331_object = var_0_bool; // 0x14f9 MovT
	func_10815(); // 0x14fa NEW_2
	
Label_5372:
	var_334_int = 34843; // 0x14fc PushI
	var_335_bool = var_75_int == var_334_int; // 0x14fd Eq
	if(var_335_bool == 0) goto Label_5385; // 0x14fe JumpB
	var_336_object = Obj(); var_337_object = Obj(); // 0x14ff PushV
	var_336_object = var_1_object; // 0x1500 MovT
	var_337_object = var_0_bool; // 0x1501 MovT
	func_10671(); // 0x1502 NEW_2
	var_356_object = Obj(); var_357_object = Obj(); // 0x1504 PushV
	var_356_object = var_1_object; // 0x1505 MovT
	var_357_object = var_0_bool; // 0x1506 MovT
	func_10783(); // 0x1507 NEW_2
	
Label_5385:
	var_363_int = 37765; // 0x1509 PushI
	var_364_bool = var_75_int == var_363_int; // 0x150a Eq
	if(var_364_bool == 0) goto Label_5398; // 0x150b JumpB
	var_365_object = Obj(); var_366_object = Obj(); // 0x150c PushV
	var_365_object = var_1_object; // 0x150d MovT
	var_366_object = var_0_bool; // 0x150e MovT
	func_10671(); // 0x150f NEW_2
	var_367_object = Obj(); var_368_object = Obj(); // 0x1511 PushV
	var_367_object = var_1_object; // 0x1512 MovT
	var_368_object = var_0_bool; // 0x1513 MovT
	func_10783(); // 0x1514 NEW_2
	
Label_5398:
	var_369_int = 34828; // 0x1516 PushI
	var_370_bool = var_74_float == var_369_int; // 0x1517 Eq
	if(var_370_bool == 0) goto Label_5616; // 0x1518 JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x1519 PushV
	var_372_object = var_1_object; // 0x151a MovT
	func_11408(var_372_object); // 0x151b NEW_2
	if(var_371_bool == 0) goto Label_5436; // 0x151d JumpB
	var_377_object = Obj(); var_378_object = Obj(); // 0x151e PushV
	var_377_object = var_1_object; // 0x151f MovT
	var_378_object = var_0_bool; // 0x1520 MovT
	func_10665(); // 0x1521 NEW_2
	var_381_object = Obj(); var_382_object = Obj(); // 0x1523 PushV
	var_381_object = var_1_object; // 0x1524 MovT
	var_382_object = var_0_bool; // 0x1525 MovT
	func_10694(); // 0x1526 NEW_2
	var_385_string = ""; // 0x1528 PushV
	var_385_string = "Sly"; // 0x1529 MovS
	func_5162(var_75_int, var_385_string); // 0x152a NEW_2
	var_402_int = 533324; // 0x152c PushI
	SetMessage(var_402_int); // 0x152d TObjFunc
	ClearReplies(); // 0x152f TObjFunc
	var_403_int = 535993; // 0x1531 PushI
	var_404_int = 37724; // 0x1532 PushI
	var_405_int = 37723; // 0x1533 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x1534 TObjFunc
	var_406_int = 536001; // 0x1536 PushI
	var_407_int = 37724; // 0x1537 PushI
	var_408_int = 37731; // 0x1538 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x1539 TObjFunc
	return 0; // 0x153b Return
	
Label_5436:
	var_409_string = ""; // 0x153c PushV
	var_409_string = "Neutral"; // 0x153d MovS
	func_5162(var_75_int, var_409_string); // 0x153e NEW_2
	var_410_int = 512410; // 0x1540 PushI
	SetMessage(var_410_int); // 0x1541 TObjFunc
	ClearReplies(); // 0x1543 TObjFunc
	var_411_bool = 0; // 0x1545 PushV
	var_411_bool = 0; // 0x1546 MovB
	var_412_bool = 0; // 0x1547 PushV
	var_412_bool = 0; // 0x1548 MovB
	var_413_bool = 0; var_414_object = Obj(); // 0x1549 PushV
	var_414_object = var_1_object; // 0x154a MovT
	func_11768(var_414_object); // 0x154b NEW_2
	if(var_413_bool == 0) goto Label_5460; // 0x154d JumpB
	var_419_bool = 0; var_420_object = Obj(); // 0x154e PushV
	var_420_object = var_1_object; // 0x154f MovT
	func_11792(var_420_object); // 0x1550 NEW_2
	if(var_419_bool == 0) goto Label_5460; // 0x1552 JumpB
	var_412_bool = 1; // 0x1553 MovB
	
Label_5460:
	if(var_412_bool == 0) goto Label_5468; // 0x1554 JumpB
	var_425_bool = 0; var_426_object = Obj(); // 0x1555 PushV
	var_426_object = var_1_object; // 0x1556 MovT
	func_11780(var_426_object); // 0x1557 NEW_2
	var_431_bool = var_425_bool == 0; // 0x1559 Not
	if(var_431_bool == 0) goto Label_5468; // 0x155a JumpB
	var_411_bool = 1; // 0x155b MovB
	
Label_5468:
	if(var_411_bool == 0) goto Label_5474; // 0x155c JumpB
	var_432_int = 512412; // 0x155d PushI
	var_433_int = 13577; // 0x155e PushI
	var_434_int = 13576; // 0x155f PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x1560 TObjFunc
	
Label_5474:
	var_435_bool = 0; // 0x1562 PushV
	var_435_bool = 0; // 0x1563 MovB
	var_436_bool = 0; var_437_object = Obj(); // 0x1564 PushV
	var_437_object = var_1_object; // 0x1565 MovT
	func_11780(var_437_object); // 0x1566 NEW_2
	if(var_436_bool == 0) goto Label_5487; // 0x1568 JumpB
	var_438_bool = 0; var_439_object = Obj(); // 0x1569 PushV
	var_439_object = var_1_object; // 0x156a MovT
	func_11804(var_439_object); // 0x156b NEW_2
	if(var_438_bool == 0) goto Label_5487; // 0x156d JumpB
	var_435_bool = 1; // 0x156e MovB
	
Label_5487:
	if(var_435_bool == 0) goto Label_5493; // 0x156f JumpB
	var_444_int = 513588; // 0x1570 PushI
	var_445_int = 14840; // 0x1571 PushI
	var_446_int = 14839; // 0x1572 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x1573 TObjFunc
	
Label_5493:
	var_447_bool = 0; // 0x1575 PushV
	var_447_bool = 0; // 0x1576 MovB
	var_448_bool = 0; // 0x1577 PushV
	var_448_bool = 0; // 0x1578 MovB
	var_449_bool = 0; // 0x1579 PushV
	var_449_bool = 0; // 0x157a MovB
	var_450_bool = 0; var_451_object = Obj(); // 0x157b PushV
	var_451_object = var_1_object; // 0x157c MovT
	func_11816(var_451_object); // 0x157d NEW_2
	if(var_450_bool == 0) goto Label_5510; // 0x157f JumpB
	var_456_bool = 0; var_457_object = Obj(); // 0x1580 PushV
	var_457_object = var_1_object; // 0x1581 MovT
	func_11780(var_457_object); // 0x1582 NEW_2
	if(var_456_bool == 0) goto Label_5510; // 0x1584 JumpB
	var_449_bool = 1; // 0x1585 MovB
	
Label_5510:
	if(var_449_bool == 0) goto Label_5517; // 0x1586 JumpB
	var_458_bool = 0; var_459_object = Obj(); // 0x1587 PushV
	var_459_object = var_1_object; // 0x1588 MovT
	func_11828(var_459_object); // 0x1589 NEW_2
	if(var_458_bool == 0) goto Label_5517; // 0x158b JumpB
	var_448_bool = 1; // 0x158c MovB
	
Label_5517:
	if(var_448_bool == 0) goto Label_5525; // 0x158d JumpB
	var_464_bool = 0; var_465_object = Obj(); // 0x158e PushV
	var_465_object = var_1_object; // 0x158f MovT
	func_11864(var_465_object); // 0x1590 NEW_2
	var_470_bool = var_464_bool == 0; // 0x1592 Not
	if(var_470_bool == 0) goto Label_5525; // 0x1593 JumpB
	var_447_bool = 1; // 0x1594 MovB
	
Label_5525:
	if(var_447_bool == 0) goto Label_5531; // 0x1595 JumpB
	var_471_int = 513607; // 0x1596 PushI
	var_472_int = 14868; // 0x1597 PushI
	var_473_int = 14862; // 0x1598 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x1599 TObjFunc
	
Label_5531:
	var_474_bool = 0; // 0x159b PushV
	var_474_bool = 0; // 0x159c MovB
	var_475_bool = 0; // 0x159d PushV
	var_475_bool = 0; // 0x159e MovB
	var_476_bool = 0; var_477_object = Obj(); // 0x159f PushV
	var_477_object = var_1_object; // 0x15a0 MovT
	func_11816(var_477_object); // 0x15a1 NEW_2
	if(var_476_bool == 0) goto Label_5546; // 0x15a3 JumpB
	var_478_bool = 0; var_479_object = Obj(); // 0x15a4 PushV
	var_479_object = var_1_object; // 0x15a5 MovT
	func_11852(var_479_object); // 0x15a6 NEW_2
	if(var_478_bool == 0) goto Label_5546; // 0x15a8 JumpB
	var_475_bool = 1; // 0x15a9 MovB
	
Label_5546:
	if(var_475_bool == 0) goto Label_5554; // 0x15aa JumpB
	var_484_bool = 0; var_485_object = Obj(); // 0x15ab PushV
	var_485_object = var_1_object; // 0x15ac MovT
	func_11876(var_485_object); // 0x15ad NEW_2
	var_490_bool = var_484_bool == 0; // 0x15af Not
	if(var_490_bool == 0) goto Label_5554; // 0x15b0 JumpB
	var_474_bool = 1; // 0x15b1 MovB
	
Label_5554:
	if(var_474_bool == 0) goto Label_5560; // 0x15b2 JumpB
	var_491_int = 513618; // 0x15b3 PushI
	var_492_int = 14874; // 0x15b4 PushI
	var_493_int = 14873; // 0x15b5 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x15b6 TObjFunc
	
Label_5560:
	var_494_bool = 0; // 0x15b8 PushV
	var_494_bool = 0; // 0x15b9 MovB
	var_495_bool = 0; // 0x15ba PushV
	var_495_bool = 0; // 0x15bb MovB
	var_496_bool = 0; var_497_object = Obj(); // 0x15bc PushV
	var_497_object = var_1_object; // 0x15bd MovT
	func_11780(var_497_object); // 0x15be NEW_2
	var_498_bool = var_496_bool == 0; // 0x15c0 Not
	if(var_498_bool == 0) goto Label_5576; // 0x15c1 JumpB
	var_499_bool = 0; var_500_object = Obj(); // 0x15c2 PushV
	var_500_object = var_1_object; // 0x15c3 MovT
	func_11768(var_500_object); // 0x15c4 NEW_2
	if(var_499_bool == 0) goto Label_5576; // 0x15c6 JumpB
	var_495_bool = 1; // 0x15c7 MovB
	
Label_5576:
	if(var_495_bool == 0) goto Label_5583; // 0x15c8 JumpB
	var_501_bool = 0; var_502_object = Obj(); // 0x15c9 PushV
	var_502_object = var_1_object; // 0x15ca MovT
	func_11840(var_502_object); // 0x15cb NEW_2
	if(var_501_bool == 0) goto Label_5583; // 0x15cd JumpB
	var_494_bool = 1; // 0x15ce MovB
	
Label_5583:
	if(var_494_bool == 0) goto Label_5589; // 0x15cf JumpB
	var_507_int = 513612; // 0x15d0 PushI
	var_508_int = 14863; // 0x15d1 PushI
	var_509_int = 14867; // 0x15d2 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x15d3 TObjFunc
	
Label_5589:
	var_510_bool = 0; var_511_object = Obj(); // 0x15d5 PushV
	var_511_object = var_1_object; // 0x15d6 MovT
	func_11922(var_510_bool, var_511_object); // 0x15d7 NEW_2
	var_522_bool = var_510_bool == 0; // 0x15d9 Not
	if(var_522_bool == 0) goto Label_5600; // 0x15da JumpB
	var_523_int = 520922; // 0x15db PushI
	var_524_int = 22140; // 0x15dc PushI
	var_525_int = 22139; // 0x15dd PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x15de TObjFunc
	
Label_5600:
	var_526_bool = 0; var_527_object = Obj(); // 0x15e0 PushV
	var_527_object = var_1_object; // 0x15e1 MovT
	func_11420(var_527_object); // 0x15e2 NEW_2
	if(var_526_bool == 0) goto Label_5610; // 0x15e4 JumpB
	var_532_int = 533337; // 0x15e5 PushI
	var_533_int = 37749; // 0x15e6 PushI
	var_534_int = 34841; // 0x15e7 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x15e8 TObjFunc
	
Label_5610:
	var_535_int = 512411; // 0x15ea PushI
	var_536_int = -1; // 0x15eb PushI
	var_537_int = 13575; // 0x15ec PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x15ed TObjFunc
	return 0; // 0x15ef Return
	
Label_5616:
	var_538_int = 37749; // 0x15f0 PushI
	var_539_bool = var_74_float == var_538_int; // 0x15f1 Eq
	if(var_539_bool == 0) goto Label_5639; // 0x15f2 JumpB
	var_540_string = ""; // 0x15f3 PushV
	var_540_string = "Neutral"; // 0x15f4 MovS
	func_5162(var_75_int, var_540_string); // 0x15f5 NEW_2
	var_541_int = 536015; // 0x15f7 PushI
	SetMessage(var_541_int); // 0x15f8 TObjFunc
	ClearReplies(); // 0x15fa TObjFunc
	var_542_int = 536016; // 0x15fc PushI
	var_543_int = 37751; // 0x15fd PushI
	var_544_int = 37750; // 0x15fe PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x15ff TObjFunc
	var_545_int = 536021; // 0x1601 PushI
	var_546_int = 37751; // 0x1602 PushI
	var_547_int = 37755; // 0x1603 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x1604 TObjFunc
	return 0; // 0x1606 Return
	
Label_5639:
	var_548_int = 37751; // 0x1607 PushI
	var_549_bool = var_74_float == var_548_int; // 0x1608 Eq
	if(var_549_bool == 0) goto Label_5657; // 0x1609 JumpB
	var_550_string = ""; // 0x160a PushV
	var_550_string = "Sly"; // 0x160b MovS
	func_5162(var_75_int, var_550_string); // 0x160c NEW_2
	var_551_int = 536017; // 0x160e PushI
	SetMessage(var_551_int); // 0x160f TObjFunc
	ClearReplies(); // 0x1611 TObjFunc
	var_552_int = 536018; // 0x1613 PushI
	var_553_int = 37753; // 0x1614 PushI
	var_554_int = 37752; // 0x1615 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x1616 TObjFunc
	return 0; // 0x1618 Return
	
Label_5657:
	var_555_int = 37753; // 0x1619 PushI
	var_556_bool = var_74_float == var_555_int; // 0x161a Eq
	if(var_556_bool == 0) goto Label_5680; // 0x161b JumpB
	var_557_string = ""; // 0x161c PushV
	var_557_string = "Untrust"; // 0x161d MovS
	func_5162(var_75_int, var_557_string); // 0x161e NEW_2
	var_558_int = 536019; // 0x1620 PushI
	SetMessage(var_558_int); // 0x1621 TObjFunc
	ClearReplies(); // 0x1623 TObjFunc
	var_559_int = 536020; // 0x1625 PushI
	var_560_int = 34842; // 0x1626 PushI
	var_561_int = 37754; // 0x1627 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x1628 TObjFunc
	var_562_int = 536024; // 0x162a PushI
	var_563_int = 37760; // 0x162b PushI
	var_564_int = 37759; // 0x162c PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x162d TObjFunc
	return 0; // 0x162f Return
	
Label_5680:
	var_565_int = 37760; // 0x1630 PushI
	var_566_bool = var_74_float == var_565_int; // 0x1631 Eq
	if(var_566_bool == 0) goto Label_5703; // 0x1632 JumpB
	var_567_string = ""; // 0x1633 PushV
	var_567_string = "Neutral"; // 0x1634 MovS
	func_5162(var_75_int, var_567_string); // 0x1635 NEW_2
	var_568_int = 536025; // 0x1637 PushI
	SetMessage(var_568_int); // 0x1638 TObjFunc
	ClearReplies(); // 0x163a TObjFunc
	var_569_int = 536026; // 0x163c PushI
	var_570_int = 37758; // 0x163d PushI
	var_571_int = 37761; // 0x163e PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x163f TObjFunc
	var_572_int = 536027; // 0x1641 PushI
	var_573_int = 34842; // 0x1642 PushI
	var_574_int = 37763; // 0x1643 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x1644 TObjFunc
	return 0; // 0x1646 Return
	
Label_5703:
	var_575_int = 34842; // 0x1647 PushI
	var_576_bool = var_74_float == var_575_int; // 0x1648 Eq
	if(var_576_bool == 0) goto Label_5726; // 0x1649 JumpB
	var_577_string = ""; // 0x164a PushV
	var_577_string = "Neutral"; // 0x164b MovS
	func_5162(var_75_int, var_577_string); // 0x164c NEW_2
	var_578_int = 533338; // 0x164e PushI
	SetMessage(var_578_int); // 0x164f TObjFunc
	ClearReplies(); // 0x1651 TObjFunc
	var_579_int = 536022; // 0x1653 PushI
	var_580_int = 37758; // 0x1654 PushI
	var_581_int = 37757; // 0x1655 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x1656 TObjFunc
	var_582_int = 536028; // 0x1658 PushI
	var_583_int = -1; // 0x1659 PushI
	var_584_int = 37765; // 0x165a PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x165b TObjFunc
	return 0; // 0x165d Return
	
Label_5726:
	var_585_int = 37758; // 0x165e PushI
	var_586_bool = var_74_float == var_585_int; // 0x165f Eq
	if(var_586_bool == 0) goto Label_5744; // 0x1660 JumpB
	var_587_string = ""; // 0x1661 PushV
	var_587_string = "Neutral"; // 0x1662 MovS
	func_5162(var_75_int, var_587_string); // 0x1663 NEW_2
	var_588_int = 536023; // 0x1665 PushI
	SetMessage(var_588_int); // 0x1666 TObjFunc
	ClearReplies(); // 0x1668 TObjFunc
	var_589_int = 533339; // 0x166a PushI
	var_590_int = -1; // 0x166b PushI
	var_591_int = 34843; // 0x166c PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x166d TObjFunc
	return 0; // 0x166f Return
	
Label_5744:
	var_592_int = 22140; // 0x1670 PushI
	var_593_bool = var_74_float == var_592_int; // 0x1671 Eq
	if(var_593_bool == 0) goto Label_5772; // 0x1672 JumpB
	var_594_string = ""; // 0x1673 PushV
	var_594_string = "Neutral"; // 0x1674 MovS
	func_5162(var_75_int, var_594_string); // 0x1675 NEW_2
	var_595_int = 520923; // 0x1677 PushI
	SetMessage(var_595_int); // 0x1678 TObjFunc
	ClearReplies(); // 0x167a TObjFunc
	var_596_bool = 0; var_597_object = Obj(); // 0x167c PushV
	var_597_object = var_1_object; // 0x167d MovT
	func_11932(var_596_bool, var_597_object); // 0x167e NEW_2
	if(var_596_bool == 0) goto Label_5766; // 0x1680 JumpB
	var_604_int = 520924; // 0x1681 PushI
	var_605_int = -1; // 0x1682 PushI
	var_606_int = 22141; // 0x1683 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x1684 TObjFunc
	
Label_5766:
	var_607_int = 520925; // 0x1686 PushI
	var_608_int = -1; // 0x1687 PushI
	var_609_int = 22142; // 0x1688 PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x1689 TObjFunc
	return 0; // 0x168b Return
	
Label_5772:
	var_610_int = 14863; // 0x168c PushI
	var_611_bool = var_74_float == var_610_int; // 0x168d Eq
	if(var_611_bool == 0) goto Label_5790; // 0x168e JumpB
	var_612_string = ""; // 0x168f PushV
	var_612_string = "Neutral"; // 0x1690 MovS
	func_5162(var_75_int, var_612_string); // 0x1691 NEW_2
	var_613_int = 513608; // 0x1693 PushI
	SetMessage(var_613_int); // 0x1694 TObjFunc
	ClearReplies(); // 0x1696 TObjFunc
	var_614_int = 513609; // 0x1698 PushI
	var_615_int = 14865; // 0x1699 PushI
	var_616_int = 14864; // 0x169a PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x169b TObjFunc
	return 0; // 0x169d Return
	
Label_5790:
	var_617_int = 14865; // 0x169e PushI
	var_618_bool = var_74_float == var_617_int; // 0x169f Eq
	if(var_618_bool == 0) goto Label_5808; // 0x16a0 JumpB
	var_619_string = ""; // 0x16a1 PushV
	var_619_string = "Neutral"; // 0x16a2 MovS
	func_5162(var_75_int, var_619_string); // 0x16a3 NEW_2
	var_620_int = 513610; // 0x16a5 PushI
	SetMessage(var_620_int); // 0x16a6 TObjFunc
	ClearReplies(); // 0x16a8 TObjFunc
	var_621_int = 513611; // 0x16aa PushI
	var_622_int = 14869; // 0x16ab PushI
	var_623_int = 14866; // 0x16ac PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x16ad TObjFunc
	return 0; // 0x16af Return
	
Label_5808:
	var_624_int = 14869; // 0x16b0 PushI
	var_625_bool = var_74_float == var_624_int; // 0x16b1 Eq
	if(var_625_bool == 0) goto Label_5826; // 0x16b2 JumpB
	var_626_string = ""; // 0x16b3 PushV
	var_626_string = "Untrust"; // 0x16b4 MovS
	func_5162(var_75_int, var_626_string); // 0x16b5 NEW_2
	var_627_int = 513614; // 0x16b7 PushI
	SetMessage(var_627_int); // 0x16b8 TObjFunc
	ClearReplies(); // 0x16ba TObjFunc
	var_628_int = 513615; // 0x16bc PushI
	var_629_int = 14871; // 0x16bd PushI
	var_630_int = 14870; // 0x16be PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x16bf TObjFunc
	return 0; // 0x16c1 Return
	
Label_5826:
	var_631_int = 14871; // 0x16c2 PushI
	var_632_bool = var_74_float == var_631_int; // 0x16c3 Eq
	if(var_632_bool == 0) goto Label_5844; // 0x16c4 JumpB
	var_633_string = ""; // 0x16c5 PushV
	var_633_string = "Untrust"; // 0x16c6 MovS
	func_5162(var_75_int, var_633_string); // 0x16c7 NEW_2
	var_634_int = 513616; // 0x16c9 PushI
	SetMessage(var_634_int); // 0x16ca TObjFunc
	ClearReplies(); // 0x16cc TObjFunc
	var_635_int = 513617; // 0x16ce PushI
	var_636_int = -1; // 0x16cf PushI
	var_637_int = 14872; // 0x16d0 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x16d1 TObjFunc
	return 0; // 0x16d3 Return
	
Label_5844:
	var_638_int = 14874; // 0x16d4 PushI
	var_639_bool = var_74_float == var_638_int; // 0x16d5 Eq
	if(var_639_bool == 0) goto Label_5862; // 0x16d6 JumpB
	var_640_string = ""; // 0x16d7 PushV
	var_640_string = "Neutral"; // 0x16d8 MovS
	func_5162(var_75_int, var_640_string); // 0x16d9 NEW_2
	var_641_int = 513619; // 0x16db PushI
	SetMessage(var_641_int); // 0x16dc TObjFunc
	ClearReplies(); // 0x16de TObjFunc
	var_642_int = 513620; // 0x16e0 PushI
	var_643_int = 14876; // 0x16e1 PushI
	var_644_int = 14875; // 0x16e2 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x16e3 TObjFunc
	return 0; // 0x16e5 Return
	
Label_5862:
	var_645_int = 14876; // 0x16e6 PushI
	var_646_bool = var_74_float == var_645_int; // 0x16e7 Eq
	if(var_646_bool == 0) goto Label_5885; // 0x16e8 JumpB
	var_647_string = ""; // 0x16e9 PushV
	var_647_string = "Untrust"; // 0x16ea MovS
	func_5162(var_75_int, var_647_string); // 0x16eb NEW_2
	var_648_int = 513621; // 0x16ed PushI
	SetMessage(var_648_int); // 0x16ee TObjFunc
	ClearReplies(); // 0x16f0 TObjFunc
	var_649_int = 513623; // 0x16f2 PushI
	var_650_int = 14879; // 0x16f3 PushI
	var_651_int = 14878; // 0x16f4 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x16f5 TObjFunc
	var_652_int = 513622; // 0x16f7 PushI
	var_653_int = -1; // 0x16f8 PushI
	var_654_int = 14877; // 0x16f9 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x16fa TObjFunc
	return 0; // 0x16fc Return
	
Label_5885:
	var_655_int = 14879; // 0x16fd PushI
	var_656_bool = var_74_float == var_655_int; // 0x16fe Eq
	if(var_656_bool == 0) goto Label_5908; // 0x16ff JumpB
	var_657_string = ""; // 0x1700 PushV
	var_657_string = "Rage"; // 0x1701 MovS
	func_5162(var_75_int, var_657_string); // 0x1702 NEW_2
	var_658_int = 513624; // 0x1704 PushI
	SetMessage(var_658_int); // 0x1705 TObjFunc
	ClearReplies(); // 0x1707 TObjFunc
	var_659_int = 513626; // 0x1709 PushI
	var_660_int = 14882; // 0x170a PushI
	var_661_int = 14881; // 0x170b PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x170c TObjFunc
	var_662_int = 513625; // 0x170e PushI
	var_663_int = -1; // 0x170f PushI
	var_664_int = 14880; // 0x1710 PushI
	AddReply(var_662_int, var_663_int, var_664_int); // 0x1711 TObjFunc
	return 0; // 0x1713 Return
	
Label_5908:
	var_665_int = 14882; // 0x1714 PushI
	var_666_bool = var_74_float == var_665_int; // 0x1715 Eq
	if(var_666_bool == 0) goto Label_5926; // 0x1716 JumpB
	var_667_string = ""; // 0x1717 PushV
	var_667_string = "Neutral"; // 0x1718 MovS
	func_5162(var_75_int, var_667_string); // 0x1719 NEW_2
	var_668_int = 513627; // 0x171b PushI
	SetMessage(var_668_int); // 0x171c TObjFunc
	ClearReplies(); // 0x171e TObjFunc
	var_669_int = 513628; // 0x1720 PushI
	var_670_int = -1; // 0x1721 PushI
	var_671_int = 14883; // 0x1722 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x1723 TObjFunc
	return 0; // 0x1725 Return
	
Label_5926:
	var_672_int = 14868; // 0x1726 PushI
	var_673_bool = var_74_float == var_672_int; // 0x1727 Eq
	if(var_673_bool == 0) goto Label_5944; // 0x1728 JumpB
	var_674_string = ""; // 0x1729 PushV
	var_674_string = "Untrust"; // 0x172a MovS
	func_5162(var_75_int, var_674_string); // 0x172b NEW_2
	var_675_int = 513613; // 0x172d PushI
	SetMessage(var_675_int); // 0x172e TObjFunc
	ClearReplies(); // 0x1730 TObjFunc
	var_676_int = 513629; // 0x1732 PushI
	var_677_int = 14885; // 0x1733 PushI
	var_678_int = 14884; // 0x1734 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x1735 TObjFunc
	return 0; // 0x1737 Return
	
Label_5944:
	var_679_int = 14885; // 0x1738 PushI
	var_680_bool = var_74_float == var_679_int; // 0x1739 Eq
	if(var_680_bool == 0) goto Label_5967; // 0x173a JumpB
	var_681_string = ""; // 0x173b PushV
	var_681_string = "Rage"; // 0x173c MovS
	func_5162(var_75_int, var_681_string); // 0x173d NEW_2
	var_682_int = 513630; // 0x173f PushI
	SetMessage(var_682_int); // 0x1740 TObjFunc
	ClearReplies(); // 0x1742 TObjFunc
	var_683_int = 513631; // 0x1744 PushI
	var_684_int = 14889; // 0x1745 PushI
	var_685_int = 14886; // 0x1746 PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x1747 TObjFunc
	var_686_int = 513632; // 0x1749 PushI
	var_687_int = 14888; // 0x174a PushI
	var_688_int = 14887; // 0x174b PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x174c TObjFunc
	return 0; // 0x174e Return
	
Label_5967:
	var_689_int = 14888; // 0x174f PushI
	var_690_bool = var_74_float == var_689_int; // 0x1750 Eq
	if(var_690_bool == 0) goto Label_5985; // 0x1751 JumpB
	var_691_string = ""; // 0x1752 PushV
	var_691_string = "Fear"; // 0x1753 MovS
	func_5162(var_75_int, var_691_string); // 0x1754 NEW_2
	var_692_int = 513633; // 0x1756 PushI
	SetMessage(var_692_int); // 0x1757 TObjFunc
	ClearReplies(); // 0x1759 TObjFunc
	var_693_int = 513636; // 0x175b PushI
	var_694_int = 14889; // 0x175c PushI
	var_695_int = 14891; // 0x175d PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x175e TObjFunc
	return 0; // 0x1760 Return
	
Label_5985:
	var_696_int = 14889; // 0x1761 PushI
	var_697_bool = var_74_float == var_696_int; // 0x1762 Eq
	if(var_697_bool == 0) goto Label_6003; // 0x1763 JumpB
	var_698_string = ""; // 0x1764 PushV
	var_698_string = "Rage"; // 0x1765 MovS
	func_5162(var_75_int, var_698_string); // 0x1766 NEW_2
	var_699_int = 513634; // 0x1768 PushI
	SetMessage(var_699_int); // 0x1769 TObjFunc
	ClearReplies(); // 0x176b TObjFunc
	var_700_int = 513635; // 0x176d PushI
	var_701_int = 14893; // 0x176e PushI
	var_702_int = 14890; // 0x176f PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x1770 TObjFunc
	return 0; // 0x1772 Return
	
Label_6003:
	var_703_int = 14893; // 0x1773 PushI
	var_704_bool = var_74_float == var_703_int; // 0x1774 Eq
	if(var_704_bool == 0) goto Label_6021; // 0x1775 JumpB
	var_705_string = ""; // 0x1776 PushV
	var_705_string = "Neutral"; // 0x1777 MovS
	func_5162(var_75_int, var_705_string); // 0x1778 NEW_2
	var_706_int = 513637; // 0x177a PushI
	SetMessage(var_706_int); // 0x177b TObjFunc
	ClearReplies(); // 0x177d TObjFunc
	var_707_int = 513638; // 0x177f PushI
	var_708_int = -1; // 0x1780 PushI
	var_709_int = 14894; // 0x1781 PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0x1782 TObjFunc
	return 0; // 0x1784 Return
	
Label_6021:
	var_710_int = 14840; // 0x1785 PushI
	var_711_bool = var_74_float == var_710_int; // 0x1786 Eq
	if(var_711_bool == 0) goto Label_6044; // 0x1787 JumpB
	var_712_string = ""; // 0x1788 PushV
	var_712_string = "Rage"; // 0x1789 MovS
	func_5162(var_75_int, var_712_string); // 0x178a NEW_2
	var_713_int = 513589; // 0x178c PushI
	SetMessage(var_713_int); // 0x178d TObjFunc
	ClearReplies(); // 0x178f TObjFunc
	var_714_int = 513591; // 0x1791 PushI
	var_715_int = 14843; // 0x1792 PushI
	var_716_int = 14842; // 0x1793 PushI
	AddReply(var_714_int, var_715_int, var_716_int); // 0x1794 TObjFunc
	var_717_int = 513590; // 0x1796 PushI
	var_718_int = 14845; // 0x1797 PushI
	var_719_int = 14841; // 0x1798 PushI
	AddReply(var_717_int, var_718_int, var_719_int); // 0x1799 TObjFunc
	return 0; // 0x179b Return
	
Label_6044:
	var_720_int = 14845; // 0x179c PushI
	var_721_bool = var_74_float == var_720_int; // 0x179d Eq
	if(var_721_bool == 0) goto Label_6062; // 0x179e JumpB
	var_722_string = ""; // 0x179f PushV
	var_722_string = "Neutral"; // 0x17a0 MovS
	func_5162(var_75_int, var_722_string); // 0x17a1 NEW_2
	var_723_int = 513594; // 0x17a3 PushI
	SetMessage(var_723_int); // 0x17a4 TObjFunc
	ClearReplies(); // 0x17a6 TObjFunc
	var_724_int = 513595; // 0x17a8 PushI
	var_725_int = 14847; // 0x17a9 PushI
	var_726_int = 14846; // 0x17aa PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x17ab TObjFunc
	return 0; // 0x17ad Return
	
Label_6062:
	var_727_int = 14847; // 0x17ae PushI
	var_728_bool = var_74_float == var_727_int; // 0x17af Eq
	if(var_728_bool == 0) goto Label_6080; // 0x17b0 JumpB
	var_729_string = ""; // 0x17b1 PushV
	var_729_string = "Neutral"; // 0x17b2 MovS
	func_5162(var_75_int, var_729_string); // 0x17b3 NEW_2
	var_730_int = 513596; // 0x17b5 PushI
	SetMessage(var_730_int); // 0x17b6 TObjFunc
	ClearReplies(); // 0x17b8 TObjFunc
	var_731_int = 513597; // 0x17ba PushI
	var_732_int = 14843; // 0x17bb PushI
	var_733_int = 14848; // 0x17bc PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0x17bd TObjFunc
	return 0; // 0x17bf Return
	
Label_6080:
	var_734_int = 14843; // 0x17c0 PushI
	var_735_bool = var_74_float == var_734_int; // 0x17c1 Eq
	if(var_735_bool == 0) goto Label_6103; // 0x17c2 JumpB
	var_736_string = ""; // 0x17c3 PushV
	var_736_string = "Rage"; // 0x17c4 MovS
	func_5162(var_75_int, var_736_string); // 0x17c5 NEW_2
	var_737_int = 513592; // 0x17c7 PushI
	SetMessage(var_737_int); // 0x17c8 TObjFunc
	ClearReplies(); // 0x17ca TObjFunc
	var_738_int = 513598; // 0x17cc PushI
	var_739_int = 14824; // 0x17cd PushI
	var_740_int = 14850; // 0x17ce PushI
	AddReply(var_738_int, var_739_int, var_740_int); // 0x17cf TObjFunc
	var_741_int = 513593; // 0x17d1 PushI
	var_742_int = 13583; // 0x17d2 PushI
	var_743_int = 14844; // 0x17d3 PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0x17d4 TObjFunc
	return 0; // 0x17d6 Return
	
Label_6103:
	var_744_int = 13583; // 0x17d7 PushI
	var_745_bool = var_74_float == var_744_int; // 0x17d8 Eq
	if(var_745_bool == 0) goto Label_6121; // 0x17d9 JumpB
	var_746_string = ""; // 0x17da PushV
	var_746_string = "Untrust"; // 0x17db MovS
	func_5162(var_75_int, var_746_string); // 0x17dc NEW_2
	var_747_int = 512419; // 0x17de PushI
	SetMessage(var_747_int); // 0x17df TObjFunc
	ClearReplies(); // 0x17e1 TObjFunc
	var_748_int = 512423; // 0x17e3 PushI
	var_749_int = 13588; // 0x17e4 PushI
	var_750_int = 13587; // 0x17e5 PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x17e6 TObjFunc
	return 0; // 0x17e8 Return
	
Label_6121:
	var_751_int = 13588; // 0x17e9 PushI
	var_752_bool = var_74_float == var_751_int; // 0x17ea Eq
	if(var_752_bool == 0) goto Label_6144; // 0x17eb JumpB
	var_753_string = ""; // 0x17ec PushV
	var_753_string = "Untrust"; // 0x17ed MovS
	func_5162(var_75_int, var_753_string); // 0x17ee NEW_2
	var_754_int = 512424; // 0x17f0 PushI
	SetMessage(var_754_int); // 0x17f1 TObjFunc
	ClearReplies(); // 0x17f3 TObjFunc
	var_755_int = 512425; // 0x17f5 PushI
	var_756_int = 13594; // 0x17f6 PushI
	var_757_int = 13590; // 0x17f7 PushI
	AddReply(var_755_int, var_756_int, var_757_int); // 0x17f8 TObjFunc
	var_758_int = 512426; // 0x17fa PushI
	var_759_int = 13592; // 0x17fb PushI
	var_760_int = 13591; // 0x17fc PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0x17fd TObjFunc
	return 0; // 0x17ff Return
	
Label_6144:
	var_761_int = 13592; // 0x1800 PushI
	var_762_bool = var_74_float == var_761_int; // 0x1801 Eq
	if(var_762_bool == 0) goto Label_6162; // 0x1802 JumpB
	var_763_string = ""; // 0x1803 PushV
	var_763_string = "Neutral"; // 0x1804 MovS
	func_5162(var_75_int, var_763_string); // 0x1805 NEW_2
	var_764_int = 512427; // 0x1807 PushI
	SetMessage(var_764_int); // 0x1808 TObjFunc
	ClearReplies(); // 0x180a TObjFunc
	var_765_int = 512430; // 0x180c PushI
	var_766_int = 13594; // 0x180d PushI
	var_767_int = 13596; // 0x180e PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0x180f TObjFunc
	return 0; // 0x1811 Return
	
Label_6162:
	var_768_int = 13594; // 0x1812 PushI
	var_769_bool = var_74_float == var_768_int; // 0x1813 Eq
	if(var_769_bool == 0) goto Label_6180; // 0x1814 JumpB
	var_770_string = ""; // 0x1815 PushV
	var_770_string = "Sly"; // 0x1816 MovS
	func_5162(var_75_int, var_770_string); // 0x1817 NEW_2
	var_771_int = 512428; // 0x1819 PushI
	SetMessage(var_771_int); // 0x181a TObjFunc
	ClearReplies(); // 0x181c TObjFunc
	var_772_int = 512429; // 0x181e PushI
	var_773_int = 13599; // 0x181f PushI
	var_774_int = 13595; // 0x1820 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0x1821 TObjFunc
	return 0; // 0x1823 Return
	
Label_6180:
	var_775_int = 13599; // 0x1824 PushI
	var_776_bool = var_74_float == var_775_int; // 0x1825 Eq
	if(var_776_bool == 0) goto Label_6198; // 0x1826 JumpB
	var_777_string = ""; // 0x1827 PushV
	var_777_string = "Neutral"; // 0x1828 MovS
	func_5162(var_75_int, var_777_string); // 0x1829 NEW_2
	var_778_int = 512432; // 0x182b PushI
	SetMessage(var_778_int); // 0x182c TObjFunc
	ClearReplies(); // 0x182e TObjFunc
	var_779_int = 512433; // 0x1830 PushI
	var_780_int = 13601; // 0x1831 PushI
	var_781_int = 13600; // 0x1832 PushI
	AddReply(var_779_int, var_780_int, var_781_int); // 0x1833 TObjFunc
	return 0; // 0x1835 Return
	
Label_6198:
	var_782_int = 13601; // 0x1836 PushI
	var_783_bool = var_74_float == var_782_int; // 0x1837 Eq
	if(var_783_bool == 0) goto Label_6221; // 0x1838 JumpB
	var_784_string = ""; // 0x1839 PushV
	var_784_string = "Neutral"; // 0x183a MovS
	func_5162(var_75_int, var_784_string); // 0x183b NEW_2
	var_785_int = 512434; // 0x183d PushI
	SetMessage(var_785_int); // 0x183e TObjFunc
	ClearReplies(); // 0x1840 TObjFunc
	var_786_int = 513581; // 0x1842 PushI
	var_787_int = 14826; // 0x1843 PushI
	var_788_int = 14830; // 0x1844 PushI
	AddReply(var_786_int, var_787_int, var_788_int); // 0x1845 TObjFunc
	var_789_int = 512435; // 0x1847 PushI
	var_790_int = 14833; // 0x1848 PushI
	var_791_int = 13602; // 0x1849 PushI
	AddReply(var_789_int, var_790_int, var_791_int); // 0x184a TObjFunc
	return 0; // 0x184c Return
	
Label_6221:
	var_792_int = 14824; // 0x184d PushI
	var_793_bool = var_74_float == var_792_int; // 0x184e Eq
	if(var_793_bool == 0) goto Label_6239; // 0x184f JumpB
	var_794_string = ""; // 0x1850 PushV
	var_794_string = "Sly"; // 0x1851 MovS
	func_5162(var_75_int, var_794_string); // 0x1852 NEW_2
	var_795_int = 513575; // 0x1854 PushI
	SetMessage(var_795_int); // 0x1855 TObjFunc
	ClearReplies(); // 0x1857 TObjFunc
	var_796_int = 513576; // 0x1859 PushI
	var_797_int = 14826; // 0x185a PushI
	var_798_int = 14825; // 0x185b PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0x185c TObjFunc
	return 0; // 0x185e Return
	
Label_6239:
	var_799_int = 14826; // 0x185f PushI
	var_800_bool = var_74_float == var_799_int; // 0x1860 Eq
	if(var_800_bool == 0) goto Label_6257; // 0x1861 JumpB
	var_801_string = ""; // 0x1862 PushV
	var_801_string = "Sly"; // 0x1863 MovS
	func_5162(var_75_int, var_801_string); // 0x1864 NEW_2
	var_802_int = 513577; // 0x1866 PushI
	SetMessage(var_802_int); // 0x1867 TObjFunc
	ClearReplies(); // 0x1869 TObjFunc
	var_803_int = 513578; // 0x186b PushI
	var_804_int = 14828; // 0x186c PushI
	var_805_int = 14827; // 0x186d PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0x186e TObjFunc
	return 0; // 0x1870 Return
	
Label_6257:
	var_806_int = 14828; // 0x1871 PushI
	var_807_bool = var_74_float == var_806_int; // 0x1872 Eq
	if(var_807_bool == 0) goto Label_6285; // 0x1873 JumpB
	var_808_string = ""; // 0x1874 PushV
	var_808_string = "Untrust"; // 0x1875 MovS
	func_5162(var_75_int, var_808_string); // 0x1876 NEW_2
	var_809_int = 513579; // 0x1878 PushI
	SetMessage(var_809_int); // 0x1879 TObjFunc
	ClearReplies(); // 0x187b TObjFunc
	var_810_int = 513580; // 0x187d PushI
	var_811_int = 14833; // 0x187e PushI
	var_812_int = 14829; // 0x187f PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0x1880 TObjFunc
	var_813_int = 535991; // 0x1882 PushI
	var_814_int = 14837; // 0x1883 PushI
	var_815_int = 37720; // 0x1884 PushI
	AddReply(var_813_int, var_814_int, var_815_int); // 0x1885 TObjFunc
	var_816_int = 535992; // 0x1887 PushI
	var_817_int = 14837; // 0x1888 PushI
	var_818_int = 37721; // 0x1889 PushI
	AddReply(var_816_int, var_817_int, var_818_int); // 0x188a TObjFunc
	return 0; // 0x188c Return
	
Label_6285:
	var_819_int = 14833; // 0x188d PushI
	var_820_bool = var_74_float == var_819_int; // 0x188e Eq
	if(var_820_bool == 0) goto Label_6303; // 0x188f JumpB
	var_821_string = ""; // 0x1890 PushV
	var_821_string = "Untrust"; // 0x1891 MovS
	func_5162(var_75_int, var_821_string); // 0x1892 NEW_2
	var_822_int = 513582; // 0x1894 PushI
	SetMessage(var_822_int); // 0x1895 TObjFunc
	ClearReplies(); // 0x1897 TObjFunc
	var_823_int = 513583; // 0x1899 PushI
	var_824_int = 14835; // 0x189a PushI
	var_825_int = 14834; // 0x189b PushI
	AddReply(var_823_int, var_824_int, var_825_int); // 0x189c TObjFunc
	return 0; // 0x189e Return
	
Label_6303:
	var_826_int = 14835; // 0x189f PushI
	var_827_bool = var_74_float == var_826_int; // 0x18a0 Eq
	if(var_827_bool == 0) goto Label_6321; // 0x18a1 JumpB
	var_828_string = ""; // 0x18a2 PushV
	var_828_string = "Sly"; // 0x18a3 MovS
	func_5162(var_75_int, var_828_string); // 0x18a4 NEW_2
	var_829_int = 513584; // 0x18a6 PushI
	SetMessage(var_829_int); // 0x18a7 TObjFunc
	ClearReplies(); // 0x18a9 TObjFunc
	var_830_int = 513585; // 0x18ab PushI
	var_831_int = 14837; // 0x18ac PushI
	var_832_int = 14836; // 0x18ad PushI
	AddReply(var_830_int, var_831_int, var_832_int); // 0x18ae TObjFunc
	return 0; // 0x18b0 Return
	
Label_6321:
	var_833_int = 14837; // 0x18b1 PushI
	var_834_bool = var_74_float == var_833_int; // 0x18b2 Eq
	if(var_834_bool == 0) goto Label_6344; // 0x18b3 JumpB
	var_835_string = ""; // 0x18b4 PushV
	var_835_string = "Untrust"; // 0x18b5 MovS
	func_5162(var_75_int, var_835_string); // 0x18b6 NEW_2
	var_836_int = 513586; // 0x18b8 PushI
	SetMessage(var_836_int); // 0x18b9 TObjFunc
	ClearReplies(); // 0x18bb TObjFunc
	var_837_int = 513587; // 0x18bd PushI
	var_838_int = 40669; // 0x18be PushI
	var_839_int = 14838; // 0x18bf PushI
	AddReply(var_837_int, var_838_int, var_839_int); // 0x18c0 TObjFunc
	var_840_int = 538755; // 0x18c2 PushI
	var_841_int = -1; // 0x18c3 PushI
	var_842_int = 40667; // 0x18c4 PushI
	AddReply(var_840_int, var_841_int, var_842_int); // 0x18c5 TObjFunc
	return 0; // 0x18c7 Return
	
Label_6344:
	var_843_int = 40669; // 0x18c8 PushI
	var_844_bool = var_74_float == var_843_int; // 0x18c9 Eq
	if(var_844_bool == 0) goto Label_6367; // 0x18ca JumpB
	var_845_string = ""; // 0x18cb PushV
	var_845_string = "Neutral"; // 0x18cc MovS
	func_5162(var_75_int, var_845_string); // 0x18cd NEW_2
	var_846_int = 538756; // 0x18cf PushI
	SetMessage(var_846_int); // 0x18d0 TObjFunc
	ClearReplies(); // 0x18d2 TObjFunc
	var_847_int = 538757; // 0x18d4 PushI
	var_848_int = -1; // 0x18d5 PushI
	var_849_int = 40671; // 0x18d6 PushI
	AddReply(var_847_int, var_848_int, var_849_int); // 0x18d7 TObjFunc
	var_850_int = 538758; // 0x18d9 PushI
	var_851_int = -1; // 0x18da PushI
	var_852_int = 40672; // 0x18db PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0x18dc TObjFunc
	return 0; // 0x18de Return
	
Label_6367:
	var_853_int = 13577; // 0x18df PushI
	var_854_bool = var_74_float == var_853_int; // 0x18e0 Eq
	if(var_854_bool == 0) goto Label_6390; // 0x18e1 JumpB
	var_855_string = ""; // 0x18e2 PushV
	var_855_string = "Neutral"; // 0x18e3 MovS
	func_5162(var_75_int, var_855_string); // 0x18e4 NEW_2
	var_856_int = 512413; // 0x18e6 PushI
	SetMessage(var_856_int); // 0x18e7 TObjFunc
	ClearReplies(); // 0x18e9 TObjFunc
	var_857_int = 512420; // 0x18eb PushI
	var_858_int = 13585; // 0x18ec PushI
	var_859_int = 13584; // 0x18ed PushI
	AddReply(var_857_int, var_858_int, var_859_int); // 0x18ee TObjFunc
	var_860_int = 512414; // 0x18f0 PushI
	var_861_int = 13579; // 0x18f1 PushI
	var_862_int = 13578; // 0x18f2 PushI
	AddReply(var_860_int, var_861_int, var_862_int); // 0x18f3 TObjFunc
	return 0; // 0x18f5 Return
	
Label_6390:
	var_863_int = 13579; // 0x18f6 PushI
	var_864_bool = var_74_float == var_863_int; // 0x18f7 Eq
	if(var_864_bool == 0) goto Label_6408; // 0x18f8 JumpB
	var_865_string = ""; // 0x18f9 PushV
	var_865_string = "Neutral"; // 0x18fa MovS
	func_5162(var_75_int, var_865_string); // 0x18fb NEW_2
	var_866_int = 512415; // 0x18fd PushI
	SetMessage(var_866_int); // 0x18fe TObjFunc
	ClearReplies(); // 0x1900 TObjFunc
	var_867_int = 512416; // 0x1902 PushI
	var_868_int = 13581; // 0x1903 PushI
	var_869_int = 13580; // 0x1904 PushI
	AddReply(var_867_int, var_868_int, var_869_int); // 0x1905 TObjFunc
	return 0; // 0x1907 Return
	
Label_6408:
	var_870_int = 13581; // 0x1908 PushI
	var_871_bool = var_74_float == var_870_int; // 0x1909 Eq
	if(var_871_bool == 0) goto Label_6426; // 0x190a JumpB
	var_872_string = ""; // 0x190b PushV
	var_872_string = "Neutral"; // 0x190c MovS
	func_5162(var_75_int, var_872_string); // 0x190d NEW_2
	var_873_int = 512417; // 0x190f PushI
	SetMessage(var_873_int); // 0x1910 TObjFunc
	ClearReplies(); // 0x1912 TObjFunc
	var_874_int = 512418; // 0x1914 PushI
	var_875_int = 14853; // 0x1915 PushI
	var_876_int = 13582; // 0x1916 PushI
	AddReply(var_874_int, var_875_int, var_876_int); // 0x1917 TObjFunc
	return 0; // 0x1919 Return
	
Label_6426:
	var_877_int = 13585; // 0x191a PushI
	var_878_bool = var_74_float == var_877_int; // 0x191b Eq
	if(var_878_bool == 0) goto Label_6449; // 0x191c JumpB
	var_879_string = ""; // 0x191d PushV
	var_879_string = "Neutral"; // 0x191e MovS
	func_5162(var_75_int, var_879_string); // 0x191f NEW_2
	var_880_int = 512421; // 0x1921 PushI
	SetMessage(var_880_int); // 0x1922 TObjFunc
	ClearReplies(); // 0x1924 TObjFunc
	var_881_int = 513574; // 0x1926 PushI
	var_882_int = 14851; // 0x1927 PushI
	var_883_int = 14823; // 0x1928 PushI
	AddReply(var_881_int, var_882_int, var_883_int); // 0x1929 TObjFunc
	var_884_int = 513602; // 0x192b PushI
	var_885_int = 14853; // 0x192c PushI
	var_886_int = 14854; // 0x192d PushI
	AddReply(var_884_int, var_885_int, var_886_int); // 0x192e TObjFunc
	return 0; // 0x1930 Return
	
Label_6449:
	var_887_int = 14851; // 0x1931 PushI
	var_888_bool = var_74_float == var_887_int; // 0x1932 Eq
	if(var_888_bool == 0) goto Label_6467; // 0x1933 JumpB
	var_889_string = ""; // 0x1934 PushV
	var_889_string = "Sly"; // 0x1935 MovS
	func_5162(var_75_int, var_889_string); // 0x1936 NEW_2
	var_890_int = 513599; // 0x1938 PushI
	SetMessage(var_890_int); // 0x1939 TObjFunc
	ClearReplies(); // 0x193b TObjFunc
	var_891_int = 513600; // 0x193d PushI
	var_892_int = 14853; // 0x193e PushI
	var_893_int = 14852; // 0x193f PushI
	AddReply(var_891_int, var_892_int, var_893_int); // 0x1940 TObjFunc
	return 0; // 0x1942 Return
	
Label_6467:
	var_894_int = 14853; // 0x1943 PushI
	var_895_bool = var_74_float == var_894_int; // 0x1944 Eq
	if(var_895_bool == 0) goto Label_6495; // 0x1945 JumpB
	var_896_string = ""; // 0x1946 PushV
	var_896_string = "Sly"; // 0x1947 MovS
	func_5162(var_75_int, var_896_string); // 0x1948 NEW_2
	var_897_int = 513601; // 0x194a PushI
	SetMessage(var_897_int); // 0x194b TObjFunc
	ClearReplies(); // 0x194d TObjFunc
	var_898_int = 513603; // 0x194f PushI
	var_899_int = -1; // 0x1950 PushI
	var_900_int = 14856; // 0x1951 PushI
	AddReply(var_898_int, var_899_int, var_900_int); // 0x1952 TObjFunc
	var_901_int = 513604; // 0x1954 PushI
	var_902_int = -1; // 0x1955 PushI
	var_903_int = 14857; // 0x1956 PushI
	AddReply(var_901_int, var_902_int, var_903_int); // 0x1957 TObjFunc
	var_904_int = 513605; // 0x1959 PushI
	var_905_int = -1; // 0x195a PushI
	var_906_int = 14858; // 0x195b PushI
	AddReply(var_904_int, var_905_int, var_906_int); // 0x195c TObjFunc
	return 0; // 0x195e Return
	
Label_6495:
	var_907_int = 37724; // 0x195f PushI
	var_908_bool = var_74_float == var_907_int; // 0x1960 Eq
	if(var_908_bool == 0) goto Label_6518; // 0x1961 JumpB
	var_909_string = ""; // 0x1962 PushV
	var_909_string = "Untrust"; // 0x1963 MovS
	func_5162(var_75_int, var_909_string); // 0x1964 NEW_2
	var_910_int = 535994; // 0x1966 PushI
	SetMessage(var_910_int); // 0x1967 TObjFunc
	ClearReplies(); // 0x1969 TObjFunc
	var_911_int = 535995; // 0x196b PushI
	var_912_int = 37735; // 0x196c PushI
	var_913_int = 37725; // 0x196d PushI
	AddReply(var_911_int, var_912_int, var_913_int); // 0x196e TObjFunc
	var_914_int = 536002; // 0x1970 PushI
	var_915_int = 37726; // 0x1971 PushI
	var_916_int = 37733; // 0x1972 PushI
	AddReply(var_914_int, var_915_int, var_916_int); // 0x1973 TObjFunc
	return 0; // 0x1975 Return
	
Label_6518:
	var_917_int = 37735; // 0x1976 PushI
	var_918_bool = var_74_float == var_917_int; // 0x1977 Eq
	if(var_918_bool == 0) goto Label_6541; // 0x1978 JumpB
	var_919_string = ""; // 0x1979 PushV
	var_919_string = "Untrust"; // 0x197a MovS
	func_5162(var_75_int, var_919_string); // 0x197b NEW_2
	var_920_int = 536003; // 0x197d PushI
	SetMessage(var_920_int); // 0x197e TObjFunc
	ClearReplies(); // 0x1980 TObjFunc
	var_921_int = 536005; // 0x1982 PushI
	var_922_int = 37738; // 0x1983 PushI
	var_923_int = 37737; // 0x1984 PushI
	AddReply(var_921_int, var_922_int, var_923_int); // 0x1985 TObjFunc
	var_924_int = 536007; // 0x1987 PushI
	var_925_int = 37740; // 0x1988 PushI
	var_926_int = 37739; // 0x1989 PushI
	AddReply(var_924_int, var_925_int, var_926_int); // 0x198a TObjFunc
	return 0; // 0x198c Return
	
Label_6541:
	var_927_int = 37740; // 0x198d PushI
	var_928_bool = var_74_float == var_927_int; // 0x198e Eq
	if(var_928_bool == 0) goto Label_6559; // 0x198f JumpB
	var_929_string = ""; // 0x1990 PushV
	var_929_string = "Neutral"; // 0x1991 MovS
	func_5162(var_75_int, var_929_string); // 0x1992 NEW_2
	var_930_int = 536008; // 0x1994 PushI
	SetMessage(var_930_int); // 0x1995 TObjFunc
	ClearReplies(); // 0x1997 TObjFunc
	var_931_int = 536009; // 0x1999 PushI
	var_932_int = 37726; // 0x199a PushI
	var_933_int = 37741; // 0x199b PushI
	AddReply(var_931_int, var_932_int, var_933_int); // 0x199c TObjFunc
	return 0; // 0x199e Return
	
Label_6559:
	var_934_int = 37738; // 0x199f PushI
	var_935_bool = var_74_float == var_934_int; // 0x19a0 Eq
	if(var_935_bool == 0) goto Label_6582; // 0x19a1 JumpB
	var_936_string = ""; // 0x19a2 PushV
	var_936_string = "Sly"; // 0x19a3 MovS
	func_5162(var_75_int, var_936_string); // 0x19a4 NEW_2
	var_937_int = 536006; // 0x19a6 PushI
	SetMessage(var_937_int); // 0x19a7 TObjFunc
	ClearReplies(); // 0x19a9 TObjFunc
	var_938_int = 536004; // 0x19ab PushI
	var_939_int = 37726; // 0x19ac PushI
	var_940_int = 37736; // 0x19ad PushI
	AddReply(var_938_int, var_939_int, var_940_int); // 0x19ae TObjFunc
	var_941_int = 536011; // 0x19b0 PushI
	var_942_int = 37745; // 0x19b1 PushI
	var_943_int = 37744; // 0x19b2 PushI
	AddReply(var_941_int, var_942_int, var_943_int); // 0x19b3 TObjFunc
	return 0; // 0x19b5 Return
	
Label_6582:
	var_944_int = 37745; // 0x19b6 PushI
	var_945_bool = var_74_float == var_944_int; // 0x19b7 Eq
	if(var_945_bool == 0) goto Label_6600; // 0x19b8 JumpB
	var_946_string = ""; // 0x19b9 PushV
	var_946_string = "Neutral"; // 0x19ba MovS
	func_5162(var_75_int, var_946_string); // 0x19bb NEW_2
	var_947_int = 536012; // 0x19bd PushI
	SetMessage(var_947_int); // 0x19be TObjFunc
	ClearReplies(); // 0x19c0 TObjFunc
	var_948_int = 536013; // 0x19c2 PushI
	var_949_int = 37726; // 0x19c3 PushI
	var_950_int = 37746; // 0x19c4 PushI
	AddReply(var_948_int, var_949_int, var_950_int); // 0x19c5 TObjFunc
	return 0; // 0x19c7 Return
	
Label_6600:
	var_951_int = 37726; // 0x19c8 PushI
	var_952_bool = var_74_float == var_951_int; // 0x19c9 Eq
	if(var_952_bool == 0) goto Label_6623; // 0x19ca JumpB
	var_953_string = ""; // 0x19cb PushV
	var_953_string = "Rage"; // 0x19cc MovS
	func_5162(var_75_int, var_953_string); // 0x19cd NEW_2
	var_954_int = 535996; // 0x19cf PushI
	SetMessage(var_954_int); // 0x19d0 TObjFunc
	ClearReplies(); // 0x19d2 TObjFunc
	var_955_int = 535997; // 0x19d4 PushI
	var_956_int = 37728; // 0x19d5 PushI
	var_957_int = 37727; // 0x19d6 PushI
	AddReply(var_955_int, var_956_int, var_957_int); // 0x19d7 TObjFunc
	var_958_int = 536010; // 0x19d9 PushI
	var_959_int = 37728; // 0x19da PushI
	var_960_int = 37742; // 0x19db PushI
	AddReply(var_958_int, var_959_int, var_960_int); // 0x19dc TObjFunc
	return 0; // 0x19de Return
	
Label_6623:
	var_961_int = 37728; // 0x19df PushI
	var_962_bool = var_74_float == var_961_int; // 0x19e0 Eq
	if(var_962_bool == 0) goto Label_6641; // 0x19e1 JumpB
	var_963_string = ""; // 0x19e2 PushV
	var_963_string = "Rage"; // 0x19e3 MovS
	func_5162(var_75_int, var_963_string); // 0x19e4 NEW_2
	var_964_int = 535998; // 0x19e6 PushI
	SetMessage(var_964_int); // 0x19e7 TObjFunc
	ClearReplies(); // 0x19e9 TObjFunc
	var_965_int = 535999; // 0x19eb PushI
	var_966_int = 37730; // 0x19ec PushI
	var_967_int = 37729; // 0x19ed PushI
	AddReply(var_965_int, var_966_int, var_967_int); // 0x19ee TObjFunc
	return 0; // 0x19f0 Return
	
Label_6641:
	var_968_int = 37730; // 0x19f1 PushI
	var_969_bool = var_74_float == var_968_int; // 0x19f2 Eq
	if(var_969_bool == 0) goto Label_6664; // 0x19f3 JumpB
	var_970_string = ""; // 0x19f4 PushV
	var_970_string = "Neutral"; // 0x19f5 MovS
	func_5162(var_75_int, var_970_string); // 0x19f6 NEW_2
	var_971_int = 536000; // 0x19f8 PushI
	SetMessage(var_971_int); // 0x19f9 TObjFunc
	ClearReplies(); // 0x19fb TObjFunc
	var_972_int = 533325; // 0x19fd PushI
	var_973_int = -1; // 0x19fe PushI
	var_974_int = 34829; // 0x19ff PushI
	AddReply(var_972_int, var_973_int, var_974_int); // 0x1a00 TObjFunc
	var_975_int = 536014; // 0x1a02 PushI
	var_976_int = -1; // 0x1a03 PushI
	var_977_int = 37748; // 0x1a04 PushI
	AddReply(var_975_int, var_976_int, var_977_int); // 0x1a05 TObjFunc
	return 0; // 0x1a07 Return
	
Label_6664:
	var_3_object = 1; // 0x1a08 TMovB
	var_978_bool = 0; // 0x1a09 PushV
	func_10509(var_978_bool); // 0x1a0a NEW_2
	if(var_978_bool == 0) goto Label_6672; // 0x1a0c JumpB
	lshStopAnimation(); // 0x1a0d Func
	goto Label_6674; // 0x1a0f Jump
	
Label_6674:
	return 0; // 0x1a12 Return
	
Label_6672:
	StopAnimation(); // 0x1a10 Func
	
Label_6676:
	return 0; // 0x1a14 Return
}


task_19_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x1abd PushI
	if(var_76_int == 0) goto Label_6932; // 0x1abe JumpB
	func_10244(); // 0x1ac0 NEW_2
	var_78_int = 22136; // 0x1ac2 PushI
	var_79_bool = var_75_int == var_78_int; // 0x1ac3 Eq
	if(var_79_bool == 0) goto Label_6868; // 0x1ac4 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x1ac5 PushV
	var_80_object = var_1_object; // 0x1ac6 MovT
	var_81_object = var_0_bool; // 0x1ac7 MovT
	func_10531(); // 0x1ac8 NEW_2
	var_93_object = Obj(); var_94_object = Obj(); // 0x1aca PushV
	var_93_object = var_1_object; // 0x1acb MovT
	var_94_object = var_0_bool; // 0x1acc MovT
	func_10542(var_94_object); // 0x1acd NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x1acf PushV
	var_113_object = var_1_object; // 0x1ad0 MovT
	var_114_object = var_0_bool; // 0x1ad1 MovT
	func_10815(); // 0x1ad2 NEW_2
	
Label_6868:
	var_117_int = 22131; // 0x1ad4 PushI
	var_118_bool = var_74_float == var_117_int; // 0x1ad5 Eq
	if(var_118_bool == 0) goto Label_6897; // 0x1ad6 JumpB
	var_119_string = ""; // 0x1ad7 PushV
	var_119_string = "Neutral"; // 0x1ad8 MovS
	func_6822(var_75_int, var_119_string); // 0x1ad9 NEW_2
	var_136_int = 520914; // 0x1adb PushI
	SetMessage(var_136_int); // 0x1adc TObjFunc
	ClearReplies(); // 0x1ade TObjFunc
	var_137_bool = 0; var_138_object = Obj(); // 0x1ae0 PushV
	var_138_object = var_1_object; // 0x1ae1 MovT
	func_11922(var_137_bool, var_138_object); // 0x1ae2 NEW_2
	var_149_bool = var_137_bool == 0; // 0x1ae4 Not
	if(var_149_bool == 0) goto Label_6891; // 0x1ae5 JumpB
	var_150_int = 520917; // 0x1ae6 PushI
	var_151_int = 22135; // 0x1ae7 PushI
	var_152_int = 22134; // 0x1ae8 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1ae9 TObjFunc
	
Label_6891:
	var_153_int = 520915; // 0x1aeb PushI
	var_154_int = -1; // 0x1aec PushI
	var_155_int = 22132; // 0x1aed PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1aee TObjFunc
	return 0; // 0x1af0 Return
	
Label_6897:
	var_156_int = 22135; // 0x1af1 PushI
	var_157_bool = var_74_float == var_156_int; // 0x1af2 Eq
	if(var_157_bool == 0) goto Label_6920; // 0x1af3 JumpB
	var_158_string = ""; // 0x1af4 PushV
	var_158_string = "Neutral"; // 0x1af5 MovS
	func_6822(var_75_int, var_158_string); // 0x1af6 NEW_2
	var_159_int = 520918; // 0x1af8 PushI
	SetMessage(var_159_int); // 0x1af9 TObjFunc
	ClearReplies(); // 0x1afb TObjFunc
	var_160_int = 520919; // 0x1afd PushI
	var_161_int = -1; // 0x1afe PushI
	var_162_int = 22136; // 0x1aff PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1b00 TObjFunc
	var_163_int = 520920; // 0x1b02 PushI
	var_164_int = -1; // 0x1b03 PushI
	var_165_int = 22137; // 0x1b04 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1b05 TObjFunc
	return 0; // 0x1b07 Return
	
Label_6920:
	var_3_object = 1; // 0x1b08 TMovB
	var_166_bool = 0; // 0x1b09 PushV
	func_10509(var_166_bool); // 0x1b0a NEW_2
	if(var_166_bool == 0) goto Label_6928; // 0x1b0c JumpB
	lshStopAnimation(); // 0x1b0d Func
	goto Label_6930; // 0x1b0f Jump
	
Label_6930:
	return 0; // 0x1b12 Return
	
Label_6928:
	StopAnimation(); // 0x1b10 Func
	
Label_6932:
	return 0; // 0x1b14 Return
}


task_21_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x1bbd PushI
	if(var_76_int == 0) goto Label_7193; // 0x1bbe JumpB
	func_10244(); // 0x1bc0 NEW_2
	var_78_int = 22147; // 0x1bc2 PushI
	var_79_bool = var_75_int == var_78_int; // 0x1bc3 Eq
	if(var_79_bool == 0) goto Label_7124; // 0x1bc4 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x1bc5 PushV
	var_80_object = var_1_object; // 0x1bc6 MovT
	var_81_object = var_0_bool; // 0x1bc7 MovT
	func_10815(); // 0x1bc8 NEW_2
	var_84_object = Obj(); var_85_object = Obj(); // 0x1bca PushV
	var_84_object = var_1_object; // 0x1bcb MovT
	var_85_object = var_0_bool; // 0x1bcc MovT
	func_10531(); // 0x1bcd NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x1bcf PushV
	var_97_object = var_1_object; // 0x1bd0 MovT
	var_98_object = var_0_bool; // 0x1bd1 MovT
	func_10542(var_98_object); // 0x1bd2 NEW_2
	
Label_7124:
	var_117_int = 22144; // 0x1bd4 PushI
	var_118_bool = var_74_float == var_117_int; // 0x1bd5 Eq
	if(var_118_bool == 0) goto Label_7153; // 0x1bd6 JumpB
	var_119_string = ""; // 0x1bd7 PushV
	var_119_string = "Neutral"; // 0x1bd8 MovS
	func_7078(var_75_int, var_119_string); // 0x1bd9 NEW_2
	var_136_int = 520927; // 0x1bdb PushI
	SetMessage(var_136_int); // 0x1bdc TObjFunc
	ClearReplies(); // 0x1bde TObjFunc
	var_137_bool = 0; var_138_object = Obj(); // 0x1be0 PushV
	var_138_object = var_1_object; // 0x1be1 MovT
	func_11922(var_137_bool, var_138_object); // 0x1be2 NEW_2
	var_149_bool = var_137_bool == 0; // 0x1be4 Not
	if(var_149_bool == 0) goto Label_7147; // 0x1be5 JumpB
	var_150_int = 520928; // 0x1be6 PushI
	var_151_int = 22146; // 0x1be7 PushI
	var_152_int = 22145; // 0x1be8 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1be9 TObjFunc
	
Label_7147:
	var_153_int = 520932; // 0x1beb PushI
	var_154_int = -1; // 0x1bec PushI
	var_155_int = 22149; // 0x1bed PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1bee TObjFunc
	return 0; // 0x1bf0 Return
	
Label_7153:
	var_156_int = 22146; // 0x1bf1 PushI
	var_157_bool = var_74_float == var_156_int; // 0x1bf2 Eq
	if(var_157_bool == 0) goto Label_7181; // 0x1bf3 JumpB
	var_158_string = ""; // 0x1bf4 PushV
	var_158_string = "Neutral"; // 0x1bf5 MovS
	func_7078(var_75_int, var_158_string); // 0x1bf6 NEW_2
	var_159_int = 520929; // 0x1bf8 PushI
	SetMessage(var_159_int); // 0x1bf9 TObjFunc
	ClearReplies(); // 0x1bfb TObjFunc
	var_160_bool = 0; var_161_object = Obj(); // 0x1bfd PushV
	var_161_object = var_1_object; // 0x1bfe MovT
	func_11932(var_160_bool, var_161_object); // 0x1bff NEW_2
	if(var_160_bool == 0) goto Label_7175; // 0x1c01 JumpB
	var_168_int = 520930; // 0x1c02 PushI
	var_169_int = -1; // 0x1c03 PushI
	var_170_int = 22147; // 0x1c04 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1c05 TObjFunc
	
Label_7175:
	var_171_int = 520931; // 0x1c07 PushI
	var_172_int = -1; // 0x1c08 PushI
	var_173_int = 22148; // 0x1c09 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1c0a TObjFunc
	return 0; // 0x1c0c Return
	
Label_7181:
	var_3_object = 1; // 0x1c0d TMovB
	var_174_bool = 0; // 0x1c0e PushV
	func_10509(var_174_bool); // 0x1c0f NEW_2
	if(var_174_bool == 0) goto Label_7189; // 0x1c11 JumpB
	lshStopAnimation(); // 0x1c12 Func
	goto Label_7191; // 0x1c14 Jump
	
Label_7191:
	return 0; // 0x1c17 Return
	
Label_7189:
	StopAnimation(); // 0x1c15 Func
	
Label_7193:
	return 0; // 0x1c19 Return
}


task_23_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x1cc2 PushI
	if(var_76_int == 0) goto Label_7454; // 0x1cc3 JumpB
	func_10244(); // 0x1cc5 NEW_2
	var_78_int = 22154; // 0x1cc7 PushI
	var_79_bool = var_75_int == var_78_int; // 0x1cc8 Eq
	if(var_79_bool == 0) goto Label_7385; // 0x1cc9 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x1cca PushV
	var_80_object = var_1_object; // 0x1ccb MovT
	var_81_object = var_0_bool; // 0x1ccc MovT
	func_10531(); // 0x1ccd NEW_2
	var_93_object = Obj(); var_94_object = Obj(); // 0x1ccf PushV
	var_93_object = var_1_object; // 0x1cd0 MovT
	var_94_object = var_0_bool; // 0x1cd1 MovT
	func_10542(var_94_object); // 0x1cd2 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x1cd4 PushV
	var_113_object = var_1_object; // 0x1cd5 MovT
	var_114_object = var_0_bool; // 0x1cd6 MovT
	func_10815(); // 0x1cd7 NEW_2
	
Label_7385:
	var_117_int = 22151; // 0x1cd9 PushI
	var_118_bool = var_74_float == var_117_int; // 0x1cda Eq
	if(var_118_bool == 0) goto Label_7414; // 0x1cdb JumpB
	var_119_string = ""; // 0x1cdc PushV
	var_119_string = "Neutral"; // 0x1cdd MovS
	func_7339(var_75_int, var_119_string); // 0x1cde NEW_2
	var_136_int = 520934; // 0x1ce0 PushI
	SetMessage(var_136_int); // 0x1ce1 TObjFunc
	ClearReplies(); // 0x1ce3 TObjFunc
	var_137_bool = 0; var_138_object = Obj(); // 0x1ce5 PushV
	var_138_object = var_1_object; // 0x1ce6 MovT
	func_11922(var_137_bool, var_138_object); // 0x1ce7 NEW_2
	var_149_bool = var_137_bool == 0; // 0x1ce9 Not
	if(var_149_bool == 0) goto Label_7408; // 0x1cea JumpB
	var_150_int = 520935; // 0x1ceb PushI
	var_151_int = 22153; // 0x1cec PushI
	var_152_int = 22152; // 0x1ced PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1cee TObjFunc
	
Label_7408:
	var_153_int = 520939; // 0x1cf0 PushI
	var_154_int = -1; // 0x1cf1 PushI
	var_155_int = 22156; // 0x1cf2 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1cf3 TObjFunc
	return 0; // 0x1cf5 Return
	
Label_7414:
	var_156_int = 22153; // 0x1cf6 PushI
	var_157_bool = var_74_float == var_156_int; // 0x1cf7 Eq
	if(var_157_bool == 0) goto Label_7442; // 0x1cf8 JumpB
	var_158_string = ""; // 0x1cf9 PushV
	var_158_string = "Neutral"; // 0x1cfa MovS
	func_7339(var_75_int, var_158_string); // 0x1cfb NEW_2
	var_159_int = 520936; // 0x1cfd PushI
	SetMessage(var_159_int); // 0x1cfe TObjFunc
	ClearReplies(); // 0x1d00 TObjFunc
	var_160_bool = 0; var_161_object = Obj(); // 0x1d02 PushV
	var_161_object = var_1_object; // 0x1d03 MovT
	func_11932(var_160_bool, var_161_object); // 0x1d04 NEW_2
	if(var_160_bool == 0) goto Label_7436; // 0x1d06 JumpB
	var_168_int = 520937; // 0x1d07 PushI
	var_169_int = -1; // 0x1d08 PushI
	var_170_int = 22154; // 0x1d09 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1d0a TObjFunc
	
Label_7436:
	var_171_int = 520938; // 0x1d0c PushI
	var_172_int = -1; // 0x1d0d PushI
	var_173_int = 22155; // 0x1d0e PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1d0f TObjFunc
	return 0; // 0x1d11 Return
	
Label_7442:
	var_3_object = 1; // 0x1d12 TMovB
	var_174_bool = 0; // 0x1d13 PushV
	func_10509(var_174_bool); // 0x1d14 NEW_2
	if(var_174_bool == 0) goto Label_7450; // 0x1d16 JumpB
	lshStopAnimation(); // 0x1d17 Func
	goto Label_7452; // 0x1d19 Jump
	
Label_7452:
	return 0; // 0x1d1c Return
	
Label_7450:
	StopAnimation(); // 0x1d1a Func
	
Label_7454:
	return 0; // 0x1d1e Return
}


task_25_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x1dd6 PushI
	if(var_76_int == 0) goto Label_7915; // 0x1dd7 JumpB
	func_10244(); // 0x1dd9 NEW_2
	var_78_int = 36141; // 0x1ddb PushI
	var_79_bool = var_75_int == var_78_int; // 0x1ddc Eq
	if(var_79_bool == 0) goto Label_7651; // 0x1ddd JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x1dde PushV
	var_80_object = var_1_object; // 0x1ddf MovT
	var_81_object = var_0_bool; // 0x1de0 MovT
	func_10716(); // 0x1de1 NEW_2
	
Label_7651:
	var_114_int = 38456; // 0x1de3 PushI
	var_115_bool = var_75_int == var_114_int; // 0x1de4 Eq
	if(var_115_bool == 0) goto Label_7659; // 0x1de5 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x1de6 PushV
	var_116_object = var_1_object; // 0x1de7 MovT
	var_117_object = var_0_bool; // 0x1de8 MovT
	func_10716(); // 0x1de9 NEW_2
	
Label_7659:
	var_118_int = 22161; // 0x1deb PushI
	var_119_bool = var_75_int == var_118_int; // 0x1dec Eq
	if(var_119_bool == 0) goto Label_7677; // 0x1ded JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x1dee PushV
	var_120_object = var_1_object; // 0x1def MovT
	var_121_object = var_0_bool; // 0x1df0 MovT
	func_10815(); // 0x1df1 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x1df3 PushV
	var_124_object = var_1_object; // 0x1df4 MovT
	var_125_object = var_0_bool; // 0x1df5 MovT
	func_10531(); // 0x1df6 NEW_2
	var_137_object = Obj(); var_138_object = Obj(); // 0x1df8 PushV
	var_137_object = var_1_object; // 0x1df9 MovT
	var_138_object = var_0_bool; // 0x1dfa MovT
	func_10542(var_138_object); // 0x1dfb NEW_2
	
Label_7677:
	var_157_int = 22158; // 0x1dfd PushI
	var_158_bool = var_74_float == var_157_int; // 0x1dfe Eq
	if(var_158_bool == 0) goto Label_7721; // 0x1dff JumpB
	var_159_string = ""; // 0x1e00 PushV
	var_159_string = "Neutral"; // 0x1e01 MovS
	func_7615(var_75_int, var_159_string); // 0x1e02 NEW_2
	var_176_int = 520941; // 0x1e04 PushI
	SetMessage(var_176_int); // 0x1e05 TObjFunc
	ClearReplies(); // 0x1e07 TObjFunc
	var_177_bool = 0; var_178_object = Obj(); // 0x1e09 PushV
	var_178_object = var_1_object; // 0x1e0a MovT
	func_11432(var_178_object); // 0x1e0b NEW_2
	if(var_177_bool == 0) goto Label_7699; // 0x1e0d JumpB
	var_185_int = 534490; // 0x1e0e PushI
	var_186_int = 38444; // 0x1e0f PushI
	var_187_int = 36135; // 0x1e10 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1e11 TObjFunc
	
Label_7699:
	var_188_bool = 0; var_189_object = Obj(); // 0x1e13 PushV
	var_189_object = var_1_object; // 0x1e14 MovT
	func_11922(var_188_bool, var_189_object); // 0x1e15 NEW_2
	var_200_bool = var_188_bool == 0; // 0x1e17 Not
	if(var_200_bool == 0) goto Label_7710; // 0x1e18 JumpB
	var_201_int = 520942; // 0x1e19 PushI
	var_202_int = 22160; // 0x1e1a PushI
	var_203_int = 22159; // 0x1e1b PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x1e1c TObjFunc
	
Label_7710:
	var_204_int = 520946; // 0x1e1e PushI
	var_205_int = -1; // 0x1e1f PushI
	var_206_int = 22163; // 0x1e20 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1e21 TObjFunc
	var_207_int = 536616; // 0x1e23 PushI
	var_208_int = -1; // 0x1e24 PushI
	var_209_int = 38443; // 0x1e25 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1e26 TObjFunc
	return 0; // 0x1e28 Return
	
Label_7721:
	var_210_int = 22160; // 0x1e29 PushI
	var_211_bool = var_74_float == var_210_int; // 0x1e2a Eq
	if(var_211_bool == 0) goto Label_7749; // 0x1e2b JumpB
	var_212_string = ""; // 0x1e2c PushV
	var_212_string = "Neutral"; // 0x1e2d MovS
	func_7615(var_75_int, var_212_string); // 0x1e2e NEW_2
	var_213_int = 520943; // 0x1e30 PushI
	SetMessage(var_213_int); // 0x1e31 TObjFunc
	ClearReplies(); // 0x1e33 TObjFunc
	var_214_bool = 0; var_215_object = Obj(); // 0x1e35 PushV
	var_215_object = var_1_object; // 0x1e36 MovT
	func_11932(var_214_bool, var_215_object); // 0x1e37 NEW_2
	if(var_214_bool == 0) goto Label_7743; // 0x1e39 JumpB
	var_222_int = 520944; // 0x1e3a PushI
	var_223_int = -1; // 0x1e3b PushI
	var_224_int = 22161; // 0x1e3c PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1e3d TObjFunc
	
Label_7743:
	var_225_int = 520945; // 0x1e3f PushI
	var_226_int = -1; // 0x1e40 PushI
	var_227_int = 22162; // 0x1e41 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1e42 TObjFunc
	return 0; // 0x1e44 Return
	
Label_7749:
	var_228_int = 38444; // 0x1e45 PushI
	var_229_bool = var_74_float == var_228_int; // 0x1e46 Eq
	if(var_229_bool == 0) goto Label_7767; // 0x1e47 JumpB
	var_230_string = ""; // 0x1e48 PushV
	var_230_string = "Neutral"; // 0x1e49 MovS
	func_7615(var_75_int, var_230_string); // 0x1e4a NEW_2
	var_231_int = 536617; // 0x1e4c PushI
	SetMessage(var_231_int); // 0x1e4d TObjFunc
	ClearReplies(); // 0x1e4f TObjFunc
	var_232_int = 536618; // 0x1e51 PushI
	var_233_int = 38446; // 0x1e52 PushI
	var_234_int = 38445; // 0x1e53 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1e54 TObjFunc
	return 0; // 0x1e56 Return
	
Label_7767:
	var_235_int = 38446; // 0x1e57 PushI
	var_236_bool = var_74_float == var_235_int; // 0x1e58 Eq
	if(var_236_bool == 0) goto Label_7785; // 0x1e59 JumpB
	var_237_string = ""; // 0x1e5a PushV
	var_237_string = "Fear"; // 0x1e5b MovS
	func_7615(var_75_int, var_237_string); // 0x1e5c NEW_2
	var_238_int = 536619; // 0x1e5e PushI
	SetMessage(var_238_int); // 0x1e5f TObjFunc
	ClearReplies(); // 0x1e61 TObjFunc
	var_239_int = 536620; // 0x1e63 PushI
	var_240_int = 36136; // 0x1e64 PushI
	var_241_int = 38447; // 0x1e65 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x1e66 TObjFunc
	return 0; // 0x1e68 Return
	
Label_7785:
	var_242_int = 36136; // 0x1e69 PushI
	var_243_bool = var_74_float == var_242_int; // 0x1e6a Eq
	if(var_243_bool == 0) goto Label_7808; // 0x1e6b JumpB
	var_244_string = ""; // 0x1e6c PushV
	var_244_string = "Fear"; // 0x1e6d MovS
	func_7615(var_75_int, var_244_string); // 0x1e6e NEW_2
	var_245_int = 534491; // 0x1e70 PushI
	SetMessage(var_245_int); // 0x1e71 TObjFunc
	ClearReplies(); // 0x1e73 TObjFunc
	var_246_int = 534492; // 0x1e75 PushI
	var_247_int = 36138; // 0x1e76 PushI
	var_248_int = 36137; // 0x1e77 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x1e78 TObjFunc
	var_249_int = 536621; // 0x1e7a PushI
	var_250_int = 38449; // 0x1e7b PushI
	var_251_int = 38448; // 0x1e7c PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x1e7d TObjFunc
	return 0; // 0x1e7f Return
	
Label_7808:
	var_252_int = 38449; // 0x1e80 PushI
	var_253_bool = var_74_float == var_252_int; // 0x1e81 Eq
	if(var_253_bool == 0) goto Label_7826; // 0x1e82 JumpB
	var_254_string = ""; // 0x1e83 PushV
	var_254_string = "Fear"; // 0x1e84 MovS
	func_7615(var_75_int, var_254_string); // 0x1e85 NEW_2
	var_255_int = 536622; // 0x1e87 PushI
	SetMessage(var_255_int); // 0x1e88 TObjFunc
	ClearReplies(); // 0x1e8a TObjFunc
	var_256_int = 536625; // 0x1e8c PushI
	var_257_int = 36140; // 0x1e8d PushI
	var_258_int = 38452; // 0x1e8e PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1e8f TObjFunc
	return 0; // 0x1e91 Return
	
Label_7826:
	var_259_int = 36138; // 0x1e92 PushI
	var_260_bool = var_74_float == var_259_int; // 0x1e93 Eq
	if(var_260_bool == 0) goto Label_7849; // 0x1e94 JumpB
	var_261_string = ""; // 0x1e95 PushV
	var_261_string = "Neutral"; // 0x1e96 MovS
	func_7615(var_75_int, var_261_string); // 0x1e97 NEW_2
	var_262_int = 534493; // 0x1e99 PushI
	SetMessage(var_262_int); // 0x1e9a TObjFunc
	ClearReplies(); // 0x1e9c TObjFunc
	var_263_int = 534494; // 0x1e9e PushI
	var_264_int = 36140; // 0x1e9f PushI
	var_265_int = 36139; // 0x1ea0 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x1ea1 TObjFunc
	var_266_int = 536623; // 0x1ea3 PushI
	var_267_int = 38451; // 0x1ea4 PushI
	var_268_int = 38450; // 0x1ea5 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x1ea6 TObjFunc
	return 0; // 0x1ea8 Return
	
Label_7849:
	var_269_int = 38451; // 0x1ea9 PushI
	var_270_bool = var_74_float == var_269_int; // 0x1eaa Eq
	if(var_270_bool == 0) goto Label_7867; // 0x1eab JumpB
	var_271_string = ""; // 0x1eac PushV
	var_271_string = "Sly"; // 0x1ead MovS
	func_7615(var_75_int, var_271_string); // 0x1eae NEW_2
	var_272_int = 536624; // 0x1eb0 PushI
	SetMessage(var_272_int); // 0x1eb1 TObjFunc
	ClearReplies(); // 0x1eb3 TObjFunc
	var_273_int = 536626; // 0x1eb5 PushI
	var_274_int = 38455; // 0x1eb6 PushI
	var_275_int = 38454; // 0x1eb7 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x1eb8 TObjFunc
	return 0; // 0x1eba Return
	
Label_7867:
	var_276_int = 38455; // 0x1ebb PushI
	var_277_bool = var_74_float == var_276_int; // 0x1ebc Eq
	if(var_277_bool == 0) goto Label_7885; // 0x1ebd JumpB
	var_278_string = ""; // 0x1ebe PushV
	var_278_string = "Untrust"; // 0x1ebf MovS
	func_7615(var_75_int, var_278_string); // 0x1ec0 NEW_2
	var_279_int = 536627; // 0x1ec2 PushI
	SetMessage(var_279_int); // 0x1ec3 TObjFunc
	ClearReplies(); // 0x1ec5 TObjFunc
	var_280_int = 536628; // 0x1ec7 PushI
	var_281_int = -1; // 0x1ec8 PushI
	var_282_int = 38456; // 0x1ec9 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x1eca TObjFunc
	return 0; // 0x1ecc Return
	
Label_7885:
	var_283_int = 36140; // 0x1ecd PushI
	var_284_bool = var_74_float == var_283_int; // 0x1ece Eq
	if(var_284_bool == 0) goto Label_7903; // 0x1ecf JumpB
	var_285_string = ""; // 0x1ed0 PushV
	var_285_string = "Untrust"; // 0x1ed1 MovS
	func_7615(var_75_int, var_285_string); // 0x1ed2 NEW_2
	var_286_int = 534495; // 0x1ed4 PushI
	SetMessage(var_286_int); // 0x1ed5 TObjFunc
	ClearReplies(); // 0x1ed7 TObjFunc
	var_287_int = 534496; // 0x1ed9 PushI
	var_288_int = -1; // 0x1eda PushI
	var_289_int = 36141; // 0x1edb PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x1edc TObjFunc
	return 0; // 0x1ede Return
	
Label_7903:
	var_3_object = 1; // 0x1edf TMovB
	var_290_bool = 0; // 0x1ee0 PushV
	func_10509(var_290_bool); // 0x1ee1 NEW_2
	if(var_290_bool == 0) goto Label_7911; // 0x1ee3 JumpB
	lshStopAnimation(); // 0x1ee4 Func
	goto Label_7913; // 0x1ee6 Jump
	
Label_7913:
	return 0; // 0x1ee9 Return
	
Label_7911:
	StopAnimation(); // 0x1ee7 Func
	
Label_7915:
	return 0; // 0x1eeb Return
}


task_27_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x2007 PushI
	if(var_76_int == 0) goto Label_9209; // 0x2008 JumpB
	func_10244(); // 0x200a NEW_2
	var_78_int = 34118; // 0x200c PushI
	var_79_bool = var_75_int == var_78_int; // 0x200d Eq
	if(var_79_bool == 0) goto Label_8217; // 0x200e JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x200f PushV
	var_80_object = var_1_object; // 0x2010 MovT
	var_81_object = var_0_bool; // 0x2011 MovT
	func_10565(); // 0x2012 NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x2014 PushV
	var_139_object = var_1_object; // 0x2015 MovT
	var_140_object = var_0_bool; // 0x2016 MovT
	func_10821(); // 0x2017 NEW_2
	
Label_8217:
	var_165_int = 34177; // 0x2019 PushI
	var_166_bool = var_75_int == var_165_int; // 0x201a Eq
	if(var_166_bool == 0) goto Label_8225; // 0x201b JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x201c PushV
	var_167_object = var_1_object; // 0x201d MovT
	var_168_object = var_0_bool; // 0x201e MovT
	func_10647(); // 0x201f NEW_2
	
Label_8225:
	var_171_int = 33363; // 0x2021 PushI
	var_172_bool = var_75_int == var_171_int; // 0x2022 Eq
	if(var_172_bool == 0) goto Label_8233; // 0x2023 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x2024 PushV
	var_173_object = var_1_object; // 0x2025 MovT
	var_174_object = var_0_bool; // 0x2026 MovT
	func_10627(); // 0x2027 NEW_2
	
Label_8233:
	var_191_int = 33362; // 0x2029 PushI
	var_192_bool = var_75_int == var_191_int; // 0x202a Eq
	if(var_192_bool == 0) goto Label_8241; // 0x202b JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x202c PushV
	var_193_object = var_1_object; // 0x202d MovT
	var_194_object = var_0_bool; // 0x202e MovT
	func_10627(); // 0x202f NEW_2
	
Label_8241:
	var_195_int = 35191; // 0x2031 PushI
	var_196_bool = var_75_int == var_195_int; // 0x2032 Eq
	if(var_196_bool == 0) goto Label_8249; // 0x2033 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0x2034 PushV
	var_197_object = var_1_object; // 0x2035 MovT
	var_198_object = var_0_bool; // 0x2036 MovT
	func_10627(); // 0x2037 NEW_2
	
Label_8249:
	var_199_int = 34176; // 0x2039 PushI
	var_200_bool = var_75_int == var_199_int; // 0x203a Eq
	if(var_200_bool == 0) goto Label_8262; // 0x203b JumpB
	var_201_object = Obj(); var_202_object = Obj(); // 0x203c PushV
	var_201_object = var_1_object; // 0x203d MovT
	var_202_object = var_0_bool; // 0x203e MovT
	func_10565(); // 0x203f NEW_2
	var_203_object = Obj(); var_204_object = Obj(); // 0x2041 PushV
	var_203_object = var_1_object; // 0x2042 MovT
	var_204_object = var_0_bool; // 0x2043 MovT
	func_10821(); // 0x2044 NEW_2
	
Label_8262:
	var_205_int = 34165; // 0x2046 PushI
	var_206_bool = var_75_int == var_205_int; // 0x2047 Eq
	if(var_206_bool == 0) goto Label_8270; // 0x2048 JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x2049 PushV
	var_207_object = var_1_object; // 0x204a MovT
	var_208_object = var_0_bool; // 0x204b MovT
	func_10653(); // 0x204c NEW_2
	
Label_8270:
	var_211_int = 34169; // 0x204e PushI
	var_212_bool = var_75_int == var_211_int; // 0x204f Eq
	if(var_212_bool == 0) goto Label_8283; // 0x2050 JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x2051 PushV
	var_213_object = var_1_object; // 0x2052 MovT
	var_214_object = var_0_bool; // 0x2053 MovT
	func_10605(); // 0x2054 NEW_2
	var_217_object = Obj(); var_218_object = Obj(); // 0x2056 PushV
	var_217_object = var_1_object; // 0x2057 MovT
	var_218_object = var_0_bool; // 0x2058 MovT
	func_10555(var_218_object); // 0x2059 NEW_2
	
Label_8283:
	var_238_int = 34170; // 0x205b PushI
	var_239_bool = var_75_int == var_238_int; // 0x205c Eq
	if(var_239_bool == 0) goto Label_8296; // 0x205d JumpB
	var_240_object = Obj(); var_241_object = Obj(); // 0x205e PushV
	var_240_object = var_1_object; // 0x205f MovT
	var_241_object = var_0_bool; // 0x2060 MovT
	func_10605(); // 0x2061 NEW_2
	var_242_object = Obj(); var_243_object = Obj(); // 0x2063 PushV
	var_242_object = var_1_object; // 0x2064 MovT
	var_243_object = var_0_bool; // 0x2065 MovT
	func_10853(var_243_object); // 0x2066 NEW_2
	
Label_8296:
	var_247_int = 34103; // 0x2068 PushI
	var_248_bool = var_74_float == var_247_int; // 0x2069 Eq
	if(var_248_bool == 0) goto Label_8440; // 0x206a JumpB
	var_249_bool = 0; // 0x206b PushV
	var_249_bool = 0; // 0x206c MovB
	var_250_bool = 0; // 0x206d PushV
	var_250_bool = 0; // 0x206e MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x206f PushV
	var_252_object = var_1_object; // 0x2070 MovT
	func_11372(var_252_object); // 0x2071 NEW_2
	if(var_251_bool == 0) goto Label_8314; // 0x2073 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x2074 PushV
	var_260_object = var_1_object; // 0x2075 MovT
	func_11324(var_260_object); // 0x2076 NEW_2
	if(var_259_bool == 0) goto Label_8314; // 0x2078 JumpB
	var_250_bool = 1; // 0x2079 MovB
	
Label_8314:
	if(var_250_bool == 0) goto Label_8321; // 0x207a JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x207b PushV
	var_266_object = var_1_object; // 0x207c MovT
	func_11888(var_266_object); // 0x207d NEW_2
	if(var_265_bool == 0) goto Label_8321; // 0x207f JumpB
	var_249_bool = 1; // 0x2080 MovB
	
Label_8321:
	if(var_249_bool == 0) goto Label_8347; // 0x2081 JumpB
	var_281_object = Obj(); var_282_object = Obj(); // 0x2082 PushV
	var_281_object = var_1_object; // 0x2083 MovT
	var_282_object = var_0_bool; // 0x2084 MovT
	func_10641(); // 0x2085 NEW_2
	var_285_string = ""; // 0x2087 PushV
	var_285_string = "Untrust"; // 0x2088 MovS
	func_8176(var_75_int, var_285_string); // 0x2089 NEW_2
	var_302_int = 532641; // 0x208b PushI
	SetMessage(var_302_int); // 0x208c TObjFunc
	ClearReplies(); // 0x208e TObjFunc
	var_303_int = 532642; // 0x2090 PushI
	var_304_int = 34105; // 0x2091 PushI
	var_305_int = 34104; // 0x2092 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x2093 TObjFunc
	var_306_int = 532687; // 0x2095 PushI
	var_307_int = 34161; // 0x2096 PushI
	var_308_int = 34160; // 0x2097 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x2098 TObjFunc
	return 0; // 0x209a Return
	
Label_8347:
	var_309_string = ""; // 0x209b PushV
	var_309_string = "Neutral"; // 0x209c MovS
	func_8176(var_75_int, var_309_string); // 0x209d NEW_2
	var_310_int = 531953; // 0x209f PushI
	SetMessage(var_310_int); // 0x20a0 TObjFunc
	ClearReplies(); // 0x20a2 TObjFunc
	var_311_bool = 0; // 0x20a4 PushV
	var_311_bool = 0; // 0x20a5 MovB
	var_312_bool = 0; var_313_object = Obj(); // 0x20a6 PushV
	var_313_object = var_1_object; // 0x20a7 MovT
	func_11384(var_313_object); // 0x20a8 NEW_2
	if(var_312_bool == 0) goto Label_8369; // 0x20aa JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x20ab PushV
	var_319_object = var_1_object; // 0x20ac MovT
	func_11888(var_319_object); // 0x20ad NEW_2
	if(var_318_bool == 0) goto Label_8369; // 0x20af JumpB
	var_311_bool = 1; // 0x20b0 MovB
	
Label_8369:
	if(var_311_bool == 0) goto Label_8375; // 0x20b1 JumpB
	var_320_int = 532702; // 0x20b2 PushI
	var_321_int = 34178; // 0x20b3 PushI
	var_322_int = 34177; // 0x20b4 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x20b5 TObjFunc
	
Label_8375:
	var_323_bool = 0; var_324_object = Obj(); // 0x20b7 PushV
	var_324_object = var_1_object; // 0x20b8 MovT
	func_11360(var_324_object); // 0x20b9 NEW_2
	if(var_323_bool == 0) goto Label_8385; // 0x20bb JumpB
	var_329_int = 531954; // 0x20bc PushI
	var_330_int = 33359; // 0x20bd PushI
	var_331_int = 33358; // 0x20be PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x20bf TObjFunc
	
Label_8385:
	var_332_bool = 0; // 0x20c1 PushV
	var_332_bool = 0; // 0x20c2 MovB
	var_333_bool = 0; var_334_object = Obj(); // 0x20c3 PushV
	var_334_object = var_1_object; // 0x20c4 MovT
	func_11324(var_334_object); // 0x20c5 NEW_2
	if(var_333_bool == 0) goto Label_8399; // 0x20c7 JumpB
	var_335_bool = 0; var_336_object = Obj(); // 0x20c8 PushV
	var_336_object = var_1_object; // 0x20c9 MovT
	func_11372(var_336_object); // 0x20ca NEW_2
	var_337_bool = var_335_bool == 0; // 0x20cc Not
	if(var_337_bool == 0) goto Label_8399; // 0x20cd JumpB
	var_332_bool = 1; // 0x20ce MovB
	
Label_8399:
	if(var_332_bool == 0) goto Label_8405; // 0x20cf JumpB
	var_338_int = 532699; // 0x20d0 PushI
	var_339_int = 34175; // 0x20d1 PushI
	var_340_int = 34174; // 0x20d2 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x20d3 TObjFunc
	
Label_8405:
	var_341_bool = 0; // 0x20d5 PushV
	var_341_bool = 0; // 0x20d6 MovB
	var_342_bool = 0; // 0x20d7 PushV
	var_342_bool = 0; // 0x20d8 MovB
	var_343_bool = 0; var_344_object = Obj(); // 0x20d9 PushV
	var_344_object = var_1_object; // 0x20da MovT
	func_11348(var_344_object); // 0x20db NEW_2
	var_349_bool = var_343_bool == 0; // 0x20dd Not
	if(var_349_bool == 0) goto Label_8421; // 0x20de JumpB
	var_350_bool = 0; var_351_object = Obj(); // 0x20df PushV
	var_351_object = var_1_object; // 0x20e0 MovT
	func_11396(var_351_object); // 0x20e1 NEW_2
	if(var_350_bool == 0) goto Label_8421; // 0x20e3 JumpB
	var_342_bool = 1; // 0x20e4 MovB
	
Label_8421:
	if(var_342_bool == 0) goto Label_8428; // 0x20e5 JumpB
	var_356_bool = 0; var_357_object = Obj(); // 0x20e6 PushV
	var_357_object = var_1_object; // 0x20e7 MovT
	func_11336(var_357_object); // 0x20e8 NEW_2
	if(var_356_bool == 0) goto Label_8428; // 0x20ea JumpB
	var_341_bool = 1; // 0x20eb MovB
	
Label_8428:
	if(var_341_bool == 0) goto Label_8434; // 0x20ec JumpB
	var_362_int = 532691; // 0x20ed PushI
	var_363_int = 34166; // 0x20ee PushI
	var_364_int = 34165; // 0x20ef PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x20f0 TObjFunc
	
Label_8434:
	var_365_int = 531960; // 0x20f2 PushI
	var_366_int = -1; // 0x20f3 PushI
	var_367_int = 33364; // 0x20f4 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x20f5 TObjFunc
	return 0; // 0x20f7 Return
	
Label_8440:
	var_368_int = 34166; // 0x20f8 PushI
	var_369_bool = var_74_float == var_368_int; // 0x20f9 Eq
	if(var_369_bool == 0) goto Label_8463; // 0x20fa JumpB
	var_370_string = ""; // 0x20fb PushV
	var_370_string = "Neutral"; // 0x20fc MovS
	func_8176(var_75_int, var_370_string); // 0x20fd NEW_2
	var_371_int = 532692; // 0x20ff PushI
	SetMessage(var_371_int); // 0x2100 TObjFunc
	ClearReplies(); // 0x2102 TObjFunc
	var_372_int = 532693; // 0x2104 PushI
	var_373_int = 34168; // 0x2105 PushI
	var_374_int = 34167; // 0x2106 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x2107 TObjFunc
	var_375_int = 532698; // 0x2109 PushI
	var_376_int = 34168; // 0x210a PushI
	var_377_int = 34172; // 0x210b PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x210c TObjFunc
	return 0; // 0x210e Return
	
Label_8463:
	var_378_int = 34168; // 0x210f PushI
	var_379_bool = var_74_float == var_378_int; // 0x2110 Eq
	if(var_379_bool == 0) goto Label_8491; // 0x2111 JumpB
	var_380_string = ""; // 0x2112 PushV
	var_380_string = "Neutral"; // 0x2113 MovS
	func_8176(var_75_int, var_380_string); // 0x2114 NEW_2
	var_381_int = 532694; // 0x2116 PushI
	SetMessage(var_381_int); // 0x2117 TObjFunc
	ClearReplies(); // 0x2119 TObjFunc
	var_382_int = 532695; // 0x211b PushI
	var_383_int = -1; // 0x211c PushI
	var_384_int = 34169; // 0x211d PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x211e TObjFunc
	var_385_int = 532696; // 0x2120 PushI
	var_386_int = -1; // 0x2121 PushI
	var_387_int = 34170; // 0x2122 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x2123 TObjFunc
	var_388_int = 532697; // 0x2125 PushI
	var_389_int = -1; // 0x2126 PushI
	var_390_int = 34171; // 0x2127 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x2128 TObjFunc
	return 0; // 0x212a Return
	
Label_8491:
	var_391_int = 34175; // 0x212b PushI
	var_392_bool = var_74_float == var_391_int; // 0x212c Eq
	if(var_392_bool == 0) goto Label_8509; // 0x212d JumpB
	var_393_string = ""; // 0x212e PushV
	var_393_string = "Neutral"; // 0x212f MovS
	func_8176(var_75_int, var_393_string); // 0x2130 NEW_2
	var_394_int = 532700; // 0x2132 PushI
	SetMessage(var_394_int); // 0x2133 TObjFunc
	ClearReplies(); // 0x2135 TObjFunc
	var_395_int = 532701; // 0x2137 PushI
	var_396_int = -1; // 0x2138 PushI
	var_397_int = 34176; // 0x2139 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x213a TObjFunc
	return 0; // 0x213c Return
	
Label_8509:
	var_398_int = 33359; // 0x213d PushI
	var_399_bool = var_74_float == var_398_int; // 0x213e Eq
	if(var_399_bool == 0) goto Label_8532; // 0x213f JumpB
	var_400_string = ""; // 0x2140 PushV
	var_400_string = "Sly"; // 0x2141 MovS
	func_8176(var_75_int, var_400_string); // 0x2142 NEW_2
	var_401_int = 531955; // 0x2144 PushI
	SetMessage(var_401_int); // 0x2145 TObjFunc
	ClearReplies(); // 0x2147 TObjFunc
	var_402_int = 533638; // 0x2149 PushI
	var_403_int = 35163; // 0x214a PushI
	var_404_int = 35162; // 0x214b PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x214c TObjFunc
	var_405_int = 533643; // 0x214e PushI
	var_406_int = 35168; // 0x214f PushI
	var_407_int = 35167; // 0x2150 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x2151 TObjFunc
	return 0; // 0x2153 Return
	
Label_8532:
	var_408_int = 35168; // 0x2154 PushI
	var_409_bool = var_74_float == var_408_int; // 0x2155 Eq
	if(var_409_bool == 0) goto Label_8555; // 0x2156 JumpB
	var_410_string = ""; // 0x2157 PushV
	var_410_string = "Sly"; // 0x2158 MovS
	func_8176(var_75_int, var_410_string); // 0x2159 NEW_2
	var_411_int = 533644; // 0x215b PushI
	SetMessage(var_411_int); // 0x215c TObjFunc
	ClearReplies(); // 0x215e TObjFunc
	var_412_int = 533645; // 0x2160 PushI
	var_413_int = 35170; // 0x2161 PushI
	var_414_int = 35169; // 0x2162 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x2163 TObjFunc
	var_415_int = 533647; // 0x2165 PushI
	var_416_int = 35170; // 0x2166 PushI
	var_417_int = 35171; // 0x2167 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x2168 TObjFunc
	return 0; // 0x216a Return
	
Label_8555:
	var_418_int = 35170; // 0x216b PushI
	var_419_bool = var_74_float == var_418_int; // 0x216c Eq
	if(var_419_bool == 0) goto Label_8578; // 0x216d JumpB
	var_420_string = ""; // 0x216e PushV
	var_420_string = "Fear"; // 0x216f MovS
	func_8176(var_75_int, var_420_string); // 0x2170 NEW_2
	var_421_int = 533646; // 0x2172 PushI
	SetMessage(var_421_int); // 0x2173 TObjFunc
	ClearReplies(); // 0x2175 TObjFunc
	var_422_int = 533648; // 0x2177 PushI
	var_423_int = 35165; // 0x2178 PushI
	var_424_int = 35173; // 0x2179 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x217a TObjFunc
	var_425_int = 533649; // 0x217c PushI
	var_426_int = 35165; // 0x217d PushI
	var_427_int = 35174; // 0x217e PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x217f TObjFunc
	return 0; // 0x2181 Return
	
Label_8578:
	var_428_int = 35163; // 0x2182 PushI
	var_429_bool = var_74_float == var_428_int; // 0x2183 Eq
	if(var_429_bool == 0) goto Label_8596; // 0x2184 JumpB
	var_430_string = ""; // 0x2185 PushV
	var_430_string = "Sly"; // 0x2186 MovS
	func_8176(var_75_int, var_430_string); // 0x2187 NEW_2
	var_431_int = 533639; // 0x2189 PushI
	SetMessage(var_431_int); // 0x218a TObjFunc
	ClearReplies(); // 0x218c TObjFunc
	var_432_int = 533640; // 0x218e PushI
	var_433_int = 35165; // 0x218f PushI
	var_434_int = 35164; // 0x2190 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x2191 TObjFunc
	return 0; // 0x2193 Return
	
Label_8596:
	var_435_int = 35165; // 0x2194 PushI
	var_436_bool = var_74_float == var_435_int; // 0x2195 Eq
	if(var_436_bool == 0) goto Label_8619; // 0x2196 JumpB
	var_437_string = ""; // 0x2197 PushV
	var_437_string = "Sly"; // 0x2198 MovS
	func_8176(var_75_int, var_437_string); // 0x2199 NEW_2
	var_438_int = 533641; // 0x219b PushI
	SetMessage(var_438_int); // 0x219c TObjFunc
	ClearReplies(); // 0x219e TObjFunc
	var_439_int = 533642; // 0x21a0 PushI
	var_440_int = 35175; // 0x21a1 PushI
	var_441_int = 35166; // 0x21a2 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x21a3 TObjFunc
	var_442_int = 533655; // 0x21a5 PushI
	var_443_int = 35183; // 0x21a6 PushI
	var_444_int = 35182; // 0x21a7 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x21a8 TObjFunc
	return 0; // 0x21aa Return
	
Label_8619:
	var_445_int = 35183; // 0x21ab PushI
	var_446_bool = var_74_float == var_445_int; // 0x21ac Eq
	if(var_446_bool == 0) goto Label_8642; // 0x21ad JumpB
	var_447_string = ""; // 0x21ae PushV
	var_447_string = "Sly"; // 0x21af MovS
	func_8176(var_75_int, var_447_string); // 0x21b0 NEW_2
	var_448_int = 533656; // 0x21b2 PushI
	SetMessage(var_448_int); // 0x21b3 TObjFunc
	ClearReplies(); // 0x21b5 TObjFunc
	var_449_int = 533657; // 0x21b7 PushI
	var_450_int = 35188; // 0x21b8 PushI
	var_451_int = 35184; // 0x21b9 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x21ba TObjFunc
	var_452_int = 533658; // 0x21bc PushI
	var_453_int = 35177; // 0x21bd PushI
	var_454_int = 35185; // 0x21be PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x21bf TObjFunc
	return 0; // 0x21c1 Return
	
Label_8642:
	var_455_int = 35188; // 0x21c2 PushI
	var_456_bool = var_74_float == var_455_int; // 0x21c3 Eq
	if(var_456_bool == 0) goto Label_8660; // 0x21c4 JumpB
	var_457_string = ""; // 0x21c5 PushV
	var_457_string = "Rage"; // 0x21c6 MovS
	func_8176(var_75_int, var_457_string); // 0x21c7 NEW_2
	var_458_int = 533659; // 0x21c9 PushI
	SetMessage(var_458_int); // 0x21ca TObjFunc
	ClearReplies(); // 0x21cc TObjFunc
	var_459_int = 533660; // 0x21ce PushI
	var_460_int = 35177; // 0x21cf PushI
	var_461_int = 35189; // 0x21d0 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x21d1 TObjFunc
	return 0; // 0x21d3 Return
	
Label_8660:
	var_462_int = 35175; // 0x21d4 PushI
	var_463_bool = var_74_float == var_462_int; // 0x21d5 Eq
	if(var_463_bool == 0) goto Label_8683; // 0x21d6 JumpB
	var_464_string = ""; // 0x21d7 PushV
	var_464_string = "Sly"; // 0x21d8 MovS
	func_8176(var_75_int, var_464_string); // 0x21d9 NEW_2
	var_465_int = 533650; // 0x21db PushI
	SetMessage(var_465_int); // 0x21dc TObjFunc
	ClearReplies(); // 0x21de TObjFunc
	var_466_int = 533651; // 0x21e0 PushI
	var_467_int = 35177; // 0x21e1 PushI
	var_468_int = 35176; // 0x21e2 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x21e3 TObjFunc
	var_469_int = 533654; // 0x21e5 PushI
	var_470_int = 35177; // 0x21e6 PushI
	var_471_int = 35179; // 0x21e7 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x21e8 TObjFunc
	return 0; // 0x21ea Return
	
Label_8683:
	var_472_int = 35177; // 0x21eb PushI
	var_473_bool = var_74_float == var_472_int; // 0x21ec Eq
	if(var_473_bool == 0) goto Label_8701; // 0x21ed JumpB
	var_474_string = ""; // 0x21ee PushV
	var_474_string = "Fear"; // 0x21ef MovS
	func_8176(var_75_int, var_474_string); // 0x21f0 NEW_2
	var_475_int = 533652; // 0x21f2 PushI
	SetMessage(var_475_int); // 0x21f3 TObjFunc
	ClearReplies(); // 0x21f5 TObjFunc
	var_476_int = 533653; // 0x21f7 PushI
	var_477_int = 33361; // 0x21f8 PushI
	var_478_int = 35178; // 0x21f9 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x21fa TObjFunc
	return 0; // 0x21fc Return
	
Label_8701:
	var_479_int = 33361; // 0x21fd PushI
	var_480_bool = var_74_float == var_479_int; // 0x21fe Eq
	if(var_480_bool == 0) goto Label_8729; // 0x21ff JumpB
	var_481_string = ""; // 0x2200 PushV
	var_481_string = "Fear"; // 0x2201 MovS
	func_8176(var_75_int, var_481_string); // 0x2202 NEW_2
	var_482_int = 531957; // 0x2204 PushI
	SetMessage(var_482_int); // 0x2205 TObjFunc
	ClearReplies(); // 0x2207 TObjFunc
	var_483_int = 531959; // 0x2209 PushI
	var_484_int = -1; // 0x220a PushI
	var_485_int = 33363; // 0x220b PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x220c TObjFunc
	var_486_int = 531958; // 0x220e PushI
	var_487_int = -1; // 0x220f PushI
	var_488_int = 33362; // 0x2210 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x2211 TObjFunc
	var_489_int = 533661; // 0x2213 PushI
	var_490_int = -1; // 0x2214 PushI
	var_491_int = 35191; // 0x2215 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x2216 TObjFunc
	return 0; // 0x2218 Return
	
Label_8729:
	var_492_int = 34178; // 0x2219 PushI
	var_493_bool = var_74_float == var_492_int; // 0x221a Eq
	if(var_493_bool == 0) goto Label_8752; // 0x221b JumpB
	var_494_string = ""; // 0x221c PushV
	var_494_string = "Untrust"; // 0x221d MovS
	func_8176(var_75_int, var_494_string); // 0x221e NEW_2
	var_495_int = 532703; // 0x2220 PushI
	SetMessage(var_495_int); // 0x2221 TObjFunc
	ClearReplies(); // 0x2223 TObjFunc
	var_496_int = 532704; // 0x2225 PushI
	var_497_int = 34180; // 0x2226 PushI
	var_498_int = 34179; // 0x2227 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x2228 TObjFunc
	var_499_int = 533589; // 0x222a PushI
	var_500_int = 35104; // 0x222b PushI
	var_501_int = 35107; // 0x222c PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x222d TObjFunc
	return 0; // 0x222f Return
	
Label_8752:
	var_502_int = 34180; // 0x2230 PushI
	var_503_bool = var_74_float == var_502_int; // 0x2231 Eq
	if(var_503_bool == 0) goto Label_8780; // 0x2232 JumpB
	var_504_string = ""; // 0x2233 PushV
	var_504_string = "Untrust"; // 0x2234 MovS
	func_8176(var_75_int, var_504_string); // 0x2235 NEW_2
	var_505_int = 532705; // 0x2237 PushI
	SetMessage(var_505_int); // 0x2238 TObjFunc
	ClearReplies(); // 0x223a TObjFunc
	var_506_int = 532706; // 0x223c PushI
	var_507_int = 34182; // 0x223d PushI
	var_508_int = 34181; // 0x223e PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x223f TObjFunc
	var_509_int = 532712; // 0x2241 PushI
	var_510_int = 34182; // 0x2242 PushI
	var_511_int = 34187; // 0x2243 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x2244 TObjFunc
	var_512_int = 533586; // 0x2246 PushI
	var_513_int = 35104; // 0x2247 PushI
	var_514_int = 35103; // 0x2248 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x2249 TObjFunc
	return 0; // 0x224b Return
	
Label_8780:
	var_515_int = 35104; // 0x224c PushI
	var_516_bool = var_74_float == var_515_int; // 0x224d Eq
	if(var_516_bool == 0) goto Label_8798; // 0x224e JumpB
	var_517_string = ""; // 0x224f PushV
	var_517_string = "Neutral"; // 0x2250 MovS
	func_8176(var_75_int, var_517_string); // 0x2251 NEW_2
	var_518_int = 533587; // 0x2253 PushI
	SetMessage(var_518_int); // 0x2254 TObjFunc
	ClearReplies(); // 0x2256 TObjFunc
	var_519_int = 533588; // 0x2258 PushI
	var_520_int = 34182; // 0x2259 PushI
	var_521_int = 35105; // 0x225a PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x225b TObjFunc
	return 0; // 0x225d Return
	
Label_8798:
	var_522_int = 34182; // 0x225e PushI
	var_523_bool = var_74_float == var_522_int; // 0x225f Eq
	if(var_523_bool == 0) goto Label_8816; // 0x2260 JumpB
	var_524_string = ""; // 0x2261 PushV
	var_524_string = "Neutral"; // 0x2262 MovS
	func_8176(var_75_int, var_524_string); // 0x2263 NEW_2
	var_525_int = 532707; // 0x2265 PushI
	SetMessage(var_525_int); // 0x2266 TObjFunc
	ClearReplies(); // 0x2268 TObjFunc
	var_526_int = 532708; // 0x226a PushI
	var_527_int = 34184; // 0x226b PushI
	var_528_int = 34183; // 0x226c PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x226d TObjFunc
	return 0; // 0x226f Return
	
Label_8816:
	var_529_int = 34184; // 0x2270 PushI
	var_530_bool = var_74_float == var_529_int; // 0x2271 Eq
	if(var_530_bool == 0) goto Label_8839; // 0x2272 JumpB
	var_531_string = ""; // 0x2273 PushV
	var_531_string = "Neutral"; // 0x2274 MovS
	func_8176(var_75_int, var_531_string); // 0x2275 NEW_2
	var_532_int = 532709; // 0x2277 PushI
	SetMessage(var_532_int); // 0x2278 TObjFunc
	ClearReplies(); // 0x227a TObjFunc
	var_533_int = 532710; // 0x227c PushI
	var_534_int = -1; // 0x227d PushI
	var_535_int = 34185; // 0x227e PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x227f TObjFunc
	var_536_int = 532711; // 0x2281 PushI
	var_537_int = -1; // 0x2282 PushI
	var_538_int = 34186; // 0x2283 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x2284 TObjFunc
	return 0; // 0x2286 Return
	
Label_8839:
	var_539_int = 34161; // 0x2287 PushI
	var_540_bool = var_74_float == var_539_int; // 0x2288 Eq
	if(var_540_bool == 0) goto Label_8862; // 0x2289 JumpB
	var_541_string = ""; // 0x228a PushV
	var_541_string = "Neutral"; // 0x228b MovS
	func_8176(var_75_int, var_541_string); // 0x228c NEW_2
	var_542_int = 532688; // 0x228e PushI
	SetMessage(var_542_int); // 0x228f TObjFunc
	ClearReplies(); // 0x2291 TObjFunc
	var_543_int = 532689; // 0x2293 PushI
	var_544_int = 34105; // 0x2294 PushI
	var_545_int = 34162; // 0x2295 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x2296 TObjFunc
	var_546_int = 532690; // 0x2298 PushI
	var_547_int = -1; // 0x2299 PushI
	var_548_int = 34164; // 0x229a PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x229b TObjFunc
	return 0; // 0x229d Return
	
Label_8862:
	var_549_int = 34105; // 0x229e PushI
	var_550_bool = var_74_float == var_549_int; // 0x229f Eq
	if(var_550_bool == 0) goto Label_8890; // 0x22a0 JumpB
	var_551_string = ""; // 0x22a1 PushV
	var_551_string = "Untrust"; // 0x22a2 MovS
	func_8176(var_75_int, var_551_string); // 0x22a3 NEW_2
	var_552_int = 532643; // 0x22a5 PushI
	SetMessage(var_552_int); // 0x22a6 TObjFunc
	ClearReplies(); // 0x22a8 TObjFunc
	var_553_int = 532644; // 0x22aa PushI
	var_554_int = 34107; // 0x22ab PushI
	var_555_int = 34106; // 0x22ac PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x22ad TObjFunc
	var_556_int = 532680; // 0x22af PushI
	var_557_int = 34151; // 0x22b0 PushI
	var_558_int = 34150; // 0x22b1 PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x22b2 TObjFunc
	var_559_int = 532686; // 0x22b4 PushI
	var_560_int = 34151; // 0x22b5 PushI
	var_561_int = 34158; // 0x22b6 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x22b7 TObjFunc
	return 0; // 0x22b9 Return
	
Label_8890:
	var_562_int = 34151; // 0x22ba PushI
	var_563_bool = var_74_float == var_562_int; // 0x22bb Eq
	if(var_563_bool == 0) goto Label_8913; // 0x22bc JumpB
	var_564_string = ""; // 0x22bd PushV
	var_564_string = "Neutral"; // 0x22be MovS
	func_8176(var_75_int, var_564_string); // 0x22bf NEW_2
	var_565_int = 532681; // 0x22c1 PushI
	SetMessage(var_565_int); // 0x22c2 TObjFunc
	ClearReplies(); // 0x22c4 TObjFunc
	var_566_int = 532682; // 0x22c6 PushI
	var_567_int = 34107; // 0x22c7 PushI
	var_568_int = 34152; // 0x22c8 PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x22c9 TObjFunc
	var_569_int = 532683; // 0x22cb PushI
	var_570_int = 34155; // 0x22cc PushI
	var_571_int = 34154; // 0x22cd PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x22ce TObjFunc
	return 0; // 0x22d0 Return
	
Label_8913:
	var_572_int = 34155; // 0x22d1 PushI
	var_573_bool = var_74_float == var_572_int; // 0x22d2 Eq
	if(var_573_bool == 0) goto Label_8931; // 0x22d3 JumpB
	var_574_string = ""; // 0x22d4 PushV
	var_574_string = "Neutral"; // 0x22d5 MovS
	func_8176(var_75_int, var_574_string); // 0x22d6 NEW_2
	var_575_int = 532684; // 0x22d8 PushI
	SetMessage(var_575_int); // 0x22d9 TObjFunc
	ClearReplies(); // 0x22db TObjFunc
	var_576_int = 532685; // 0x22dd PushI
	var_577_int = 34107; // 0x22de PushI
	var_578_int = 34156; // 0x22df PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x22e0 TObjFunc
	return 0; // 0x22e2 Return
	
Label_8931:
	var_579_int = 34107; // 0x22e3 PushI
	var_580_bool = var_74_float == var_579_int; // 0x22e4 Eq
	if(var_580_bool == 0) goto Label_8954; // 0x22e5 JumpB
	var_581_string = ""; // 0x22e6 PushV
	var_581_string = "Neutral"; // 0x22e7 MovS
	func_8176(var_75_int, var_581_string); // 0x22e8 NEW_2
	var_582_int = 532645; // 0x22ea PushI
	SetMessage(var_582_int); // 0x22eb TObjFunc
	ClearReplies(); // 0x22ed TObjFunc
	var_583_int = 532646; // 0x22ef PushI
	var_584_int = 34109; // 0x22f0 PushI
	var_585_int = 34108; // 0x22f1 PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x22f2 TObjFunc
	var_586_int = 532677; // 0x22f4 PushI
	var_587_int = 34147; // 0x22f5 PushI
	var_588_int = 34146; // 0x22f6 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x22f7 TObjFunc
	return 0; // 0x22f9 Return
	
Label_8954:
	var_589_int = 34147; // 0x22fa PushI
	var_590_bool = var_74_float == var_589_int; // 0x22fb Eq
	if(var_590_bool == 0) goto Label_8972; // 0x22fc JumpB
	var_591_string = ""; // 0x22fd PushV
	var_591_string = "Neutral"; // 0x22fe MovS
	func_8176(var_75_int, var_591_string); // 0x22ff NEW_2
	var_592_int = 532678; // 0x2301 PushI
	SetMessage(var_592_int); // 0x2302 TObjFunc
	ClearReplies(); // 0x2304 TObjFunc
	var_593_int = 532679; // 0x2306 PushI
	var_594_int = 34109; // 0x2307 PushI
	var_595_int = 34148; // 0x2308 PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x2309 TObjFunc
	return 0; // 0x230b Return
	
Label_8972:
	var_596_int = 34109; // 0x230c PushI
	var_597_bool = var_74_float == var_596_int; // 0x230d Eq
	if(var_597_bool == 0) goto Label_8995; // 0x230e JumpB
	var_598_string = ""; // 0x230f PushV
	var_598_string = "Neutral"; // 0x2310 MovS
	func_8176(var_75_int, var_598_string); // 0x2311 NEW_2
	var_599_int = 532647; // 0x2313 PushI
	SetMessage(var_599_int); // 0x2314 TObjFunc
	ClearReplies(); // 0x2316 TObjFunc
	var_600_int = 532648; // 0x2318 PushI
	var_601_int = 34111; // 0x2319 PushI
	var_602_int = 34110; // 0x231a PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x231b TObjFunc
	var_603_int = 532674; // 0x231d PushI
	var_604_int = 34143; // 0x231e PushI
	var_605_int = 34142; // 0x231f PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x2320 TObjFunc
	return 0; // 0x2322 Return
	
Label_8995:
	var_606_int = 34143; // 0x2323 PushI
	var_607_bool = var_74_float == var_606_int; // 0x2324 Eq
	if(var_607_bool == 0) goto Label_9013; // 0x2325 JumpB
	var_608_string = ""; // 0x2326 PushV
	var_608_string = "Neutral"; // 0x2327 MovS
	func_8176(var_75_int, var_608_string); // 0x2328 NEW_2
	var_609_int = 532675; // 0x232a PushI
	SetMessage(var_609_int); // 0x232b TObjFunc
	ClearReplies(); // 0x232d TObjFunc
	var_610_int = 532676; // 0x232f PushI
	var_611_int = 34111; // 0x2330 PushI
	var_612_int = 34144; // 0x2331 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x2332 TObjFunc
	return 0; // 0x2334 Return
	
Label_9013:
	var_613_int = 34111; // 0x2335 PushI
	var_614_bool = var_74_float == var_613_int; // 0x2336 Eq
	if(var_614_bool == 0) goto Label_9036; // 0x2337 JumpB
	var_615_string = ""; // 0x2338 PushV
	var_615_string = "Neutral"; // 0x2339 MovS
	func_8176(var_75_int, var_615_string); // 0x233a NEW_2
	var_616_int = 532649; // 0x233c PushI
	SetMessage(var_616_int); // 0x233d TObjFunc
	ClearReplies(); // 0x233f TObjFunc
	var_617_int = 532650; // 0x2341 PushI
	var_618_int = 34113; // 0x2342 PushI
	var_619_int = 34112; // 0x2343 PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x2344 TObjFunc
	var_620_int = 532667; // 0x2346 PushI
	var_621_int = 34133; // 0x2347 PushI
	var_622_int = 34132; // 0x2348 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x2349 TObjFunc
	return 0; // 0x234b Return
	
Label_9036:
	var_623_int = 34133; // 0x234c PushI
	var_624_bool = var_74_float == var_623_int; // 0x234d Eq
	if(var_624_bool == 0) goto Label_9059; // 0x234e JumpB
	var_625_string = ""; // 0x234f PushV
	var_625_string = "Untrust"; // 0x2350 MovS
	func_8176(var_75_int, var_625_string); // 0x2351 NEW_2
	var_626_int = 532668; // 0x2353 PushI
	SetMessage(var_626_int); // 0x2354 TObjFunc
	ClearReplies(); // 0x2356 TObjFunc
	var_627_int = 532669; // 0x2358 PushI
	var_628_int = 34113; // 0x2359 PushI
	var_629_int = 34134; // 0x235a PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0x235b TObjFunc
	var_630_int = 532670; // 0x235d PushI
	var_631_int = 34137; // 0x235e PushI
	var_632_int = 34136; // 0x235f PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x2360 TObjFunc
	return 0; // 0x2362 Return
	
Label_9059:
	var_633_int = 34137; // 0x2363 PushI
	var_634_bool = var_74_float == var_633_int; // 0x2364 Eq
	if(var_634_bool == 0) goto Label_9082; // 0x2365 JumpB
	var_635_string = ""; // 0x2366 PushV
	var_635_string = "Neutral"; // 0x2367 MovS
	func_8176(var_75_int, var_635_string); // 0x2368 NEW_2
	var_636_int = 532671; // 0x236a PushI
	SetMessage(var_636_int); // 0x236b TObjFunc
	ClearReplies(); // 0x236d TObjFunc
	var_637_int = 532672; // 0x236f PushI
	var_638_int = 34113; // 0x2370 PushI
	var_639_int = 34138; // 0x2371 PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x2372 TObjFunc
	var_640_int = 532673; // 0x2374 PushI
	var_641_int = 34113; // 0x2375 PushI
	var_642_int = 34140; // 0x2376 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x2377 TObjFunc
	return 0; // 0x2379 Return
	
Label_9082:
	var_643_int = 34113; // 0x237a PushI
	var_644_bool = var_74_float == var_643_int; // 0x237b Eq
	if(var_644_bool == 0) goto Label_9105; // 0x237c JumpB
	var_645_string = ""; // 0x237d PushV
	var_645_string = "Sly"; // 0x237e MovS
	func_8176(var_75_int, var_645_string); // 0x237f NEW_2
	var_646_int = 532651; // 0x2381 PushI
	SetMessage(var_646_int); // 0x2382 TObjFunc
	ClearReplies(); // 0x2384 TObjFunc
	var_647_int = 532652; // 0x2386 PushI
	var_648_int = 34115; // 0x2387 PushI
	var_649_int = 34114; // 0x2388 PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x2389 TObjFunc
	var_650_int = 532663; // 0x238b PushI
	var_651_int = 34127; // 0x238c PushI
	var_652_int = 34126; // 0x238d PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0x238e TObjFunc
	return 0; // 0x2390 Return
	
Label_9105:
	var_653_int = 34127; // 0x2391 PushI
	var_654_bool = var_74_float == var_653_int; // 0x2392 Eq
	if(var_654_bool == 0) goto Label_9128; // 0x2393 JumpB
	var_655_string = ""; // 0x2394 PushV
	var_655_string = "Untrust"; // 0x2395 MovS
	func_8176(var_75_int, var_655_string); // 0x2396 NEW_2
	var_656_int = 532664; // 0x2398 PushI
	SetMessage(var_656_int); // 0x2399 TObjFunc
	ClearReplies(); // 0x239b TObjFunc
	var_657_int = 532665; // 0x239d PushI
	var_658_int = 34115; // 0x239e PushI
	var_659_int = 34128; // 0x239f PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0x23a0 TObjFunc
	var_660_int = 532666; // 0x23a2 PushI
	var_661_int = 34117; // 0x23a3 PushI
	var_662_int = 34130; // 0x23a4 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0x23a5 TObjFunc
	return 0; // 0x23a7 Return
	
Label_9128:
	var_663_int = 34115; // 0x23a8 PushI
	var_664_bool = var_74_float == var_663_int; // 0x23a9 Eq
	if(var_664_bool == 0) goto Label_9151; // 0x23aa JumpB
	var_665_string = ""; // 0x23ab PushV
	var_665_string = "Untrust"; // 0x23ac MovS
	func_8176(var_75_int, var_665_string); // 0x23ad NEW_2
	var_666_int = 532653; // 0x23af PushI
	SetMessage(var_666_int); // 0x23b0 TObjFunc
	ClearReplies(); // 0x23b2 TObjFunc
	var_667_int = 532654; // 0x23b4 PushI
	var_668_int = 34117; // 0x23b5 PushI
	var_669_int = 34116; // 0x23b6 PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x23b7 TObjFunc
	var_670_int = 532658; // 0x23b9 PushI
	var_671_int = 34121; // 0x23ba PushI
	var_672_int = 34120; // 0x23bb PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0x23bc TObjFunc
	return 0; // 0x23be Return
	
Label_9151:
	var_673_int = 34121; // 0x23bf PushI
	var_674_bool = var_74_float == var_673_int; // 0x23c0 Eq
	if(var_674_bool == 0) goto Label_9174; // 0x23c1 JumpB
	var_675_string = ""; // 0x23c2 PushV
	var_675_string = "Sly"; // 0x23c3 MovS
	func_8176(var_75_int, var_675_string); // 0x23c4 NEW_2
	var_676_int = 532659; // 0x23c6 PushI
	SetMessage(var_676_int); // 0x23c7 TObjFunc
	ClearReplies(); // 0x23c9 TObjFunc
	var_677_int = 532660; // 0x23cb PushI
	var_678_int = 34117; // 0x23cc PushI
	var_679_int = 34122; // 0x23cd PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0x23ce TObjFunc
	var_680_int = 532662; // 0x23d0 PushI
	var_681_int = -1; // 0x23d1 PushI
	var_682_int = 34125; // 0x23d2 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x23d3 TObjFunc
	return 0; // 0x23d5 Return
	
Label_9174:
	var_683_int = 34117; // 0x23d6 PushI
	var_684_bool = var_74_float == var_683_int; // 0x23d7 Eq
	if(var_684_bool == 0) goto Label_9197; // 0x23d8 JumpB
	var_685_string = ""; // 0x23d9 PushV
	var_685_string = "Untrust"; // 0x23da MovS
	func_8176(var_75_int, var_685_string); // 0x23db NEW_2
	var_686_int = 532655; // 0x23dd PushI
	SetMessage(var_686_int); // 0x23de TObjFunc
	ClearReplies(); // 0x23e0 TObjFunc
	var_687_int = 532656; // 0x23e2 PushI
	var_688_int = -1; // 0x23e3 PushI
	var_689_int = 34118; // 0x23e4 PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0x23e5 TObjFunc
	var_690_int = 532657; // 0x23e7 PushI
	var_691_int = -1; // 0x23e8 PushI
	var_692_int = 34119; // 0x23e9 PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x23ea TObjFunc
	return 0; // 0x23ec Return
	
Label_9197:
	var_3_object = 1; // 0x23ed TMovB
	var_693_bool = 0; // 0x23ee PushV
	func_10509(var_693_bool); // 0x23ef NEW_2
	if(var_693_bool == 0) goto Label_9205; // 0x23f1 JumpB
	lshStopAnimation(); // 0x23f2 Func
	goto Label_9207; // 0x23f4 Jump
	
Label_9207:
	return 0; // 0x23f7 Return
	
Label_9205:
	StopAnimation(); // 0x23f5 Func
	
Label_9209:
	return 0; // 0x23f9 Return
}


task_29_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x249c PushI
	if(var_76_int == 0) goto Label_9530; // 0x249d JumpB
	func_10244(); // 0x249f NEW_2
	var_78_int = 37363; // 0x24a1 PushI
	var_79_bool = var_74_float == var_78_int; // 0x24a2 Eq
	if(var_79_bool == 0) goto Label_9400; // 0x24a3 JumpB
	var_80_string = ""; // 0x24a4 PushV
	var_80_string = "Neutral"; // 0x24a5 MovS
	func_9349(var_75_int, var_80_string); // 0x24a6 NEW_2
	var_97_int = 535677; // 0x24a8 PushI
	SetMessage(var_97_int); // 0x24a9 TObjFunc
	ClearReplies(); // 0x24ab TObjFunc
	var_98_int = 535678; // 0x24ad PushI
	var_99_int = 42150; // 0x24ae PushI
	var_100_int = 37364; // 0x24af PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x24b0 TObjFunc
	var_101_int = 540005; // 0x24b2 PushI
	var_102_int = -1; // 0x24b3 PushI
	var_103_int = 41976; // 0x24b4 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x24b5 TObjFunc
	return 0; // 0x24b7 Return
	
Label_9400:
	var_104_int = 42150; // 0x24b8 PushI
	var_105_bool = var_74_float == var_104_int; // 0x24b9 Eq
	if(var_105_bool == 0) goto Label_9423; // 0x24ba JumpB
	var_106_string = ""; // 0x24bb PushV
	var_106_string = "Sly"; // 0x24bc MovS
	func_9349(var_75_int, var_106_string); // 0x24bd NEW_2
	var_107_int = 540173; // 0x24bf PushI
	SetMessage(var_107_int); // 0x24c0 TObjFunc
	ClearReplies(); // 0x24c2 TObjFunc
	var_108_int = 540174; // 0x24c4 PushI
	var_109_int = 42153; // 0x24c5 PushI
	var_110_int = 42151; // 0x24c6 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x24c7 TObjFunc
	var_111_int = 540175; // 0x24c9 PushI
	var_112_int = 42154; // 0x24ca PushI
	var_113_int = 42152; // 0x24cb PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x24cc TObjFunc
	return 0; // 0x24ce Return
	
Label_9423:
	var_114_int = 42154; // 0x24cf PushI
	var_115_bool = var_74_float == var_114_int; // 0x24d0 Eq
	if(var_115_bool == 0) goto Label_9441; // 0x24d1 JumpB
	var_116_string = ""; // 0x24d2 PushV
	var_116_string = "Sly"; // 0x24d3 MovS
	func_9349(var_75_int, var_116_string); // 0x24d4 NEW_2
	var_117_int = 540177; // 0x24d6 PushI
	SetMessage(var_117_int); // 0x24d7 TObjFunc
	ClearReplies(); // 0x24d9 TObjFunc
	var_118_int = 540181; // 0x24db PushI
	var_119_int = 42159; // 0x24dc PushI
	var_120_int = 42158; // 0x24dd PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x24de TObjFunc
	return 0; // 0x24e0 Return
	
Label_9441:
	var_121_int = 42159; // 0x24e1 PushI
	var_122_bool = var_74_float == var_121_int; // 0x24e2 Eq
	if(var_122_bool == 0) goto Label_9459; // 0x24e3 JumpB
	var_123_string = ""; // 0x24e4 PushV
	var_123_string = "Sly"; // 0x24e5 MovS
	func_9349(var_75_int, var_123_string); // 0x24e6 NEW_2
	var_124_int = 540182; // 0x24e8 PushI
	SetMessage(var_124_int); // 0x24e9 TObjFunc
	ClearReplies(); // 0x24eb TObjFunc
	var_125_int = 540183; // 0x24ed PushI
	var_126_int = 42161; // 0x24ee PushI
	var_127_int = 42160; // 0x24ef PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x24f0 TObjFunc
	return 0; // 0x24f2 Return
	
Label_9459:
	var_128_int = 42153; // 0x24f3 PushI
	var_129_bool = var_74_float == var_128_int; // 0x24f4 Eq
	if(var_129_bool == 0) goto Label_9477; // 0x24f5 JumpB
	var_130_string = ""; // 0x24f6 PushV
	var_130_string = "Untrust"; // 0x24f7 MovS
	func_9349(var_75_int, var_130_string); // 0x24f8 NEW_2
	var_131_int = 540176; // 0x24fa PushI
	SetMessage(var_131_int); // 0x24fb TObjFunc
	ClearReplies(); // 0x24fd TObjFunc
	var_132_int = 540178; // 0x24ff PushI
	var_133_int = 42156; // 0x2500 PushI
	var_134_int = 42155; // 0x2501 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x2502 TObjFunc
	return 0; // 0x2504 Return
	
Label_9477:
	var_135_int = 42156; // 0x2505 PushI
	var_136_bool = var_74_float == var_135_int; // 0x2506 Eq
	if(var_136_bool == 0) goto Label_9495; // 0x2507 JumpB
	var_137_string = ""; // 0x2508 PushV
	var_137_string = "Untrust"; // 0x2509 MovS
	func_9349(var_75_int, var_137_string); // 0x250a NEW_2
	var_138_int = 540179; // 0x250c PushI
	SetMessage(var_138_int); // 0x250d TObjFunc
	ClearReplies(); // 0x250f TObjFunc
	var_139_int = 540180; // 0x2511 PushI
	var_140_int = 42161; // 0x2512 PushI
	var_141_int = 42157; // 0x2513 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x2514 TObjFunc
	return 0; // 0x2516 Return
	
Label_9495:
	var_142_int = 42161; // 0x2517 PushI
	var_143_bool = var_74_float == var_142_int; // 0x2518 Eq
	if(var_143_bool == 0) goto Label_9518; // 0x2519 JumpB
	var_144_string = ""; // 0x251a PushV
	var_144_string = "Untrust"; // 0x251b MovS
	func_9349(var_75_int, var_144_string); // 0x251c NEW_2
	var_145_int = 540184; // 0x251e PushI
	SetMessage(var_145_int); // 0x251f TObjFunc
	ClearReplies(); // 0x2521 TObjFunc
	var_146_int = 540185; // 0x2523 PushI
	var_147_int = -1; // 0x2524 PushI
	var_148_int = 42163; // 0x2525 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x2526 TObjFunc
	var_149_int = 540186; // 0x2528 PushI
	var_150_int = -1; // 0x2529 PushI
	var_151_int = 42164; // 0x252a PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x252b TObjFunc
	return 0; // 0x252d Return
	
Label_9518:
	var_3_object = 1; // 0x252e TMovB
	var_152_bool = 0; // 0x252f PushV
	func_10509(var_152_bool); // 0x2530 NEW_2
	if(var_152_bool == 0) goto Label_9526; // 0x2532 JumpB
	lshStopAnimation(); // 0x2533 Func
	goto Label_9528; // 0x2535 Jump
	
Label_9528:
	return 0; // 0x2538 Return
	
Label_9526:
	StopAnimation(); // 0x2536 Func
	
Label_9530:
	return 0; // 0x253a Return
}


task_31_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_int, var_72_int, var_73_float, var_74_float, var_75_int)
{
	var_76_int = 1; // 0x25dd PushI
	if(var_76_int == 0) goto Label_9733; // 0x25de JumpB
	func_10244(); // 0x25e0 NEW_2
	var_78_int = 42551; // 0x25e2 PushI
	var_79_bool = var_74_float == var_78_int; // 0x25e3 Eq
	if(var_79_bool == 0) goto Label_9721; // 0x25e4 JumpB
	var_80_string = ""; // 0x25e5 PushV
	var_80_string = "Neutral"; // 0x25e6 MovS
	func_9670(var_75_int, var_80_string); // 0x25e7 NEW_2
	var_97_int = 540542; // 0x25e9 PushI
	SetMessage(var_97_int); // 0x25ea TObjFunc
	ClearReplies(); // 0x25ec TObjFunc
	var_98_int = 540543; // 0x25ee PushI
	var_99_int = -1; // 0x25ef PushI
	var_100_int = 42552; // 0x25f0 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x25f1 TObjFunc
	var_101_int = 540796; // 0x25f3 PushI
	var_102_int = -1; // 0x25f4 PushI
	var_103_int = 42845; // 0x25f5 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x25f6 TObjFunc
	return 0; // 0x25f8 Return
	
Label_9721:
	var_3_object = 1; // 0x25f9 TMovB
	var_104_bool = 0; // 0x25fa PushV
	func_10509(var_104_bool); // 0x25fb NEW_2
	if(var_104_bool == 0) goto Label_9729; // 0x25fd JumpB
	lshStopAnimation(); // 0x25fe Func
	goto Label_9731; // 0x2600 Jump
	
Label_9731:
	return 0; // 0x2603 Return
	
Label_9729:
	StopAnimation(); // 0x2601 Func
	
Label_9733:
	return 0; // 0x2605 Return
}


task_32_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	func_10500(); // 0x2684 NEW_2
	TaskCall(0); // 0x2687 TaskCall
	func_0(); // 0x2688 NEW_2
	TaskReturn(); // 0x2689 TaskReturn
	return 0; // 0x268b Return
}


task_32_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int, var_74_object)
{
	var_75_bool = 0; var_76_bool = 0; // 0x268c PushV
	IsOverrideActive(var_76_bool); // 0x268d Func
	var_77_bool = var_76_bool == 0; // 0x268f Not
	if(var_77_bool == 0) goto Label_9883; // 0x2690 JumpB
	EventDisable(0); // 0x2691 EventDisable
	var_78_bool = 0; var_79_object = Obj(); // 0x2692 PushV
	var_79_object = var_74_object; // 0x2693 Mov
	func_9948(var_79_object); // 0x2694 NEW_2
	EventEnable(0); // 0x2696 EventEnable
	var_92_object = Obj(); // 0x2697 PushV
	var_92_object = var_74_object; // 0x2698 Mov
	func_12329(var_92_object); // 0x2699 NEW_2
	
Label_9883:
	return 2; // 0x269b Return
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	return 0; // 0x2904 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	var_74_bool = GlobalVars[2]; // 0x2606 PushGE
	var_74_bool = 0; // 0x2607 MovB
	GlobalVars[2] = var_74_bool; // 0x2608 PopGE
	func_9741(var_71_float, var_72_float, var_73_int); // 0x260a NEW_2
	return 0; // 0x260c Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_116_bool = 0; // 0x2 PushV
	func_9968(var_116_bool); // 0x3 NEW_2
	var_117_bool = var_116_bool == 0; // 0x5 Not
	if(var_117_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_10754(var_273_object)
{
	var_275_string = "lens is given"; // 0x2a03 PushS
	Trace(var_275_string); // 0x2a04 Func
	var_276_object = Obj(); var_277_string = ""; var_278_int = 0; // 0x2a06 PushV
	var_276_object = var_273_object; // 0x2a07 Mov
	var_277_string = "lens"; // 0x2a08 MovS
	var_278_int = 1; // 0x2a09 MovI
	func_10373(var_276_object, var_277_string, var_278_int); // 0x2a0a NEW_2
	return 0; // 0x2a0c Return
}


func_10244()
{
	var_77_bool = 0; // 0x2804 PushV
	func_10509(var_77_bool); // 0x2805 NEW_2
	if(var_77_bool == 0) goto Label_10250; // 0x2807 JumpB
	lshStopSpeech(); // 0x2808 Func
	
Label_10250:
	return 0; // 0x280a Return
}


func_11780(var_1202_bool)
{
	var_1204_int = 0; var_1205_string = ""; // 0x2e05 PushV
	var_1205_string = "d8q01MladVladIsBad"; // 0x2e06 MovS
	func_10296(var_1204_int, var_1205_string); // 0x2e07 NEW_2
	var_1206_int = 1; // 0x2e09 PushI
	var_1207_bool = var_1204_int == var_1206_int; // 0x2e0a Eq
	if(var_1207_bool == 0) goto Label_11790; // 0x2e0b JumpB
	var_1202_bool = 1; // 0x2e0c MovB
	return 0; // 0x2e0d Return
	
Label_11790:
	var_1202_bool = 0; // 0x2e0e MovB
	return 0; // 0x2e0f Return
}


func_10251(var_169_object)
{
	var_170_object = Obj(); var_171_object = Obj(); // 0x280b PushV
	self(var_171_object); // 0x280c Func
	var_169_object = var_171_object; // 0x280e Mov
	return 2; // 0x280f Return
}


func_10765()
{
	var_275_string = "KnowPochka"; // 0x2a0e PushS
	var_276_int = 1; // 0x2a0f PushI
	SetVariable(var_275_string, var_276_int); // 0x2a10 Func
	return 0; // 0x2a12 Return
}


func_9741(var_0_bool, var_1_object, var_2_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_bool = 0; var_88_int = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_cvector = CVector(0,0,0); // 0x260d PushV
	var_97_bool = 1; // 0x260e PushB
	SensePlayerOnly(var_97_bool); // 0x260f Func
	func_9829(); // 0x2612 NEW_2
	GetScene(var_86_object); // 0x2614 Func
	var_2_object = 0; // 0x2616 TMovI
	
Label_9751:
	var_102_string = ""; var_103_int = 0; // 0x2617 PushV
	var_103_int = var_2_object; // 0x2618 MovT
	func_10487(var_102_string, var_103_int); // 0x2619 NEW_2
	GetLocator(var_102_string, var_87_bool); // 0x261b ObjFunc
	var_111_bool = var_87_bool == 0; // 0x261d Not
	if(var_111_bool == 0) goto Label_9760; // 0x261e JumpB
	goto Label_9763; // 0x261f Jump
	
Label_9763:
	var_112_bool = 0; // 0x2623 PushV
	func_9968(var_112_bool); // 0x2624 NEW_2
	var_115_bool = var_112_bool == 0; // 0x2626 Not
	if(var_115_bool == 0) goto Label_9773; // 0x2627 JumpB
	TaskCall(0); // 0x2629 TaskCall
	func_0(); // 0x262a NEW_2
	TaskReturn(); // 0x262b TaskReturn
	
Label_9773:
	func_9837(var_95_bool, var_96_cvector); // 0x262e NEW_2
	
Label_9776:
	irand(var_88_int, var_95_bool); // 0x2630 Func
	var_136_string = ""; var_137_int = 0; // 0x2632 PushV
	var_137_int = var_88_int; // 0x2633 Mov
	func_10487(var_136_string, var_137_int); // 0x2634 NEW_2
	GetLocator(var_136_string, var_89_bool, var_90_cvector, var_91_cvector); // 0x2636 ObjFunc
	var_138_cvector = CVector(0,0,0); // 0x2638 PushV
	func_9884(var_138_cvector); // 0x2639 NEW_2
	var_92_cvector = var_90_cvector - var_138_cvector; // 0x263b Sub2
	var_141_float = 0; var_142_cvector = CVector(0,0,0); // 0x263c PushV
	var_142_cvector = var_92_cvector; // 0x263d Mov
	func_10286(var_141_float, var_142_cvector); // 0x263e NEW_2
	var_150_bool = var_141_float > var_1_object; // 0x2640 GT
	if(var_150_bool == 0) goto Label_9823; // 0x2641 JumpB
	GetHeight(var_93_float); // 0x2642 Func
	var_94_cvector = var_90_cvector; // 0x2644 Mov
	var_151_float = GetByIndex(var_94_cvector, 1); // 0x2645 PushE
	var_151_float = var_151_float + var_93_float; // 0x2646 Add2
	SetByIndex(var_94_cvector, 1) = var_151_float; // 0x2647 PopE
	CanReachByPF(var_95_bool, var_94_cvector); // 0x2648 Func
	var_152_bool = var_95_bool; // 0x264a Push
	if(var_152_bool == 0) goto Label_9823; // 0x264b JumpB
	var_153_int = var_92_cvector | var_92_cvector; // 0x264c Or
	var_154_float = sqrt(var_153_int); // 0x264d Sqrt
	var_155_float = var_0_bool / var_154_float; // 0x264e Div
	var_156_float = var_92_cvector * var_155_float; // 0x264f Mult
	var_96_cvector = var_90_cvector - var_156_float; // 0x2650 Sub2
	var_157_bool = 0; var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); // 0x2651 PushV
	var_158_cvector = var_96_cvector; // 0x2652 Mov
	var_159_cvector = var_91_cvector; // 0x2653 Mov
	TaskCall(1); // 0x2654 TaskCall
	func_13(var_160_bool, var_157_bool, var_158_cvector, var_159_cvector); // 0x2655 NEW_2
	TaskReturn(); // 0x2656 TaskReturn
	if(var_160_bool == 0) goto Label_9823; // 0x2658 JumpB
	var_184_int = 0; // 0x2659 PushV
	var_184_int = var_88_int; // 0x265a Mov
	TaskCall(3); // 0x265b TaskCall
	func_198(var_184_int); // 0x265c NEW_2
	TaskReturn(); // 0x265d TaskReturn
	
Label_9823:
	var_237_int = 1; // 0x265f PushI
	Sleep(var_237_int); // 0x2660 Func
	goto Label_9776; // 0x2662 Jump
	
Label_9760:
	var_238_int = 1; // 0x2620 PushI
	var_2_object = var_2_object + var_238_int; // 0x2621 Add2
	goto Label_9751; // 0x2622 Jump
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
	func_9938(var_165_bool, var_166_cvector); // 0x15 NEW_2
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


func_11792(var_1196_bool)
{
	var_1198_int = 0; var_1199_string = ""; // 0x2e11 PushV
	var_1199_string = "ood8MladVlad1"; // 0x2e12 MovS
	func_10296(var_1198_int, var_1199_string); // 0x2e13 NEW_2
	var_1200_int = 0; // 0x2e15 PushI
	var_1201_bool = var_1198_int == var_1200_int; // 0x2e16 Eq
	if(var_1201_bool == 0) goto Label_11802; // 0x2e17 JumpB
	var_1196_bool = 1; // 0x2e18 MovB
	return 0; // 0x2e19 Return
	
Label_11802:
	var_1196_bool = 0; // 0x2e1a MovB
	return 0; // 0x2e1b Return
}


func_10257(var_133_cvector, var_134_cvector)
{
	var_136_float = 0; var_137_float = 0; // 0x2811 PushV
	var_138_int = var_134_cvector | var_134_cvector; // 0x2812 Or
	var_137_float = sqrt(var_138_int); // 0x2813 Sqrt2
	var_139_float = 0.0; // 0x2814 PushF
	var_140_bool = var_137_float < var_139_float; // 0x2815 LT
	if(var_140_bool == 0) goto Label_10265; // 0x2816 JumpB
	var_133_cvector = CVector(0.0, 0.0, 0.0); // 0x2817 MovV
	return 2; // 0x2818 Return
	
Label_10265:
	var_133_cvector = var_134_cvector / var_134_cvector; // 0x2819 Div2
	return 2; // 0x281a Return
}


func_10771()
{
	var_129_string = "ood2MladVlad1"; // 0x2a14 PushS
	var_130_int = 1; // 0x2a15 PushI
	SetVariable(var_129_string, var_130_int); // 0x2a16 Func
	return 0; // 0x2a18 Return
}


func_6677(var_0_bool, var_1057_int, var_1058_object)
{
	var_1060_object = Obj(); var_1061_bool = 0; var_1062_int = 0; var_1063_bool = 0; var_1064_object = Obj(); var_1065_bool = 0; var_1066_int = 0; var_1067_bool = 0; // 0x1a15 PushV
	var_0_bool = var_1058_object; // 0x1a16 TMov
	var_1068_bool = 0; var_1069_object = Obj(); var_1070_float = 0; // 0x1a17 PushV
	var_1069_object = var_1058_object; // 0x1a18 Mov
	var_1070_float = 70.0; // 0x1a19 MovF
	func_9973(var_1069_object, var_1070_float); // 0x1a1a NEW_2
	var_1071_bool = var_1068_bool == 0; // 0x1a1c Not
	if(var_1071_bool == 0) goto Label_6688; // 0x1a1d JumpB
	var_1057_int = -2; // 0x1a1e MovI
	return 8; // 0x1a1f Return
	
Label_6688:
	CreateDialog(var_1064_object); // 0x1a20 Func
	var_1072_int = 0; // 0x1a22 PushV
	func_10503(var_1072_int); // 0x1a23 NEW_2
	SetNPCName(var_1072_int); // 0x1a25 ObjFunc
	var_1073_int = 0; // 0x1a27 PushV
	func_10501(var_1073_int); // 0x1a28 NEW_2
	SetNPCDescription(var_1073_int); // 0x1a2a ObjFunc
	var_1074_string = ""; // 0x1a2c PushV
	func_10505(var_1074_string); // 0x1a2d NEW_2
	SetPhoto(var_1074_string); // 0x1a2f ObjFunc
	var_1075_string = ""; // 0x1a31 PushV
	func_10507(var_1075_string); // 0x1a32 NEW_2
	SetPhoto2(var_1075_string); // 0x1a34 ObjFunc
	var_1076_int = 0; // 0x1a36 PushV
	func_12312(var_1076_int); // 0x1a37 NEW_2
	SetPlayerName(var_1076_int); // 0x1a39 ObjFunc
	var_1066_int = -1; // 0x1a3b MovI
	IsOverrideActive(var_1065_bool); // 0x1a3c Func
	var_1077_bool = var_1065_bool; // 0x1a3e Push
	if(var_1077_bool == 0) goto Label_6722; // 0x1a3f JumpB
	var_1057_int = -2; // 0x1a40 MovI
	return 8; // 0x1a41 Return
	
Label_6722:
	DoDialog(var_1064_object); // 0x1a42 Func
	var_1078_bool = 0; var_1079_object = Obj(); // 0x1a44 PushV
	var_1080_object = Obj(); // 0x1a45 PushV
	func_10251(var_1080_object); // 0x1a46 NEW_2
	var_1079_object = var_1080_object; // 0x1a47 Mov
	func_10060(var_1078_bool, var_1079_object); // 0x1a49 NEW_2
	var_1081_object = Obj(); var_1082_object = Obj(); // 0x1a4b PushV
	var_1081_object = var_1058_object; // 0x1a4c Mov
	var_1082_object = var_1064_object; // 0x1a4d Mov
	TaskCall(19); // 0x1a4e TaskCall
	func_6758(var_1083_object, var_1084_object, var_1085_string, var_1086_bool, var_1081_object, var_1082_object); // 0x1a4f NEW_2
	TaskReturn(); // 0x1a50 TaskReturn
	IsDialogEnd(var_1067_bool); // 0x1a52 ObjFunc
	
Label_6740:
	var_1114_bool = var_1067_bool == 0; // 0x1a54 Not
	if(var_1114_bool == 0) goto Label_6747; // 0x1a55 JumpB
	sync(); // 0x1a56 Func
	IsDialogEnd(var_1067_bool); // 0x1a58 ObjFunc
	goto Label_6740; // 0x1a5a Jump
	
Label_6747:
	var_1115_object = Obj(); // 0x1a5b PushV
	var_1115_object = var_1058_object; // 0x1a5c Mov
	func_10042(); // 0x1a5d NEW_2
	StopDialog(var_1064_object); // 0x1a5f Func
	GetReturnValue(var_1066_int); // 0x1a61 ObjFunc
	var_1057_int = var_1066_int; // 0x1a63 Mov
	return 8; // 0x1a64 Return
}


func_12312(var_158_int)
{
	var_159_int = 0; var_160_int = 0; // 0x3018 PushV
	var_161_string = "branch"; // 0x3019 PushS
	GetVariable(var_161_string, var_160_int); // 0x301a Func
	var_162_int = 0; // 0x301c PushI
	var_163_bool = var_160_int == var_162_int; // 0x301d Eq
	if(var_163_bool == 0) goto Label_12322; // 0x301e JumpB
	var_158_int = 1; // 0x301f MovI
	return 2; // 0x3020 Return
	
Label_12322:
	var_164_int = 1; // 0x3022 PushI
	var_165_bool = var_160_int == var_164_int; // 0x3023 Eq
	if(var_165_bool == 0) goto Label_12327; // 0x3024 JumpB
	var_158_int = 2; // 0x3025 MovI
	return 2; // 0x3026 Return
	
Label_12327:
	var_158_int = 3; // 0x3027 MovI
	return 2; // 0x3028 Return
}


func_10777()
{
	var_82_string = "ood2MladVlad2"; // 0x2a1a PushS
	var_83_int = 1; // 0x2a1b PushI
	SetVariable(var_82_string, var_83_int); // 0x2a1c Func
	return 0; // 0x2a1e Return
}


func_7194(var_0_bool, var_1370_int, var_1371_object)
{
	var_1373_object = Obj(); var_1374_bool = 0; var_1375_int = 0; var_1376_bool = 0; var_1377_object = Obj(); var_1378_bool = 0; var_1379_int = 0; var_1380_bool = 0; // 0x1c1a PushV
	var_0_bool = var_1371_object; // 0x1c1b TMov
	var_1381_bool = 0; var_1382_object = Obj(); var_1383_float = 0; // 0x1c1c PushV
	var_1382_object = var_1371_object; // 0x1c1d Mov
	var_1383_float = 70.0; // 0x1c1e MovF
	func_9973(var_1382_object, var_1383_float); // 0x1c1f NEW_2
	var_1384_bool = var_1381_bool == 0; // 0x1c21 Not
	if(var_1384_bool == 0) goto Label_7205; // 0x1c22 JumpB
	var_1370_int = -2; // 0x1c23 MovI
	return 8; // 0x1c24 Return
	
Label_7205:
	CreateDialog(var_1377_object); // 0x1c25 Func
	var_1385_int = 0; // 0x1c27 PushV
	func_10503(var_1385_int); // 0x1c28 NEW_2
	SetNPCName(var_1385_int); // 0x1c2a ObjFunc
	var_1386_int = 0; // 0x1c2c PushV
	func_10501(var_1386_int); // 0x1c2d NEW_2
	SetNPCDescription(var_1386_int); // 0x1c2f ObjFunc
	var_1387_string = ""; // 0x1c31 PushV
	func_10505(var_1387_string); // 0x1c32 NEW_2
	SetPhoto(var_1387_string); // 0x1c34 ObjFunc
	var_1388_string = ""; // 0x1c36 PushV
	func_10507(var_1388_string); // 0x1c37 NEW_2
	SetPhoto2(var_1388_string); // 0x1c39 ObjFunc
	var_1389_int = 0; // 0x1c3b PushV
	func_12312(var_1389_int); // 0x1c3c NEW_2
	SetPlayerName(var_1389_int); // 0x1c3e ObjFunc
	var_1379_int = -1; // 0x1c40 MovI
	IsOverrideActive(var_1378_bool); // 0x1c41 Func
	var_1390_bool = var_1378_bool; // 0x1c43 Push
	if(var_1390_bool == 0) goto Label_7239; // 0x1c44 JumpB
	var_1370_int = -2; // 0x1c45 MovI
	return 8; // 0x1c46 Return
	
Label_7239:
	DoDialog(var_1377_object); // 0x1c47 Func
	var_1391_bool = 0; var_1392_object = Obj(); // 0x1c49 PushV
	var_1393_object = Obj(); // 0x1c4a PushV
	func_10251(var_1393_object); // 0x1c4b NEW_2
	var_1392_object = var_1393_object; // 0x1c4c Mov
	func_10060(var_1391_bool, var_1392_object); // 0x1c4e NEW_2
	var_1394_object = Obj(); var_1395_object = Obj(); // 0x1c50 PushV
	var_1394_object = var_1371_object; // 0x1c51 Mov
	var_1395_object = var_1377_object; // 0x1c52 Mov
	TaskCall(23); // 0x1c53 TaskCall
	func_7275(var_1396_object, var_1397_object, var_1398_string, var_1399_bool, var_1394_object, var_1395_object); // 0x1c54 NEW_2
	TaskReturn(); // 0x1c55 TaskReturn
	IsDialogEnd(var_1380_bool); // 0x1c57 ObjFunc
	
Label_7257:
	var_1427_bool = var_1380_bool == 0; // 0x1c59 Not
	if(var_1427_bool == 0) goto Label_7264; // 0x1c5a JumpB
	sync(); // 0x1c5b Func
	IsDialogEnd(var_1380_bool); // 0x1c5d ObjFunc
	goto Label_7257; // 0x1c5f Jump
	
Label_7264:
	var_1428_object = Obj(); // 0x1c60 PushV
	var_1428_object = var_1371_object; // 0x1c61 Mov
	func_10042(); // 0x1c62 NEW_2
	StopDialog(var_1377_object); // 0x1c64 Func
	GetReturnValue(var_1379_int); // 0x1c66 ObjFunc
	var_1370_int = var_1379_int; // 0x1c68 Mov
	return 8; // 0x1c69 Return
}


func_10267(var_130_float, var_131_float)
{
	var_133_int = 0; // 0x281c PushI
	var_134_bool = var_131_float < var_133_int; // 0x281d LT
	if(var_134_bool == 0) goto Label_10273; // 0x281e JumpB
	var_130_float = -var_131_float; // 0x281f Neg2
	goto Label_10274; // 0x2820 Jump
	
Label_10274:
	return 0; // 0x2822 Return
	
Label_10273:
	var_130_float = var_131_float; // 0x2821 Mov
}


func_11804(var_1215_bool)
{
	var_1217_int = 0; var_1218_string = ""; // 0x2e1d PushV
	var_1218_string = "ood8MladVlad2"; // 0x2e1e MovS
	func_10296(var_1217_int, var_1218_string); // 0x2e1f NEW_2
	var_1219_int = 0; // 0x2e21 PushI
	var_1220_bool = var_1217_int == var_1219_int; // 0x2e22 Eq
	if(var_1220_bool == 0) goto Label_11814; // 0x2e23 JumpB
	var_1215_bool = 1; // 0x2e24 MovB
	return 0; // 0x2e25 Return
	
Label_11814:
	var_1215_bool = 0; // 0x2e26 MovB
	return 0; // 0x2e27 Return
}


func_11293()
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x2c1d PushV
	var_137_object = Obj(); // 0x2c1e PushV
	func_12262(var_137_object); // 0x2c1f NEW_2
	var_136_object = var_137_object; // 0x2c20 Mov
	var_144_string = "d8q01MladVladgotoOspina"; // 0x2c22 PushS
	var_145_string = "pt_map_ospina"; // 0x2c23 PushS
	var_146_int = 1; // 0x2c24 PushI
	var_147_int = 515320; // 0x2c25 PushI
	var_148_float = 0; // 0x2c26 PushV
	func_10443(var_148_float); // 0x2c27 NEW_2
	AddMark(var_144_string, var_145_string, var_146_int, var_147_int, var_148_float); // 0x2c29 ObjFunc
	func_12169(); // 0x2c2c NEW_2
	return 2; // 0x2c2e Return
}


func_10783()
{
	var_358_object = Obj(); var_359_string = ""; var_360_float = 0; // 0x2a20 PushV
	var_361_object = Obj(); // 0x2a21 PushV
	func_12262(var_361_object); // 0x2a22 NEW_2
	var_358_object = var_361_object; // 0x2a23 Mov
	var_359_string = "pt_map_theater"; // 0x2a25 MovS
	var_360_float = 2; // 0x2a26 MovI
	func_12279(var_358_object, var_359_string, var_360_float); // 0x2a27 NEW_2
	var_362_object = Obj(); // 0x2a29 PushV
	func_12262(var_362_object); // 0x2a2a NEW_2
	ShowMap(var_362_object); // 0x2a2c ObjFunc
	return 0; // 0x2a2e Return
}


func_10275(var_227_float, var_228_float, var_229_float, var_230_float)
{
	var_231_bool = var_228_float < var_229_float; // 0x2824 LT
	if(var_231_bool == 0) goto Label_10280; // 0x2825 JumpB
	var_227_float = var_229_float; // 0x2826 Mov
	return 0; // 0x2827 Return
	
Label_10280:
	var_232_bool = var_228_float > var_230_float; // 0x2828 GT
	if(var_232_bool == 0) goto Label_10284; // 0x2829 JumpB
	var_227_float = var_230_float; // 0x282a Mov
	return 0; // 0x282b Return
	
Label_10284:
	var_227_float = var_228_float; // 0x282c Mov
	return 0; // 0x282d Return
}


func_11816(var_1227_bool)
{
	var_1229_int = 0; var_1230_string = ""; // 0x2e29 PushV
	var_1230_string = "d8q01BringBadBoy"; // 0x2e2a MovS
	func_10296(var_1229_int, var_1230_string); // 0x2e2b NEW_2
	var_1231_int = 1; // 0x2e2d PushI
	var_1232_bool = var_1229_int == var_1231_int; // 0x2e2e Eq
	if(var_1232_bool == 0) goto Label_11826; // 0x2e2f JumpB
	var_1227_bool = 1; // 0x2e30 MovB
	return 0; // 0x2e31 Return
	
Label_11826:
	var_1227_bool = 0; // 0x2e32 MovB
	return 0; // 0x2e33 Return
}


func_12329(var_92_object)
{
	var_93_bool = GlobalVars[2]; // 0x302a PushGE
	var_94_bool = var_93_bool == 0; // 0x302b Not
	if(var_94_bool == 0) goto Label_12342; // 0x302c JumpB
	var_95_int = 0; var_96_object = Obj(); // 0x302d PushV
	var_96_object = var_92_object; // 0x302e Mov
	TaskCall(4); // 0x302f TaskCall
	func_282(var_97_object, var_95_int, var_96_object); // 0x3030 NEW_2
	TaskReturn(); // 0x3031 TaskReturn
	var_325_bool = GlobalVars[2]; // 0x3033 PushGE
	var_325_bool = 1; // 0x3034 MovB
	GlobalVars[2] = var_325_bool; // 0x3035 PopGE
	
Label_12342:
	var_326_bool = 0; var_327_int = 0; // 0x3036 PushV
	var_327_int = 1; // 0x3037 MovI
	func_10457(var_326_bool, var_327_int); // 0x3038 NEW_2
	if(var_326_bool == 0) goto Label_12354; // 0x303a JumpB
	var_329_int = 0; var_330_object = Obj(); // 0x303b PushV
	var_330_object = var_92_object; // 0x303c Mov
	TaskCall(26); // 0x303d TaskCall
	func_7916(var_331_object, var_329_int, var_330_object); // 0x303e NEW_2
	TaskReturn(); // 0x303f TaskReturn
	return 0; // 0x3041 Return
	
Label_12354:
	var_480_bool = 0; var_481_int = 0; // 0x3042 PushV
	var_481_int = 2; // 0x3043 MovI
	func_10457(var_480_bool, var_481_int); // 0x3044 NEW_2
	if(var_480_bool == 0) goto Label_12366; // 0x3046 JumpB
	var_482_int = 0; var_483_object = Obj(); // 0x3047 PushV
	var_483_object = var_92_object; // 0x3048 Mov
	TaskCall(6); // 0x3049 TaskCall
	func_564(var_484_object, var_482_int, var_483_object); // 0x304a NEW_2
	TaskReturn(); // 0x304b TaskReturn
	return 0; // 0x304d Return
	
Label_12366:
	var_560_bool = 0; var_561_int = 0; // 0x304e PushV
	var_561_int = 3; // 0x304f MovI
	func_10457(var_560_bool, var_561_int); // 0x3050 NEW_2
	if(var_560_bool == 0) goto Label_12378; // 0x3052 JumpB
	var_562_int = 0; var_563_object = Obj(); // 0x3053 PushV
	var_563_object = var_92_object; // 0x3054 Mov
	TaskCall(8); // 0x3055 TaskCall
	func_1092(var_564_object, var_562_int, var_563_object); // 0x3056 NEW_2
	TaskReturn(); // 0x3057 TaskReturn
	return 0; // 0x3059 Return
	
Label_12378:
	var_690_bool = 0; var_691_int = 0; // 0x305a PushV
	var_691_int = 4; // 0x305b MovI
	func_10457(var_690_bool, var_691_int); // 0x305c NEW_2
	if(var_690_bool == 0) goto Label_12390; // 0x305e JumpB
	var_692_int = 0; var_693_object = Obj(); // 0x305f PushV
	var_693_object = var_92_object; // 0x3060 Mov
	TaskCall(10); // 0x3061 TaskCall
	func_2119(var_694_object, var_692_int, var_693_object); // 0x3062 NEW_2
	TaskReturn(); // 0x3063 TaskReturn
	return 0; // 0x3065 Return
	
Label_12390:
	var_802_bool = 0; var_803_int = 0; // 0x3066 PushV
	var_803_int = 5; // 0x3067 MovI
	func_10457(var_802_bool, var_803_int); // 0x3068 NEW_2
	if(var_802_bool == 0) goto Label_12402; // 0x306a JumpB
	var_804_int = 0; var_805_object = Obj(); // 0x306b PushV
	var_805_object = var_92_object; // 0x306c Mov
	TaskCall(12); // 0x306d TaskCall
	func_3298(var_806_object, var_804_int, var_805_object); // 0x306e NEW_2
	TaskReturn(); // 0x306f TaskReturn
	return 0; // 0x3071 Return
	
Label_12402:
	var_935_bool = 0; var_936_int = 0; // 0x3072 PushV
	var_936_int = 6; // 0x3073 MovI
	func_10457(var_935_bool, var_936_int); // 0x3074 NEW_2
	if(var_935_bool == 0) goto Label_12414; // 0x3076 JumpB
	var_937_int = 0; var_938_object = Obj(); // 0x3077 PushV
	var_938_object = var_92_object; // 0x3078 Mov
	TaskCall(14); // 0x3079 TaskCall
	func_4061(var_939_object, var_937_int, var_938_object); // 0x307a NEW_2
	TaskReturn(); // 0x307b TaskReturn
	return 0; // 0x307d Return
	
Label_12414:
	var_1055_bool = 0; var_1056_int = 0; // 0x307e PushV
	var_1056_int = 7; // 0x307f MovI
	func_10457(var_1055_bool, var_1056_int); // 0x3080 NEW_2
	if(var_1055_bool == 0) goto Label_12426; // 0x3082 JumpB
	var_1057_int = 0; var_1058_object = Obj(); // 0x3083 PushV
	var_1058_object = var_92_object; // 0x3084 Mov
	TaskCall(18); // 0x3085 TaskCall
	func_6677(var_1059_object, var_1057_int, var_1058_object); // 0x3086 NEW_2
	TaskReturn(); // 0x3087 TaskReturn
	return 0; // 0x3089 Return
	
Label_12426:
	var_1116_bool = 0; var_1117_int = 0; // 0x308a PushV
	var_1117_int = 8; // 0x308b MovI
	func_10457(var_1116_bool, var_1117_int); // 0x308c NEW_2
	if(var_1116_bool == 0) goto Label_12438; // 0x308e JumpB
	var_1118_int = 0; var_1119_object = Obj(); // 0x308f PushV
	var_1119_object = var_92_object; // 0x3090 Mov
	TaskCall(16); // 0x3091 TaskCall
	func_4828(var_1120_object, var_1118_int, var_1119_object); // 0x3092 NEW_2
	TaskReturn(); // 0x3093 TaskReturn
	return 0; // 0x3095 Return
	
Label_12438:
	var_1307_bool = 0; var_1308_int = 0; // 0x3096 PushV
	var_1308_int = 9; // 0x3097 MovI
	func_10457(var_1307_bool, var_1308_int); // 0x3098 NEW_2
	if(var_1307_bool == 0) goto Label_12450; // 0x309a JumpB
	var_1309_int = 0; var_1310_object = Obj(); // 0x309b PushV
	var_1310_object = var_92_object; // 0x309c Mov
	TaskCall(20); // 0x309d TaskCall
	func_6933(var_1311_object, var_1309_int, var_1310_object); // 0x309e NEW_2
	TaskReturn(); // 0x309f TaskReturn
	return 0; // 0x30a1 Return
	
Label_12450:
	var_1368_bool = 0; var_1369_int = 0; // 0x30a2 PushV
	var_1369_int = 10; // 0x30a3 MovI
	func_10457(var_1368_bool, var_1369_int); // 0x30a4 NEW_2
	if(var_1368_bool == 0) goto Label_12462; // 0x30a6 JumpB
	var_1370_int = 0; var_1371_object = Obj(); // 0x30a7 PushV
	var_1371_object = var_92_object; // 0x30a8 Mov
	TaskCall(22); // 0x30a9 TaskCall
	func_7194(var_1372_object, var_1370_int, var_1371_object); // 0x30aa NEW_2
	TaskReturn(); // 0x30ab TaskReturn
	return 0; // 0x30ad Return
	
Label_12462:
	var_1429_bool = 0; var_1430_int = 0; // 0x30ae PushV
	var_1430_int = 11; // 0x30af MovI
	func_10457(var_1429_bool, var_1430_int); // 0x30b0 NEW_2
	if(var_1429_bool == 0) goto Label_12474; // 0x30b2 JumpB
	var_1431_int = 0; var_1432_object = Obj(); // 0x30b3 PushV
	var_1432_object = var_92_object; // 0x30b4 Mov
	TaskCall(24); // 0x30b5 TaskCall
	func_7455(var_1433_object, var_1431_int, var_1432_object); // 0x30b6 NEW_2
	TaskReturn(); // 0x30b7 TaskReturn
	return 0; // 0x30b9 Return
	
Label_12474:
	var_1502_bool = 0; var_1503_int = 0; // 0x30ba PushV
	var_1503_int = 12; // 0x30bb MovI
	func_10457(var_1502_bool, var_1503_int); // 0x30bc NEW_2
	if(var_1502_bool == 0) goto Label_12486; // 0x30be JumpB
	var_1504_int = 0; var_1505_object = Obj(); // 0x30bf PushV
	var_1505_object = var_92_object; // 0x30c0 Mov
	TaskCall(28); // 0x30c1 TaskCall
	func_9210(var_1506_object, var_1504_int, var_1505_object); // 0x30c2 NEW_2
	TaskReturn(); // 0x30c3 TaskReturn
	return 0; // 0x30c5 Return
	
Label_12486:
	var_1560_int = 0; var_1561_object = Obj(); // 0x30c6 PushV
	var_1561_object = var_92_object; // 0x30c7 Mov
	TaskCall(30); // 0x30c8 TaskCall
	func_9531(var_1562_object, var_1560_int, var_1561_object); // 0x30c9 NEW_2
	TaskReturn(); // 0x30ca TaskReturn
	return 0; // 0x30cc Return
}


func_5162(var_2_object, var_1163_string)
{
	var_1164_bool = 0; // 0x142b PushV
	func_10509(var_1164_bool); // 0x142c NEW_2
	var_1165_bool = var_1164_bool == 0; // 0x142e Not
	if(var_1165_bool == 0) goto Label_5169; // 0x142f JumpB
	return 0; // 0x1430 Return
	
Label_5169:
	var_1166_bool = var_1163_string == var_2_object; // 0x1431 Eq
	if(var_1166_bool == 0) goto Label_5172; // 0x1432 JumpB
	return 0; // 0x1433 Return
	
Label_5172:
	var_1167_string = ""; var_1168_bool = 0; // 0x1434 PushV
	var_1167_string = var_1163_string; // 0x1435 Mov
	var_1169_string = ""; // 0x1436 PushS
	var_1170_bool = var_1163_string == var_1169_string; // 0x1437 Eq
	if(var_1170_bool == 0) goto Label_5179; // 0x1438 JumpB
	var_1168_bool = 0; // 0x1439 MovB
	goto Label_5180; // 0x143a Jump
	
Label_5180:
	func_10214(var_1167_string, var_1168_bool); // 0x143c NEW_2
	var_2_object = var_1163_string; // 0x143e TMov
	return 0; // 0x143f Return
	
Label_5179:
	var_1168_bool = 1; // 0x143b MovB
}


func_4142(var_0_bool, var_1_object, var_2_object, var_3_object, var_961_object, var_962_object)
{
	var_0_bool = var_962_object; // 0x102f TMov
	var_1_object = var_961_object; // 0x1030 TMov
	var_3_object = 0; // 0x1031 TMovB
	var_967_int = 1; // 0x1032 PushI
	if(var_967_int == 0) goto Label_4259; // 0x1033 JumpB
	var_968_bool = 0; var_969_object = Obj(); // 0x1034 PushV
	var_969_object = var_1_object; // 0x1035 MovT
	func_11624(var_969_object); // 0x1036 NEW_2
	if(var_968_bool == 0) goto Label_4173; // 0x1038 JumpB
	var_974_string = ""; // 0x1039 PushV
	var_974_string = "Fear"; // 0x103a MovS
	func_4289(var_962_object, var_974_string); // 0x103b NEW_2
	var_982_int = 512104; // 0x103d PushI
	SetMessage(var_982_int); // 0x103e TObjFunc
	ClearReplies(); // 0x1040 TObjFunc
	var_983_int = 512105; // 0x1042 PushI
	var_984_int = 13334; // 0x1043 PushI
	var_985_int = 13331; // 0x1044 PushI
	AddReply(var_983_int, var_984_int, var_985_int); // 0x1045 TObjFunc
	var_986_int = 512106; // 0x1047 PushI
	var_987_int = 13333; // 0x1048 PushI
	var_988_int = 13332; // 0x1049 PushI
	AddReply(var_986_int, var_987_int, var_988_int); // 0x104a TObjFunc
	goto Label_4259; // 0x104c Jump
	
Label_4259:
	var_989_bool = 0; // 0x10a3 PushV
	func_10509(var_989_bool); // 0x10a4 NEW_2
	if(var_989_bool == 0) goto Label_4274; // 0x10a6 JumpB
	
Label_4263:
	lshWaitForAnimEnd(); // 0x10a7 Func
	var_990_object = var_3_object; // 0x10a9 PushT
	if(var_990_object == 0) goto Label_4268; // 0x10aa JumpB
	goto Label_4273; // 0x10ab Jump
	
Label_4273:
	goto Label_4288; // 0x10b1 Jump
	
Label_4288:
	return 0; // 0x10c0 Return
	
Label_4268:
	var_991_string = ""; // 0x10ac PushV
	var_991_string = var_2_object; // 0x10ad MovT
	func_10198(var_991_string); // 0x10ae NEW_2
	goto Label_4263; // 0x10b0 Jump
	
Label_4274:
	var_992_string = "all"; // 0x10b2 PushS
	var_993_string = "idle"; // 0x10b3 PushS
	PlayAnimation(var_992_string, var_993_string); // 0x10b4 Func
	
Label_4278:
	WaitForAnimEnd(); // 0x10b6 Func
	var_994_object = var_3_object; // 0x10b8 PushT
	if(var_994_object == 0) goto Label_4283; // 0x10b9 JumpB
	goto Label_4288; // 0x10ba Jump
	
Label_4283:
	var_995_string = "all"; // 0x10bb PushS
	var_996_string = "idle"; // 0x10bc PushS
	PlayAnimation(var_995_string, var_996_string); // 0x10bd Func
	goto Label_4278; // 0x10bf Jump
	
Label_4173:
	var_997_string = ""; // 0x104d PushV
	var_997_string = "Neutral"; // 0x104e MovS
	func_4289(var_962_object, var_997_string); // 0x104f NEW_2
	var_998_int = 512515; // 0x1051 PushI
	SetMessage(var_998_int); // 0x1052 TObjFunc
	ClearReplies(); // 0x1054 TObjFunc
	var_999_bool = 0; var_1000_object = Obj(); // 0x1056 PushV
	var_1000_object = var_1_object; // 0x1057 MovT
	func_11612(var_1000_object); // 0x1058 NEW_2
	if(var_999_bool == 0) goto Label_4192; // 0x105a JumpB
	var_1005_int = 512520; // 0x105b PushI
	var_1006_int = 13691; // 0x105c PushI
	var_1007_int = 13690; // 0x105d PushI
	AddReply(var_1005_int, var_1006_int, var_1007_int); // 0x105e TObjFunc
	
Label_4192:
	var_1008_bool = 0; // 0x1060 PushV
	var_1008_bool = 0; // 0x1061 MovB
	var_1009_bool = 0; var_1010_object = Obj(); // 0x1062 PushV
	var_1010_object = var_1_object; // 0x1063 MovT
	func_11636(var_1010_object); // 0x1064 NEW_2
	if(var_1009_bool == 0) goto Label_4205; // 0x1066 JumpB
	var_1015_bool = 0; var_1016_object = Obj(); // 0x1067 PushV
	var_1016_object = var_1_object; // 0x1068 MovT
	func_11744(var_1016_object); // 0x1069 NEW_2
	if(var_1015_bool == 0) goto Label_4205; // 0x106b JumpB
	var_1008_bool = 1; // 0x106c MovB
	
Label_4205:
	if(var_1008_bool == 0) goto Label_4211; // 0x106d JumpB
	var_1021_int = 512516; // 0x106e PushI
	var_1022_int = 13688; // 0x106f PushI
	var_1023_int = 13686; // 0x1070 PushI
	AddReply(var_1021_int, var_1022_int, var_1023_int); // 0x1071 TObjFunc
	
Label_4211:
	var_1024_bool = 0; // 0x1073 PushV
	var_1024_bool = 0; // 0x1074 MovB
	var_1025_bool = 0; // 0x1075 PushV
	var_1025_bool = 0; // 0x1076 MovB
	var_1026_bool = 0; var_1027_object = Obj(); // 0x1077 PushV
	var_1027_object = var_1_object; // 0x1078 MovT
	func_11648(var_1027_object); // 0x1079 NEW_2
	if(var_1026_bool == 0) goto Label_4226; // 0x107b JumpB
	var_1032_bool = 0; var_1033_object = Obj(); // 0x107c PushV
	var_1033_object = var_1_object; // 0x107d MovT
	func_11756(var_1033_object); // 0x107e NEW_2
	if(var_1032_bool == 0) goto Label_4226; // 0x1080 JumpB
	var_1025_bool = 1; // 0x1081 MovB
	
Label_4226:
	if(var_1025_bool == 0) goto Label_4234; // 0x1082 JumpB
	var_1038_bool = 0; var_1039_object = Obj(); // 0x1083 PushV
	var_1039_object = var_1_object; // 0x1084 MovT
	func_11744(var_1039_object); // 0x1085 NEW_2
	var_1040_bool = var_1038_bool == 0; // 0x1087 Not
	if(var_1040_bool == 0) goto Label_4234; // 0x1088 JumpB
	var_1024_bool = 1; // 0x1089 MovB
	
Label_4234:
	if(var_1024_bool == 0) goto Label_4240; // 0x108a JumpB
	var_1041_int = 512526; // 0x108b PushI
	var_1042_int = 13697; // 0x108c PushI
	var_1043_int = 13696; // 0x108d PushI
	AddReply(var_1041_int, var_1042_int, var_1043_int); // 0x108e TObjFunc
	
Label_4240:
	var_1044_bool = 0; var_1045_object = Obj(); // 0x1090 PushV
	var_1045_object = var_1_object; // 0x1091 MovT
	func_11922(var_1044_bool, var_1045_object); // 0x1092 NEW_2
	var_1046_bool = var_1044_bool == 0; // 0x1094 Not
	if(var_1046_bool == 0) goto Label_4251; // 0x1095 JumpB
	var_1047_int = 520909; // 0x1096 PushI
	var_1048_int = 22127; // 0x1097 PushI
	var_1049_int = 22126; // 0x1098 PushI
	AddReply(var_1047_int, var_1048_int, var_1049_int); // 0x1099 TObjFunc
	
Label_4251:
	var_1050_int = 512517; // 0x109b PushI
	var_1051_int = -1; // 0x109c PushI
	var_1052_int = 13687; // 0x109d PushI
	AddReply(var_1050_int, var_1051_int, var_1052_int); // 0x109e TObjFunc
	goto Label_4259; // 0x10a0 Jump
}


func_10799()
{
	var_153_object = Obj(); var_154_string = ""; var_155_float = 0; // 0x2a30 PushV
	var_156_object = Obj(); // 0x2a31 PushV
	func_12262(var_156_object); // 0x2a32 NEW_2
	var_153_object = var_156_object; // 0x2a33 Mov
	var_154_string = "pt_map_anna"; // 0x2a35 MovS
	var_155_float = 2; // 0x2a36 MovI
	func_12279(var_153_object, var_154_string, var_155_float); // 0x2a37 NEW_2
	var_176_object = Obj(); // 0x2a39 PushV
	func_12262(var_176_object); // 0x2a3a NEW_2
	ShowMap(var_176_object); // 0x2a3c ObjFunc
	return 0; // 0x2a3e Return
}


func_11312(var_619_bool)
{
	var_621_int = 0; var_622_string = ""; // 0x2c31 PushV
	var_622_string = "ood3MladVlad2"; // 0x2c32 MovS
	func_10296(var_621_int, var_622_string); // 0x2c33 NEW_2
	var_623_int = 0; // 0x2c35 PushI
	var_624_bool = var_621_int == var_623_int; // 0x2c36 Eq
	if(var_624_bool == 0) goto Label_11322; // 0x2c37 JumpB
	var_619_bool = 1; // 0x2c38 MovB
	return 0; // 0x2c39 Return
	
Label_11322:
	var_619_bool = 0; // 0x2c3a MovB
	return 0; // 0x2c3b Return
}


func_10286(var_141_float, var_142_cvector)
{
	var_143_float = GetByIndex(var_142_cvector, 0); // 0x282f PushE
	var_144_float = GetByIndex(var_142_cvector, 0); // 0x2830 PushE
	var_145_float = var_143_float * var_144_float; // 0x2831 Mult
	var_146_float = GetByIndex(var_142_cvector, 2); // 0x2832 PushE
	var_147_float = GetByIndex(var_142_cvector, 2); // 0x2833 PushE
	var_148_float = var_146_float * var_147_float; // 0x2834 Mult
	var_149_int = var_145_float + var_148_float; // 0x2835 Add
	var_141_float = sqrt(var_149_int); // 0x2836 Sqrt2
	return 0; // 0x2837 Return
}


func_11828(var_1235_bool)
{
	var_1237_int = 0; var_1238_string = ""; // 0x2e35 PushV
	var_1238_string = "ood8MladVlad3"; // 0x2e36 MovS
	func_10296(var_1237_int, var_1238_string); // 0x2e37 NEW_2
	var_1239_int = 0; // 0x2e39 PushI
	var_1240_bool = var_1237_int == var_1239_int; // 0x2e3a Eq
	if(var_1240_bool == 0) goto Label_11838; // 0x2e3b JumpB
	var_1235_bool = 1; // 0x2e3c MovB
	return 0; // 0x2e3d Return
	
Label_11838:
	var_1235_bool = 0; // 0x2e3e MovB
	return 0; // 0x2e3f Return
}


func_564(var_0_bool, var_482_int, var_483_object)
{
	var_485_object = Obj(); var_486_bool = 0; var_487_int = 0; var_488_bool = 0; var_489_object = Obj(); var_490_bool = 0; var_491_int = 0; var_492_bool = 0; // 0x234 PushV
	var_0_bool = var_483_object; // 0x235 TMov
	var_493_bool = 0; var_494_object = Obj(); var_495_float = 0; // 0x236 PushV
	var_494_object = var_483_object; // 0x237 Mov
	var_495_float = 70.0; // 0x238 MovF
	func_9973(var_494_object, var_495_float); // 0x239 NEW_2
	var_496_bool = var_493_bool == 0; // 0x23b Not
	if(var_496_bool == 0) goto Label_575; // 0x23c JumpB
	var_482_int = -2; // 0x23d MovI
	return 8; // 0x23e Return
	
Label_575:
	CreateDialog(var_489_object); // 0x23f Func
	var_497_int = 0; // 0x241 PushV
	func_10503(var_497_int); // 0x242 NEW_2
	SetNPCName(var_497_int); // 0x244 ObjFunc
	var_498_int = 0; // 0x246 PushV
	func_10501(var_498_int); // 0x247 NEW_2
	SetNPCDescription(var_498_int); // 0x249 ObjFunc
	var_499_string = ""; // 0x24b PushV
	func_10505(var_499_string); // 0x24c NEW_2
	SetPhoto(var_499_string); // 0x24e ObjFunc
	var_500_string = ""; // 0x250 PushV
	func_10507(var_500_string); // 0x251 NEW_2
	SetPhoto2(var_500_string); // 0x253 ObjFunc
	var_501_int = 0; // 0x255 PushV
	func_12312(var_501_int); // 0x256 NEW_2
	SetPlayerName(var_501_int); // 0x258 ObjFunc
	var_491_int = -1; // 0x25a MovI
	IsOverrideActive(var_490_bool); // 0x25b Func
	var_502_bool = var_490_bool; // 0x25d Push
	if(var_502_bool == 0) goto Label_609; // 0x25e JumpB
	var_482_int = -2; // 0x25f MovI
	return 8; // 0x260 Return
	
Label_609:
	DoDialog(var_489_object); // 0x261 Func
	var_503_bool = 0; var_504_object = Obj(); // 0x263 PushV
	var_505_object = Obj(); // 0x264 PushV
	func_10251(var_505_object); // 0x265 NEW_2
	var_504_object = var_505_object; // 0x266 Mov
	func_10060(var_503_bool, var_504_object); // 0x268 NEW_2
	var_506_object = Obj(); var_507_object = Obj(); // 0x26a PushV
	var_506_object = var_483_object; // 0x26b Mov
	var_507_object = var_489_object; // 0x26c Mov
	TaskCall(7); // 0x26d TaskCall
	func_645(var_508_object, var_509_object, var_510_string, var_511_bool, var_506_object, var_507_object); // 0x26e NEW_2
	TaskReturn(); // 0x26f TaskReturn
	IsDialogEnd(var_492_bool); // 0x271 ObjFunc
	
Label_627:
	var_558_bool = var_492_bool == 0; // 0x273 Not
	if(var_558_bool == 0) goto Label_634; // 0x274 JumpB
	sync(); // 0x275 Func
	IsDialogEnd(var_492_bool); // 0x277 ObjFunc
	goto Label_627; // 0x279 Jump
	
Label_634:
	var_559_object = Obj(); // 0x27a PushV
	var_559_object = var_483_object; // 0x27b Mov
	func_10042(); // 0x27c NEW_2
	StopDialog(var_489_object); // 0x27e Func
	GetReturnValue(var_491_int); // 0x280 ObjFunc
	var_482_int = var_491_int; // 0x282 Mov
	return 8; // 0x283 Return
}


func_10296(var_364_int, var_365_string)
{
	var_366_int = 0; var_367_int = 0; // 0x2838 PushV
	GetVariable(var_365_string, var_367_int); // 0x2839 Func
	var_364_int = var_367_int; // 0x283b Mov
	return 2; // 0x283c Return
}


func_11324(var_370_bool)
{
	var_372_int = 0; var_373_string = ""; // 0x2c3d PushV
	var_373_string = "d1q03"; // 0x2c3e MovS
	func_10296(var_372_int, var_373_string); // 0x2c3f NEW_2
	var_374_int = 0; // 0x2c41 PushI
	var_375_bool = var_372_int == var_374_int; // 0x2c42 Eq
	if(var_375_bool == 0) goto Label_11334; // 0x2c43 JumpB
	var_370_bool = 1; // 0x2c44 MovB
	return 0; // 0x2c45 Return
	
Label_11334:
	var_370_bool = 0; // 0x2c46 MovB
	return 0; // 0x2c47 Return
}


func_10301(var_131_object, var_132_string)
{
	var_133_object = Obj(); var_134_object = Obj(); var_135_object = Obj(); var_136_object = Obj(); // 0x283d PushV
	GetMainOutdoorScene(var_135_object); // 0x283e Func
	var_137_string = ".bin"; // 0x2840 PushS
	var_138_int = var_132_string + var_137_string; // 0x2841 Add
	AddBlankActor(var_136_object, var_135_object, var_132_string, var_138_int); // 0x2842 Func
	var_131_object = var_136_object; // 0x2844 Mov
	return 4; // 0x2845 Return
}


func_10815()
{
	var_122_string = "playsound"; // 0x2a40 PushS
	var_123_string = "mapmark"; // 0x2a41 PushS
	TriggerWorld(var_122_string, var_123_string); // 0x2a42 Func
	return 0; // 0x2a44 Return
}


func_11840(var_1278_bool)
{
	var_1280_int = 0; var_1281_string = ""; // 0x2e41 PushV
	var_1281_string = "ood8MladVlad4"; // 0x2e42 MovS
	func_10296(var_1280_int, var_1281_string); // 0x2e43 NEW_2
	var_1282_int = 0; // 0x2e45 PushI
	var_1283_bool = var_1280_int == var_1282_int; // 0x2e46 Eq
	if(var_1283_bool == 0) goto Label_11850; // 0x2e47 JumpB
	var_1278_bool = 1; // 0x2e48 MovB
	return 0; // 0x2e49 Return
	
Label_11850:
	var_1278_bool = 0; // 0x2e4a MovB
	return 0; // 0x2e4b Return
}


func_1092(var_0_bool, var_562_int, var_563_object)
{
	var_565_object = Obj(); var_566_bool = 0; var_567_int = 0; var_568_bool = 0; var_569_object = Obj(); var_570_bool = 0; var_571_int = 0; var_572_bool = 0; // 0x444 PushV
	var_0_bool = var_563_object; // 0x445 TMov
	var_573_bool = 0; var_574_object = Obj(); var_575_float = 0; // 0x446 PushV
	var_574_object = var_563_object; // 0x447 Mov
	var_575_float = 70.0; // 0x448 MovF
	func_9973(var_574_object, var_575_float); // 0x449 NEW_2
	var_576_bool = var_573_bool == 0; // 0x44b Not
	if(var_576_bool == 0) goto Label_1103; // 0x44c JumpB
	var_562_int = -2; // 0x44d MovI
	return 8; // 0x44e Return
	
Label_1103:
	CreateDialog(var_569_object); // 0x44f Func
	var_577_int = 0; // 0x451 PushV
	func_10503(var_577_int); // 0x452 NEW_2
	SetNPCName(var_577_int); // 0x454 ObjFunc
	var_578_int = 0; // 0x456 PushV
	func_10501(var_578_int); // 0x457 NEW_2
	SetNPCDescription(var_578_int); // 0x459 ObjFunc
	var_579_string = ""; // 0x45b PushV
	func_10505(var_579_string); // 0x45c NEW_2
	SetPhoto(var_579_string); // 0x45e ObjFunc
	var_580_string = ""; // 0x460 PushV
	func_10507(var_580_string); // 0x461 NEW_2
	SetPhoto2(var_580_string); // 0x463 ObjFunc
	var_581_int = 0; // 0x465 PushV
	func_12312(var_581_int); // 0x466 NEW_2
	SetPlayerName(var_581_int); // 0x468 ObjFunc
	var_571_int = -1; // 0x46a MovI
	IsOverrideActive(var_570_bool); // 0x46b Func
	var_582_bool = var_570_bool; // 0x46d Push
	if(var_582_bool == 0) goto Label_1137; // 0x46e JumpB
	var_562_int = -2; // 0x46f MovI
	return 8; // 0x470 Return
	
Label_1137:
	DoDialog(var_569_object); // 0x471 Func
	var_583_bool = 0; var_584_object = Obj(); // 0x473 PushV
	var_585_object = Obj(); // 0x474 PushV
	func_10251(var_585_object); // 0x475 NEW_2
	var_584_object = var_585_object; // 0x476 Mov
	func_10060(var_583_bool, var_584_object); // 0x478 NEW_2
	var_586_object = Obj(); var_587_object = Obj(); // 0x47a PushV
	var_586_object = var_563_object; // 0x47b Mov
	var_587_object = var_569_object; // 0x47c Mov
	TaskCall(9); // 0x47d TaskCall
	func_1173(var_588_object, var_589_object, var_590_string, var_591_bool, var_586_object, var_587_object); // 0x47e NEW_2
	TaskReturn(); // 0x47f TaskReturn
	IsDialogEnd(var_572_bool); // 0x481 ObjFunc
	
Label_1155:
	var_688_bool = var_572_bool == 0; // 0x483 Not
	if(var_688_bool == 0) goto Label_1162; // 0x484 JumpB
	sync(); // 0x485 Func
	IsDialogEnd(var_572_bool); // 0x487 ObjFunc
	goto Label_1155; // 0x489 Jump
	
Label_1162:
	var_689_object = Obj(); // 0x48a PushV
	var_689_object = var_563_object; // 0x48b Mov
	func_10042(); // 0x48c NEW_2
	StopDialog(var_569_object); // 0x48e Func
	GetReturnValue(var_571_int); // 0x490 ObjFunc
	var_562_int = var_571_int; // 0x492 Mov
	return 8; // 0x493 Return
}


func_10821()
{
	var_141_object = Obj(); var_142_string = ""; var_143_float = 0; // 0x2a46 PushV
	var_144_object = Obj(); // 0x2a47 PushV
	func_12262(var_144_object); // 0x2a48 NEW_2
	var_141_object = var_144_object; // 0x2a49 Mov
	var_142_string = "pt_map_ospina"; // 0x2a4b MovS
	var_143_float = 2; // 0x2a4c MovI
	func_12279(var_141_object, var_142_string, var_143_float); // 0x2a4d NEW_2
	var_164_object = Obj(); // 0x2a4f PushV
	func_12262(var_164_object); // 0x2a50 NEW_2
	ShowMap(var_164_object); // 0x2a52 ObjFunc
	return 0; // 0x2a54 Return
}


func_2119(var_0_bool, var_692_int, var_693_object)
{
	var_695_object = Obj(); var_696_bool = 0; var_697_int = 0; var_698_bool = 0; var_699_object = Obj(); var_700_bool = 0; var_701_int = 0; var_702_bool = 0; // 0x847 PushV
	var_0_bool = var_693_object; // 0x848 TMov
	var_703_bool = 0; var_704_object = Obj(); var_705_float = 0; // 0x849 PushV
	var_704_object = var_693_object; // 0x84a Mov
	var_705_float = 70.0; // 0x84b MovF
	func_9973(var_704_object, var_705_float); // 0x84c NEW_2
	var_706_bool = var_703_bool == 0; // 0x84e Not
	if(var_706_bool == 0) goto Label_2130; // 0x84f JumpB
	var_692_int = -2; // 0x850 MovI
	return 8; // 0x851 Return
	
Label_2130:
	CreateDialog(var_699_object); // 0x852 Func
	var_707_int = 0; // 0x854 PushV
	func_10503(var_707_int); // 0x855 NEW_2
	SetNPCName(var_707_int); // 0x857 ObjFunc
	var_708_int = 0; // 0x859 PushV
	func_10501(var_708_int); // 0x85a NEW_2
	SetNPCDescription(var_708_int); // 0x85c ObjFunc
	var_709_string = ""; // 0x85e PushV
	func_10505(var_709_string); // 0x85f NEW_2
	SetPhoto(var_709_string); // 0x861 ObjFunc
	var_710_string = ""; // 0x863 PushV
	func_10507(var_710_string); // 0x864 NEW_2
	SetPhoto2(var_710_string); // 0x866 ObjFunc
	var_711_int = 0; // 0x868 PushV
	func_12312(var_711_int); // 0x869 NEW_2
	SetPlayerName(var_711_int); // 0x86b ObjFunc
	var_701_int = -1; // 0x86d MovI
	IsOverrideActive(var_700_bool); // 0x86e Func
	var_712_bool = var_700_bool; // 0x870 Push
	if(var_712_bool == 0) goto Label_2164; // 0x871 JumpB
	var_692_int = -2; // 0x872 MovI
	return 8; // 0x873 Return
	
Label_2164:
	DoDialog(var_699_object); // 0x874 Func
	var_713_bool = 0; var_714_object = Obj(); // 0x876 PushV
	var_715_object = Obj(); // 0x877 PushV
	func_10251(var_715_object); // 0x878 NEW_2
	var_714_object = var_715_object; // 0x879 Mov
	func_10060(var_713_bool, var_714_object); // 0x87b NEW_2
	var_716_object = Obj(); var_717_object = Obj(); // 0x87d PushV
	var_716_object = var_693_object; // 0x87e Mov
	var_717_object = var_699_object; // 0x87f Mov
	TaskCall(11); // 0x880 TaskCall
	func_2200(var_718_object, var_719_object, var_720_string, var_721_bool, var_716_object, var_717_object); // 0x881 NEW_2
	TaskReturn(); // 0x882 TaskReturn
	IsDialogEnd(var_702_bool); // 0x884 ObjFunc
	
Label_2182:
	var_800_bool = var_702_bool == 0; // 0x886 Not
	if(var_800_bool == 0) goto Label_2189; // 0x887 JumpB
	sync(); // 0x888 Func
	IsDialogEnd(var_702_bool); // 0x88a ObjFunc
	goto Label_2182; // 0x88c Jump
	
Label_2189:
	var_801_object = Obj(); // 0x88d PushV
	var_801_object = var_693_object; // 0x88e Mov
	func_10042(); // 0x88f NEW_2
	StopDialog(var_699_object); // 0x891 Func
	GetReturnValue(var_701_int); // 0x893 ObjFunc
	var_692_int = var_701_int; // 0x895 Mov
	return 8; // 0x896 Return
}


func_11336(var_466_bool)
{
	var_468_int = 0; var_469_string = ""; // 0x2c49 PushV
	var_469_string = "d1q03"; // 0x2c4a MovS
	func_10296(var_468_int, var_469_string); // 0x2c4b NEW_2
	var_470_int = 1000; // 0x2c4d PushI
	var_471_bool = var_468_int == var_470_int; // 0x2c4e Eq
	if(var_471_bool == 0) goto Label_11346; // 0x2c4f JumpB
	var_466_bool = 1; // 0x2c50 MovB
	return 0; // 0x2c51 Return
	
Label_11346:
	var_466_bool = 0; // 0x2c52 MovB
	return 0; // 0x2c53 Return
}


func_10312(var_143_object, var_144_string)
{
	var_145_object = Obj(); var_146_object = Obj(); var_147_object = Obj(); var_148_object = Obj(); // 0x2848 PushV
	GetMainOutdoorScene(var_147_object); // 0x2849 Func
	var_149_string = ".xml"; // 0x284b PushS
	var_150_int = var_144_string + var_149_string; // 0x284c Add
	AddBlankActorFromXml(var_148_object, var_147_object, var_144_string, var_150_int); // 0x284d Func
	var_143_object = var_148_object; // 0x284f Mov
	return 4; // 0x2850 Return
}


func_9291(var_0_bool, var_1_object, var_2_object, var_3_object, var_1528_object, var_1529_object)
{
	var_0_bool = var_1529_object; // 0x244c TMov
	var_1_object = var_1528_object; // 0x244d TMov
	var_3_object = 0; // 0x244e TMovB
	var_1534_int = 1; // 0x244f PushI
	if(var_1534_int == 0) goto Label_9319; // 0x2450 JumpB
	var_1535_string = ""; // 0x2451 PushV
	var_1535_string = "Neutral"; // 0x2452 MovS
	func_9349(var_1529_object, var_1535_string); // 0x2453 NEW_2
	var_1543_int = 535677; // 0x2455 PushI
	SetMessage(var_1543_int); // 0x2456 TObjFunc
	ClearReplies(); // 0x2458 TObjFunc
	var_1544_int = 535678; // 0x245a PushI
	var_1545_int = 42150; // 0x245b PushI
	var_1546_int = 37364; // 0x245c PushI
	AddReply(var_1544_int, var_1545_int, var_1546_int); // 0x245d TObjFunc
	var_1547_int = 540005; // 0x245f PushI
	var_1548_int = -1; // 0x2460 PushI
	var_1549_int = 41976; // 0x2461 PushI
	AddReply(var_1547_int, var_1548_int, var_1549_int); // 0x2462 TObjFunc
	goto Label_9319; // 0x2464 Jump
	
Label_9319:
	var_1550_bool = 0; // 0x2467 PushV
	func_10509(var_1550_bool); // 0x2468 NEW_2
	if(var_1550_bool == 0) goto Label_9334; // 0x246a JumpB
	
Label_9323:
	lshWaitForAnimEnd(); // 0x246b Func
	var_1551_object = var_3_object; // 0x246d PushT
	if(var_1551_object == 0) goto Label_9328; // 0x246e JumpB
	goto Label_9333; // 0x246f Jump
	
Label_9333:
	goto Label_9348; // 0x2475 Jump
	
Label_9348:
	return 0; // 0x2484 Return
	
Label_9328:
	var_1552_string = ""; // 0x2470 PushV
	var_1552_string = var_2_object; // 0x2471 MovT
	func_10198(var_1552_string); // 0x2472 NEW_2
	goto Label_9323; // 0x2474 Jump
	
Label_9334:
	var_1553_string = "all"; // 0x2476 PushS
	var_1554_string = "idle"; // 0x2477 PushS
	PlayAnimation(var_1553_string, var_1554_string); // 0x2478 Func
	
Label_9338:
	WaitForAnimEnd(); // 0x247a Func
	var_1555_object = var_3_object; // 0x247c PushT
	if(var_1555_object == 0) goto Label_9343; // 0x247d JumpB
	goto Label_9348; // 0x247e Jump
	
Label_9343:
	var_1556_string = "all"; // 0x247f PushS
	var_1557_string = "idle"; // 0x2480 PushS
	PlayAnimation(var_1556_string, var_1557_string); // 0x2481 Func
	goto Label_9338; // 0x2483 Jump
}


func_11852(var_1255_bool)
{
	var_1257_int = 0; var_1258_string = ""; // 0x2e4d PushV
	var_1258_string = "ood8MladVlad5"; // 0x2e4e MovS
	func_10296(var_1257_int, var_1258_string); // 0x2e4f NEW_2
	var_1259_int = 0; // 0x2e51 PushI
	var_1260_bool = var_1257_int == var_1259_int; // 0x2e52 Eq
	if(var_1260_bool == 0) goto Label_11862; // 0x2e53 JumpB
	var_1255_bool = 1; // 0x2e54 MovB
	return 0; // 0x2e55 Return
	
Label_11862:
	var_1255_bool = 0; // 0x2e56 MovB
	return 0; // 0x2e57 Return
}


func_10323(var_233_int, var_234_int)
{
	var_235_object = Obj(); var_236_object = Obj(); // 0x2853 PushV
	CreateIntVector(var_236_object); // 0x2854 Func
	add(var_233_int); // 0x2856 ObjFunc
	add(var_234_int); // 0x2858 ObjFunc
	var_237_int = 3; // 0x285a PushI
	SendWorldWndMessage(var_237_int, var_236_object); // 0x285b Func
	return 2; // 0x285d Return
}


func_11348(var_453_bool)
{
	var_455_int = 0; var_456_string = ""; // 0x2c55 PushV
	var_456_string = "d1q03IsKapella"; // 0x2c56 MovS
	func_10296(var_455_int, var_456_string); // 0x2c57 NEW_2
	var_457_int = 1; // 0x2c59 PushI
	var_458_bool = var_455_int == var_457_int; // 0x2c5a Eq
	if(var_458_bool == 0) goto Label_11358; // 0x2c5b JumpB
	var_453_bool = 1; // 0x2c5c MovB
	return 0; // 0x2c5d Return
	
Label_11358:
	var_453_bool = 0; // 0x2c5e MovB
	return 0; // 0x2c5f Return
}


func_10837()
{
	var_227_object = Obj(); var_228_string = ""; var_229_float = 0; // 0x2a56 PushV
	var_230_object = Obj(); // 0x2a57 PushV
	func_12262(var_230_object); // 0x2a58 NEW_2
	var_227_object = var_230_object; // 0x2a59 Mov
	var_228_string = "pt_map_bigvlad"; // 0x2a5b MovS
	var_229_float = 2; // 0x2a5c MovI
	func_12279(var_227_object, var_228_string, var_229_float); // 0x2a5d NEW_2
	var_231_object = Obj(); // 0x2a5f PushV
	func_12262(var_231_object); // 0x2a60 NEW_2
	ShowMap(var_231_object); // 0x2a62 ObjFunc
	return 0; // 0x2a64 Return
}


func_11864(var_1241_bool)
{
	var_1243_int = 0; var_1244_string = ""; // 0x2e59 PushV
	var_1244_string = "d8q01BigVladIsVictim"; // 0x2e5a MovS
	func_10296(var_1243_int, var_1244_string); // 0x2e5b NEW_2
	var_1245_int = 1; // 0x2e5d PushI
	var_1246_bool = var_1243_int == var_1245_int; // 0x2e5e Eq
	if(var_1246_bool == 0) goto Label_11874; // 0x2e5f JumpB
	var_1241_bool = 1; // 0x2e60 MovB
	return 0; // 0x2e61 Return
	
Label_11874:
	var_1241_bool = 0; // 0x2e62 MovB
	return 0; // 0x2e63 Return
}


func_10335(var_220_object, var_221_int)
{
	var_222_int = 0; var_223_int = 0; // 0x285f PushV
	var_224_object = Obj(); var_225_string = ""; var_226_int = 0; // 0x2860 PushV
	var_224_object = var_220_object; // 0x2861 Mov
	var_225_string = "money"; // 0x2862 MovS
	var_226_int = var_221_int; // 0x2863 Mov
	func_9931(var_225_string, var_226_int); // 0x2864 NEW_2
	var_230_int = 0; // 0x2866 PushI
	var_231_bool = var_221_int > var_230_int; // 0x2867 GT
	if(var_231_bool == 0) goto Label_10353; // 0x2868 JumpB
	var_232_string = "Money"; // 0x2869 PushS
	GetInvItemByName(var_223_int, var_232_string); // 0x286a Func
	var_233_int = 0; var_234_int = 0; // 0x286c PushV
	var_233_int = var_223_int; // 0x286d Mov
	var_234_int = var_221_int; // 0x286e Mov
	func_10323(var_233_int, var_234_int); // 0x286f NEW_2
	
Label_10353:
	return 2; // 0x2871 Return
}


func_11360(var_433_bool)
{
	var_435_int = 0; var_436_string = ""; // 0x2c61 PushV
	var_436_string = "d1q01"; // 0x2c62 MovS
	func_10296(var_435_int, var_436_string); // 0x2c63 NEW_2
	var_437_int = 6; // 0x2c65 PushI
	var_438_bool = var_435_int == var_437_int; // 0x2c66 Eq
	if(var_438_bool == 0) goto Label_11370; // 0x2c67 JumpB
	var_433_bool = 1; // 0x2c68 MovB
	return 0; // 0x2c69 Return
	
Label_11370:
	var_433_bool = 0; // 0x2c6a MovB
	return 0; // 0x2c6b Return
}


func_11876(var_1261_bool)
{
	var_1263_int = 0; var_1264_string = ""; // 0x2e65 PushV
	var_1264_string = "d8q01MladVladIsVictim"; // 0x2e66 MovS
	func_10296(var_1263_int, var_1264_string); // 0x2e67 NEW_2
	var_1265_int = 1; // 0x2e69 PushI
	var_1266_bool = var_1263_int == var_1265_int; // 0x2e6a Eq
	if(var_1266_bool == 0) goto Label_11886; // 0x2e6b JumpB
	var_1261_bool = 1; // 0x2e6c MovB
	return 0; // 0x2e6d Return
	
Label_11886:
	var_1261_bool = 0; // 0x2e6e MovB
	return 0; // 0x2e6f Return
}


func_10853(var_242_object)
{
	var_244_string = "money3000 is given"; // 0x2a66 PushS
	Trace(var_244_string); // 0x2a67 Func
	var_245_object = Obj(); var_246_int = 0; // 0x2a69 PushV
	var_245_object = var_242_object; // 0x2a6a Mov
	var_246_int = 3000; // 0x2a6b MovI
	func_10335(var_245_object, var_246_int); // 0x2a6c NEW_2
	return 0; // 0x2a6e Return
}


func_6758(var_0_bool, var_1_object, var_2_object, var_3_object, var_1081_object, var_1082_object)
{
	var_0_bool = var_1082_object; // 0x1a67 TMov
	var_1_object = var_1081_object; // 0x1a68 TMov
	var_3_object = 0; // 0x1a69 TMovB
	var_1087_int = 1; // 0x1a6a PushI
	if(var_1087_int == 0) goto Label_6792; // 0x1a6b JumpB
	var_1088_string = ""; // 0x1a6c PushV
	var_1088_string = "Neutral"; // 0x1a6d MovS
	func_6822(var_1082_object, var_1088_string); // 0x1a6e NEW_2
	var_1096_int = 520914; // 0x1a70 PushI
	SetMessage(var_1096_int); // 0x1a71 TObjFunc
	ClearReplies(); // 0x1a73 TObjFunc
	var_1097_bool = 0; var_1098_object = Obj(); // 0x1a75 PushV
	var_1098_object = var_1_object; // 0x1a76 MovT
	func_11922(var_1097_bool, var_1098_object); // 0x1a77 NEW_2
	var_1099_bool = var_1097_bool == 0; // 0x1a79 Not
	if(var_1099_bool == 0) goto Label_6784; // 0x1a7a JumpB
	var_1100_int = 520917; // 0x1a7b PushI
	var_1101_int = 22135; // 0x1a7c PushI
	var_1102_int = 22134; // 0x1a7d PushI
	AddReply(var_1100_int, var_1101_int, var_1102_int); // 0x1a7e TObjFunc
	
Label_6784:
	var_1103_int = 520915; // 0x1a80 PushI
	var_1104_int = -1; // 0x1a81 PushI
	var_1105_int = 22132; // 0x1a82 PushI
	AddReply(var_1103_int, var_1104_int, var_1105_int); // 0x1a83 TObjFunc
	goto Label_6792; // 0x1a85 Jump
	
Label_6792:
	var_1106_bool = 0; // 0x1a88 PushV
	func_10509(var_1106_bool); // 0x1a89 NEW_2
	if(var_1106_bool == 0) goto Label_6807; // 0x1a8b JumpB
	
Label_6796:
	lshWaitForAnimEnd(); // 0x1a8c Func
	var_1107_object = var_3_object; // 0x1a8e PushT
	if(var_1107_object == 0) goto Label_6801; // 0x1a8f JumpB
	goto Label_6806; // 0x1a90 Jump
	
Label_6806:
	goto Label_6821; // 0x1a96 Jump
	
Label_6821:
	return 0; // 0x1aa5 Return
	
Label_6801:
	var_1108_string = ""; // 0x1a91 PushV
	var_1108_string = var_2_object; // 0x1a92 MovT
	func_10198(var_1108_string); // 0x1a93 NEW_2
	goto Label_6796; // 0x1a95 Jump
	
Label_6807:
	var_1109_string = "all"; // 0x1a97 PushS
	var_1110_string = "idle"; // 0x1a98 PushS
	PlayAnimation(var_1109_string, var_1110_string); // 0x1a99 Func
	
Label_6811:
	WaitForAnimEnd(); // 0x1a9b Func
	var_1111_object = var_3_object; // 0x1a9d PushT
	if(var_1111_object == 0) goto Label_6816; // 0x1a9e JumpB
	goto Label_6821; // 0x1a9f Jump
	
Label_6816:
	var_1112_string = "all"; // 0x1aa0 PushS
	var_1113_string = "idle"; // 0x1aa1 PushS
	PlayAnimation(var_1112_string, var_1113_string); // 0x1aa2 Func
	goto Label_6811; // 0x1aa4 Jump
}


func_9829()
{
	var_98_string = ""; var_99_string = ""; // 0x2665 PushV
	var_100_string = "loc"; // 0x2666 PushS
	GetProperty(var_100_string, var_99_string); // 0x2667 Func
	var_101_string = GlobalVars[0]; // 0x2669 PushGE
	var_101_string = var_99_string; // 0x266a Mov
	GlobalVars[0] = var_101_string; // 0x266b PopGE
	return 2; // 0x266c Return
}


func_7275(var_0_bool, var_1_object, var_2_object, var_3_object, var_1394_object, var_1395_object)
{
	var_0_bool = var_1395_object; // 0x1c6c TMov
	var_1_object = var_1394_object; // 0x1c6d TMov
	var_3_object = 0; // 0x1c6e TMovB
	var_1400_int = 1; // 0x1c6f PushI
	if(var_1400_int == 0) goto Label_7309; // 0x1c70 JumpB
	var_1401_string = ""; // 0x1c71 PushV
	var_1401_string = "Neutral"; // 0x1c72 MovS
	func_7339(var_1395_object, var_1401_string); // 0x1c73 NEW_2
	var_1409_int = 520934; // 0x1c75 PushI
	SetMessage(var_1409_int); // 0x1c76 TObjFunc
	ClearReplies(); // 0x1c78 TObjFunc
	var_1410_bool = 0; var_1411_object = Obj(); // 0x1c7a PushV
	var_1411_object = var_1_object; // 0x1c7b MovT
	func_11922(var_1410_bool, var_1411_object); // 0x1c7c NEW_2
	var_1412_bool = var_1410_bool == 0; // 0x1c7e Not
	if(var_1412_bool == 0) goto Label_7301; // 0x1c7f JumpB
	var_1413_int = 520935; // 0x1c80 PushI
	var_1414_int = 22153; // 0x1c81 PushI
	var_1415_int = 22152; // 0x1c82 PushI
	AddReply(var_1413_int, var_1414_int, var_1415_int); // 0x1c83 TObjFunc
	
Label_7301:
	var_1416_int = 520939; // 0x1c85 PushI
	var_1417_int = -1; // 0x1c86 PushI
	var_1418_int = 22156; // 0x1c87 PushI
	AddReply(var_1416_int, var_1417_int, var_1418_int); // 0x1c88 TObjFunc
	goto Label_7309; // 0x1c8a Jump
	
Label_7309:
	var_1419_bool = 0; // 0x1c8d PushV
	func_10509(var_1419_bool); // 0x1c8e NEW_2
	if(var_1419_bool == 0) goto Label_7324; // 0x1c90 JumpB
	
Label_7313:
	lshWaitForAnimEnd(); // 0x1c91 Func
	var_1420_object = var_3_object; // 0x1c93 PushT
	if(var_1420_object == 0) goto Label_7318; // 0x1c94 JumpB
	goto Label_7323; // 0x1c95 Jump
	
Label_7323:
	goto Label_7338; // 0x1c9b Jump
	
Label_7338:
	return 0; // 0x1caa Return
	
Label_7318:
	var_1421_string = ""; // 0x1c96 PushV
	var_1421_string = var_2_object; // 0x1c97 MovT
	func_10198(var_1421_string); // 0x1c98 NEW_2
	goto Label_7313; // 0x1c9a Jump
	
Label_7324:
	var_1422_string = "all"; // 0x1c9c PushS
	var_1423_string = "idle"; // 0x1c9d PushS
	PlayAnimation(var_1422_string, var_1423_string); // 0x1c9e Func
	
Label_7328:
	WaitForAnimEnd(); // 0x1ca0 Func
	var_1424_object = var_3_object; // 0x1ca2 PushT
	if(var_1424_object == 0) goto Label_7333; // 0x1ca3 JumpB
	goto Label_7338; // 0x1ca4 Jump
	
Label_7333:
	var_1425_string = "all"; // 0x1ca5 PushS
	var_1426_string = "idle"; // 0x1ca6 PushS
	PlayAnimation(var_1425_string, var_1426_string); // 0x1ca7 Func
	goto Label_7328; // 0x1ca9 Jump
}


func_11372(var_362_bool)
{
	var_364_int = 0; var_365_string = ""; // 0x2c6d PushV
	var_365_string = "ood1MladVlad1"; // 0x2c6e MovS
	func_10296(var_364_int, var_365_string); // 0x2c6f NEW_2
	var_368_int = 0; // 0x2c71 PushI
	var_369_bool = var_364_int == var_368_int; // 0x2c72 Eq
	if(var_369_bool == 0) goto Label_11382; // 0x2c73 JumpB
	var_362_bool = 1; // 0x2c74 MovB
	return 0; // 0x2c75 Return
	
Label_11382:
	var_362_bool = 0; // 0x2c76 MovB
	return 0; // 0x2c77 Return
}


func_9837(var_0_bool, var_1_object)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); // 0x266d PushV
	var_122_string = "all"; // 0x266e PushS
	var_123_string = "walk_stopl"; // 0x266f PushS
	GetAnimationOffset(var_120_cvector, var_122_string, var_123_string); // 0x2670 Func
	var_124_string = "all"; // 0x2672 PushS
	var_125_string = "walk_stopr"; // 0x2673 PushS
	GetAnimationOffset(var_121_cvector, var_124_string, var_125_string); // 0x2674 Func
	var_126_float = GetByIndex(var_120_cvector, 2); // 0x2676 PushE
	var_127_float = GetByIndex(var_121_cvector, 2); // 0x2677 PushE
	var_128_int = var_126_float + var_127_float; // 0x2678 Add
	var_129_float = 2.0; // 0x2679 PushF
	var_0_bool = var_128_int / var_128_int; // 0x267a Div2
	var_130_float = 0; var_131_float = 0; // 0x267b PushV
	var_132_float = GetByIndex(var_120_cvector, 2); // 0x267c PushE
	var_131_float = var_132_float - var_0_bool; // 0x267d Sub2
	func_10267(var_130_float, var_131_float); // 0x267e NEW_2
	var_135_int = 40; // 0x2680 PushI
	var_1_object = var_130_float + var_135_int; // 0x2681 Add2
	return 4; // 0x2682 Return
}


func_10863()
{
	var_82_string = "ood3MladVlad1"; // 0x2a70 PushS
	var_83_int = 1; // 0x2a71 PushI
	SetVariable(var_82_string, var_83_int); // 0x2a72 Func
	return 0; // 0x2a74 Return
}


func_11888(var_376_bool)
{
	var_378_bool = 0; // 0x2e71 PushV
	var_378_bool = 0; // 0x2e72 MovB
	var_379_bool = 0; // 0x2e73 PushV
	var_379_bool = 0; // 0x2e74 MovB
	var_380_int = 0; var_381_string = ""; // 0x2e75 PushV
	var_381_string = "d1q01"; // 0x2e76 MovS
	func_10296(var_380_int, var_381_string); // 0x2e77 NEW_2
	var_382_int = 0; // 0x2e79 PushI
	var_383_bool = var_380_int != var_382_int; // 0x2e7a Neq
	if(var_383_bool == 0) goto Label_11908; // 0x2e7b JumpB
	var_384_int = 0; var_385_string = ""; // 0x2e7c PushV
	var_385_string = "d1q01"; // 0x2e7d MovS
	func_10296(var_384_int, var_385_string); // 0x2e7e NEW_2
	var_386_int = 1000; // 0x2e80 PushI
	var_387_bool = var_384_int != var_386_int; // 0x2e81 Neq
	if(var_387_bool == 0) goto Label_11908; // 0x2e82 JumpB
	var_379_bool = 1; // 0x2e83 MovB
	
Label_11908:
	if(var_379_bool == 0) goto Label_11917; // 0x2e84 JumpB
	var_388_int = 0; var_389_string = ""; // 0x2e85 PushV
	var_389_string = "d1q01"; // 0x2e86 MovS
	func_10296(var_388_int, var_389_string); // 0x2e87 NEW_2
	var_390_int = -1; // 0x2e89 PushI
	var_391_bool = var_388_int != var_390_int; // 0x2e8a Neq
	if(var_391_bool == 0) goto Label_11917; // 0x2e8b JumpB
	var_378_bool = 1; // 0x2e8c MovB
	
Label_11917:
	if(var_378_bool == 0) goto Label_11920; // 0x2e8d JumpB
	var_376_bool = 1; // 0x2e8e MovB
	return 0; // 0x2e8f Return
	
Label_11920:
	var_376_bool = 0; // 0x2e90 MovB
	return 0; // 0x2e91 Return
}


func_10354(var_282_object, var_283_int)
{
	var_284_int = 0; var_285_int = 0; var_286_bool = 0; var_287_int = 0; var_288_int = 0; var_289_bool = 0; // 0x2872 PushV
	GetItemID(var_287_int); // 0x2873 ObjFunc
	var_290_string = "Category"; // 0x2875 PushS
	GetInvItemProperty(var_288_int, var_287_int, var_290_string); // 0x2876 Func
	AddItem(var_289_bool, var_282_object, var_288_int, var_283_int); // 0x2878 ObjFunc
	var_291_bool = var_289_bool == 0; // 0x287a Not
	if(var_291_bool == 0) goto Label_10367; // 0x287b JumpB
	DropItems(var_282_object, var_283_int); // 0x287c ObjFunc
	goto Label_10372; // 0x287e Jump
	
Label_10372:
	return 6; // 0x2884 Return
	
Label_10367:
	var_292_int = 0; var_293_int = 0; // 0x287f PushV
	var_292_int = var_287_int; // 0x2880 Mov
	var_293_int = var_283_int; // 0x2881 Mov
	func_10323(var_292_int, var_293_int); // 0x2882 NEW_2
}


func_10869()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x2a75 PushV
	var_90_string = "d3q02"; // 0x2a76 PushS
	var_91_int = 2; // 0x2a77 PushI
	SetVariable(var_90_string, var_91_int); // 0x2a78 Func
	var_92_object = Obj(); // 0x2a7a PushV
	func_12262(var_92_object); // 0x2a7b NEW_2
	var_89_object = var_92_object; // 0x2a7c Mov
	var_99_string = "d3q02MladVladGotoViktor"; // 0x2a7e PushS
	var_100_string = "pt_map_viktor"; // 0x2a7f PushS
	var_101_int = 0; // 0x2a80 PushI
	var_102_int = 511384; // 0x2a81 PushI
	var_103_float = 0; // 0x2a82 PushV
	func_10443(var_103_float); // 0x2a83 NEW_2
	AddMark(var_99_string, var_100_string, var_101_int, var_102_int, var_103_float); // 0x2a85 ObjFunc
	func_12013(); // 0x2a88 NEW_2
	return 2; // 0x2a8a Return
}


func_11384(var_422_bool)
{
	var_424_int = 0; var_425_string = ""; // 0x2c79 PushV
	var_425_string = "ood1MladVlad2"; // 0x2c7a MovS
	func_10296(var_424_int, var_425_string); // 0x2c7b NEW_2
	var_426_int = 0; // 0x2c7d PushI
	var_427_bool = var_424_int == var_426_int; // 0x2c7e Eq
	if(var_427_bool == 0) goto Label_11394; // 0x2c7f JumpB
	var_422_bool = 1; // 0x2c80 MovB
	return 0; // 0x2c81 Return
	
Label_11394:
	var_422_bool = 0; // 0x2c82 MovB
	return 0; // 0x2c83 Return
}


func_11396(var_460_bool)
{
	var_462_int = 0; var_463_string = ""; // 0x2c85 PushV
	var_463_string = "ood1MladVlad3"; // 0x2c86 MovS
	func_10296(var_462_int, var_463_string); // 0x2c87 NEW_2
	var_464_int = 0; // 0x2c89 PushI
	var_465_bool = var_462_int == var_464_int; // 0x2c8a Eq
	if(var_465_bool == 0) goto Label_11406; // 0x2c8b JumpB
	var_460_bool = 1; // 0x2c8c MovB
	return 0; // 0x2c8d Return
	
Label_11406:
	var_460_bool = 0; // 0x2c8e MovB
	return 0; // 0x2c8f Return
}


func_645(var_0_bool, var_1_object, var_2_object, var_3_object, var_506_object, var_507_object)
{
	var_0_bool = var_507_object; // 0x286 TMov
	var_1_object = var_506_object; // 0x287 TMov
	var_3_object = 0; // 0x288 TMovB
	var_512_int = 1; // 0x289 PushI
	if(var_512_int == 0) goto Label_697; // 0x28a JumpB
	var_513_string = ""; // 0x28b PushV
	var_513_string = "Neutral"; // 0x28c MovS
	func_727(var_507_object, var_513_string); // 0x28d NEW_2
	var_521_int = 506929; // 0x28f PushI
	SetMessage(var_521_int); // 0x290 TObjFunc
	ClearReplies(); // 0x292 TObjFunc
	var_522_bool = 0; // 0x294 PushV
	var_522_bool = 0; // 0x295 MovB
	var_523_bool = 0; var_524_object = Obj(); // 0x296 PushV
	var_524_object = var_1_object; // 0x297 MovT
	func_11480(var_524_object); // 0x298 NEW_2
	if(var_523_bool == 0) goto Label_673; // 0x29a JumpB
	var_529_bool = 0; var_530_object = Obj(); // 0x29b PushV
	var_530_object = var_1_object; // 0x29c MovT
	func_11456(var_530_object); // 0x29d NEW_2
	if(var_529_bool == 0) goto Label_673; // 0x29f JumpB
	var_522_bool = 1; // 0x2a0 MovB
	
Label_673:
	if(var_522_bool == 0) goto Label_679; // 0x2a1 JumpB
	var_535_int = 506930; // 0x2a2 PushI
	var_536_int = 7637; // 0x2a3 PushI
	var_537_int = 7636; // 0x2a4 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x2a5 TObjFunc
	
Label_679:
	var_538_bool = 0; var_539_object = Obj(); // 0x2a7 PushV
	var_539_object = var_1_object; // 0x2a8 MovT
	func_11468(var_539_object); // 0x2a9 NEW_2
	if(var_538_bool == 0) goto Label_689; // 0x2ab JumpB
	var_544_int = 533959; // 0x2ac PushI
	var_545_int = 10443; // 0x2ad PushI
	var_546_int = 35526; // 0x2ae PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x2af TObjFunc
	
Label_689:
	var_547_int = 507746; // 0x2b1 PushI
	var_548_int = -1; // 0x2b2 PushI
	var_549_int = 8547; // 0x2b3 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x2b4 TObjFunc
	goto Label_697; // 0x2b6 Jump
	
Label_697:
	var_550_bool = 0; // 0x2b9 PushV
	func_10509(var_550_bool); // 0x2ba NEW_2
	if(var_550_bool == 0) goto Label_712; // 0x2bc JumpB
	
Label_701:
	lshWaitForAnimEnd(); // 0x2bd Func
	var_551_object = var_3_object; // 0x2bf PushT
	if(var_551_object == 0) goto Label_706; // 0x2c0 JumpB
	goto Label_711; // 0x2c1 Jump
	
Label_711:
	goto Label_726; // 0x2c7 Jump
	
Label_726:
	return 0; // 0x2d6 Return
	
Label_706:
	var_552_string = ""; // 0x2c2 PushV
	var_552_string = var_2_object; // 0x2c3 MovT
	func_10198(var_552_string); // 0x2c4 NEW_2
	goto Label_701; // 0x2c6 Jump
	
Label_712:
	var_553_string = "all"; // 0x2c8 PushS
	var_554_string = "idle"; // 0x2c9 PushS
	PlayAnimation(var_553_string, var_554_string); // 0x2ca Func
	
Label_716:
	WaitForAnimEnd(); // 0x2cc Func
	var_555_object = var_3_object; // 0x2ce PushT
	if(var_555_object == 0) goto Label_721; // 0x2cf JumpB
	goto Label_726; // 0x2d0 Jump
	
Label_721:
	var_556_string = "all"; // 0x2d1 PushS
	var_557_string = "idle"; // 0x2d2 PushS
	PlayAnimation(var_556_string, var_557_string); // 0x2d3 Func
	goto Label_716; // 0x2d5 Jump
}


func_9349(var_2_object, var_1535_string)
{
	var_1536_bool = 0; // 0x2486 PushV
	func_10509(var_1536_bool); // 0x2487 NEW_2
	var_1537_bool = var_1536_bool == 0; // 0x2489 Not
	if(var_1537_bool == 0) goto Label_9356; // 0x248a JumpB
	return 0; // 0x248b Return
	
Label_9356:
	var_1538_bool = var_1535_string == var_2_object; // 0x248c Eq
	if(var_1538_bool == 0) goto Label_9359; // 0x248d JumpB
	return 0; // 0x248e Return
	
Label_9359:
	var_1539_string = ""; var_1540_bool = 0; // 0x248f PushV
	var_1539_string = var_1535_string; // 0x2490 Mov
	var_1541_string = ""; // 0x2491 PushS
	var_1542_bool = var_1535_string == var_1541_string; // 0x2492 Eq
	if(var_1542_bool == 0) goto Label_9366; // 0x2493 JumpB
	var_1540_bool = 0; // 0x2494 MovB
	goto Label_9367; // 0x2495 Jump
	
Label_9367:
	func_10214(var_1539_string, var_1540_bool); // 0x2497 NEW_2
	var_2_object = var_1535_string; // 0x2499 TMov
	return 0; // 0x249a Return
	
Label_9366:
	var_1540_bool = 1; // 0x2496 MovB
}


func_10373(var_276_object, var_277_string, var_278_int)
{
	var_279_object = Obj(); var_280_object = Obj(); // 0x2885 PushV
	CreateInvItem(var_280_object); // 0x2886 Func
	SetItemName(var_277_string); // 0x2888 ObjFunc
	var_281_object = Obj(); var_282_object = Obj(); var_283_int = 0; // 0x288a PushV
	var_281_object = var_276_object; // 0x288b Mov
	var_282_object = var_280_object; // 0x288c Mov
	var_283_int = var_278_int; // 0x288d Mov
	func_10354(var_282_object, var_283_int); // 0x288e NEW_2
	return 2; // 0x2890 Return
}


func_10892()
{
	var_149_object = Obj(); var_150_object = Obj(); // 0x2a8c PushV
	var_151_object = Obj(); // 0x2a8d PushV
	func_12262(var_151_object); // 0x2a8e NEW_2
	var_150_object = var_151_object; // 0x2a8f Mov
	var_152_string = "d3q02MladVladGotoButcher"; // 0x2a91 PushS
	var_153_string = "pt_gmap_r7_house2_01"; // 0x2a92 PushS
	var_154_int = 0; // 0x2a93 PushI
	var_155_int = 524631; // 0x2a94 PushI
	var_156_float = 0; // 0x2a95 PushV
	func_10443(var_156_float); // 0x2a96 NEW_2
	AddMark(var_152_string, var_153_string, var_154_int, var_155_int, var_156_float); // 0x2a98 ObjFunc
	func_12026(); // 0x2a9b NEW_2
	return 2; // 0x2a9d Return
}


func_11408(var_1149_bool)
{
	var_1151_int = 0; var_1152_string = ""; // 0x2c91 PushV
	var_1152_string = "ood8MladVlad6"; // 0x2c92 MovS
	func_10296(var_1151_int, var_1152_string); // 0x2c93 NEW_2
	var_1153_int = 0; // 0x2c95 PushI
	var_1154_bool = var_1151_int == var_1153_int; // 0x2c96 Eq
	if(var_1154_bool == 0) goto Label_11418; // 0x2c97 JumpB
	var_1149_bool = 1; // 0x2c98 MovB
	return 0; // 0x2c99 Return
	
Label_11418:
	var_1149_bool = 0; // 0x2c9a MovB
	return 0; // 0x2c9b Return
}


func_145()
{
	Stop(); // 0x91 Func
	return 0; // 0x93 Return
}


func_11922(var_661_bool, var_662_object)
{
	var_663_bool = 0; var_664_object = Obj(); // 0x2e93 PushV
	var_664_object = var_662_object; // 0x2e94 Mov
	func_11942(var_664_object); // 0x2e95 NEW_2
	if(var_663_bool == 0) goto Label_11930; // 0x2e97 JumpB
	var_661_bool = 1; // 0x2e98 MovB
	return 0; // 0x2e99 Return
	
Label_11930:
	var_661_bool = 0; // 0x2e9a MovB
	return 0; // 0x2e9b Return
}


func_10386(var_198_bool, var_199_object, var_200_float)
{
	var_201_bool = var_199_object == 0; // 0x2893 Not
	if(var_201_bool == 0) goto Label_10391; // 0x2894 JumpB
	var_198_bool = 0; // 0x2895 MovB
	return 0; // 0x2896 Return
	
Label_10391:
	var_202_int = 0; // 0x2897 PushI
	var_203_bool = var_200_float > var_202_int; // 0x2898 GT
	if(var_203_bool == 0) goto Label_10398; // 0x2899 JumpB
	var_204_int = 8; // 0x289a PushI
	SendWorldWndMessage(var_204_int); // 0x289b Func
	goto Label_10407; // 0x289d Jump
	
Label_10407:
	var_205_float = 0; // 0x28a7 PushV
	var_205_float = var_200_float; // 0x28a8 Mov
	func_10421(var_205_float); // 0x28a9 NEW_2
	var_209_bool = 0; var_210_object = Obj(); var_211_string = ""; var_212_float = 0; var_213_float = 0; var_214_float = 0; // 0x28ab PushV
	var_210_object = var_199_object; // 0x28ac Mov
	var_211_string = "reputation"; // 0x28ad MovS
	var_212_float = var_200_float; // 0x28ae Mov
	var_213_float = 0; // 0x28af MovI
	var_214_float = 1; // 0x28b0 MovI
	func_9909(var_209_bool, var_210_object, var_211_string, var_212_float, var_213_float, var_214_float); // 0x28b1 NEW_2
	var_198_bool = 1; // 0x28b3 MovB
	return 0; // 0x28b4 Return
	
Label_10398:
	var_233_int = 0; // 0x289e PushI
	var_234_bool = var_200_float < var_233_int; // 0x289f LT
	if(var_234_bool == 0) goto Label_10405; // 0x28a0 JumpB
	var_235_int = 9; // 0x28a1 PushI
	SendWorldWndMessage(var_235_int); // 0x28a2 Func
	goto Label_10407; // 0x28a4 Jump
	
Label_10405:
	var_198_bool = 0; // 0x28a5 MovB
	return 0; // 0x28a6 Return
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
	func_9957(); // 0x9c NEW_2
	var_113_int = 6; // 0x9e PushI
	Sleep(var_113_int); // 0x9f Func
	return 2; // 0xa1 Return
}


func_1173(var_0_bool, var_1_object, var_2_object, var_3_object, var_586_object, var_587_object)
{
	var_0_bool = var_587_object; // 0x496 TMov
	var_1_object = var_586_object; // 0x497 TMov
	var_3_object = 0; // 0x498 TMovB
	var_592_int = 1; // 0x499 PushI
	if(var_592_int == 0) goto Label_1283; // 0x49a JumpB
	var_593_string = ""; // 0x49b PushV
	var_593_string = "Neutral"; // 0x49c MovS
	func_1313(var_587_object, var_593_string); // 0x49d NEW_2
	var_601_int = 510212; // 0x49f PushI
	SetMessage(var_601_int); // 0x4a0 TObjFunc
	ClearReplies(); // 0x4a2 TObjFunc
	var_602_bool = 0; // 0x4a4 PushV
	var_602_bool = 0; // 0x4a5 MovB
	var_603_bool = 0; var_604_object = Obj(); // 0x4a6 PushV
	var_604_object = var_1_object; // 0x4a7 MovT
	func_11504(var_604_object); // 0x4a8 NEW_2
	if(var_603_bool == 0) goto Label_1201; // 0x4aa JumpB
	var_609_bool = 0; var_610_object = Obj(); // 0x4ab PushV
	var_610_object = var_1_object; // 0x4ac MovT
	func_11516(var_610_object); // 0x4ad NEW_2
	if(var_609_bool == 0) goto Label_1201; // 0x4af JumpB
	var_602_bool = 1; // 0x4b0 MovB
	
Label_1201:
	if(var_602_bool == 0) goto Label_1207; // 0x4b1 JumpB
	var_615_int = 510213; // 0x4b2 PushI
	var_616_int = 11260; // 0x4b3 PushI
	var_617_int = 11259; // 0x4b4 PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0x4b5 TObjFunc
	
Label_1207:
	var_618_bool = 0; // 0x4b7 PushV
	var_618_bool = 0; // 0x4b8 MovB
	var_619_bool = 0; var_620_object = Obj(); // 0x4b9 PushV
	var_620_object = var_1_object; // 0x4ba MovT
	func_11312(var_620_object); // 0x4bb NEW_2
	if(var_619_bool == 0) goto Label_1221; // 0x4bd JumpB
	var_625_bool = 0; var_626_object = Obj(); // 0x4be PushV
	var_626_object = var_1_object; // 0x4bf MovT
	func_11492(var_626_object); // 0x4c0 NEW_2
	var_631_bool = var_625_bool == 0; // 0x4c2 Not
	if(var_631_bool == 0) goto Label_1221; // 0x4c3 JumpB
	var_618_bool = 1; // 0x4c4 MovB
	
Label_1221:
	if(var_618_bool == 0) goto Label_1227; // 0x4c5 JumpB
	var_632_int = 510302; // 0x4c6 PushI
	var_633_int = 11359; // 0x4c7 PushI
	var_634_int = 11358; // 0x4c8 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x4c9 TObjFunc
	
Label_1227:
	var_635_bool = 0; // 0x4cb PushV
	var_635_bool = 1; // 0x4cc MovB
	var_636_bool = 0; // 0x4cd PushV
	var_636_bool = 0; // 0x4ce MovB
	var_637_bool = 0; var_638_object = Obj(); // 0x4cf PushV
	var_638_object = var_1_object; // 0x4d0 MovT
	func_11528(var_638_object); // 0x4d1 NEW_2
	if(var_637_bool == 0) goto Label_1242; // 0x4d3 JumpB
	var_643_bool = 0; var_644_object = Obj(); // 0x4d4 PushV
	var_644_object = var_1_object; // 0x4d5 MovT
	func_11444(var_644_object); // 0x4d6 NEW_2
	if(var_643_bool == 0) goto Label_1242; // 0x4d8 JumpB
	var_636_bool = 1; // 0x4d9 MovB
	
Label_1242:
	if(var_636_bool == 0) goto Label_1258; // 0x4da JumpB
	var_649_bool = 0; // 0x4db PushV
	var_649_bool = 0; // 0x4dc MovB
	var_650_bool = 0; var_651_object = Obj(); // 0x4dd PushV
	var_651_object = var_1_object; // 0x4de MovT
	func_11540(var_651_object); // 0x4df NEW_2
	if(var_650_bool == 0) goto Label_1256; // 0x4e1 JumpB
	var_656_bool = 0; var_657_object = Obj(); // 0x4e2 PushV
	var_657_object = var_1_object; // 0x4e3 MovT
	func_11444(var_657_object); // 0x4e4 NEW_2
	if(var_656_bool == 0) goto Label_1256; // 0x4e6 JumpB
	var_649_bool = 1; // 0x4e7 MovB
	
Label_1256:
	if(var_649_bool == 0) goto Label_1258; // 0x4e8 JumpB
	var_635_bool = 0; // 0x4e9 MovB
	
Label_1258:
	if(var_635_bool == 0) goto Label_1264; // 0x4ea JumpB
	var_658_int = 510334; // 0x4eb PushI
	var_659_int = 11395; // 0x4ec PushI
	var_660_int = 11394; // 0x4ed PushI
	AddReply(var_658_int, var_659_int, var_660_int); // 0x4ee TObjFunc
	
Label_1264:
	var_661_bool = 0; var_662_object = Obj(); // 0x4f0 PushV
	var_662_object = var_1_object; // 0x4f1 MovT
	func_11922(var_661_bool, var_662_object); // 0x4f2 NEW_2
	var_673_bool = var_661_bool == 0; // 0x4f4 Not
	if(var_673_bool == 0) goto Label_1275; // 0x4f5 JumpB
	var_674_int = 520897; // 0x4f6 PushI
	var_675_int = 22115; // 0x4f7 PushI
	var_676_int = 22114; // 0x4f8 PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x4f9 TObjFunc
	
Label_1275:
	var_677_int = 520896; // 0x4fb PushI
	var_678_int = -1; // 0x4fc PushI
	var_679_int = 22113; // 0x4fd PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0x4fe TObjFunc
	goto Label_1283; // 0x500 Jump
	
Label_1283:
	var_680_bool = 0; // 0x503 PushV
	func_10509(var_680_bool); // 0x504 NEW_2
	if(var_680_bool == 0) goto Label_1298; // 0x506 JumpB
	
Label_1287:
	lshWaitForAnimEnd(); // 0x507 Func
	var_681_object = var_3_object; // 0x509 PushT
	if(var_681_object == 0) goto Label_1292; // 0x50a JumpB
	goto Label_1297; // 0x50b Jump
	
Label_1297:
	goto Label_1312; // 0x511 Jump
	
Label_1312:
	return 0; // 0x520 Return
	
Label_1292:
	var_682_string = ""; // 0x50c PushV
	var_682_string = var_2_object; // 0x50d MovT
	func_10198(var_682_string); // 0x50e NEW_2
	goto Label_1287; // 0x510 Jump
	
Label_1298:
	var_683_string = "all"; // 0x512 PushS
	var_684_string = "idle"; // 0x513 PushS
	PlayAnimation(var_683_string, var_684_string); // 0x514 Func
	
Label_1302:
	WaitForAnimEnd(); // 0x516 Func
	var_685_object = var_3_object; // 0x518 PushT
	if(var_685_object == 0) goto Label_1307; // 0x519 JumpB
	goto Label_1312; // 0x51a Jump
	
Label_1307:
	var_686_string = "all"; // 0x51b PushS
	var_687_string = "idle"; // 0x51c PushS
	PlayAnimation(var_686_string, var_687_string); // 0x51d Func
	goto Label_1302; // 0x51f Jump
}


func_2200(var_0_bool, var_1_object, var_2_object, var_3_object, var_716_object, var_717_object)
{
	var_0_bool = var_717_object; // 0x899 TMov
	var_1_object = var_716_object; // 0x89a TMov
	var_3_object = 0; // 0x89b TMovB
	var_722_int = 1; // 0x89c PushI
	if(var_722_int == 0) goto Label_2307; // 0x89d JumpB
	var_723_bool = 0; // 0x89e PushV
	var_723_bool = 0; // 0x89f MovB
	var_724_bool = 0; var_725_object = Obj(); // 0x8a0 PushV
	var_725_object = var_1_object; // 0x8a1 MovT
	func_11576(var_725_object); // 0x8a2 NEW_2
	if(var_724_bool == 0) goto Label_2220; // 0x8a4 JumpB
	var_730_bool = 0; var_731_object = Obj(); // 0x8a5 PushV
	var_731_object = var_1_object; // 0x8a6 MovT
	func_11552(var_731_object); // 0x8a7 NEW_2
	var_736_bool = var_730_bool == 0; // 0x8a9 Not
	if(var_736_bool == 0) goto Label_2220; // 0x8aa JumpB
	var_723_bool = 1; // 0x8ab MovB
	
Label_2220:
	if(var_723_bool == 0) goto Label_2241; // 0x8ac JumpB
	var_737_object = Obj(); var_738_object = Obj(); // 0x8ad PushV
	var_737_object = var_1_object; // 0x8ae MovT
	var_738_object = var_0_bool; // 0x8af MovT
	func_10659(); // 0x8b0 NEW_2
	var_741_string = ""; // 0x8b2 PushV
	var_741_string = "Neutral"; // 0x8b3 MovS
	func_2337(var_717_object, var_741_string); // 0x8b4 NEW_2
	var_749_int = 511395; // 0x8b6 PushI
	SetMessage(var_749_int); // 0x8b7 TObjFunc
	ClearReplies(); // 0x8b9 TObjFunc
	var_750_int = 511396; // 0x8bb PushI
	var_751_int = 12594; // 0x8bc PushI
	var_752_int = 12593; // 0x8bd PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0x8be TObjFunc
	goto Label_2307; // 0x8c0 Jump
	
Label_2307:
	var_753_bool = 0; // 0x903 PushV
	func_10509(var_753_bool); // 0x904 NEW_2
	if(var_753_bool == 0) goto Label_2322; // 0x906 JumpB
	
Label_2311:
	lshWaitForAnimEnd(); // 0x907 Func
	var_754_object = var_3_object; // 0x909 PushT
	if(var_754_object == 0) goto Label_2316; // 0x90a JumpB
	goto Label_2321; // 0x90b Jump
	
Label_2321:
	goto Label_2336; // 0x911 Jump
	
Label_2336:
	return 0; // 0x920 Return
	
Label_2316:
	var_755_string = ""; // 0x90c PushV
	var_755_string = var_2_object; // 0x90d MovT
	func_10198(var_755_string); // 0x90e NEW_2
	goto Label_2311; // 0x910 Jump
	
Label_2322:
	var_756_string = "all"; // 0x912 PushS
	var_757_string = "idle"; // 0x913 PushS
	PlayAnimation(var_756_string, var_757_string); // 0x914 Func
	
Label_2326:
	WaitForAnimEnd(); // 0x916 Func
	var_758_object = var_3_object; // 0x918 PushT
	if(var_758_object == 0) goto Label_2331; // 0x919 JumpB
	goto Label_2336; // 0x91a Jump
	
Label_2331:
	var_759_string = "all"; // 0x91b PushS
	var_760_string = "idle"; // 0x91c PushS
	PlayAnimation(var_759_string, var_760_string); // 0x91d Func
	goto Label_2326; // 0x91f Jump
	
Label_2241:
	var_761_string = ""; // 0x8c1 PushV
	var_761_string = "Neutral"; // 0x8c2 MovS
	func_2337(var_717_object, var_761_string); // 0x8c3 NEW_2
	var_762_int = 510814; // 0x8c5 PushI
	SetMessage(var_762_int); // 0x8c6 TObjFunc
	ClearReplies(); // 0x8c8 TObjFunc
	var_763_bool = 0; // 0x8ca PushV
	var_763_bool = 0; // 0x8cb MovB
	var_764_bool = 0; var_765_object = Obj(); // 0x8cc PushV
	var_765_object = var_1_object; // 0x8cd MovT
	func_11564(var_765_object); // 0x8ce NEW_2
	if(var_764_bool == 0) goto Label_2263; // 0x8d0 JumpB
	var_770_bool = 0; var_771_object = Obj(); // 0x8d1 PushV
	var_771_object = var_1_object; // 0x8d2 MovT
	func_11552(var_771_object); // 0x8d3 NEW_2
	if(var_770_bool == 0) goto Label_2263; // 0x8d5 JumpB
	var_763_bool = 1; // 0x8d6 MovB
	
Label_2263:
	if(var_763_bool == 0) goto Label_2269; // 0x8d7 JumpB
	var_772_int = 510815; // 0x8d8 PushI
	var_773_int = 11956; // 0x8d9 PushI
	var_774_int = 11955; // 0x8da PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0x8db TObjFunc
	
Label_2269:
	var_775_bool = 0; // 0x8dd PushV
	var_775_bool = 0; // 0x8de MovB
	var_776_bool = 0; var_777_object = Obj(); // 0x8df PushV
	var_777_object = var_1_object; // 0x8e0 MovT
	func_11600(var_777_object); // 0x8e1 NEW_2
	if(var_776_bool == 0) goto Label_2282; // 0x8e3 JumpB
	var_782_bool = 0; var_783_object = Obj(); // 0x8e4 PushV
	var_783_object = var_1_object; // 0x8e5 MovT
	func_11588(var_783_object); // 0x8e6 NEW_2
	if(var_782_bool == 0) goto Label_2282; // 0x8e8 JumpB
	var_775_bool = 1; // 0x8e9 MovB
	
Label_2282:
	if(var_775_bool == 0) goto Label_2288; // 0x8ea JumpB
	var_788_int = 511862; // 0x8eb PushI
	var_789_int = 37886; // 0x8ec PushI
	var_790_int = 13075; // 0x8ed PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0x8ee TObjFunc
	
Label_2288:
	var_791_bool = 0; var_792_object = Obj(); // 0x8f0 PushV
	var_792_object = var_1_object; // 0x8f1 MovT
	func_11922(var_791_bool, var_792_object); // 0x8f2 NEW_2
	var_793_bool = var_791_bool == 0; // 0x8f4 Not
	if(var_793_bool == 0) goto Label_2299; // 0x8f5 JumpB
	var_794_int = 520901; // 0x8f6 PushI
	var_795_int = 22119; // 0x8f7 PushI
	var_796_int = 22118; // 0x8f8 PushI
	AddReply(var_794_int, var_795_int, var_796_int); // 0x8f9 TObjFunc
	
Label_2299:
	var_797_int = 511408; // 0x8fb PushI
	var_798_int = -1; // 0x8fc PushI
	var_799_int = 12605; // 0x8fd PushI
	AddReply(var_797_int, var_798_int, var_799_int); // 0x8fe TObjFunc
	goto Label_2307; // 0x900 Jump
}


func_11932(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj(); // 0x2e9d PushV
	var_217_object = var_215_object; // 0x2e9e Mov
	func_11954(var_217_object); // 0x2e9f NEW_2
	if(var_216_bool == 0) goto Label_11940; // 0x2ea1 JumpB
	var_214_bool = 1; // 0x2ea2 MovB
	return 0; // 0x2ea3 Return
	
Label_11940:
	var_214_bool = 0; // 0x2ea4 MovB
	return 0; // 0x2ea5 Return
}


func_11420(var_1293_bool)
{
	var_1295_int = 0; var_1296_string = ""; // 0x2c9d PushV
	var_1296_string = "d8q04"; // 0x2c9e MovS
	func_10296(var_1295_int, var_1296_string); // 0x2c9f NEW_2
	var_1297_int = 2; // 0x2ca1 PushI
	var_1298_bool = var_1295_int == var_1297_int; // 0x2ca2 Eq
	if(var_1298_bool == 0) goto Label_11430; // 0x2ca3 JumpB
	var_1293_bool = 1; // 0x2ca4 MovB
	return 0; // 0x2ca5 Return
	
Label_11430:
	var_1293_bool = 0; // 0x2ca6 MovB
	return 0; // 0x2ca7 Return
}


func_9884(var_138_cvector)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); // 0x269c PushV
	GetPosition(var_140_cvector); // 0x269d Func
	var_138_cvector = var_140_cvector; // 0x269f Mov
	return 2; // 0x26a0 Return
}


func_10911()
{
	var_189_string = "ood4MladVlad1"; // 0x2aa0 PushS
	var_190_int = 1; // 0x2aa1 PushI
	SetVariable(var_189_string, var_190_int); // 0x2aa2 Func
	return 0; // 0x2aa4 Return
}


func_9889(var_86_float)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0x26a1 PushV
	GetPosition(var_91_cvector); // 0x26a2 Func
	GetPosition(var_92_cvector); // 0x26a4 ObjFunc
	var_93_cvector = var_92_cvector - var_91_cvector; // 0x26a6 Sub2
	var_86_float = var_93_cvector | var_93_cvector; // 0x26a7 Or2
	return 6; // 0x26a8 Return
}


func_10917()
{
	var_195_object = Obj(); var_196_object = Obj(); // 0x2aa5 PushV
	var_197_string = "d4q01"; // 0x2aa6 PushS
	var_198_int = 3; // 0x2aa7 PushI
	SetVariable(var_197_string, var_198_int); // 0x2aa8 Func
	var_199_object = Obj(); // 0x2aaa PushV
	func_12262(var_199_object); // 0x2aab NEW_2
	var_196_object = var_199_object; // 0x2aac Mov
	var_200_string = "d4q01MladVladGotoBigVlad"; // 0x2aae PushS
	var_201_string = "pt_map_bigvlad"; // 0x2aaf PushS
	var_202_int = 1; // 0x2ab0 PushI
	var_203_int = 511507; // 0x2ab1 PushI
	var_204_float = 0; // 0x2ab2 PushV
	func_10443(var_204_float); // 0x2ab3 NEW_2
	AddMark(var_200_string, var_201_string, var_202_int, var_203_int, var_204_float); // 0x2ab5 ObjFunc
	func_12039(); // 0x2ab8 NEW_2
	return 2; // 0x2aba Return
}


func_6822(var_2_object, var_1088_string)
{
	var_1089_bool = 0; // 0x1aa7 PushV
	func_10509(var_1089_bool); // 0x1aa8 NEW_2
	var_1090_bool = var_1089_bool == 0; // 0x1aaa Not
	if(var_1090_bool == 0) goto Label_6829; // 0x1aab JumpB
	return 0; // 0x1aac Return
	
Label_6829:
	var_1091_bool = var_1088_string == var_2_object; // 0x1aad Eq
	if(var_1091_bool == 0) goto Label_6832; // 0x1aae JumpB
	return 0; // 0x1aaf Return
	
Label_6832:
	var_1092_string = ""; var_1093_bool = 0; // 0x1ab0 PushV
	var_1092_string = var_1088_string; // 0x1ab1 Mov
	var_1094_string = ""; // 0x1ab2 PushS
	var_1095_bool = var_1088_string == var_1094_string; // 0x1ab3 Eq
	if(var_1095_bool == 0) goto Label_6839; // 0x1ab4 JumpB
	var_1093_bool = 0; // 0x1ab5 MovB
	goto Label_6840; // 0x1ab6 Jump
	
Label_6840:
	func_10214(var_1092_string, var_1093_bool); // 0x1ab8 NEW_2
	var_2_object = var_1088_string; // 0x1aba TMov
	return 0; // 0x1abb Return
	
Label_6839:
	var_1093_bool = 1; // 0x1ab7 MovB
}


func_11942(var_663_bool)
{
	var_665_int = 0; var_666_int = 0; var_667_int = 0; var_668_int = 0; // 0x2ea6 PushV
	var_669_int = 0; // 0x2ea7 PushV
	func_10448(var_669_int); // 0x2ea8 NEW_2
	var_667_int = var_669_int; // 0x2ea9 Mov
	var_670_string = "RMap"; // 0x2eab PushS
	var_671_int = var_670_string + var_667_int; // 0x2eac Add
	GetVariable(var_671_int, var_668_int); // 0x2ead Func
	var_672_int = 0; // 0x2eaf PushI
	var_663_bool = var_668_int != var_672_int; // 0x2eb0 Neq2
	return 4; // 0x2eb1 Return
}


func_11432(var_1471_bool)
{
	var_1473_int = 0; var_1474_string = ""; // 0x2ca9 PushV
	var_1474_string = "d11q05"; // 0x2caa MovS
	func_10296(var_1473_int, var_1474_string); // 0x2cab NEW_2
	var_1475_int = 2; // 0x2cad PushI
	var_1476_bool = var_1473_int == var_1475_int; // 0x2cae Eq
	if(var_1476_bool == 0) goto Label_11442; // 0x2caf JumpB
	var_1471_bool = 1; // 0x2cb0 MovB
	return 0; // 0x2cb1 Return
	
Label_11442:
	var_1471_bool = 0; // 0x2cb2 MovB
	return 0; // 0x2cb3 Return
}


func_9897(var_217_bool, var_218_object, var_219_string)
{
	var_220_bool = 0; var_221_bool = 0; // 0x26a9 PushV
	var_222_string = "HasProperty"; // 0x26aa PushS
	var_223_int = 2; // 0x26ab PushI
	var_224_bool = IsFuncExist(var_218_object, var_222_string, var_223_int); // 0x26ac FuncExist
	var_225_bool = var_224_bool == 0; // 0x26ad Not
	if(var_225_bool == 0) goto Label_9905; // 0x26ae JumpB
	var_217_bool = 0; // 0x26af MovB
	return 2; // 0x26b0 Return
	
Label_9905:
	HasProperty(var_219_string, var_221_bool); // 0x26b1 ObjFunc
	var_217_bool = var_221_bool; // 0x26b3 Mov
	return 2; // 0x26b4 Return
}


func_7339(var_2_object, var_1401_string)
{
	var_1402_bool = 0; // 0x1cac PushV
	func_10509(var_1402_bool); // 0x1cad NEW_2
	var_1403_bool = var_1402_bool == 0; // 0x1caf Not
	if(var_1403_bool == 0) goto Label_7346; // 0x1cb0 JumpB
	return 0; // 0x1cb1 Return
	
Label_7346:
	var_1404_bool = var_1401_string == var_2_object; // 0x1cb2 Eq
	if(var_1404_bool == 0) goto Label_7349; // 0x1cb3 JumpB
	return 0; // 0x1cb4 Return
	
Label_7349:
	var_1405_string = ""; var_1406_bool = 0; // 0x1cb5 PushV
	var_1405_string = var_1401_string; // 0x1cb6 Mov
	var_1407_string = ""; // 0x1cb7 PushS
	var_1408_bool = var_1401_string == var_1407_string; // 0x1cb8 Eq
	if(var_1408_bool == 0) goto Label_7356; // 0x1cb9 JumpB
	var_1406_bool = 0; // 0x1cba MovB
	goto Label_7357; // 0x1cbb Jump
	
Label_7357:
	func_10214(var_1405_string, var_1406_bool); // 0x1cbd NEW_2
	var_2_object = var_1401_string; // 0x1cbf TMov
	return 0; // 0x1cc0 Return
	
Label_7356:
	var_1406_bool = 1; // 0x1cbc MovB
}


func_11954(var_216_bool)
{
	var_218_int = 0; var_219_int = 0; // 0x2eb2 PushV
	var_220_string = "money"; // 0x2eb3 PushS
	GetProperty(var_220_string, var_219_int); // 0x2eb4 ObjFunc
	var_221_int = 1000; // 0x2eb6 PushI
	var_216_bool = var_219_int >= var_221_int; // 0x2eb7 GE2
	return 2; // 0x2eb8 Return
}


func_11444(var_643_bool)
{
	var_645_int = 0; var_646_string = ""; // 0x2cb5 PushV
	var_646_string = "ood3MladVlad3"; // 0x2cb6 MovS
	func_10296(var_645_int, var_646_string); // 0x2cb7 NEW_2
	var_647_int = 0; // 0x2cb9 PushI
	var_648_bool = var_645_int == var_647_int; // 0x2cba Eq
	if(var_648_bool == 0) goto Label_11454; // 0x2cbb JumpB
	var_643_bool = 1; // 0x2cbc MovB
	return 0; // 0x2cbd Return
	
Label_11454:
	var_643_bool = 0; // 0x2cbe MovB
	return 0; // 0x2cbf Return
}


func_10421(var_205_float)
{
	var_206_object = Obj(); var_207_object = Obj(); // 0x28b5 PushV
	CreateFloatVector(var_207_object); // 0x28b6 Func
	add(var_205_float); // 0x28b8 ObjFunc
	var_208_int = 16; // 0x28ba PushI
	SendWorldWndMessage(var_208_int, var_207_object); // 0x28bb Func
	return 2; // 0x28bd Return
}


func_9909(var_209_bool, var_210_object, var_211_string, var_212_float, var_213_float, var_214_float)
{
	var_215_float = 0; var_216_float = 0; // 0x26b5 PushV
	var_217_bool = 0; var_218_object = Obj(); var_219_string = ""; // 0x26b6 PushV
	var_218_object = var_210_object; // 0x26b7 Mov
	var_219_string = var_211_string; // 0x26b8 Mov
	func_9897(var_217_bool, var_218_object, var_219_string); // 0x26b9 NEW_2
	var_226_bool = var_217_bool == 0; // 0x26bb Not
	if(var_226_bool == 0) goto Label_9919; // 0x26bc JumpB
	var_209_bool = 0; // 0x26bd MovB
	return 2; // 0x26be Return
	
Label_9919:
	GetProperty(var_211_string, var_216_float); // 0x26bf ObjFunc
	var_227_float = 0; var_228_float = 0; var_229_float = 0; var_230_float = 0; // 0x26c1 PushV
	var_228_float = var_216_float + var_212_float; // 0x26c2 Add2
	var_229_float = var_213_float; // 0x26c3 Mov
	var_230_float = var_214_float; // 0x26c4 Mov
	func_10275(var_227_float, var_228_float, var_229_float, var_230_float); // 0x26c5 NEW_2
	SetProperty(var_211_string, var_227_float); // 0x26c7 ObjFunc
	var_209_bool = 1; // 0x26c9 MovB
	return 2; // 0x26ca Return
}


func_11961()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2eb9 PushV
	var_84_int = 685; // 0x2eba PushI
	var_85_int = 2; // 0x2ebb PushI
	var_86_int = 534500; // 0x2ebc PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x2ebd Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x2ebf PushV
	var_88_object = var_83_object; // 0x2ec0 Mov
	var_89_int = 682; // 0x2ec1 MovI
	func_12234(var_87_bool, var_88_object, var_89_int); // 0x2ec2 NEW_2
	return 2; // 0x2ec4 Return
}


func_10940()
{
	var_215_object = Obj(); var_216_object = Obj(); // 0x2abc PushV
	var_217_string = "d4q01_subquest"; // 0x2abd PushS
	var_218_int = 1; // 0x2abe PushI
	SetVariable(var_217_string, var_218_int); // 0x2abf Func
	var_219_object = Obj(); // 0x2ac1 PushV
	func_12262(var_219_object); // 0x2ac2 NEW_2
	var_216_object = var_219_object; // 0x2ac3 Mov
	var_220_string = "d4q01MladVladGotoOspina"; // 0x2ac5 PushS
	var_221_string = "pt_map_ospina"; // 0x2ac6 PushS
	var_222_int = 1; // 0x2ac7 PushI
	var_223_int = 511503; // 0x2ac8 PushI
	var_224_float = 0; // 0x2ac9 PushV
	func_10443(var_224_float); // 0x2aca NEW_2
	AddMark(var_220_string, var_221_string, var_222_int, var_223_int, var_224_float); // 0x2acc ObjFunc
	return 2; // 0x2ace Return
}


func_10431(var_185_bool, var_186_string, var_187_string)
{
	var_188_object = Obj(); var_189_object = Obj(); // 0x28bf PushV
	FindActor(var_189_object, var_186_string); // 0x28c0 Func
	var_190_bool = var_189_object == 0; // 0x28c2 NullEq
	if(var_190_bool == 0) goto Label_10438; // 0x28c3 JumpB
	var_185_bool = 0; // 0x28c4 MovB
	return 2; // 0x28c5 Return
	
Label_10438:
	Trigger(var_189_object, var_187_string); // 0x28c6 Func
	var_185_bool = 1; // 0x28c8 MovB
	return 2; // 0x28c9 Return
}


func_11456(var_529_bool)
{
	var_531_int = 0; var_532_string = ""; // 0x2cc1 PushV
	var_532_string = "d2q03"; // 0x2cc2 MovS
	func_10296(var_531_int, var_532_string); // 0x2cc3 NEW_2
	var_533_int = 1; // 0x2cc5 PushI
	var_534_bool = var_531_int == var_533_int; // 0x2cc6 Eq
	if(var_534_bool == 0) goto Label_11466; // 0x2cc7 JumpB
	var_529_bool = 1; // 0x2cc8 MovB
	return 0; // 0x2cc9 Return
	
Label_11466:
	var_529_bool = 0; // 0x2cca MovB
	return 0; // 0x2ccb Return
}


func_193()
{
	StopGroup0(); // 0xc1 Func
	StopAnimation(); // 0xc3 Func
	return 0; // 0xc5 Return
}


func_4289(var_2_object, var_974_string)
{
	var_975_bool = 0; // 0x10c2 PushV
	func_10509(var_975_bool); // 0x10c3 NEW_2
	var_976_bool = var_975_bool == 0; // 0x10c5 Not
	if(var_976_bool == 0) goto Label_4296; // 0x10c6 JumpB
	return 0; // 0x10c7 Return
	
Label_4296:
	var_977_bool = var_974_string == var_2_object; // 0x10c8 Eq
	if(var_977_bool == 0) goto Label_4299; // 0x10c9 JumpB
	return 0; // 0x10ca Return
	
Label_4299:
	var_978_string = ""; var_979_bool = 0; // 0x10cb PushV
	var_978_string = var_974_string; // 0x10cc Mov
	var_980_string = ""; // 0x10cd PushS
	var_981_bool = var_974_string == var_980_string; // 0x10ce Eq
	if(var_981_bool == 0) goto Label_4306; // 0x10cf JumpB
	var_979_bool = 0; // 0x10d0 MovB
	goto Label_4307; // 0x10d1 Jump
	
Label_4307:
	func_10214(var_978_string, var_979_bool); // 0x10d3 NEW_2
	var_2_object = var_974_string; // 0x10d5 TMov
	return 0; // 0x10d6 Return
	
Label_4306:
	var_979_bool = 1; // 0x10d2 MovB
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
	func_10470(var_220_int); // 0xe6 NEW_2
	var_197_int = var_220_int; // 0xe7 Mov
	var_233_int = var_197_int; // 0xe9 Push
	if(var_233_int == 0) goto Label_246; // 0xea JumpB
	irand(var_198_int, var_197_int); // 0xeb Func
	var_234_string = "all"; // 0xed PushS
	var_235_string = ""; var_236_int = 0; // 0xee PushV
	var_236_int = var_198_int; // 0xef Mov
	func_10463(var_235_string, var_236_int); // 0xf0 NEW_2
	PlayAnimation(var_234_string, var_235_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	
Label_204:
	var_192_string = "ptidle"; // 0xcc MovS
}


func_11974()
{
	var_177_object = Obj(); var_178_object = Obj(); // 0x2ec6 PushV
	var_179_int = 620; // 0x2ec7 PushI
	var_180_int = 1; // 0x2ec8 PushI
	var_181_int = 532194; // 0x2ec9 PushI
	CreateDiaryEntry(var_178_object, var_179_int, var_180_int, var_181_int); // 0x2eca Func
	var_182_bool = 0; var_183_object = Obj(); var_184_int = 0; // 0x2ecc PushV
	var_183_object = var_178_object; // 0x2ecd Mov
	var_184_int = 2; // 0x2ece MovI
	func_12234(var_182_bool, var_183_object, var_184_int); // 0x2ecf NEW_2
	return 2; // 0x2ed1 Return
}


func_9931(var_225_string, var_226_int)
{
	var_227_int = 0; var_228_int = 0; // 0x26cb PushV
	GetProperty(var_225_string, var_228_int); // 0x26cc ObjFunc
	var_229_int = var_228_int + var_226_int; // 0x26ce Add
	SetProperty(var_225_string, var_229_int); // 0x26cf ObjFunc
	return 2; // 0x26d1 Return
}


func_11468(var_538_bool)
{
	var_540_int = 0; var_541_string = ""; // 0x2ccd PushV
	var_541_string = "ood2MladVlad1"; // 0x2cce MovS
	func_10296(var_540_int, var_541_string); // 0x2ccf NEW_2
	var_542_int = 0; // 0x2cd1 PushI
	var_543_bool = var_540_int == var_542_int; // 0x2cd2 Eq
	if(var_543_bool == 0) goto Label_11478; // 0x2cd3 JumpB
	var_538_bool = 1; // 0x2cd4 MovB
	return 0; // 0x2cd5 Return
	
Label_11478:
	var_538_bool = 0; // 0x2cd6 MovB
	return 0; // 0x2cd7 Return
}


func_10443(var_97_float)
{
	var_98_float = 0; var_99_float = 0; // 0x28cb PushV
	GetGameTime(var_99_float); // 0x28cc Func
	var_97_float = var_99_float; // 0x28ce Mov
	return 2; // 0x28cf Return
}


func_10960()
{
	var_82_string = "ood4MladVlad2"; // 0x2ad1 PushS
	var_83_int = 1; // 0x2ad2 PushI
	SetVariable(var_82_string, var_83_int); // 0x2ad3 Func
	return 0; // 0x2ad5 Return
}


func_10448(var_222_int)
{
	var_223_float = 0; var_224_float = 0; // 0x28d0 PushV
	GetGameTime(var_224_float); // 0x28d1 Func
	var_225_int = 1; // 0x28d3 PushI
	var_226_int = 0; // 0x28d4 PushV
	var_227_int = 24; // 0x28d5 PushI
	var_226_int = var_224_float / var_224_float; // 0x28d6 Div2
	var_222_int = var_225_int + var_226_int; // 0x28d7 Add2
	return 2; // 0x28d8 Return
}


func_9938(var_165_bool, var_166_cvector)
{
	var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_bool = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_bool = 0; // 0x26d2 PushV
	GetPosition(var_170_cvector); // 0x26d3 Func
	var_171_cvector = var_166_cvector - var_170_cvector; // 0x26d5 Sub2
	var_173_float = GetByIndex(var_171_cvector, 0); // 0x26d6 PushE
	var_174_float = GetByIndex(var_171_cvector, 2); // 0x26d7 PushE
	Rotate(var_173_float, var_174_float, var_172_bool); // 0x26d8 Func
	var_165_bool = var_172_bool; // 0x26da Mov
	return 6; // 0x26db Return
}


func_11987()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x2ed3 PushV
	var_102_int = 37; // 0x2ed4 PushI
	var_103_int = 2; // 0x2ed5 PushI
	var_104_int = 512119; // 0x2ed6 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x2ed7 Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x2ed9 PushV
	var_106_object = var_101_object; // 0x2eda Mov
	var_107_int = -1; // 0x2edb MovI
	func_12234(var_105_bool, var_106_object, var_107_int); // 0x2edc NEW_2
	return 2; // 0x2ede Return
}


func_10966()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x2ad6 PushV
	var_88_object = Obj(); // 0x2ad7 PushV
	func_12262(var_88_object); // 0x2ad8 NEW_2
	var_87_object = var_88_object; // 0x2ad9 Mov
	var_95_string = "d4q02MladVladGotoAnna"; // 0x2adb PushS
	var_96_string = "pt_map_anna"; // 0x2adc PushS
	var_97_int = 0; // 0x2add PushI
	var_98_int = 511526; // 0x2ade PushI
	var_99_float = 0; // 0x2adf PushV
	func_10443(var_99_float); // 0x2ae0 NEW_2
	AddMark(var_95_string, var_96_string, var_97_int, var_98_int, var_99_float); // 0x2ae2 ObjFunc
	var_102_string = "d4q02MladVladGotoJulia"; // 0x2ae4 PushS
	var_103_string = "pt_map_julia"; // 0x2ae5 PushS
	var_104_int = 0; // 0x2ae6 PushI
	var_105_int = 511524; // 0x2ae7 PushI
	var_106_float = 0; // 0x2ae8 PushV
	func_10443(var_106_float); // 0x2ae9 NEW_2
	AddMark(var_102_string, var_103_string, var_104_int, var_105_int, var_106_float); // 0x2aeb ObjFunc
	var_107_string = "d4q02MladVladGotoLara"; // 0x2aed PushS
	var_108_string = "pt_map_lara"; // 0x2aee PushS
	var_109_int = 0; // 0x2aef PushI
	var_110_int = 511525; // 0x2af0 PushI
	var_111_float = 0; // 0x2af1 PushV
	func_10443(var_111_float); // 0x2af2 NEW_2
	AddMark(var_107_string, var_108_string, var_109_int, var_110_int, var_111_float); // 0x2af4 ObjFunc
	func_12052(); // 0x2af7 NEW_2
	func_12065(); // 0x2afa NEW_2
	var_143_object = Obj(); var_144_string = ""; // 0x2afc PushV
	var_144_string = "quest_d4_02"; // 0x2afd MovS
	func_10312(var_143_object, var_144_string); // 0x2afe NEW_2
	return 2; // 0x2b00 Return
}


func_727(var_2_object, var_513_string)
{
	var_514_bool = 0; // 0x2d8 PushV
	func_10509(var_514_bool); // 0x2d9 NEW_2
	var_515_bool = var_514_bool == 0; // 0x2db Not
	if(var_515_bool == 0) goto Label_734; // 0x2dc JumpB
	return 0; // 0x2dd Return
	
Label_734:
	var_516_bool = var_513_string == var_2_object; // 0x2de Eq
	if(var_516_bool == 0) goto Label_737; // 0x2df JumpB
	return 0; // 0x2e0 Return
	
Label_737:
	var_517_string = ""; var_518_bool = 0; // 0x2e1 PushV
	var_517_string = var_513_string; // 0x2e2 Mov
	var_519_string = ""; // 0x2e3 PushS
	var_520_bool = var_513_string == var_519_string; // 0x2e4 Eq
	if(var_520_bool == 0) goto Label_744; // 0x2e5 JumpB
	var_518_bool = 0; // 0x2e6 MovB
	goto Label_745; // 0x2e7 Jump
	
Label_745:
	func_10214(var_517_string, var_518_bool); // 0x2e9 NEW_2
	var_2_object = var_513_string; // 0x2eb TMov
	return 0; // 0x2ec Return
	
Label_744:
	var_518_bool = 1; // 0x2e8 MovB
}


func_11480(var_523_bool)
{
	var_525_int = 0; var_526_string = ""; // 0x2cd9 PushV
	var_526_string = "ood2MladVlad2"; // 0x2cda MovS
	func_10296(var_525_int, var_526_string); // 0x2cdb NEW_2
	var_527_int = 0; // 0x2cdd PushI
	var_528_bool = var_525_int == var_527_int; // 0x2cde Eq
	if(var_528_bool == 0) goto Label_11490; // 0x2cdf JumpB
	var_523_bool = 1; // 0x2ce0 MovB
	return 0; // 0x2ce1 Return
	
Label_11490:
	var_523_bool = 0; // 0x2ce2 MovB
	return 0; // 0x2ce3 Return
}


func_10457(var_326_bool, var_327_int)
{
	var_328_int = 0; // 0x28da PushV
	func_10448(var_328_int); // 0x28db NEW_2
	var_326_bool = var_328_int == var_327_int; // 0x28dd Eq2
	return 0; // 0x28de Return
}


func_9948(var_78_bool)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x26dc PushV
	GetPosition(var_81_cvector); // 0x26dd ObjFunc
	var_82_bool = 0; var_83_cvector = CVector(0,0,0); // 0x26df PushV
	var_83_cvector = var_81_cvector; // 0x26e0 Mov
	func_9938(var_82_bool, var_83_cvector); // 0x26e1 NEW_2
	var_78_bool = var_82_bool; // 0x26e2 Mov
	return 2; // 0x26e4 Return
}


func_4828(var_0_bool, var_1118_int, var_1119_object)
{
	var_1121_object = Obj(); var_1122_bool = 0; var_1123_int = 0; var_1124_bool = 0; var_1125_object = Obj(); var_1126_bool = 0; var_1127_int = 0; var_1128_bool = 0; // 0x12dc PushV
	var_0_bool = var_1119_object; // 0x12dd TMov
	var_1129_bool = 0; var_1130_object = Obj(); var_1131_float = 0; // 0x12de PushV
	var_1130_object = var_1119_object; // 0x12df Mov
	var_1131_float = 70.0; // 0x12e0 MovF
	func_9973(var_1130_object, var_1131_float); // 0x12e1 NEW_2
	var_1132_bool = var_1129_bool == 0; // 0x12e3 Not
	if(var_1132_bool == 0) goto Label_4839; // 0x12e4 JumpB
	var_1118_int = -2; // 0x12e5 MovI
	return 8; // 0x12e6 Return
	
Label_4839:
	CreateDialog(var_1125_object); // 0x12e7 Func
	var_1133_int = 0; // 0x12e9 PushV
	func_10503(var_1133_int); // 0x12ea NEW_2
	SetNPCName(var_1133_int); // 0x12ec ObjFunc
	var_1134_int = 0; // 0x12ee PushV
	func_10501(var_1134_int); // 0x12ef NEW_2
	SetNPCDescription(var_1134_int); // 0x12f1 ObjFunc
	var_1135_string = ""; // 0x12f3 PushV
	func_10505(var_1135_string); // 0x12f4 NEW_2
	SetPhoto(var_1135_string); // 0x12f6 ObjFunc
	var_1136_string = ""; // 0x12f8 PushV
	func_10507(var_1136_string); // 0x12f9 NEW_2
	SetPhoto2(var_1136_string); // 0x12fb ObjFunc
	var_1137_int = 0; // 0x12fd PushV
	func_12312(var_1137_int); // 0x12fe NEW_2
	SetPlayerName(var_1137_int); // 0x1300 ObjFunc
	var_1127_int = -1; // 0x1302 MovI
	IsOverrideActive(var_1126_bool); // 0x1303 Func
	var_1138_bool = var_1126_bool; // 0x1305 Push
	if(var_1138_bool == 0) goto Label_4873; // 0x1306 JumpB
	var_1118_int = -2; // 0x1307 MovI
	return 8; // 0x1308 Return
	
Label_4873:
	DoDialog(var_1125_object); // 0x1309 Func
	var_1139_bool = 0; var_1140_object = Obj(); // 0x130b PushV
	var_1141_object = Obj(); // 0x130c PushV
	func_10251(var_1141_object); // 0x130d NEW_2
	var_1140_object = var_1141_object; // 0x130e Mov
	func_10060(var_1139_bool, var_1140_object); // 0x1310 NEW_2
	var_1142_object = Obj(); var_1143_object = Obj(); // 0x1312 PushV
	var_1142_object = var_1119_object; // 0x1313 Mov
	var_1143_object = var_1125_object; // 0x1314 Mov
	TaskCall(17); // 0x1315 TaskCall
	func_4909(var_1144_object, var_1145_object, var_1146_string, var_1147_bool, var_1142_object, var_1143_object); // 0x1316 NEW_2
	TaskReturn(); // 0x1317 TaskReturn
	IsDialogEnd(var_1128_bool); // 0x1319 ObjFunc
	
Label_4891:
	var_1305_bool = var_1128_bool == 0; // 0x131b Not
	if(var_1305_bool == 0) goto Label_4898; // 0x131c JumpB
	sync(); // 0x131d Func
	IsDialogEnd(var_1128_bool); // 0x131f ObjFunc
	goto Label_4891; // 0x1321 Jump
	
Label_4898:
	var_1306_object = Obj(); // 0x1322 PushV
	var_1306_object = var_1119_object; // 0x1323 Mov
	func_10042(); // 0x1324 NEW_2
	StopDialog(var_1125_object); // 0x1326 Func
	GetReturnValue(var_1127_int); // 0x1328 ObjFunc
	var_1118_int = var_1127_int; // 0x132a Mov
	return 8; // 0x132b Return
}


func_10463(var_226_string, var_227_int)
{
	var_228_string = ""; var_229_string = ""; // 0x28df PushV
	var_229_string = "idle"; // 0x28e0 MovS
	var_230_int = var_227_int; // 0x28e1 Push
	if(var_230_int == 0) goto Label_10468; // 0x28e2 JumpB
	var_229_string = var_229_string + var_227_int; // 0x28e3 Add2
	
Label_10468:
	var_226_string = var_229_string; // 0x28e4 Mov
	return 2; // 0x28e5 Return
}


func_12000()
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x2ee0 PushV
	var_125_int = 681; // 0x2ee1 PushI
	var_126_int = 2; // 0x2ee2 PushI
	var_127_int = 534423; // 0x2ee3 PushI
	CreateDiaryEntry(var_124_object, var_125_int, var_126_int, var_127_int); // 0x2ee4 Func
	var_128_bool = 0; var_129_object = Obj(); var_130_int = 0; // 0x2ee6 PushV
	var_129_object = var_124_object; // 0x2ee7 Mov
	var_130_int = 37; // 0x2ee8 MovI
	func_12234(var_128_bool, var_129_object, var_130_int); // 0x2ee9 NEW_2
	return 2; // 0x2eeb Return
}


func_3298(var_0_bool, var_804_int, var_805_object)
{
	var_807_object = Obj(); var_808_bool = 0; var_809_int = 0; var_810_bool = 0; var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0; // 0xce2 PushV
	var_0_bool = var_805_object; // 0xce3 TMov
	var_815_bool = 0; var_816_object = Obj(); var_817_float = 0; // 0xce4 PushV
	var_816_object = var_805_object; // 0xce5 Mov
	var_817_float = 70.0; // 0xce6 MovF
	func_9973(var_816_object, var_817_float); // 0xce7 NEW_2
	var_818_bool = var_815_bool == 0; // 0xce9 Not
	if(var_818_bool == 0) goto Label_3309; // 0xcea JumpB
	var_804_int = -2; // 0xceb MovI
	return 8; // 0xcec Return
	
Label_3309:
	CreateDialog(var_811_object); // 0xced Func
	var_819_int = 0; // 0xcef PushV
	func_10503(var_819_int); // 0xcf0 NEW_2
	SetNPCName(var_819_int); // 0xcf2 ObjFunc
	var_820_int = 0; // 0xcf4 PushV
	func_10501(var_820_int); // 0xcf5 NEW_2
	SetNPCDescription(var_820_int); // 0xcf7 ObjFunc
	var_821_string = ""; // 0xcf9 PushV
	func_10505(var_821_string); // 0xcfa NEW_2
	SetPhoto(var_821_string); // 0xcfc ObjFunc
	var_822_string = ""; // 0xcfe PushV
	func_10507(var_822_string); // 0xcff NEW_2
	SetPhoto2(var_822_string); // 0xd01 ObjFunc
	var_823_int = 0; // 0xd03 PushV
	func_12312(var_823_int); // 0xd04 NEW_2
	SetPlayerName(var_823_int); // 0xd06 ObjFunc
	var_813_int = -1; // 0xd08 MovI
	IsOverrideActive(var_812_bool); // 0xd09 Func
	var_824_bool = var_812_bool; // 0xd0b Push
	if(var_824_bool == 0) goto Label_3343; // 0xd0c JumpB
	var_804_int = -2; // 0xd0d MovI
	return 8; // 0xd0e Return
	
Label_3343:
	DoDialog(var_811_object); // 0xd0f Func
	var_825_bool = 0; var_826_object = Obj(); // 0xd11 PushV
	var_827_object = Obj(); // 0xd12 PushV
	func_10251(var_827_object); // 0xd13 NEW_2
	var_826_object = var_827_object; // 0xd14 Mov
	func_10060(var_825_bool, var_826_object); // 0xd16 NEW_2
	var_828_object = Obj(); var_829_object = Obj(); // 0xd18 PushV
	var_828_object = var_805_object; // 0xd19 Mov
	var_829_object = var_811_object; // 0xd1a Mov
	TaskCall(13); // 0xd1b TaskCall
	func_3379(var_830_object, var_831_object, var_832_string, var_833_bool, var_828_object, var_829_object); // 0xd1c NEW_2
	TaskReturn(); // 0xd1d TaskReturn
	IsDialogEnd(var_814_bool); // 0xd1f ObjFunc
	
Label_3361:
	var_933_bool = var_814_bool == 0; // 0xd21 Not
	if(var_933_bool == 0) goto Label_3368; // 0xd22 JumpB
	sync(); // 0xd23 Func
	IsDialogEnd(var_814_bool); // 0xd25 ObjFunc
	goto Label_3361; // 0xd27 Jump
	
Label_3368:
	var_934_object = Obj(); // 0xd28 PushV
	var_934_object = var_805_object; // 0xd29 Mov
	func_10042(); // 0xd2a NEW_2
	StopDialog(var_811_object); // 0xd2c Func
	GetReturnValue(var_813_int); // 0xd2e ObjFunc
	var_804_int = var_813_int; // 0xd30 Mov
	return 8; // 0xd31 Return
}


func_11492(var_625_bool)
{
	var_627_int = 0; var_628_string = ""; // 0x2ce5 PushV
	var_628_string = "d3q01"; // 0x2ce6 MovS
	func_10296(var_627_int, var_628_string); // 0x2ce7 NEW_2
	var_629_int = 0; // 0x2ce9 PushI
	var_630_bool = var_627_int == var_629_int; // 0x2cea Eq
	if(var_630_bool == 0) goto Label_11502; // 0x2ceb JumpB
	var_625_bool = 1; // 0x2cec MovB
	return 0; // 0x2ced Return
	
Label_11502:
	var_625_bool = 0; // 0x2cee MovB
	return 0; // 0x2cef Return
}


func_9957()
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); // 0x26e5 PushV
	GetPosition(var_108_cvector); // 0x26e6 ObjFunc
	GetPosition(var_109_cvector); // 0x26e8 Func
	var_110_cvector = var_108_cvector - var_109_cvector; // 0x26ea Sub2
	var_111_float = GetByIndex(var_110_cvector, 0); // 0x26eb PushE
	var_112_float = GetByIndex(var_110_cvector, 2); // 0x26ec PushE
	RotateAsync(var_111_float, var_112_float); // 0x26ed Func
	return 6; // 0x26ef Return
}


func_10470(var_220_int)
{
	var_221_int = 0; var_222_bool = 0; var_223_int = 0; var_224_bool = 0; // 0x28e6 PushV
	var_223_int = 0; // 0x28e7 MovI
	
Label_10472:
	var_225_string = "all"; // 0x28e8 PushS
	var_226_string = ""; var_227_int = 0; // 0x28e9 PushV
	var_227_int = var_223_int; // 0x28ea Mov
	func_10463(var_226_string, var_227_int); // 0x28eb NEW_2
	HasAnimation(var_224_bool, var_225_string, var_226_string); // 0x28ed Func
	var_231_bool = var_224_bool == 0; // 0x28ef Not
	if(var_231_bool == 0) goto Label_10482; // 0x28f0 JumpB
	goto Label_10485; // 0x28f1 Jump
	
Label_10485:
	var_220_int = var_223_int; // 0x28f5 Mov
	return 4; // 0x28f6 Return
	
Label_10482:
	var_232_int = 1; // 0x28f2 PushI
	var_223_int = var_223_int + var_232_int; // 0x28f3 Add2
	goto Label_10472; // 0x28f4 Jump
}


func_7916(var_0_bool, var_329_int, var_330_object)
{
	var_332_object = Obj(); var_333_bool = 0; var_334_int = 0; var_335_bool = 0; var_336_object = Obj(); var_337_bool = 0; var_338_int = 0; var_339_bool = 0; // 0x1eec PushV
	var_0_bool = var_330_object; // 0x1eed TMov
	var_340_bool = 0; var_341_object = Obj(); var_342_float = 0; // 0x1eee PushV
	var_341_object = var_330_object; // 0x1eef Mov
	var_342_float = 70.0; // 0x1ef0 MovF
	func_9973(var_341_object, var_342_float); // 0x1ef1 NEW_2
	var_343_bool = var_340_bool == 0; // 0x1ef3 Not
	if(var_343_bool == 0) goto Label_7927; // 0x1ef4 JumpB
	var_329_int = -2; // 0x1ef5 MovI
	return 8; // 0x1ef6 Return
	
Label_7927:
	CreateDialog(var_336_object); // 0x1ef7 Func
	var_344_int = 0; // 0x1ef9 PushV
	func_10503(var_344_int); // 0x1efa NEW_2
	SetNPCName(var_344_int); // 0x1efc ObjFunc
	var_345_int = 0; // 0x1efe PushV
	func_10501(var_345_int); // 0x1eff NEW_2
	SetNPCDescription(var_345_int); // 0x1f01 ObjFunc
	var_346_string = ""; // 0x1f03 PushV
	func_10505(var_346_string); // 0x1f04 NEW_2
	SetPhoto(var_346_string); // 0x1f06 ObjFunc
	var_347_string = ""; // 0x1f08 PushV
	func_10507(var_347_string); // 0x1f09 NEW_2
	SetPhoto2(var_347_string); // 0x1f0b ObjFunc
	var_348_int = 0; // 0x1f0d PushV
	func_12312(var_348_int); // 0x1f0e NEW_2
	SetPlayerName(var_348_int); // 0x1f10 ObjFunc
	var_338_int = -1; // 0x1f12 MovI
	IsOverrideActive(var_337_bool); // 0x1f13 Func
	var_349_bool = var_337_bool; // 0x1f15 Push
	if(var_349_bool == 0) goto Label_7961; // 0x1f16 JumpB
	var_329_int = -2; // 0x1f17 MovI
	return 8; // 0x1f18 Return
	
Label_7961:
	DoDialog(var_336_object); // 0x1f19 Func
	var_350_bool = 0; var_351_object = Obj(); // 0x1f1b PushV
	var_352_object = Obj(); // 0x1f1c PushV
	func_10251(var_352_object); // 0x1f1d NEW_2
	var_351_object = var_352_object; // 0x1f1e Mov
	func_10060(var_350_bool, var_351_object); // 0x1f20 NEW_2
	var_353_object = Obj(); var_354_object = Obj(); // 0x1f22 PushV
	var_353_object = var_330_object; // 0x1f23 Mov
	var_354_object = var_336_object; // 0x1f24 Mov
	TaskCall(27); // 0x1f25 TaskCall
	func_7997(var_355_object, var_356_object, var_357_string, var_358_bool, var_353_object, var_354_object); // 0x1f26 NEW_2
	TaskReturn(); // 0x1f27 TaskReturn
	IsDialogEnd(var_339_bool); // 0x1f29 ObjFunc
	
Label_7979:
	var_478_bool = var_339_bool == 0; // 0x1f2b Not
	if(var_478_bool == 0) goto Label_7986; // 0x1f2c JumpB
	sync(); // 0x1f2d Func
	IsDialogEnd(var_339_bool); // 0x1f2f ObjFunc
	goto Label_7979; // 0x1f31 Jump
	
Label_7986:
	var_479_object = Obj(); // 0x1f32 PushV
	var_479_object = var_330_object; // 0x1f33 Mov
	func_10042(); // 0x1f34 NEW_2
	StopDialog(var_336_object); // 0x1f36 Func
	GetReturnValue(var_338_int); // 0x1f38 ObjFunc
	var_329_int = var_338_int; // 0x1f3a Mov
	return 8; // 0x1f3b Return
}


func_12013()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x2eed PushV
	var_108_int = 78; // 0x2eee PushI
	var_109_int = 2; // 0x2eef PushI
	var_110_int = 512160; // 0x2ef0 PushI
	CreateDiaryEntry(var_107_object, var_108_int, var_109_int, var_110_int); // 0x2ef1 Func
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; // 0x2ef3 PushV
	var_112_object = var_107_object; // 0x2ef4 Mov
	var_113_int = 26; // 0x2ef5 MovI
	func_12234(var_111_bool, var_112_object, var_113_int); // 0x2ef6 NEW_2
	return 2; // 0x2ef8 Return
}


func_9968(var_112_bool)
{
	var_113_bool = 0; var_114_bool = 0; // 0x26f0 PushV
	IsLoaded(var_114_bool); // 0x26f1 Func
	var_112_bool = var_114_bool; // 0x26f3 Mov
	return 2; // 0x26f4 Return
}


func_11504(var_603_bool)
{
	var_605_int = 0; var_606_string = ""; // 0x2cf1 PushV
	var_606_string = "d3q02"; // 0x2cf2 MovS
	func_10296(var_605_int, var_606_string); // 0x2cf3 NEW_2
	var_607_int = 1; // 0x2cf5 PushI
	var_608_bool = var_605_int == var_607_int; // 0x2cf6 Eq
	if(var_608_bool == 0) goto Label_11514; // 0x2cf7 JumpB
	var_603_bool = 1; // 0x2cf8 MovB
	return 0; // 0x2cf9 Return
	
Label_11514:
	var_603_bool = 0; // 0x2cfa MovB
	return 0; // 0x2cfb Return
}


func_9973(var_106_bool, var_108_float)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0; var_126_bool = 0; // 0x26f5 PushV
	GetPosition(var_119_cvector); // 0x26f6 ObjFunc
	GetEyesHeight(var_118_float); // 0x26f8 ObjFunc
	var_127_float = GetByIndex(var_119_cvector, 1); // 0x26fa PushE
	var_127_float = var_127_float + var_118_float; // 0x26fb Add2
	SetByIndex(var_119_cvector, 1) = var_127_float; // 0x26fc PopE
	GetPosition(var_120_cvector); // 0x26fd Func
	GetEyesHeight(var_118_float); // 0x26ff Func
	var_128_float = GetByIndex(var_120_cvector, 1); // 0x2701 PushE
	var_128_float = var_128_float + var_118_float; // 0x2702 Add2
	SetByIndex(var_120_cvector, 1) = var_128_float; // 0x2703 PopE
	var_121_cvector = var_119_cvector - var_120_cvector; // 0x2704 Sub2
	var_129_float = GetByIndex(var_121_cvector, 1); // 0x2705 PushE
	var_129_float = 0; // 0x2706 MovI
	SetByIndex(var_121_cvector, 1) = var_129_float; // 0x2707 PopE
	var_130_int = var_121_cvector | var_121_cvector; // 0x2708 Or
	var_131_float = sqrt(var_130_int); // 0x2709 Sqrt
	var_121_cvector = var_121_cvector / var_121_cvector; // 0x270a Div2
	var_122_cvector = -var_121_cvector; // 0x270b Neg2
	var_132_float = var_121_cvector * var_108_float; // 0x270c Mult
	var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); // 0x270d PushV
	var_135_cvector = CVector(0.0, 1.0, 0.0); // 0x270e PushVec
	var_134_cvector = var_122_cvector ^ var_135_cvector; // 0x270f Xor2
	func_10257(var_133_cvector, var_134_cvector); // 0x2710 NEW_2
	var_141_int = 25; // 0x2712 PushI
	var_142_float = var_133_cvector * var_141_int; // 0x2713 Mult
	var_143_int = var_132_float + var_142_float; // 0x2714 Add
	var_144_cvector = CVector(0.0, 10.0, 0.0); // 0x2715 PushVec
	var_123_cvector = var_143_int - var_144_cvector; // 0x2716 Sub2
	var_124_cvector = var_120_cvector + var_123_cvector; // 0x2717 Add2
	IsOverrideActive(var_125_bool); // 0x2718 Func
	var_145_bool = var_125_bool; // 0x271a Push
	if(var_145_bool == 0) goto Label_10014; // 0x271b JumpB
	var_106_bool = 0; // 0x271c MovB
	return 18; // 0x271d Return
	
Label_10014:
	StopWorld(); // 0x271e Func
	var_146_bool = 1; // 0x2720 PushB
	CameraTransit(var_124_cvector, var_122_cvector, var_146_bool); // 0x2721 Func
	var_147_float = GetByIndex(var_123_cvector, 0); // 0x2723 PushE
	var_148_float = GetByIndex(var_123_cvector, 2); // 0x2724 PushE
	Rotate(var_147_float, var_148_float); // 0x2725 Func
	var_149_bool = 0; // 0x2727 PushV
	func_10509(var_149_bool); // 0x2728 NEW_2
	if(var_149_bool == 0) goto Label_10028; // 0x272a JumpB
	goto Label_10036; // 0x272b Jump
	
Label_10036:
	CameraWaitForPlayFinish(); // 0x2734 Func
	ResumeWorld(); // 0x2736 Func
	var_106_bool = 1; // 0x2738 MovB
	return 18; // 0x2739 Return
	
Label_10028:
	var_150_string = "head"; // 0x272c PushS
	HasAnimationTrack(var_126_bool, var_150_string); // 0x272d Func
	var_151_bool = var_126_bool; // 0x272f Push
	if(var_151_bool == 0) goto Label_10036; // 0x2730 JumpB
	var_152_string = "head"; // 0x2731 PushS
	LookAsyncCamera(var_152_string); // 0x2732 Func
}


func_10487(var_102_string, var_103_int)
{
	var_104_int = 0; // 0x28f8 PushI
	var_105_bool = var_103_int == var_104_int; // 0x28f9 Eq
	if(var_105_bool == 0) goto Label_10495; // 0x28fa JumpB
	var_106_string = "pt_"; // 0x28fb PushS
	var_107_string = GlobalVars[0]; // 0x28fc PushGE
	var_102_string = var_106_string + var_107_string; // 0x28fd Add2
	goto Label_10499; // 0x28fe Jump
	
Label_10499:
	return 0; // 0x2903 Return
	
Label_10495:
	var_108_string = "pt_"; // 0x28ff PushS
	var_109_string = GlobalVars[0]; // 0x2900 PushGE
	var_110_int = var_108_string + var_109_string; // 0x2901 Add
	var_102_string = var_110_int + var_103_int; // 0x2902 Add2
}


func_12026()
{
	var_157_object = Obj(); var_158_object = Obj(); // 0x2efa PushV
	var_159_int = 79; // 0x2efb PushI
	var_160_int = 2; // 0x2efc PushI
	var_161_int = 512161; // 0x2efd PushI
	CreateDiaryEntry(var_158_object, var_159_int, var_160_int, var_161_int); // 0x2efe Func
	var_162_bool = 0; var_163_object = Obj(); var_164_int = 0; // 0x2f00 PushV
	var_163_object = var_158_object; // 0x2f01 Mov
	var_164_int = 26; // 0x2f02 MovI
	func_12234(var_162_bool, var_163_object, var_164_int); // 0x2f03 NEW_2
	return 2; // 0x2f05 Return
}


func_11516(var_609_bool)
{
	var_611_int = 0; var_612_string = ""; // 0x2cfd PushV
	var_612_string = "ood3MladVlad1"; // 0x2cfe MovS
	func_10296(var_611_int, var_612_string); // 0x2cff NEW_2
	var_613_int = 0; // 0x2d01 PushI
	var_614_bool = var_611_int == var_613_int; // 0x2d02 Eq
	if(var_614_bool == 0) goto Label_11526; // 0x2d03 JumpB
	var_609_bool = 1; // 0x2d04 MovB
	return 0; // 0x2d05 Return
	
Label_11526:
	var_609_bool = 0; // 0x2d06 MovB
	return 0; // 0x2d07 Return
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


func_11010()
{
	var_244_string = "ood4MladVlad3"; // 0x2b03 PushS
	var_245_int = 1; // 0x2b04 PushI
	SetVariable(var_244_string, var_245_int); // 0x2b05 Func
	return 0; // 0x2b07 Return
}


func_10501(var_155_int)
{
	var_155_int = 515547; // 0x2905 MovI
	return 0; // 0x2906 Return
}


func_10503(var_154_int)
{
	var_154_int = 502872; // 0x2907 MovI
	return 0; // 0x2908 Return
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


func_10505(var_156_string)
{
	var_156_string = "ui/NPC_MladVlad.png"; // 0x2909 MovS
	return 0; // 0x290a Return
}


func_11528(var_637_bool)
{
	var_639_int = 0; var_640_string = ""; // 0x2d09 PushV
	var_640_string = "d3q02"; // 0x2d0a MovS
	func_10296(var_639_int, var_640_string); // 0x2d0b NEW_2
	var_641_int = 3; // 0x2d0d PushI
	var_642_bool = var_639_int == var_641_int; // 0x2d0e Eq
	if(var_642_bool == 0) goto Label_11538; // 0x2d0f JumpB
	var_637_bool = 1; // 0x2d10 MovB
	return 0; // 0x2d11 Return
	
Label_11538:
	var_637_bool = 0; // 0x2d12 MovB
	return 0; // 0x2d13 Return
}


func_10507(var_157_string)
{
	var_157_string = "ui/NPC_MladVlad_b.png"; // 0x290b MovS
	return 0; // 0x290c Return
}


func_11016()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x2b08 PushV
	var_88_object = Obj(); // 0x2b09 PushV
	func_12262(var_88_object); // 0x2b0a NEW_2
	var_87_object = var_88_object; // 0x2b0b Mov
	var_95_string = "d6q02MladVladGotoBigVlad"; // 0x2b0d PushS
	var_96_string = "pt_map_bigvlad"; // 0x2b0e PushS
	var_97_int = 0; // 0x2b0f PushI
	var_98_int = 515378; // 0x2b10 PushI
	var_99_float = 0; // 0x2b11 PushV
	func_10443(var_99_float); // 0x2b12 NEW_2
	AddMark(var_95_string, var_96_string, var_97_int, var_98_int, var_99_float); // 0x2b14 ObjFunc
	var_102_string = "d6q02MladVladGotoBigVladSelf"; // 0x2b16 PushS
	var_103_string = "pt_map_mladvlad"; // 0x2b17 PushS
	var_104_int = 0; // 0x2b18 PushI
	var_105_int = 515379; // 0x2b19 PushI
	var_106_float = 0; // 0x2b1a PushV
	func_10443(var_106_float); // 0x2b1b NEW_2
	AddMark(var_102_string, var_103_string, var_104_int, var_105_int, var_106_float); // 0x2b1d ObjFunc
	func_12104(); // 0x2b20 NEW_2
	func_12130(); // 0x2b23 NEW_2
	var_138_object = Obj(); var_139_string = ""; // 0x2b25 PushV
	var_139_string = "quest_d6_02"; // 0x2b26 MovS
	func_10301(var_138_object, var_139_string); // 0x2b27 NEW_2
	var_146_bool = 0; var_147_string = ""; var_148_string = ""; // 0x2b29 PushV
	var_147_string = "quest_d6_02"; // 0x2b2a MovS
	var_148_string = "place_trigger"; // 0x2b2b MovS
	func_10431(var_146_bool, var_147_string, var_148_string); // 0x2b2c NEW_2
	return 2; // 0x2b2e Return
}


func_10509(var_149_bool)
{
	var_149_bool = 1; // 0x290d MovB
	return 0; // 0x290e Return
}


func_12039()
{
	var_205_object = Obj(); var_206_object = Obj(); // 0x2f07 PushV
	var_207_int = 137; // 0x2f08 PushI
	var_208_int = 1; // 0x2f09 PushI
	var_209_int = 515323; // 0x2f0a PushI
	CreateDiaryEntry(var_206_object, var_207_int, var_208_int, var_209_int); // 0x2f0b Func
	var_210_bool = 0; var_211_object = Obj(); var_212_int = 0; // 0x2f0d PushV
	var_211_object = var_206_object; // 0x2f0e Mov
	var_212_int = 20; // 0x2f0f MovI
	func_12234(var_210_bool, var_211_object, var_212_int); // 0x2f10 NEW_2
	return 2; // 0x2f12 Return
}


func_10511(var_88_object)
{
	var_90_string = "money 4000 is given"; // 0x2910 PushS
	Trace(var_90_string); // 0x2911 Func
	var_91_object = Obj(); var_92_int = 0; // 0x2913 PushV
	var_91_object = var_88_object; // 0x2914 Mov
	var_92_int = 4000; // 0x2915 MovI
	func_10335(var_91_object, var_92_int); // 0x2916 NEW_2
	return 0; // 0x2918 Return
}


func_11540(var_650_bool)
{
	var_652_int = 0; var_653_string = ""; // 0x2d15 PushV
	var_653_string = "d3q02"; // 0x2d16 MovS
	func_10296(var_652_int, var_653_string); // 0x2d17 NEW_2
	var_654_int = 4; // 0x2d19 PushI
	var_655_bool = var_652_int == var_654_int; // 0x2d1a Eq
	if(var_655_bool == 0) goto Label_11550; // 0x2d1b JumpB
	var_650_bool = 1; // 0x2d1c MovB
	return 0; // 0x2d1d Return
	
Label_11550:
	var_650_bool = 0; // 0x2d1e MovB
	return 0; // 0x2d1f Return
}


func_12052()
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x2f14 PushV
	var_114_int = 21; // 0x2f15 PushI
	var_115_int = 2; // 0x2f16 PushI
	var_116_int = 503361; // 0x2f17 PushI
	CreateDiaryEntry(var_113_object, var_114_int, var_115_int, var_116_int); // 0x2f18 Func
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0; // 0x2f1a PushV
	var_118_object = var_113_object; // 0x2f1b Mov
	var_119_int = -1; // 0x2f1c MovI
	func_12234(var_117_bool, var_118_object, var_119_int); // 0x2f1d NEW_2
	return 2; // 0x2f1f Return
}


func_6933(var_0_bool, var_1309_int, var_1310_object)
{
	var_1312_object = Obj(); var_1313_bool = 0; var_1314_int = 0; var_1315_bool = 0; var_1316_object = Obj(); var_1317_bool = 0; var_1318_int = 0; var_1319_bool = 0; // 0x1b15 PushV
	var_0_bool = var_1310_object; // 0x1b16 TMov
	var_1320_bool = 0; var_1321_object = Obj(); var_1322_float = 0; // 0x1b17 PushV
	var_1321_object = var_1310_object; // 0x1b18 Mov
	var_1322_float = 70.0; // 0x1b19 MovF
	func_9973(var_1321_object, var_1322_float); // 0x1b1a NEW_2
	var_1323_bool = var_1320_bool == 0; // 0x1b1c Not
	if(var_1323_bool == 0) goto Label_6944; // 0x1b1d JumpB
	var_1309_int = -2; // 0x1b1e MovI
	return 8; // 0x1b1f Return
	
Label_6944:
	CreateDialog(var_1316_object); // 0x1b20 Func
	var_1324_int = 0; // 0x1b22 PushV
	func_10503(var_1324_int); // 0x1b23 NEW_2
	SetNPCName(var_1324_int); // 0x1b25 ObjFunc
	var_1325_int = 0; // 0x1b27 PushV
	func_10501(var_1325_int); // 0x1b28 NEW_2
	SetNPCDescription(var_1325_int); // 0x1b2a ObjFunc
	var_1326_string = ""; // 0x1b2c PushV
	func_10505(var_1326_string); // 0x1b2d NEW_2
	SetPhoto(var_1326_string); // 0x1b2f ObjFunc
	var_1327_string = ""; // 0x1b31 PushV
	func_10507(var_1327_string); // 0x1b32 NEW_2
	SetPhoto2(var_1327_string); // 0x1b34 ObjFunc
	var_1328_int = 0; // 0x1b36 PushV
	func_12312(var_1328_int); // 0x1b37 NEW_2
	SetPlayerName(var_1328_int); // 0x1b39 ObjFunc
	var_1318_int = -1; // 0x1b3b MovI
	IsOverrideActive(var_1317_bool); // 0x1b3c Func
	var_1329_bool = var_1317_bool; // 0x1b3e Push
	if(var_1329_bool == 0) goto Label_6978; // 0x1b3f JumpB
	var_1309_int = -2; // 0x1b40 MovI
	return 8; // 0x1b41 Return
	
Label_6978:
	DoDialog(var_1316_object); // 0x1b42 Func
	var_1330_bool = 0; var_1331_object = Obj(); // 0x1b44 PushV
	var_1332_object = Obj(); // 0x1b45 PushV
	func_10251(var_1332_object); // 0x1b46 NEW_2
	var_1331_object = var_1332_object; // 0x1b47 Mov
	func_10060(var_1330_bool, var_1331_object); // 0x1b49 NEW_2
	var_1333_object = Obj(); var_1334_object = Obj(); // 0x1b4b PushV
	var_1333_object = var_1310_object; // 0x1b4c Mov
	var_1334_object = var_1316_object; // 0x1b4d Mov
	TaskCall(21); // 0x1b4e TaskCall
	func_7014(var_1335_object, var_1336_object, var_1337_string, var_1338_bool, var_1333_object, var_1334_object); // 0x1b4f NEW_2
	TaskReturn(); // 0x1b50 TaskReturn
	IsDialogEnd(var_1319_bool); // 0x1b52 ObjFunc
	
Label_6996:
	var_1366_bool = var_1319_bool == 0; // 0x1b54 Not
	if(var_1366_bool == 0) goto Label_7003; // 0x1b55 JumpB
	sync(); // 0x1b56 Func
	IsDialogEnd(var_1319_bool); // 0x1b58 ObjFunc
	goto Label_6996; // 0x1b5a Jump
	
Label_7003:
	var_1367_object = Obj(); // 0x1b5b PushV
	var_1367_object = var_1310_object; // 0x1b5c Mov
	func_10042(); // 0x1b5d NEW_2
	StopDialog(var_1316_object); // 0x1b5f Func
	GetReturnValue(var_1318_int); // 0x1b61 ObjFunc
	var_1309_int = var_1318_int; // 0x1b63 Mov
	return 8; // 0x1b64 Return
}


func_10521(var_167_object)
{
	var_169_string = "money20000 is given"; // 0x291a PushS
	Trace(var_169_string); // 0x291b Func
	var_170_object = Obj(); var_171_int = 0; // 0x291d PushV
	var_170_object = var_167_object; // 0x291e Mov
	var_171_int = 20000; // 0x291f MovI
	func_10335(var_170_object, var_171_int); // 0x2920 NEW_2
	return 0; // 0x2922 Return
}


func_282(var_0_bool, var_95_int, var_96_object)
{
	var_98_object = Obj(); var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_object = Obj(); var_103_bool = 0; var_104_int = 0; var_105_bool = 0; // 0x11a PushV
	var_0_bool = var_96_object; // 0x11b TMov
	var_106_bool = 0; var_107_object = Obj(); var_108_float = 0; // 0x11c PushV
	var_107_object = var_96_object; // 0x11d Mov
	var_108_float = 70.0; // 0x11e MovF
	func_9973(var_107_object, var_108_float); // 0x11f NEW_2
	var_153_bool = var_106_bool == 0; // 0x121 Not
	if(var_153_bool == 0) goto Label_293; // 0x122 JumpB
	var_95_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	CreateDialog(var_102_object); // 0x125 Func
	var_154_int = 0; // 0x127 PushV
	func_10503(var_154_int); // 0x128 NEW_2
	SetNPCName(var_154_int); // 0x12a ObjFunc
	var_155_int = 0; // 0x12c PushV
	func_10501(var_155_int); // 0x12d NEW_2
	SetNPCDescription(var_155_int); // 0x12f ObjFunc
	var_156_string = ""; // 0x131 PushV
	func_10505(var_156_string); // 0x132 NEW_2
	SetPhoto(var_156_string); // 0x134 ObjFunc
	var_157_string = ""; // 0x136 PushV
	func_10507(var_157_string); // 0x137 NEW_2
	SetPhoto2(var_157_string); // 0x139 ObjFunc
	var_158_int = 0; // 0x13b PushV
	func_12312(var_158_int); // 0x13c NEW_2
	SetPlayerName(var_158_int); // 0x13e ObjFunc
	var_104_int = -1; // 0x140 MovI
	IsOverrideActive(var_103_bool); // 0x141 Func
	var_166_bool = var_103_bool; // 0x143 Push
	if(var_166_bool == 0) goto Label_327; // 0x144 JumpB
	var_95_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	DoDialog(var_102_object); // 0x147 Func
	var_167_bool = 0; var_168_object = Obj(); // 0x149 PushV
	var_169_object = Obj(); // 0x14a PushV
	func_10251(var_169_object); // 0x14b NEW_2
	var_168_object = var_169_object; // 0x14c Mov
	func_10060(var_167_bool, var_168_object); // 0x14e NEW_2
	var_262_object = Obj(); var_263_object = Obj(); // 0x150 PushV
	var_262_object = var_96_object; // 0x151 Mov
	var_263_object = var_102_object; // 0x152 Mov
	TaskCall(5); // 0x153 TaskCall
	func_363(var_264_object, var_265_object, var_266_string, var_267_bool, var_262_object, var_263_object); // 0x154 NEW_2
	TaskReturn(); // 0x155 TaskReturn
	IsDialogEnd(var_105_bool); // 0x157 ObjFunc
	
Label_345:
	var_316_bool = var_105_bool == 0; // 0x159 Not
	if(var_316_bool == 0) goto Label_352; // 0x15a JumpB
	sync(); // 0x15b Func
	IsDialogEnd(var_105_bool); // 0x15d ObjFunc
	goto Label_345; // 0x15f Jump
	
Label_352:
	var_317_object = Obj(); // 0x160 PushV
	var_317_object = var_96_object; // 0x161 Mov
	func_10042(); // 0x162 NEW_2
	StopDialog(var_102_object); // 0x164 Func
	GetReturnValue(var_104_int); // 0x166 ObjFunc
	var_95_int = var_104_int; // 0x168 Mov
	return 8; // 0x169 Return
}


func_7455(var_0_bool, var_1431_int, var_1432_object)
{
	var_1434_object = Obj(); var_1435_bool = 0; var_1436_int = 0; var_1437_bool = 0; var_1438_object = Obj(); var_1439_bool = 0; var_1440_int = 0; var_1441_bool = 0; // 0x1d1f PushV
	var_0_bool = var_1432_object; // 0x1d20 TMov
	var_1442_bool = 0; var_1443_object = Obj(); var_1444_float = 0; // 0x1d21 PushV
	var_1443_object = var_1432_object; // 0x1d22 Mov
	var_1444_float = 70.0; // 0x1d23 MovF
	func_9973(var_1443_object, var_1444_float); // 0x1d24 NEW_2
	var_1445_bool = var_1442_bool == 0; // 0x1d26 Not
	if(var_1445_bool == 0) goto Label_7466; // 0x1d27 JumpB
	var_1431_int = -2; // 0x1d28 MovI
	return 8; // 0x1d29 Return
	
Label_7466:
	CreateDialog(var_1438_object); // 0x1d2a Func
	var_1446_int = 0; // 0x1d2c PushV
	func_10503(var_1446_int); // 0x1d2d NEW_2
	SetNPCName(var_1446_int); // 0x1d2f ObjFunc
	var_1447_int = 0; // 0x1d31 PushV
	func_10501(var_1447_int); // 0x1d32 NEW_2
	SetNPCDescription(var_1447_int); // 0x1d34 ObjFunc
	var_1448_string = ""; // 0x1d36 PushV
	func_10505(var_1448_string); // 0x1d37 NEW_2
	SetPhoto(var_1448_string); // 0x1d39 ObjFunc
	var_1449_string = ""; // 0x1d3b PushV
	func_10507(var_1449_string); // 0x1d3c NEW_2
	SetPhoto2(var_1449_string); // 0x1d3e ObjFunc
	var_1450_int = 0; // 0x1d40 PushV
	func_12312(var_1450_int); // 0x1d41 NEW_2
	SetPlayerName(var_1450_int); // 0x1d43 ObjFunc
	var_1440_int = -1; // 0x1d45 MovI
	IsOverrideActive(var_1439_bool); // 0x1d46 Func
	var_1451_bool = var_1439_bool; // 0x1d48 Push
	if(var_1451_bool == 0) goto Label_7500; // 0x1d49 JumpB
	var_1431_int = -2; // 0x1d4a MovI
	return 8; // 0x1d4b Return
	
Label_7500:
	DoDialog(var_1438_object); // 0x1d4c Func
	var_1452_bool = 0; var_1453_object = Obj(); // 0x1d4e PushV
	var_1454_object = Obj(); // 0x1d4f PushV
	func_10251(var_1454_object); // 0x1d50 NEW_2
	var_1453_object = var_1454_object; // 0x1d51 Mov
	func_10060(var_1452_bool, var_1453_object); // 0x1d53 NEW_2
	var_1455_object = Obj(); var_1456_object = Obj(); // 0x1d55 PushV
	var_1455_object = var_1432_object; // 0x1d56 Mov
	var_1456_object = var_1438_object; // 0x1d57 Mov
	TaskCall(25); // 0x1d58 TaskCall
	func_7536(var_1457_object, var_1458_object, var_1459_string, var_1460_bool, var_1455_object, var_1456_object); // 0x1d59 NEW_2
	TaskReturn(); // 0x1d5a TaskReturn
	IsDialogEnd(var_1441_bool); // 0x1d5c ObjFunc
	
Label_7518:
	var_1500_bool = var_1441_bool == 0; // 0x1d5e Not
	if(var_1500_bool == 0) goto Label_7525; // 0x1d5f JumpB
	sync(); // 0x1d60 Func
	IsDialogEnd(var_1441_bool); // 0x1d62 ObjFunc
	goto Label_7518; // 0x1d64 Jump
	
Label_7525:
	var_1501_object = Obj(); // 0x1d65 PushV
	var_1501_object = var_1432_object; // 0x1d66 Mov
	func_10042(); // 0x1d67 NEW_2
	StopDialog(var_1438_object); // 0x1d69 Func
	GetReturnValue(var_1440_int); // 0x1d6b ObjFunc
	var_1431_int = var_1440_int; // 0x1d6d Mov
	return 8; // 0x1d6e Return
}


func_11552(var_730_bool)
{
	var_732_int = 0; var_733_string = ""; // 0x2d21 PushV
	var_733_string = "d4q01"; // 0x2d22 MovS
	func_10296(var_732_int, var_733_string); // 0x2d23 NEW_2
	var_734_int = 2; // 0x2d25 PushI
	var_735_bool = var_732_int == var_734_int; // 0x2d26 Eq
	if(var_735_bool == 0) goto Label_11562; // 0x2d27 JumpB
	var_730_bool = 1; // 0x2d28 MovB
	return 0; // 0x2d29 Return
	
Label_11562:
	var_730_bool = 0; // 0x2d2a MovB
	return 0; // 0x2d2b Return
}


func_1313(var_2_object, var_593_string)
{
	var_594_bool = 0; // 0x522 PushV
	func_10509(var_594_bool); // 0x523 NEW_2
	var_595_bool = var_594_bool == 0; // 0x525 Not
	if(var_595_bool == 0) goto Label_1320; // 0x526 JumpB
	return 0; // 0x527 Return
	
Label_1320:
	var_596_bool = var_593_string == var_2_object; // 0x528 Eq
	if(var_596_bool == 0) goto Label_1323; // 0x529 JumpB
	return 0; // 0x52a Return
	
Label_1323:
	var_597_string = ""; var_598_bool = 0; // 0x52b PushV
	var_597_string = var_593_string; // 0x52c Mov
	var_599_string = ""; // 0x52d PushS
	var_600_bool = var_593_string == var_599_string; // 0x52e Eq
	if(var_600_bool == 0) goto Label_1330; // 0x52f JumpB
	var_598_bool = 0; // 0x530 MovB
	goto Label_1331; // 0x531 Jump
	
Label_1331:
	func_10214(var_597_string, var_598_bool); // 0x533 NEW_2
	var_2_object = var_593_string; // 0x535 TMov
	return 0; // 0x536 Return
	
Label_1330:
	var_598_bool = 1; // 0x532 MovB
}


func_2337(var_2_object, var_741_string)
{
	var_742_bool = 0; // 0x922 PushV
	func_10509(var_742_bool); // 0x923 NEW_2
	var_743_bool = var_742_bool == 0; // 0x925 Not
	if(var_743_bool == 0) goto Label_2344; // 0x926 JumpB
	return 0; // 0x927 Return
	
Label_2344:
	var_744_bool = var_741_string == var_2_object; // 0x928 Eq
	if(var_744_bool == 0) goto Label_2347; // 0x929 JumpB
	return 0; // 0x92a Return
	
Label_2347:
	var_745_string = ""; var_746_bool = 0; // 0x92b PushV
	var_745_string = var_741_string; // 0x92c Mov
	var_747_string = ""; // 0x92d PushS
	var_748_bool = var_741_string == var_747_string; // 0x92e Eq
	if(var_748_bool == 0) goto Label_2354; // 0x92f JumpB
	var_746_bool = 0; // 0x930 MovB
	goto Label_2355; // 0x931 Jump
	
Label_2355:
	func_10214(var_745_string, var_746_bool); // 0x933 NEW_2
	var_2_object = var_741_string; // 0x935 TMov
	return 0; // 0x936 Return
	
Label_2354:
	var_746_bool = 1; // 0x932 MovB
}


func_10531()
{
	var_126_int = 0; var_127_int = 0; // 0x2923 PushV
	var_128_int = 0; // 0x2924 PushV
	func_10448(var_128_int); // 0x2925 NEW_2
	var_127_int = var_128_int; // 0x2926 Mov
	var_134_string = "RMap"; // 0x2928 PushS
	var_135_int = var_134_string + var_127_int; // 0x2929 Add
	var_136_int = 1; // 0x292a PushI
	SetVariable(var_135_int, var_136_int); // 0x292b Func
	return 2; // 0x292d Return
}


func_12065()
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x2f21 PushV
	var_137_int = 92; // 0x2f22 PushI
	var_138_int = 2; // 0x2f23 PushI
	var_139_int = 512174; // 0x2f24 PushI
	CreateDiaryEntry(var_136_object, var_137_int, var_138_int, var_139_int); // 0x2f25 Func
	var_140_bool = 0; var_141_object = Obj(); var_142_int = 0; // 0x2f27 PushV
	var_141_object = var_136_object; // 0x2f28 Mov
	var_142_int = 21; // 0x2f29 MovI
	func_12234(var_140_bool, var_141_object, var_142_int); // 0x2f2a NEW_2
	return 2; // 0x2f2c Return
}


func_11564(var_764_bool)
{
	var_766_int = 0; var_767_string = ""; // 0x2d2d PushV
	var_767_string = "ood4MladVlad1"; // 0x2d2e MovS
	func_10296(var_766_int, var_767_string); // 0x2d2f NEW_2
	var_768_int = 0; // 0x2d31 PushI
	var_769_bool = var_766_int == var_768_int; // 0x2d32 Eq
	if(var_769_bool == 0) goto Label_11574; // 0x2d33 JumpB
	var_764_bool = 1; // 0x2d34 MovB
	return 0; // 0x2d35 Return
	
Label_11574:
	var_764_bool = 0; // 0x2d36 MovB
	return 0; // 0x2d37 Return
}


func_4909(var_0_bool, var_1_object, var_2_object, var_3_object, var_1142_object, var_1143_object)
{
	var_0_bool = var_1143_object; // 0x132e TMov
	var_1_object = var_1142_object; // 0x132f TMov
	var_3_object = 0; // 0x1330 TMovB
	var_1148_int = 1; // 0x1331 PushI
	if(var_1148_int == 0) goto Label_5132; // 0x1332 JumpB
	var_1149_bool = 0; var_1150_object = Obj(); // 0x1333 PushV
	var_1150_object = var_1_object; // 0x1334 MovT
	func_11408(var_1150_object); // 0x1335 NEW_2
	if(var_1149_bool == 0) goto Label_4950; // 0x1337 JumpB
	var_1155_object = Obj(); var_1156_object = Obj(); // 0x1338 PushV
	var_1155_object = var_1_object; // 0x1339 MovT
	var_1156_object = var_0_bool; // 0x133a MovT
	func_10665(); // 0x133b NEW_2
	var_1159_object = Obj(); var_1160_object = Obj(); // 0x133d PushV
	var_1159_object = var_1_object; // 0x133e MovT
	var_1160_object = var_0_bool; // 0x133f MovT
	func_10694(); // 0x1340 NEW_2
	var_1163_string = ""; // 0x1342 PushV
	var_1163_string = "Sly"; // 0x1343 MovS
	func_5162(var_1143_object, var_1163_string); // 0x1344 NEW_2
	var_1171_int = 533324; // 0x1346 PushI
	SetMessage(var_1171_int); // 0x1347 TObjFunc
	ClearReplies(); // 0x1349 TObjFunc
	var_1172_int = 535993; // 0x134b PushI
	var_1173_int = 37724; // 0x134c PushI
	var_1174_int = 37723; // 0x134d PushI
	AddReply(var_1172_int, var_1173_int, var_1174_int); // 0x134e TObjFunc
	var_1175_int = 536001; // 0x1350 PushI
	var_1176_int = 37724; // 0x1351 PushI
	var_1177_int = 37731; // 0x1352 PushI
	AddReply(var_1175_int, var_1176_int, var_1177_int); // 0x1353 TObjFunc
	goto Label_5132; // 0x1355 Jump
	
Label_5132:
	var_1178_bool = 0; // 0x140c PushV
	func_10509(var_1178_bool); // 0x140d NEW_2
	if(var_1178_bool == 0) goto Label_5147; // 0x140f JumpB
	
Label_5136:
	lshWaitForAnimEnd(); // 0x1410 Func
	var_1179_object = var_3_object; // 0x1412 PushT
	if(var_1179_object == 0) goto Label_5141; // 0x1413 JumpB
	goto Label_5146; // 0x1414 Jump
	
Label_5146:
	goto Label_5161; // 0x141a Jump
	
Label_5161:
	return 0; // 0x1429 Return
	
Label_5141:
	var_1180_string = ""; // 0x1415 PushV
	var_1180_string = var_2_object; // 0x1416 MovT
	func_10198(var_1180_string); // 0x1417 NEW_2
	goto Label_5136; // 0x1419 Jump
	
Label_5147:
	var_1181_string = "all"; // 0x141b PushS
	var_1182_string = "idle"; // 0x141c PushS
	PlayAnimation(var_1181_string, var_1182_string); // 0x141d Func
	
Label_5151:
	WaitForAnimEnd(); // 0x141f Func
	var_1183_object = var_3_object; // 0x1421 PushT
	if(var_1183_object == 0) goto Label_5156; // 0x1422 JumpB
	goto Label_5161; // 0x1423 Jump
	
Label_5156:
	var_1184_string = "all"; // 0x1424 PushS
	var_1185_string = "idle"; // 0x1425 PushS
	PlayAnimation(var_1184_string, var_1185_string); // 0x1426 Func
	goto Label_5151; // 0x1428 Jump
	
Label_4950:
	var_1186_string = ""; // 0x1356 PushV
	var_1186_string = "Neutral"; // 0x1357 MovS
	func_5162(var_1143_object, var_1186_string); // 0x1358 NEW_2
	var_1187_int = 512410; // 0x135a PushI
	SetMessage(var_1187_int); // 0x135b TObjFunc
	ClearReplies(); // 0x135d TObjFunc
	var_1188_bool = 0; // 0x135f PushV
	var_1188_bool = 0; // 0x1360 MovB
	var_1189_bool = 0; // 0x1361 PushV
	var_1189_bool = 0; // 0x1362 MovB
	var_1190_bool = 0; var_1191_object = Obj(); // 0x1363 PushV
	var_1191_object = var_1_object; // 0x1364 MovT
	func_11768(var_1191_object); // 0x1365 NEW_2
	if(var_1190_bool == 0) goto Label_4974; // 0x1367 JumpB
	var_1196_bool = 0; var_1197_object = Obj(); // 0x1368 PushV
	var_1197_object = var_1_object; // 0x1369 MovT
	func_11792(var_1197_object); // 0x136a NEW_2
	if(var_1196_bool == 0) goto Label_4974; // 0x136c JumpB
	var_1189_bool = 1; // 0x136d MovB
	
Label_4974:
	if(var_1189_bool == 0) goto Label_4982; // 0x136e JumpB
	var_1202_bool = 0; var_1203_object = Obj(); // 0x136f PushV
	var_1203_object = var_1_object; // 0x1370 MovT
	func_11780(var_1203_object); // 0x1371 NEW_2
	var_1208_bool = var_1202_bool == 0; // 0x1373 Not
	if(var_1208_bool == 0) goto Label_4982; // 0x1374 JumpB
	var_1188_bool = 1; // 0x1375 MovB
	
Label_4982:
	if(var_1188_bool == 0) goto Label_4988; // 0x1376 JumpB
	var_1209_int = 512412; // 0x1377 PushI
	var_1210_int = 13577; // 0x1378 PushI
	var_1211_int = 13576; // 0x1379 PushI
	AddReply(var_1209_int, var_1210_int, var_1211_int); // 0x137a TObjFunc
	
Label_4988:
	var_1212_bool = 0; // 0x137c PushV
	var_1212_bool = 0; // 0x137d MovB
	var_1213_bool = 0; var_1214_object = Obj(); // 0x137e PushV
	var_1214_object = var_1_object; // 0x137f MovT
	func_11780(var_1214_object); // 0x1380 NEW_2
	if(var_1213_bool == 0) goto Label_5001; // 0x1382 JumpB
	var_1215_bool = 0; var_1216_object = Obj(); // 0x1383 PushV
	var_1216_object = var_1_object; // 0x1384 MovT
	func_11804(var_1216_object); // 0x1385 NEW_2
	if(var_1215_bool == 0) goto Label_5001; // 0x1387 JumpB
	var_1212_bool = 1; // 0x1388 MovB
	
Label_5001:
	if(var_1212_bool == 0) goto Label_5007; // 0x1389 JumpB
	var_1221_int = 513588; // 0x138a PushI
	var_1222_int = 14840; // 0x138b PushI
	var_1223_int = 14839; // 0x138c PushI
	AddReply(var_1221_int, var_1222_int, var_1223_int); // 0x138d TObjFunc
	
Label_5007:
	var_1224_bool = 0; // 0x138f PushV
	var_1224_bool = 0; // 0x1390 MovB
	var_1225_bool = 0; // 0x1391 PushV
	var_1225_bool = 0; // 0x1392 MovB
	var_1226_bool = 0; // 0x1393 PushV
	var_1226_bool = 0; // 0x1394 MovB
	var_1227_bool = 0; var_1228_object = Obj(); // 0x1395 PushV
	var_1228_object = var_1_object; // 0x1396 MovT
	func_11816(var_1228_object); // 0x1397 NEW_2
	if(var_1227_bool == 0) goto Label_5024; // 0x1399 JumpB
	var_1233_bool = 0; var_1234_object = Obj(); // 0x139a PushV
	var_1234_object = var_1_object; // 0x139b MovT
	func_11780(var_1234_object); // 0x139c NEW_2
	if(var_1233_bool == 0) goto Label_5024; // 0x139e JumpB
	var_1226_bool = 1; // 0x139f MovB
	
Label_5024:
	if(var_1226_bool == 0) goto Label_5031; // 0x13a0 JumpB
	var_1235_bool = 0; var_1236_object = Obj(); // 0x13a1 PushV
	var_1236_object = var_1_object; // 0x13a2 MovT
	func_11828(var_1236_object); // 0x13a3 NEW_2
	if(var_1235_bool == 0) goto Label_5031; // 0x13a5 JumpB
	var_1225_bool = 1; // 0x13a6 MovB
	
Label_5031:
	if(var_1225_bool == 0) goto Label_5039; // 0x13a7 JumpB
	var_1241_bool = 0; var_1242_object = Obj(); // 0x13a8 PushV
	var_1242_object = var_1_object; // 0x13a9 MovT
	func_11864(var_1242_object); // 0x13aa NEW_2
	var_1247_bool = var_1241_bool == 0; // 0x13ac Not
	if(var_1247_bool == 0) goto Label_5039; // 0x13ad JumpB
	var_1224_bool = 1; // 0x13ae MovB
	
Label_5039:
	if(var_1224_bool == 0) goto Label_5045; // 0x13af JumpB
	var_1248_int = 513607; // 0x13b0 PushI
	var_1249_int = 14868; // 0x13b1 PushI
	var_1250_int = 14862; // 0x13b2 PushI
	AddReply(var_1248_int, var_1249_int, var_1250_int); // 0x13b3 TObjFunc
	
Label_5045:
	var_1251_bool = 0; // 0x13b5 PushV
	var_1251_bool = 0; // 0x13b6 MovB
	var_1252_bool = 0; // 0x13b7 PushV
	var_1252_bool = 0; // 0x13b8 MovB
	var_1253_bool = 0; var_1254_object = Obj(); // 0x13b9 PushV
	var_1254_object = var_1_object; // 0x13ba MovT
	func_11816(var_1254_object); // 0x13bb NEW_2
	if(var_1253_bool == 0) goto Label_5060; // 0x13bd JumpB
	var_1255_bool = 0; var_1256_object = Obj(); // 0x13be PushV
	var_1256_object = var_1_object; // 0x13bf MovT
	func_11852(var_1256_object); // 0x13c0 NEW_2
	if(var_1255_bool == 0) goto Label_5060; // 0x13c2 JumpB
	var_1252_bool = 1; // 0x13c3 MovB
	
Label_5060:
	if(var_1252_bool == 0) goto Label_5068; // 0x13c4 JumpB
	var_1261_bool = 0; var_1262_object = Obj(); // 0x13c5 PushV
	var_1262_object = var_1_object; // 0x13c6 MovT
	func_11876(var_1262_object); // 0x13c7 NEW_2
	var_1267_bool = var_1261_bool == 0; // 0x13c9 Not
	if(var_1267_bool == 0) goto Label_5068; // 0x13ca JumpB
	var_1251_bool = 1; // 0x13cb MovB
	
Label_5068:
	if(var_1251_bool == 0) goto Label_5074; // 0x13cc JumpB
	var_1268_int = 513618; // 0x13cd PushI
	var_1269_int = 14874; // 0x13ce PushI
	var_1270_int = 14873; // 0x13cf PushI
	AddReply(var_1268_int, var_1269_int, var_1270_int); // 0x13d0 TObjFunc
	
Label_5074:
	var_1271_bool = 0; // 0x13d2 PushV
	var_1271_bool = 0; // 0x13d3 MovB
	var_1272_bool = 0; // 0x13d4 PushV
	var_1272_bool = 0; // 0x13d5 MovB
	var_1273_bool = 0; var_1274_object = Obj(); // 0x13d6 PushV
	var_1274_object = var_1_object; // 0x13d7 MovT
	func_11780(var_1274_object); // 0x13d8 NEW_2
	var_1275_bool = var_1273_bool == 0; // 0x13da Not
	if(var_1275_bool == 0) goto Label_5090; // 0x13db JumpB
	var_1276_bool = 0; var_1277_object = Obj(); // 0x13dc PushV
	var_1277_object = var_1_object; // 0x13dd MovT
	func_11768(var_1277_object); // 0x13de NEW_2
	if(var_1276_bool == 0) goto Label_5090; // 0x13e0 JumpB
	var_1272_bool = 1; // 0x13e1 MovB
	
Label_5090:
	if(var_1272_bool == 0) goto Label_5097; // 0x13e2 JumpB
	var_1278_bool = 0; var_1279_object = Obj(); // 0x13e3 PushV
	var_1279_object = var_1_object; // 0x13e4 MovT
	func_11840(var_1279_object); // 0x13e5 NEW_2
	if(var_1278_bool == 0) goto Label_5097; // 0x13e7 JumpB
	var_1271_bool = 1; // 0x13e8 MovB
	
Label_5097:
	if(var_1271_bool == 0) goto Label_5103; // 0x13e9 JumpB
	var_1284_int = 513612; // 0x13ea PushI
	var_1285_int = 14863; // 0x13eb PushI
	var_1286_int = 14867; // 0x13ec PushI
	AddReply(var_1284_int, var_1285_int, var_1286_int); // 0x13ed TObjFunc
	
Label_5103:
	var_1287_bool = 0; var_1288_object = Obj(); // 0x13ef PushV
	var_1288_object = var_1_object; // 0x13f0 MovT
	func_11922(var_1287_bool, var_1288_object); // 0x13f1 NEW_2
	var_1289_bool = var_1287_bool == 0; // 0x13f3 Not
	if(var_1289_bool == 0) goto Label_5114; // 0x13f4 JumpB
	var_1290_int = 520922; // 0x13f5 PushI
	var_1291_int = 22140; // 0x13f6 PushI
	var_1292_int = 22139; // 0x13f7 PushI
	AddReply(var_1290_int, var_1291_int, var_1292_int); // 0x13f8 TObjFunc
	
Label_5114:
	var_1293_bool = 0; var_1294_object = Obj(); // 0x13fa PushV
	var_1294_object = var_1_object; // 0x13fb MovT
	func_11420(var_1294_object); // 0x13fc NEW_2
	if(var_1293_bool == 0) goto Label_5124; // 0x13fe JumpB
	var_1299_int = 533337; // 0x13ff PushI
	var_1300_int = 37749; // 0x1400 PushI
	var_1301_int = 34841; // 0x1401 PushI
	AddReply(var_1299_int, var_1300_int, var_1301_int); // 0x1402 TObjFunc
	
Label_5124:
	var_1302_int = 512411; // 0x1404 PushI
	var_1303_int = -1; // 0x1405 PushI
	var_1304_int = 13575; // 0x1406 PushI
	AddReply(var_1302_int, var_1303_int, var_1304_int); // 0x1407 TObjFunc
	goto Label_5132; // 0x1409 Jump
}


func_10542(var_137_object)
{
	var_139_object = Obj(); var_140_int = 0; // 0x292f PushV
	var_139_object = var_137_object; // 0x2930 Mov
	var_140_int = -1000; // 0x2931 MovI
	func_10335(var_139_object, var_140_int); // 0x2932 NEW_2
	return 0; // 0x2934 Return
}


func_12078()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x2f2e PushV
	var_108_int = 154; // 0x2f2f PushI
	var_109_int = 2; // 0x2f30 PushI
	var_110_int = 515365; // 0x2f31 PushI
	CreateDiaryEntry(var_107_object, var_108_int, var_109_int, var_110_int); // 0x2f32 Func
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; // 0x2f34 PushV
	var_112_object = var_107_object; // 0x2f35 Mov
	var_113_int = -1; // 0x2f36 MovI
	func_12234(var_111_bool, var_112_object, var_113_int); // 0x2f37 NEW_2
	return 2; // 0x2f39 Return
}


func_11056()
{
	var_82_string = "ood6MladVlad1"; // 0x2b31 PushS
	var_83_int = 1; // 0x2b32 PushI
	SetVariable(var_82_string, var_83_int); // 0x2b33 Func
	return 0; // 0x2b35 Return
}


func_3379(var_0_bool, var_1_object, var_2_object, var_3_object, var_828_object, var_829_object)
{
	var_0_bool = var_829_object; // 0xd34 TMov
	var_1_object = var_828_object; // 0xd35 TMov
	var_3_object = 0; // 0xd36 TMovB
	var_834_int = 1; // 0xd37 PushI
	if(var_834_int == 0) goto Label_3512; // 0xd38 JumpB
	var_835_bool = 0; // 0xd39 PushV
	var_835_bool = 0; // 0xd3a MovB
	var_836_bool = 0; // 0xd3b PushV
	var_836_bool = 0; // 0xd3c MovB
	var_837_bool = 0; var_838_object = Obj(); // 0xd3d PushV
	var_838_object = var_1_object; // 0xd3e MovT
	func_11732(var_838_object); // 0xd3f NEW_2
	if(var_837_bool == 0) goto Label_3401; // 0xd41 JumpB
	var_843_bool = 0; var_844_object = Obj(); // 0xd42 PushV
	var_844_object = var_1_object; // 0xd43 MovT
	func_11672(var_844_object); // 0xd44 NEW_2
	var_849_bool = var_843_bool == 0; // 0xd46 Not
	if(var_849_bool == 0) goto Label_3401; // 0xd47 JumpB
	var_836_bool = 1; // 0xd48 MovB
	
Label_3401:
	if(var_836_bool == 0) goto Label_3409; // 0xd49 JumpB
	var_850_bool = 0; var_851_object = Obj(); // 0xd4a PushV
	var_851_object = var_1_object; // 0xd4b MovT
	func_11684(var_851_object); // 0xd4c NEW_2
	var_856_bool = var_850_bool == 0; // 0xd4e Not
	if(var_856_bool == 0) goto Label_3409; // 0xd4f JumpB
	var_835_bool = 1; // 0xd50 MovB
	
Label_3409:
	if(var_835_bool == 0) goto Label_3446; // 0xd51 JumpB
	var_857_object = Obj(); var_858_object = Obj(); // 0xd52 PushV
	var_857_object = var_1_object; // 0xd53 MovT
	var_858_object = var_0_bool; // 0xd54 MovT
	func_11111(); // 0xd55 NEW_2
	var_861_string = ""; // 0xd57 PushV
	var_861_string = "Rage"; // 0xd58 MovS
	func_3542(var_829_object, var_861_string); // 0xd59 NEW_2
	var_869_int = 511741; // 0xd5b PushI
	SetMessage(var_869_int); // 0xd5c TObjFunc
	ClearReplies(); // 0xd5e TObjFunc
	var_870_int = 511743; // 0xd60 PushI
	var_871_int = 12951; // 0xd61 PushI
	var_872_int = 12949; // 0xd62 PushI
	AddReply(var_870_int, var_871_int, var_872_int); // 0xd63 TObjFunc
	var_873_int = 511742; // 0xd65 PushI
	var_874_int = 12950; // 0xd66 PushI
	var_875_int = 12948; // 0xd67 PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0xd68 TObjFunc
	var_876_bool = 0; var_877_object = Obj(); // 0xd6a PushV
	var_877_object = var_1_object; // 0xd6b MovT
	func_11660(var_877_object); // 0xd6c NEW_2
	var_882_bool = var_876_bool == 0; // 0xd6e Not
	if(var_882_bool == 0) goto Label_3445; // 0xd6f JumpB
	var_883_int = 512586; // 0xd70 PushI
	var_884_int = 13766; // 0xd71 PushI
	var_885_int = 13753; // 0xd72 PushI
	AddReply(var_883_int, var_884_int, var_885_int); // 0xd73 TObjFunc
	
Label_3445:
	goto Label_3512; // 0xd75 Jump
	
Label_3512:
	var_886_bool = 0; // 0xdb8 PushV
	func_10509(var_886_bool); // 0xdb9 NEW_2
	if(var_886_bool == 0) goto Label_3527; // 0xdbb JumpB
	
Label_3516:
	lshWaitForAnimEnd(); // 0xdbc Func
	var_887_object = var_3_object; // 0xdbe PushT
	if(var_887_object == 0) goto Label_3521; // 0xdbf JumpB
	goto Label_3526; // 0xdc0 Jump
	
Label_3526:
	goto Label_3541; // 0xdc6 Jump
	
Label_3541:
	return 0; // 0xdd5 Return
	
Label_3521:
	var_888_string = ""; // 0xdc1 PushV
	var_888_string = var_2_object; // 0xdc2 MovT
	func_10198(var_888_string); // 0xdc3 NEW_2
	goto Label_3516; // 0xdc5 Jump
	
Label_3527:
	var_889_string = "all"; // 0xdc7 PushS
	var_890_string = "idle"; // 0xdc8 PushS
	PlayAnimation(var_889_string, var_890_string); // 0xdc9 Func
	
Label_3531:
	WaitForAnimEnd(); // 0xdcb Func
	var_891_object = var_3_object; // 0xdcd PushT
	if(var_891_object == 0) goto Label_3536; // 0xdce JumpB
	goto Label_3541; // 0xdcf Jump
	
Label_3536:
	var_892_string = "all"; // 0xdd0 PushS
	var_893_string = "idle"; // 0xdd1 PushS
	PlayAnimation(var_892_string, var_893_string); // 0xdd2 Func
	goto Label_3531; // 0xdd4 Jump
	
Label_3446:
	var_894_string = ""; // 0xd76 PushV
	var_894_string = "Neutral"; // 0xd77 MovS
	func_3542(var_829_object, var_894_string); // 0xd78 NEW_2
	var_895_int = 512573; // 0xd7a PushI
	SetMessage(var_895_int); // 0xd7b TObjFunc
	ClearReplies(); // 0xd7d TObjFunc
	var_896_bool = 0; // 0xd7f PushV
	var_896_bool = 0; // 0xd80 MovB
	var_897_bool = 0; var_898_object = Obj(); // 0xd81 PushV
	var_898_object = var_1_object; // 0xd82 MovT
	func_11696(var_898_object); // 0xd83 NEW_2
	if(var_897_bool == 0) goto Label_3468; // 0xd85 JumpB
	var_903_bool = 0; var_904_object = Obj(); // 0xd86 PushV
	var_904_object = var_1_object; // 0xd87 MovT
	func_11708(var_904_object); // 0xd88 NEW_2
	if(var_903_bool == 0) goto Label_3468; // 0xd8a JumpB
	var_896_bool = 1; // 0xd8b MovB
	
Label_3468:
	if(var_896_bool == 0) goto Label_3474; // 0xd8c JumpB
	var_909_int = 512574; // 0xd8d PushI
	var_910_int = 13744; // 0xd8e PushI
	var_911_int = 13743; // 0xd8f PushI
	AddReply(var_909_int, var_910_int, var_911_int); // 0xd90 TObjFunc
	
Label_3474:
	var_912_bool = 0; // 0xd92 PushV
	var_912_bool = 0; // 0xd93 MovB
	var_913_bool = 0; var_914_object = Obj(); // 0xd94 PushV
	var_914_object = var_1_object; // 0xd95 MovT
	func_11672(var_914_object); // 0xd96 NEW_2
	if(var_913_bool == 0) goto Label_3487; // 0xd98 JumpB
	var_915_bool = 0; var_916_object = Obj(); // 0xd99 PushV
	var_916_object = var_1_object; // 0xd9a MovT
	func_11720(var_916_object); // 0xd9b NEW_2
	if(var_915_bool == 0) goto Label_3487; // 0xd9d JumpB
	var_912_bool = 1; // 0xd9e MovB
	
Label_3487:
	if(var_912_bool == 0) goto Label_3493; // 0xd9f JumpB
	var_921_int = 512577; // 0xda0 PushI
	var_922_int = 13747; // 0xda1 PushI
	var_923_int = 13746; // 0xda2 PushI
	AddReply(var_921_int, var_922_int, var_923_int); // 0xda3 TObjFunc
	
Label_3493:
	var_924_bool = 0; var_925_object = Obj(); // 0xda5 PushV
	var_925_object = var_1_object; // 0xda6 MovT
	func_11922(var_924_bool, var_925_object); // 0xda7 NEW_2
	var_926_bool = var_924_bool == 0; // 0xda9 Not
	if(var_926_bool == 0) goto Label_3504; // 0xdaa JumpB
	var_927_int = 520905; // 0xdab PushI
	var_928_int = 22123; // 0xdac PushI
	var_929_int = 22122; // 0xdad PushI
	AddReply(var_927_int, var_928_int, var_929_int); // 0xdae TObjFunc
	
Label_3504:
	var_930_int = 512580; // 0xdb0 PushI
	var_931_int = -1; // 0xdb1 PushI
	var_932_int = 13749; // 0xdb2 PushI
	AddReply(var_930_int, var_931_int, var_932_int); // 0xdb3 TObjFunc
	goto Label_3512; // 0xdb5 Jump
}


func_10549()
{
	var_137_string = "ood3MladVlad2"; // 0x2936 PushS
	var_138_int = 1; // 0x2937 PushI
	SetVariable(var_137_string, var_138_int); // 0x2938 Func
	return 0; // 0x293a Return
}


func_11062()
{
	var_170_string = "ood6MladVlad2"; // 0x2b37 PushS
	var_171_int = 1; // 0x2b38 PushI
	SetVariable(var_170_string, var_171_int); // 0x2b39 Func
	return 0; // 0x2b3b Return
}


func_11576(var_724_bool)
{
	var_726_int = 0; var_727_string = ""; // 0x2d39 PushV
	var_727_string = "ood4MladVlad2"; // 0x2d3a MovS
	func_10296(var_726_int, var_727_string); // 0x2d3b NEW_2
	var_728_int = 0; // 0x2d3d PushI
	var_729_bool = var_726_int == var_728_int; // 0x2d3e Eq
	if(var_729_bool == 0) goto Label_11586; // 0x2d3f JumpB
	var_724_bool = 1; // 0x2d40 MovB
	return 0; // 0x2d41 Return
	
Label_11586:
	var_724_bool = 0; // 0x2d42 MovB
	return 0; // 0x2d43 Return
}


func_10042()
{
	var_318_bool = 0; var_319_bool = 0; // 0x273a PushV
	var_320_bool = 1; // 0x273b PushB
	CameraSwitchToNormal(var_320_bool); // 0x273c Func
	var_321_bool = 0; // 0x273e PushV
	func_10509(var_321_bool); // 0x273f NEW_2
	if(var_321_bool == 0) goto Label_10051; // 0x2741 JumpB
	goto Label_10059; // 0x2742 Jump
	
Label_10059:
	return 2; // 0x274b Return
	
Label_10051:
	var_322_string = "head"; // 0x2743 PushS
	HasAnimationTrack(var_319_bool, var_322_string); // 0x2744 Func
	var_323_bool = var_319_bool; // 0x2746 Push
	if(var_323_bool == 0) goto Label_10059; // 0x2747 JumpB
	var_324_string = "head"; // 0x2748 PushS
	UnlookAsync(var_324_string); // 0x2749 Func
}


func_10555(var_217_object)
{
	var_219_string = "money2000 is given"; // 0x293c PushS
	Trace(var_219_string); // 0x293d Func
	var_220_object = Obj(); var_221_int = 0; // 0x293f PushV
	var_220_object = var_217_object; // 0x2940 Mov
	var_221_int = 2000; // 0x2941 MovI
	func_10335(var_220_object, var_221_int); // 0x2942 NEW_2
	return 0; // 0x2944 Return
}


func_11068()
{
	var_154_string = "d6q02KnowAboutAttack"; // 0x2b3d PushS
	var_155_int = 1; // 0x2b3e PushI
	SetVariable(var_154_string, var_155_int); // 0x2b3f Func
	return 0; // 0x2b41 Return
}


func_7997(var_0_bool, var_1_object, var_2_object, var_3_object, var_353_object, var_354_object)
{
	var_0_bool = var_354_object; // 0x1f3e TMov
	var_1_object = var_353_object; // 0x1f3f TMov
	var_3_object = 0; // 0x1f40 TMovB
	var_359_int = 1; // 0x1f41 PushI
	if(var_359_int == 0) goto Label_8146; // 0x1f42 JumpB
	var_360_bool = 0; // 0x1f43 PushV
	var_360_bool = 0; // 0x1f44 MovB
	var_361_bool = 0; // 0x1f45 PushV
	var_361_bool = 0; // 0x1f46 MovB
	var_362_bool = 0; var_363_object = Obj(); // 0x1f47 PushV
	var_363_object = var_1_object; // 0x1f48 MovT
	func_11372(var_363_object); // 0x1f49 NEW_2
	if(var_362_bool == 0) goto Label_8018; // 0x1f4b JumpB
	var_370_bool = 0; var_371_object = Obj(); // 0x1f4c PushV
	var_371_object = var_1_object; // 0x1f4d MovT
	func_11324(var_371_object); // 0x1f4e NEW_2
	if(var_370_bool == 0) goto Label_8018; // 0x1f50 JumpB
	var_361_bool = 1; // 0x1f51 MovB
	
Label_8018:
	if(var_361_bool == 0) goto Label_8025; // 0x1f52 JumpB
	var_376_bool = 0; var_377_object = Obj(); // 0x1f53 PushV
	var_377_object = var_1_object; // 0x1f54 MovT
	func_11888(var_377_object); // 0x1f55 NEW_2
	if(var_376_bool == 0) goto Label_8025; // 0x1f57 JumpB
	var_360_bool = 1; // 0x1f58 MovB
	
Label_8025:
	if(var_360_bool == 0) goto Label_8051; // 0x1f59 JumpB
	var_392_object = Obj(); var_393_object = Obj(); // 0x1f5a PushV
	var_392_object = var_1_object; // 0x1f5b MovT
	var_393_object = var_0_bool; // 0x1f5c MovT
	func_10641(); // 0x1f5d NEW_2
	var_396_string = ""; // 0x1f5f PushV
	var_396_string = "Untrust"; // 0x1f60 MovS
	func_8176(var_354_object, var_396_string); // 0x1f61 NEW_2
	var_404_int = 532641; // 0x1f63 PushI
	SetMessage(var_404_int); // 0x1f64 TObjFunc
	ClearReplies(); // 0x1f66 TObjFunc
	var_405_int = 532642; // 0x1f68 PushI
	var_406_int = 34105; // 0x1f69 PushI
	var_407_int = 34104; // 0x1f6a PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x1f6b TObjFunc
	var_408_int = 532687; // 0x1f6d PushI
	var_409_int = 34161; // 0x1f6e PushI
	var_410_int = 34160; // 0x1f6f PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x1f70 TObjFunc
	goto Label_8146; // 0x1f72 Jump
	
Label_8146:
	var_411_bool = 0; // 0x1fd2 PushV
	func_10509(var_411_bool); // 0x1fd3 NEW_2
	if(var_411_bool == 0) goto Label_8161; // 0x1fd5 JumpB
	
Label_8150:
	lshWaitForAnimEnd(); // 0x1fd6 Func
	var_412_object = var_3_object; // 0x1fd8 PushT
	if(var_412_object == 0) goto Label_8155; // 0x1fd9 JumpB
	goto Label_8160; // 0x1fda Jump
	
Label_8160:
	goto Label_8175; // 0x1fe0 Jump
	
Label_8175:
	return 0; // 0x1fef Return
	
Label_8155:
	var_413_string = ""; // 0x1fdb PushV
	var_413_string = var_2_object; // 0x1fdc MovT
	func_10198(var_413_string); // 0x1fdd NEW_2
	goto Label_8150; // 0x1fdf Jump
	
Label_8161:
	var_414_string = "all"; // 0x1fe1 PushS
	var_415_string = "idle"; // 0x1fe2 PushS
	PlayAnimation(var_414_string, var_415_string); // 0x1fe3 Func
	
Label_8165:
	WaitForAnimEnd(); // 0x1fe5 Func
	var_416_object = var_3_object; // 0x1fe7 PushT
	if(var_416_object == 0) goto Label_8170; // 0x1fe8 JumpB
	goto Label_8175; // 0x1fe9 Jump
	
Label_8170:
	var_417_string = "all"; // 0x1fea PushS
	var_418_string = "idle"; // 0x1feb PushS
	PlayAnimation(var_417_string, var_418_string); // 0x1fec Func
	goto Label_8165; // 0x1fee Jump
	
Label_8051:
	var_419_string = ""; // 0x1f73 PushV
	var_419_string = "Neutral"; // 0x1f74 MovS
	func_8176(var_354_object, var_419_string); // 0x1f75 NEW_2
	var_420_int = 531953; // 0x1f77 PushI
	SetMessage(var_420_int); // 0x1f78 TObjFunc
	ClearReplies(); // 0x1f7a TObjFunc
	var_421_bool = 0; // 0x1f7c PushV
	var_421_bool = 0; // 0x1f7d MovB
	var_422_bool = 0; var_423_object = Obj(); // 0x1f7e PushV
	var_423_object = var_1_object; // 0x1f7f MovT
	func_11384(var_423_object); // 0x1f80 NEW_2
	if(var_422_bool == 0) goto Label_8073; // 0x1f82 JumpB
	var_428_bool = 0; var_429_object = Obj(); // 0x1f83 PushV
	var_429_object = var_1_object; // 0x1f84 MovT
	func_11888(var_429_object); // 0x1f85 NEW_2
	if(var_428_bool == 0) goto Label_8073; // 0x1f87 JumpB
	var_421_bool = 1; // 0x1f88 MovB
	
Label_8073:
	if(var_421_bool == 0) goto Label_8079; // 0x1f89 JumpB
	var_430_int = 532702; // 0x1f8a PushI
	var_431_int = 34178; // 0x1f8b PushI
	var_432_int = 34177; // 0x1f8c PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x1f8d TObjFunc
	
Label_8079:
	var_433_bool = 0; var_434_object = Obj(); // 0x1f8f PushV
	var_434_object = var_1_object; // 0x1f90 MovT
	func_11360(var_434_object); // 0x1f91 NEW_2
	if(var_433_bool == 0) goto Label_8089; // 0x1f93 JumpB
	var_439_int = 531954; // 0x1f94 PushI
	var_440_int = 33359; // 0x1f95 PushI
	var_441_int = 33358; // 0x1f96 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x1f97 TObjFunc
	
Label_8089:
	var_442_bool = 0; // 0x1f99 PushV
	var_442_bool = 0; // 0x1f9a MovB
	var_443_bool = 0; var_444_object = Obj(); // 0x1f9b PushV
	var_444_object = var_1_object; // 0x1f9c MovT
	func_11324(var_444_object); // 0x1f9d NEW_2
	if(var_443_bool == 0) goto Label_8103; // 0x1f9f JumpB
	var_445_bool = 0; var_446_object = Obj(); // 0x1fa0 PushV
	var_446_object = var_1_object; // 0x1fa1 MovT
	func_11372(var_446_object); // 0x1fa2 NEW_2
	var_447_bool = var_445_bool == 0; // 0x1fa4 Not
	if(var_447_bool == 0) goto Label_8103; // 0x1fa5 JumpB
	var_442_bool = 1; // 0x1fa6 MovB
	
Label_8103:
	if(var_442_bool == 0) goto Label_8109; // 0x1fa7 JumpB
	var_448_int = 532699; // 0x1fa8 PushI
	var_449_int = 34175; // 0x1fa9 PushI
	var_450_int = 34174; // 0x1faa PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x1fab TObjFunc
	
Label_8109:
	var_451_bool = 0; // 0x1fad PushV
	var_451_bool = 0; // 0x1fae MovB
	var_452_bool = 0; // 0x1faf PushV
	var_452_bool = 0; // 0x1fb0 MovB
	var_453_bool = 0; var_454_object = Obj(); // 0x1fb1 PushV
	var_454_object = var_1_object; // 0x1fb2 MovT
	func_11348(var_454_object); // 0x1fb3 NEW_2
	var_459_bool = var_453_bool == 0; // 0x1fb5 Not
	if(var_459_bool == 0) goto Label_8125; // 0x1fb6 JumpB
	var_460_bool = 0; var_461_object = Obj(); // 0x1fb7 PushV
	var_461_object = var_1_object; // 0x1fb8 MovT
	func_11396(var_461_object); // 0x1fb9 NEW_2
	if(var_460_bool == 0) goto Label_8125; // 0x1fbb JumpB
	var_452_bool = 1; // 0x1fbc MovB
	
Label_8125:
	if(var_452_bool == 0) goto Label_8132; // 0x1fbd JumpB
	var_466_bool = 0; var_467_object = Obj(); // 0x1fbe PushV
	var_467_object = var_1_object; // 0x1fbf MovT
	func_11336(var_467_object); // 0x1fc0 NEW_2
	if(var_466_bool == 0) goto Label_8132; // 0x1fc2 JumpB
	var_451_bool = 1; // 0x1fc3 MovB
	
Label_8132:
	if(var_451_bool == 0) goto Label_8138; // 0x1fc4 JumpB
	var_472_int = 532691; // 0x1fc5 PushI
	var_473_int = 34166; // 0x1fc6 PushI
	var_474_int = 34165; // 0x1fc7 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x1fc8 TObjFunc
	
Label_8138:
	var_475_int = 531960; // 0x1fca PushI
	var_476_int = -1; // 0x1fcb PushI
	var_477_int = 33364; // 0x1fcc PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x1fcd TObjFunc
	goto Label_8146; // 0x1fcf Jump
}


func_12091()
{
	var_129_object = Obj(); var_130_object = Obj(); // 0x2f3b PushV
	var_131_int = 155; // 0x2f3c PushI
	var_132_int = 2; // 0x2f3d PushI
	var_133_int = 515366; // 0x2f3e PushI
	CreateDiaryEntry(var_130_object, var_131_int, var_132_int, var_133_int); // 0x2f3f Func
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0; // 0x2f41 PushV
	var_135_object = var_130_object; // 0x2f42 Mov
	var_136_int = 154; // 0x2f43 MovI
	func_12234(var_134_bool, var_135_object, var_136_int); // 0x2f44 NEW_2
	return 2; // 0x2f46 Return
}


func_9531(var_0_bool, var_1560_int, var_1561_object)
{
	var_1563_object = Obj(); var_1564_bool = 0; var_1565_int = 0; var_1566_bool = 0; var_1567_object = Obj(); var_1568_bool = 0; var_1569_int = 0; var_1570_bool = 0; // 0x253b PushV
	var_0_bool = var_1561_object; // 0x253c TMov
	var_1571_bool = 0; var_1572_object = Obj(); var_1573_float = 0; // 0x253d PushV
	var_1572_object = var_1561_object; // 0x253e Mov
	var_1573_float = 70.0; // 0x253f MovF
	func_9973(var_1572_object, var_1573_float); // 0x2540 NEW_2
	var_1574_bool = var_1571_bool == 0; // 0x2542 Not
	if(var_1574_bool == 0) goto Label_9542; // 0x2543 JumpB
	var_1560_int = -2; // 0x2544 MovI
	return 8; // 0x2545 Return
	
Label_9542:
	CreateDialog(var_1567_object); // 0x2546 Func
	var_1575_int = 0; // 0x2548 PushV
	func_10503(var_1575_int); // 0x2549 NEW_2
	SetNPCName(var_1575_int); // 0x254b ObjFunc
	var_1576_int = 0; // 0x254d PushV
	func_10501(var_1576_int); // 0x254e NEW_2
	SetNPCDescription(var_1576_int); // 0x2550 ObjFunc
	var_1577_string = ""; // 0x2552 PushV
	func_10505(var_1577_string); // 0x2553 NEW_2
	SetPhoto(var_1577_string); // 0x2555 ObjFunc
	var_1578_string = ""; // 0x2557 PushV
	func_10507(var_1578_string); // 0x2558 NEW_2
	SetPhoto2(var_1578_string); // 0x255a ObjFunc
	var_1579_int = 0; // 0x255c PushV
	func_12312(var_1579_int); // 0x255d NEW_2
	SetPlayerName(var_1579_int); // 0x255f ObjFunc
	var_1569_int = -1; // 0x2561 MovI
	IsOverrideActive(var_1568_bool); // 0x2562 Func
	var_1580_bool = var_1568_bool; // 0x2564 Push
	if(var_1580_bool == 0) goto Label_9576; // 0x2565 JumpB
	var_1560_int = -2; // 0x2566 MovI
	return 8; // 0x2567 Return
	
Label_9576:
	DoDialog(var_1567_object); // 0x2568 Func
	var_1581_bool = 0; var_1582_object = Obj(); // 0x256a PushV
	var_1583_object = Obj(); // 0x256b PushV
	func_10251(var_1583_object); // 0x256c NEW_2
	var_1582_object = var_1583_object; // 0x256d Mov
	func_10060(var_1581_bool, var_1582_object); // 0x256f NEW_2
	var_1584_object = Obj(); var_1585_object = Obj(); // 0x2571 PushV
	var_1584_object = var_1561_object; // 0x2572 Mov
	var_1585_object = var_1567_object; // 0x2573 Mov
	TaskCall(31); // 0x2574 TaskCall
	func_9612(var_1586_object, var_1587_object, var_1588_string, var_1589_bool, var_1584_object, var_1585_object); // 0x2575 NEW_2
	TaskReturn(); // 0x2576 TaskReturn
	IsDialogEnd(var_1570_bool); // 0x2578 ObjFunc
	
Label_9594:
	var_1614_bool = var_1570_bool == 0; // 0x257a Not
	if(var_1614_bool == 0) goto Label_9601; // 0x257b JumpB
	sync(); // 0x257c Func
	IsDialogEnd(var_1570_bool); // 0x257e ObjFunc
	goto Label_9594; // 0x2580 Jump
	
Label_9601:
	var_1615_object = Obj(); // 0x2581 PushV
	var_1615_object = var_1561_object; // 0x2582 Mov
	func_10042(); // 0x2583 NEW_2
	StopDialog(var_1567_object); // 0x2585 Func
	GetReturnValue(var_1569_int); // 0x2587 ObjFunc
	var_1560_int = var_1569_int; // 0x2589 Mov
	return 8; // 0x258a Return
}


func_11074()
{
	var_234_string = "ood6MladVlad3"; // 0x2b43 PushS
	var_235_int = 1; // 0x2b44 PushI
	SetVariable(var_234_string, var_235_int); // 0x2b45 Func
	return 0; // 0x2b47 Return
}


func_11588(var_782_bool)
{
	var_784_int = 0; var_785_string = ""; // 0x2d45 PushV
	var_785_string = "d4q02"; // 0x2d46 MovS
	func_10296(var_784_int, var_785_string); // 0x2d47 NEW_2
	var_786_int = 1000; // 0x2d49 PushI
	var_787_bool = var_784_int == var_786_int; // 0x2d4a Eq
	if(var_787_bool == 0) goto Label_11598; // 0x2d4b JumpB
	var_782_bool = 1; // 0x2d4c MovB
	return 0; // 0x2d4d Return
	
Label_11598:
	var_782_bool = 0; // 0x2d4e MovB
	return 0; // 0x2d4f Return
}


func_10565()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2945 PushV
	var_84_string = "d1q03IsKapella"; // 0x2946 PushS
	var_85_int = 0; // 0x2947 PushI
	SetVariable(var_84_string, var_85_int); // 0x2948 Func
	var_86_object = Obj(); // 0x294a PushV
	func_12262(var_86_object); // 0x294b NEW_2
	var_83_object = var_86_object; // 0x294c Mov
	var_93_string = "d1q03MladVladGotoOspina"; // 0x294e PushS
	var_94_string = "pt_map_ospina"; // 0x294f PushS
	var_95_int = 0; // 0x2950 PushI
	var_96_int = 508642; // 0x2951 PushI
	var_97_float = 0; // 0x2952 PushV
	func_10443(var_97_float); // 0x2953 NEW_2
	AddMark(var_93_string, var_94_string, var_95_int, var_96_int, var_97_float); // 0x2955 ObjFunc
	func_11987(); // 0x2958 NEW_2
	func_12000(); // 0x295b NEW_2
	var_131_object = Obj(); var_132_string = ""; // 0x295d PushV
	var_132_string = "quest_d1_03"; // 0x295e MovS
	func_10301(var_131_object, var_132_string); // 0x295f NEW_2
	return 2; // 0x2961 Return
}


func_11080()
{
	func_12143(); // 0x2b4a NEW_2
	var_248_bool = 0; var_249_string = ""; var_250_string = ""; // 0x2b4c PushV
	var_249_string = "quest_d6_03"; // 0x2b4d MovS
	var_250_string = "failed"; // 0x2b4e MovS
	func_10431(var_248_bool, var_249_string, var_250_string); // 0x2b4f NEW_2
	return 0; // 0x2b51 Return
}


func_12104()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x2f48 PushV
	var_109_int = 102; // 0x2f49 PushI
	var_110_int = 2; // 0x2f4a PushI
	var_111_int = 513725; // 0x2f4b PushI
	CreateDiaryEntry(var_108_object, var_109_int, var_110_int, var_111_int); // 0x2f4c Func
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0; // 0x2f4e PushV
	var_113_object = var_108_object; // 0x2f4f Mov
	var_114_int = -1; // 0x2f50 MovI
	func_12234(var_112_bool, var_113_object, var_114_int); // 0x2f51 NEW_2
	return 2; // 0x2f53 Return
}


func_10060(var_167_bool, var_168_object)
{
	var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_int = 0; // 0x274c PushV
	var_176_string = "voice_common"; // 0x274d PushS
	GetVariable(var_176_string, var_174_int); // 0x274e Func
	var_177_int = var_174_int; // 0x2750 Push
	if(var_177_int == 0) goto Label_10098; // 0x2751 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x2752 PushV
	var_179_object = var_168_object; // 0x2753 Mov
	func_10118(var_179_object); // 0x2754 NEW_2
	var_208_bool = var_178_bool == 0; // 0x2756 Not
	if(var_208_bool == 0) goto Label_10080; // 0x2757 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x2758 PushV
	var_210_object = var_168_object; // 0x2759 Mov
	func_10155(var_210_object); // 0x275a NEW_2
	var_244_bool = var_209_bool == 0; // 0x275c Not
	if(var_244_bool == 0) goto Label_10080; // 0x275d JumpB
	var_167_bool = 0; // 0x275e MovB
	return 4; // 0x275f Return
	
Label_10080:
	var_245_int = 2; // 0x2760 PushI
	irand(var_175_int, var_245_int); // 0x2761 Func
	var_246_int = var_175_int; // 0x2763 Push
	if(var_246_int == 0) goto Label_10093; // 0x2764 JumpB
	var_247_string = "voice_common"; // 0x2765 PushS
	var_248_int = 1; // 0x2766 PushI
	var_249_int = var_174_int + var_248_int; // 0x2767 Add
	var_250_int = 3; // 0x2768 PushI
	var_251_int = var_249_int / var_250_int; // 0x2769 Mod
	SetVariable(var_247_string, var_251_int); // 0x276a Func
	goto Label_10097; // 0x276c Jump
	
Label_10097:
	goto Label_10116; // 0x2771 Jump
	
Label_10116:
	var_167_bool = 1; // 0x2784 MovB
	return 4; // 0x2785 Return
	
Label_10093:
	var_252_string = "voice_common"; // 0x276d PushS
	var_253_int = 0; // 0x276e PushI
	SetVariable(var_252_string, var_253_int); // 0x276f Func
	
Label_10098:
	var_254_bool = 0; var_255_object = Obj(); // 0x2772 PushV
	var_255_object = var_168_object; // 0x2773 Mov
	func_10155(var_255_object); // 0x2774 NEW_2
	var_256_bool = var_254_bool == 0; // 0x2776 Not
	if(var_256_bool == 0) goto Label_10112; // 0x2777 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x2778 PushV
	var_258_object = var_168_object; // 0x2779 Mov
	func_10118(var_258_object); // 0x277a NEW_2
	var_259_bool = var_257_bool == 0; // 0x277c Not
	if(var_259_bool == 0) goto Label_10112; // 0x277d JumpB
	var_167_bool = 0; // 0x277e MovB
	return 4; // 0x277f Return
	
Label_10112:
	var_260_string = "voice_common"; // 0x2780 PushS
	var_261_int = 1; // 0x2781 PushI
	SetVariable(var_260_string, var_261_int); // 0x2782 Func
}


func_11600(var_776_bool)
{
	var_778_int = 0; var_779_string = ""; // 0x2d51 PushV
	var_779_string = "ood4MladVlad3"; // 0x2d52 MovS
	func_10296(var_778_int, var_779_string); // 0x2d53 NEW_2
	var_780_int = 0; // 0x2d55 PushI
	var_781_bool = var_778_int == var_780_int; // 0x2d56 Eq
	if(var_781_bool == 0) goto Label_11610; // 0x2d57 JumpB
	var_776_bool = 1; // 0x2d58 MovB
	return 0; // 0x2d59 Return
	
Label_11610:
	var_776_bool = 0; // 0x2d5a MovB
	return 0; // 0x2d5b Return
}


func_11090(var_196_object)
{
	var_198_bool = 0; var_199_object = Obj(); var_200_float = 0; // 0x2b53 PushV
	var_199_object = var_196_object; // 0x2b54 Mov
	var_200_float = 0.3; // 0x2b55 MovF
	func_10386(var_198_bool, var_199_object, var_200_float); // 0x2b56 NEW_2
	return 0; // 0x2b58 Return
}


func_12117()
{
	var_193_object = Obj(); var_194_object = Obj(); // 0x2f55 PushV
	var_195_int = 104; // 0x2f56 PushI
	var_196_int = 2; // 0x2f57 PushI
	var_197_int = 513727; // 0x2f58 PushI
	CreateDiaryEntry(var_194_object, var_195_int, var_196_int, var_197_int); // 0x2f59 Func
	var_198_bool = 0; var_199_object = Obj(); var_200_int = 0; // 0x2f5b PushV
	var_199_object = var_194_object; // 0x2f5c Mov
	var_200_int = 102; // 0x2f5d MovI
	func_12234(var_198_bool, var_199_object, var_200_int); // 0x2f5e NEW_2
	return 2; // 0x2f60 Return
}


func_11097()
{
	var_159_string = "ood5MladVlad1"; // 0x2b5a PushS
	var_160_int = 1; // 0x2b5b PushI
	SetVariable(var_159_string, var_160_int); // 0x2b5c Func
	return 0; // 0x2b5e Return
}


func_11612(var_999_bool)
{
	var_1001_int = 0; var_1002_string = ""; // 0x2d5d PushV
	var_1002_string = "d6q02"; // 0x2d5e MovS
	func_10296(var_1001_int, var_1002_string); // 0x2d5f NEW_2
	var_1003_int = 0; // 0x2d61 PushI
	var_1004_bool = var_1001_int == var_1003_int; // 0x2d62 Eq
	if(var_1004_bool == 0) goto Label_11622; // 0x2d63 JumpB
	var_999_bool = 1; // 0x2d64 MovB
	return 0; // 0x2d65 Return
	
Label_11622:
	var_999_bool = 0; // 0x2d66 MovB
	return 0; // 0x2d67 Return
}


func_11103()
{
	var_192_string = "ood5MladVlad2"; // 0x2b60 PushS
	var_193_int = 1; // 0x2b61 PushI
	SetVariable(var_192_string, var_193_int); // 0x2b62 Func
	return 0; // 0x2b64 Return
}


func_12130()
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x2f62 PushV
	var_132_int = 106; // 0x2f63 PushI
	var_133_int = 2; // 0x2f64 PushI
	var_134_int = 513729; // 0x2f65 PushI
	CreateDiaryEntry(var_131_object, var_132_int, var_133_int, var_134_int); // 0x2f66 Func
	var_135_bool = 0; var_136_object = Obj(); var_137_int = 0; // 0x2f68 PushV
	var_136_object = var_131_object; // 0x2f69 Mov
	var_137_int = 102; // 0x2f6a MovI
	func_12234(var_135_bool, var_136_object, var_137_int); // 0x2f6b NEW_2
	return 2; // 0x2f6d Return
}


func_10595(var_201_object)
{
	var_203_string = "money10000 is given"; // 0x2964 PushS
	Trace(var_203_string); // 0x2965 Func
	var_204_object = Obj(); var_205_int = 0; // 0x2967 PushV
	var_204_object = var_201_object; // 0x2968 Mov
	var_205_int = 10000; // 0x2969 MovI
	func_10335(var_204_object, var_205_int); // 0x296a NEW_2
	return 0; // 0x296c Return
}


func_11109()
{
	return 0; // 0x2b66 Return
}


func_7014(var_0_bool, var_1_object, var_2_object, var_3_object, var_1333_object, var_1334_object)
{
	var_0_bool = var_1334_object; // 0x1b67 TMov
	var_1_object = var_1333_object; // 0x1b68 TMov
	var_3_object = 0; // 0x1b69 TMovB
	var_1339_int = 1; // 0x1b6a PushI
	if(var_1339_int == 0) goto Label_7048; // 0x1b6b JumpB
	var_1340_string = ""; // 0x1b6c PushV
	var_1340_string = "Neutral"; // 0x1b6d MovS
	func_7078(var_1334_object, var_1340_string); // 0x1b6e NEW_2
	var_1348_int = 520927; // 0x1b70 PushI
	SetMessage(var_1348_int); // 0x1b71 TObjFunc
	ClearReplies(); // 0x1b73 TObjFunc
	var_1349_bool = 0; var_1350_object = Obj(); // 0x1b75 PushV
	var_1350_object = var_1_object; // 0x1b76 MovT
	func_11922(var_1349_bool, var_1350_object); // 0x1b77 NEW_2
	var_1351_bool = var_1349_bool == 0; // 0x1b79 Not
	if(var_1351_bool == 0) goto Label_7040; // 0x1b7a JumpB
	var_1352_int = 520928; // 0x1b7b PushI
	var_1353_int = 22146; // 0x1b7c PushI
	var_1354_int = 22145; // 0x1b7d PushI
	AddReply(var_1352_int, var_1353_int, var_1354_int); // 0x1b7e TObjFunc
	
Label_7040:
	var_1355_int = 520932; // 0x1b80 PushI
	var_1356_int = -1; // 0x1b81 PushI
	var_1357_int = 22149; // 0x1b82 PushI
	AddReply(var_1355_int, var_1356_int, var_1357_int); // 0x1b83 TObjFunc
	goto Label_7048; // 0x1b85 Jump
	
Label_7048:
	var_1358_bool = 0; // 0x1b88 PushV
	func_10509(var_1358_bool); // 0x1b89 NEW_2
	if(var_1358_bool == 0) goto Label_7063; // 0x1b8b JumpB
	
Label_7052:
	lshWaitForAnimEnd(); // 0x1b8c Func
	var_1359_object = var_3_object; // 0x1b8e PushT
	if(var_1359_object == 0) goto Label_7057; // 0x1b8f JumpB
	goto Label_7062; // 0x1b90 Jump
	
Label_7062:
	goto Label_7077; // 0x1b96 Jump
	
Label_7077:
	return 0; // 0x1ba5 Return
	
Label_7057:
	var_1360_string = ""; // 0x1b91 PushV
	var_1360_string = var_2_object; // 0x1b92 MovT
	func_10198(var_1360_string); // 0x1b93 NEW_2
	goto Label_7052; // 0x1b95 Jump
	
Label_7063:
	var_1361_string = "all"; // 0x1b97 PushS
	var_1362_string = "idle"; // 0x1b98 PushS
	PlayAnimation(var_1361_string, var_1362_string); // 0x1b99 Func
	
Label_7067:
	WaitForAnimEnd(); // 0x1b9b Func
	var_1363_object = var_3_object; // 0x1b9d PushT
	if(var_1363_object == 0) goto Label_7072; // 0x1b9e JumpB
	goto Label_7077; // 0x1b9f Jump
	
Label_7072:
	var_1364_string = "all"; // 0x1ba0 PushS
	var_1365_string = "idle"; // 0x1ba1 PushS
	PlayAnimation(var_1364_string, var_1365_string); // 0x1ba2 Func
	goto Label_7067; // 0x1ba4 Jump
}


func_11111()
{
	var_859_string = "ood5MladVlad3"; // 0x2b68 PushS
	var_860_int = 1; // 0x2b69 PushI
	SetVariable(var_859_string, var_860_int); // 0x2b6a Func
	return 0; // 0x2b6c Return
}


func_11624(var_968_bool)
{
	var_970_int = 0; var_971_string = ""; // 0x2d69 PushV
	var_971_string = "ood6MladVlad1"; // 0x2d6a MovS
	func_10296(var_970_int, var_971_string); // 0x2d6b NEW_2
	var_972_int = 0; // 0x2d6d PushI
	var_973_bool = var_970_int == var_972_int; // 0x2d6e Eq
	if(var_973_bool == 0) goto Label_11634; // 0x2d6f JumpB
	var_968_bool = 1; // 0x2d70 MovB
	return 0; // 0x2d71 Return
	
Label_11634:
	var_968_bool = 0; // 0x2d72 MovB
	return 0; // 0x2d73 Return
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_262_object, var_263_object)
{
	var_0_bool = var_263_object; // 0x16c TMov
	var_1_object = var_262_object; // 0x16d TMov
	var_3_object = 0; // 0x16e TMovB
	var_268_int = 1; // 0x16f PushI
	if(var_268_int == 0) goto Label_396; // 0x170 JumpB
	var_269_object = Obj(); var_270_object = Obj(); // 0x171 PushV
	var_269_object = var_1_object; // 0x172 MovT
	var_270_object = var_0_bool; // 0x173 MovT
	func_11245(); // 0x174 NEW_2
	var_273_object = Obj(); var_274_object = Obj(); // 0x176 PushV
	var_273_object = var_1_object; // 0x177 MovT
	var_274_object = var_0_bool; // 0x178 MovT
	func_10765(); // 0x179 NEW_2
	var_277_string = ""; // 0x17b PushV
	var_277_string = "Neutral"; // 0x17c MovS
	func_426(var_263_object, var_277_string); // 0x17d NEW_2
	var_294_int = 500416; // 0x17f PushI
	SetMessage(var_294_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_295_int = 533500; // 0x184 PushI
	var_296_int = 35031; // 0x185 PushI
	var_297_int = 35030; // 0x186 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x187 TObjFunc
	goto Label_396; // 0x189 Jump
	
Label_396:
	var_298_bool = 0; // 0x18c PushV
	func_10509(var_298_bool); // 0x18d NEW_2
	if(var_298_bool == 0) goto Label_411; // 0x18f JumpB
	
Label_400:
	lshWaitForAnimEnd(); // 0x190 Func
	var_299_object = var_3_object; // 0x192 PushT
	if(var_299_object == 0) goto Label_405; // 0x193 JumpB
	goto Label_410; // 0x194 Jump
	
Label_410:
	goto Label_425; // 0x19a Jump
	
Label_425:
	return 0; // 0x1a9 Return
	
Label_405:
	var_300_string = ""; // 0x195 PushV
	var_300_string = var_2_object; // 0x196 MovT
	func_10198(var_300_string); // 0x197 NEW_2
	goto Label_400; // 0x199 Jump
	
Label_411:
	var_311_string = "all"; // 0x19b PushS
	var_312_string = "idle"; // 0x19c PushS
	PlayAnimation(var_311_string, var_312_string); // 0x19d Func
	
Label_415:
	WaitForAnimEnd(); // 0x19f Func
	var_313_object = var_3_object; // 0x1a1 PushT
	if(var_313_object == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_425; // 0x1a3 Jump
	
Label_420:
	var_314_string = "all"; // 0x1a4 PushS
	var_315_string = "idle"; // 0x1a5 PushS
	PlayAnimation(var_314_string, var_315_string); // 0x1a6 Func
	goto Label_415; // 0x1a8 Jump
}


func_10605()
{
	var_215_string = "playsound"; // 0x296e PushS
	var_216_string = "givemoney"; // 0x296f PushS
	TriggerWorld(var_215_string, var_216_string); // 0x2970 Func
	return 0; // 0x2972 Return
}


func_11117()
{
	var_180_object = Obj(); var_181_object = Obj(); var_182_object = Obj(); var_183_object = Obj(); // 0x2b6d PushV
	var_184_object = Obj(); // 0x2b6e PushV
	func_12262(var_184_object); // 0x2b6f NEW_2
	var_182_object = var_184_object; // 0x2b70 Mov
	var_185_string = "d6q02BigVlad"; // 0x2b72 PushS
	FindMark(var_183_object, var_185_string); // 0x2b73 ObjFunc
	var_186_object = var_183_object; // 0x2b75 Push
	if(var_186_object == 0) goto Label_11129; // 0x2b76 JumpB
	Remove(); // 0x2b77 ObjFunc
	
Label_11129:
	var_187_string = "d6q02KapellaGotoMladVlad"; // 0x2b79 PushS
	FindMark(var_183_object, var_187_string); // 0x2b7a ObjFunc
	var_188_object = var_183_object; // 0x2b7c Push
	if(var_188_object == 0) goto Label_11136; // 0x2b7d JumpB
	Remove(); // 0x2b7e ObjFunc
	
Label_11136:
	var_189_string = "d6q02MladVladGotoBigVlad"; // 0x2b80 PushS
	FindMark(var_183_object, var_189_string); // 0x2b81 ObjFunc
	var_190_object = var_183_object; // 0x2b83 Push
	if(var_190_object == 0) goto Label_11143; // 0x2b84 JumpB
	Remove(); // 0x2b85 ObjFunc
	
Label_11143:
	var_191_string = "d6q02MladVladGotoBigVladSelf"; // 0x2b87 PushS
	FindMark(var_183_object, var_191_string); // 0x2b88 ObjFunc
	var_192_object = var_183_object; // 0x2b8a Push
	if(var_192_object == 0) goto Label_11150; // 0x2b8b JumpB
	Remove(); // 0x2b8c ObjFunc
	
Label_11150:
	func_12117(); // 0x2b8f NEW_2
	return 4; // 0x2b91 Return
}


func_12143()
{
	var_240_object = Obj(); var_241_object = Obj(); // 0x2f6f PushV
	var_242_int = 110; // 0x2f70 PushI
	var_243_int = 2; // 0x2f71 PushI
	var_244_int = 513733; // 0x2f72 PushI
	CreateDiaryEntry(var_241_object, var_242_int, var_243_int, var_244_int); // 0x2f73 Func
	var_245_bool = 0; var_246_object = Obj(); var_247_int = 0; // 0x2f75 PushV
	var_246_object = var_241_object; // 0x2f76 Mov
	var_247_int = 107; // 0x2f77 MovI
	func_12234(var_245_bool, var_246_object, var_247_int); // 0x2f78 NEW_2
	return 2; // 0x2f7a Return
}


func_7536(var_0_bool, var_1_object, var_2_object, var_3_object, var_1455_object, var_1456_object)
{
	var_0_bool = var_1456_object; // 0x1d71 TMov
	var_1_object = var_1455_object; // 0x1d72 TMov
	var_3_object = 0; // 0x1d73 TMovB
	var_1461_int = 1; // 0x1d74 PushI
	if(var_1461_int == 0) goto Label_7585; // 0x1d75 JumpB
	var_1462_string = ""; // 0x1d76 PushV
	var_1462_string = "Neutral"; // 0x1d77 MovS
	func_7615(var_1456_object, var_1462_string); // 0x1d78 NEW_2
	var_1470_int = 520941; // 0x1d7a PushI
	SetMessage(var_1470_int); // 0x1d7b TObjFunc
	ClearReplies(); // 0x1d7d TObjFunc
	var_1471_bool = 0; var_1472_object = Obj(); // 0x1d7f PushV
	var_1472_object = var_1_object; // 0x1d80 MovT
	func_11432(var_1472_object); // 0x1d81 NEW_2
	if(var_1471_bool == 0) goto Label_7561; // 0x1d83 JumpB
	var_1477_int = 534490; // 0x1d84 PushI
	var_1478_int = 38444; // 0x1d85 PushI
	var_1479_int = 36135; // 0x1d86 PushI
	AddReply(var_1477_int, var_1478_int, var_1479_int); // 0x1d87 TObjFunc
	
Label_7561:
	var_1480_bool = 0; var_1481_object = Obj(); // 0x1d89 PushV
	var_1481_object = var_1_object; // 0x1d8a MovT
	func_11922(var_1480_bool, var_1481_object); // 0x1d8b NEW_2
	var_1482_bool = var_1480_bool == 0; // 0x1d8d Not
	if(var_1482_bool == 0) goto Label_7572; // 0x1d8e JumpB
	var_1483_int = 520942; // 0x1d8f PushI
	var_1484_int = 22160; // 0x1d90 PushI
	var_1485_int = 22159; // 0x1d91 PushI
	AddReply(var_1483_int, var_1484_int, var_1485_int); // 0x1d92 TObjFunc
	
Label_7572:
	var_1486_int = 520946; // 0x1d94 PushI
	var_1487_int = -1; // 0x1d95 PushI
	var_1488_int = 22163; // 0x1d96 PushI
	AddReply(var_1486_int, var_1487_int, var_1488_int); // 0x1d97 TObjFunc
	var_1489_int = 536616; // 0x1d99 PushI
	var_1490_int = -1; // 0x1d9a PushI
	var_1491_int = 38443; // 0x1d9b PushI
	AddReply(var_1489_int, var_1490_int, var_1491_int); // 0x1d9c TObjFunc
	goto Label_7585; // 0x1d9e Jump
	
Label_7585:
	var_1492_bool = 0; // 0x1da1 PushV
	func_10509(var_1492_bool); // 0x1da2 NEW_2
	if(var_1492_bool == 0) goto Label_7600; // 0x1da4 JumpB
	
Label_7589:
	lshWaitForAnimEnd(); // 0x1da5 Func
	var_1493_object = var_3_object; // 0x1da7 PushT
	if(var_1493_object == 0) goto Label_7594; // 0x1da8 JumpB
	goto Label_7599; // 0x1da9 Jump
	
Label_7599:
	goto Label_7614; // 0x1daf Jump
	
Label_7614:
	return 0; // 0x1dbe Return
	
Label_7594:
	var_1494_string = ""; // 0x1daa PushV
	var_1494_string = var_2_object; // 0x1dab MovT
	func_10198(var_1494_string); // 0x1dac NEW_2
	goto Label_7589; // 0x1dae Jump
	
Label_7600:
	var_1495_string = "all"; // 0x1db0 PushS
	var_1496_string = "idle"; // 0x1db1 PushS
	PlayAnimation(var_1495_string, var_1496_string); // 0x1db2 Func
	
Label_7604:
	WaitForAnimEnd(); // 0x1db4 Func
	var_1497_object = var_3_object; // 0x1db6 PushT
	if(var_1497_object == 0) goto Label_7609; // 0x1db7 JumpB
	goto Label_7614; // 0x1db8 Jump
	
Label_7609:
	var_1498_string = "all"; // 0x1db9 PushS
	var_1499_string = "idle"; // 0x1dba PushS
	PlayAnimation(var_1498_string, var_1499_string); // 0x1dbb Func
	goto Label_7604; // 0x1dbd Jump
}


func_10611()
{
	var_250_object = Obj(); var_251_string = ""; var_252_float = 0; // 0x2974 PushV
	var_253_object = Obj(); // 0x2975 PushV
	func_12262(var_253_object); // 0x2976 NEW_2
	var_250_object = var_253_object; // 0x2977 Mov
	var_251_string = "pt_map_mat"; // 0x2979 MovS
	var_252_float = 2; // 0x297a MovI
	func_12279(var_250_object, var_251_string, var_252_float); // 0x297b NEW_2
	var_254_object = Obj(); // 0x297d PushV
	func_12262(var_254_object); // 0x297e NEW_2
	ShowMap(var_254_object); // 0x2980 ObjFunc
	return 0; // 0x2982 Return
}


func_11636(var_1009_bool)
{
	var_1011_int = 0; var_1012_string = ""; // 0x2d75 PushV
	var_1012_string = "ood6MladVlad2"; // 0x2d76 MovS
	func_10296(var_1011_int, var_1012_string); // 0x2d77 NEW_2
	var_1013_int = 0; // 0x2d79 PushI
	var_1014_bool = var_1011_int == var_1013_int; // 0x2d7a Eq
	if(var_1014_bool == 0) goto Label_11646; // 0x2d7b JumpB
	var_1009_bool = 1; // 0x2d7c MovB
	return 0; // 0x2d7d Return
	
Label_11646:
	var_1009_bool = 0; // 0x2d7e MovB
	return 0; // 0x2d7f Return
}


func_12156()
{
	var_230_object = Obj(); var_231_object = Obj(); // 0x2f7c PushV
	var_232_int = 718; // 0x2f7d PushI
	var_233_int = 1; // 0x2f7e PushI
	var_234_int = 538759; // 0x2f7f PushI
	CreateDiaryEntry(var_231_object, var_232_int, var_233_int, var_234_int); // 0x2f80 Func
	var_235_bool = 0; var_236_object = Obj(); var_237_int = 0; // 0x2f82 PushV
	var_236_object = var_231_object; // 0x2f83 Mov
	var_237_int = 175; // 0x2f84 MovI
	func_12234(var_235_bool, var_236_object, var_237_int); // 0x2f85 NEW_2
	return 2; // 0x2f87 Return
}


func_11648(var_1026_bool)
{
	var_1028_int = 0; var_1029_string = ""; // 0x2d81 PushV
	var_1029_string = "ood6MladVlad3"; // 0x2d82 MovS
	func_10296(var_1028_int, var_1029_string); // 0x2d83 NEW_2
	var_1030_int = 0; // 0x2d85 PushI
	var_1031_bool = var_1028_int == var_1030_int; // 0x2d86 Eq
	if(var_1031_bool == 0) goto Label_11658; // 0x2d87 JumpB
	var_1026_bool = 1; // 0x2d88 MovB
	return 0; // 0x2d89 Return
	
Label_11658:
	var_1026_bool = 0; // 0x2d8a MovB
	return 0; // 0x2d8b Return
}


func_10627()
{
	var_175_string = "d1q01"; // 0x2984 PushS
	var_176_int = 7; // 0x2985 PushI
	SetVariable(var_175_string, var_176_int); // 0x2986 Func
	func_11974(); // 0x2989 NEW_2
	var_185_bool = 0; var_186_string = ""; var_187_string = ""; // 0x298b PushV
	var_186_string = "quest_d1_01"; // 0x298c MovS
	var_187_string = "place_rubin"; // 0x298d MovS
	func_10431(var_185_bool, var_186_string, var_187_string); // 0x298e NEW_2
	return 0; // 0x2990 Return
}


func_10118(var_178_bool)
{
	var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = ""; // 0x2786 PushV
	var_185_string = "c"; // 0x2787 MovS
	var_186_int = 0; // 0x2788 MovI
	
Label_10121:
	var_190_int = 1; // 0x2789 PushI
	if(var_190_int == 0) goto Label_10134; // 0x278a JumpB
	var_191_int = 1; // 0x278b PushI
	var_192_int = var_186_int + var_191_int; // 0x278c Add
	var_193_int = var_185_string + var_192_int; // 0x278d Add
	HasProperty(var_193_int, var_187_bool); // 0x278e ObjFunc
	var_194_bool = var_187_bool == 0; // 0x2790 Not
	if(var_194_bool == 0) goto Label_10131; // 0x2791 JumpB
	goto Label_10134; // 0x2792 Jump
	
Label_10134:
	var_195_bool = var_186_int == 0; // 0x2796 Not
	if(var_195_bool == 0) goto Label_10138; // 0x2797 JumpB
	var_178_bool = 0; // 0x2798 MovB
	return 10; // 0x2799 Return
	
Label_10138:
	var_188_int = 0; // 0x279a MovI
	var_196_int = 1; // 0x279b PushI
	var_197_bool = var_186_int > var_196_int; // 0x279c GT
	if(var_197_bool == 0) goto Label_10144; // 0x279d JumpB
	irand(var_188_int, var_186_int); // 0x279e Func
	
Label_10144:
	var_198_int = 1; // 0x27a0 PushI
	var_199_int = var_188_int + var_198_int; // 0x27a1 Add
	var_200_int = var_185_string + var_199_int; // 0x27a2 Add
	GetProperty(var_200_int, var_189_string); // 0x27a3 ObjFunc
	var_201_bool = 0; var_202_string = ""; // 0x27a5 PushV
	var_202_string = var_189_string; // 0x27a6 Mov
	func_10229(var_201_bool, var_202_string); // 0x27a7 NEW_2
	var_178_bool = var_201_bool; // 0x27a8 Mov
	return 10; // 0x27aa Return
	
Label_10131:
	var_207_int = 1; // 0x2793 PushI
	var_186_int = var_186_int + var_207_int; // 0x2794 Add2
	goto Label_10121; // 0x2795 Jump
}


func_12169()
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x2f89 PushV
	var_153_int = 177; // 0x2f8a PushI
	var_154_int = 1; // 0x2f8b PushI
	var_155_int = 515436; // 0x2f8c PushI
	CreateDiaryEntry(var_152_object, var_153_int, var_154_int, var_155_int); // 0x2f8d Func
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0; // 0x2f8f PushV
	var_157_object = var_152_object; // 0x2f90 Mov
	var_158_int = 175; // 0x2f91 MovI
	func_12234(var_156_bool, var_157_object, var_158_int); // 0x2f92 NEW_2
	return 2; // 0x2f94 Return
}


func_11660(var_876_bool)
{
	var_878_int = 0; var_879_string = ""; // 0x2d8d PushV
	var_879_string = "d5q03"; // 0x2d8e MovS
	func_10296(var_878_int, var_879_string); // 0x2d8f NEW_2
	var_880_int = 0; // 0x2d91 PushI
	var_881_bool = var_878_int == var_880_int; // 0x2d92 Eq
	if(var_881_bool == 0) goto Label_11670; // 0x2d93 JumpB
	var_876_bool = 1; // 0x2d94 MovB
	return 0; // 0x2d95 Return
	
Label_11670:
	var_876_bool = 0; // 0x2d96 MovB
	return 0; // 0x2d97 Return
}


func_9612(var_0_bool, var_1_object, var_2_object, var_3_object, var_1584_object, var_1585_object)
{
	var_0_bool = var_1585_object; // 0x258d TMov
	var_1_object = var_1584_object; // 0x258e TMov
	var_3_object = 0; // 0x258f TMovB
	var_1590_int = 1; // 0x2590 PushI
	if(var_1590_int == 0) goto Label_9640; // 0x2591 JumpB
	var_1591_string = ""; // 0x2592 PushV
	var_1591_string = "Neutral"; // 0x2593 MovS
	func_9670(var_1585_object, var_1591_string); // 0x2594 NEW_2
	var_1599_int = 540542; // 0x2596 PushI
	SetMessage(var_1599_int); // 0x2597 TObjFunc
	ClearReplies(); // 0x2599 TObjFunc
	var_1600_int = 540543; // 0x259b PushI
	var_1601_int = -1; // 0x259c PushI
	var_1602_int = 42552; // 0x259d PushI
	AddReply(var_1600_int, var_1601_int, var_1602_int); // 0x259e TObjFunc
	var_1603_int = 540796; // 0x25a0 PushI
	var_1604_int = -1; // 0x25a1 PushI
	var_1605_int = 42845; // 0x25a2 PushI
	AddReply(var_1603_int, var_1604_int, var_1605_int); // 0x25a3 TObjFunc
	goto Label_9640; // 0x25a5 Jump
	
Label_9640:
	var_1606_bool = 0; // 0x25a8 PushV
	func_10509(var_1606_bool); // 0x25a9 NEW_2
	if(var_1606_bool == 0) goto Label_9655; // 0x25ab JumpB
	
Label_9644:
	lshWaitForAnimEnd(); // 0x25ac Func
	var_1607_object = var_3_object; // 0x25ae PushT
	if(var_1607_object == 0) goto Label_9649; // 0x25af JumpB
	goto Label_9654; // 0x25b0 Jump
	
Label_9654:
	goto Label_9669; // 0x25b6 Jump
	
Label_9669:
	return 0; // 0x25c5 Return
	
Label_9649:
	var_1608_string = ""; // 0x25b1 PushV
	var_1608_string = var_2_object; // 0x25b2 MovT
	func_10198(var_1608_string); // 0x25b3 NEW_2
	goto Label_9644; // 0x25b5 Jump
	
Label_9655:
	var_1609_string = "all"; // 0x25b7 PushS
	var_1610_string = "idle"; // 0x25b8 PushS
	PlayAnimation(var_1609_string, var_1610_string); // 0x25b9 Func
	
Label_9659:
	WaitForAnimEnd(); // 0x25bb Func
	var_1611_object = var_3_object; // 0x25bd PushT
	if(var_1611_object == 0) goto Label_9664; // 0x25be JumpB
	goto Label_9669; // 0x25bf Jump
	
Label_9664:
	var_1612_string = "all"; // 0x25c0 PushS
	var_1613_string = "idle"; // 0x25c1 PushS
	PlayAnimation(var_1612_string, var_1613_string); // 0x25c2 Func
	goto Label_9659; // 0x25c4 Jump
}


func_10641()
{
	var_394_string = "ood1MladVlad1"; // 0x2992 PushS
	var_395_int = 1; // 0x2993 PushI
	SetVariable(var_394_string, var_395_int); // 0x2994 Func
	return 0; // 0x2996 Return
}


func_11156()
{
	var_131_string = "ood8MladVlad1"; // 0x2b95 PushS
	var_132_int = 1; // 0x2b96 PushI
	SetVariable(var_131_string, var_132_int); // 0x2b97 Func
	return 0; // 0x2b99 Return
}


func_12182()
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x2f96 PushV
	var_86_int = 649; // 0x2f97 PushI
	var_87_int = 2; // 0x2f98 PushI
	var_88_int = 533362; // 0x2f99 PushI
	CreateDiaryEntry(var_85_object, var_86_int, var_87_int, var_88_int); // 0x2f9a Func
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0; // 0x2f9c PushV
	var_90_object = var_85_object; // 0x2f9d Mov
	var_91_int = -1; // 0x2f9e MovI
	func_12234(var_89_bool, var_90_object, var_91_int); // 0x2f9f NEW_2
	return 2; // 0x2fa1 Return
}


func_10647()
{
	var_169_string = "ood1MladVlad2"; // 0x2998 PushS
	var_170_int = 1; // 0x2999 PushI
	SetVariable(var_169_string, var_170_int); // 0x299a Func
	return 0; // 0x299c Return
}


func_11672(var_843_bool)
{
	var_845_int = 0; var_846_string = ""; // 0x2d99 PushV
	var_846_string = "d5q03"; // 0x2d9a MovS
	func_10296(var_845_int, var_846_string); // 0x2d9b NEW_2
	var_847_int = 1000; // 0x2d9d PushI
	var_848_bool = var_845_int == var_847_int; // 0x2d9e Eq
	if(var_848_bool == 0) goto Label_11682; // 0x2d9f JumpB
	var_843_bool = 1; // 0x2da0 MovB
	return 0; // 0x2da1 Return
	
Label_11682:
	var_843_bool = 0; // 0x2da2 MovB
	return 0; // 0x2da3 Return
}


func_11162()
{
	var_205_string = "ood8MladVlad2"; // 0x2b9b PushS
	var_206_int = 1; // 0x2b9c PushI
	SetVariable(var_205_string, var_206_int); // 0x2b9d Func
	return 0; // 0x2b9f Return
}


func_10653()
{
	var_209_string = "ood1MladVlad3"; // 0x299e PushS
	var_210_int = 1; // 0x299f PushI
	SetVariable(var_209_string, var_210_int); // 0x29a0 Func
	return 0; // 0x29a2 Return
}


func_11168()
{
	var_211_object = Obj(); var_212_object = Obj(); // 0x2ba0 PushV
	var_213_bool = 0; // 0x2ba1 PushV
	var_213_bool = 0; // 0x2ba2 MovB
	var_214_int = 0; var_215_string = ""; // 0x2ba3 PushV
	var_215_string = "d8q01BringBadBoy"; // 0x2ba4 MovS
	func_10296(var_214_int, var_215_string); // 0x2ba5 NEW_2
	var_218_int = 1; // 0x2ba7 PushI
	var_219_bool = var_214_int != var_218_int; // 0x2ba8 Neq
	if(var_219_bool == 0) goto Label_11186; // 0x2ba9 JumpB
	var_220_int = 0; var_221_string = ""; // 0x2baa PushV
	var_221_string = "d8q01MatBringToy"; // 0x2bab MovS
	func_10296(var_220_int, var_221_string); // 0x2bac NEW_2
	var_222_int = 1; // 0x2bae PushI
	var_223_bool = var_220_int != var_222_int; // 0x2baf Neq
	if(var_223_bool == 0) goto Label_11186; // 0x2bb0 JumpB
	var_213_bool = 1; // 0x2bb1 MovB
	
Label_11186:
	if(var_213_bool == 0) goto Label_11204; // 0x2bb2 JumpB
	var_224_object = Obj(); // 0x2bb3 PushV
	func_12262(var_224_object); // 0x2bb4 NEW_2
	var_212_object = var_224_object; // 0x2bb5 Mov
	var_225_string = "d8q01MladVladGotoMat"; // 0x2bb7 PushS
	var_226_string = "pt_map_mat"; // 0x2bb8 PushS
	var_227_int = 1; // 0x2bb9 PushI
	var_228_int = 515327; // 0x2bba PushI
	var_229_float = 0; // 0x2bbb PushV
	func_10443(var_229_float); // 0x2bbc NEW_2
	AddMark(var_225_string, var_226_string, var_227_int, var_228_int, var_229_float); // 0x2bbe ObjFunc
	func_12156(); // 0x2bc1 NEW_2
	var_212_object = 0; // 0x2bc3 SetNull
	
Label_11204:
	return 2; // 0x2bc4 Return
}


func_10659()
{
	var_739_string = "d4MladVladVisit"; // 0x29a4 PushS
	var_740_int = 1; // 0x29a5 PushI
	SetVariable(var_739_string, var_740_int); // 0x29a6 Func
	return 0; // 0x29a8 Return
}


func_11684(var_850_bool)
{
	var_852_int = 0; var_853_string = ""; // 0x2da5 PushV
	var_853_string = "d5q03"; // 0x2da6 MovS
	func_10296(var_852_int, var_853_string); // 0x2da7 NEW_2
	var_854_int = -1; // 0x2da9 PushI
	var_855_bool = var_852_int == var_854_int; // 0x2daa Eq
	if(var_855_bool == 0) goto Label_11694; // 0x2dab JumpB
	var_850_bool = 1; // 0x2dac MovB
	return 0; // 0x2dad Return
	
Label_11694:
	var_850_bool = 0; // 0x2dae MovB
	return 0; // 0x2daf Return
}


func_12195()
{
	var_348_object = Obj(); var_349_object = Obj(); // 0x2fa3 PushV
	var_350_int = 652; // 0x2fa4 PushI
	var_351_int = 2; // 0x2fa5 PushI
	var_352_int = 533365; // 0x2fa6 PushI
	CreateDiaryEntry(var_349_object, var_350_int, var_351_int, var_352_int); // 0x2fa7 Func
	var_353_bool = 0; var_354_object = Obj(); var_355_int = 0; // 0x2fa9 PushV
	var_354_object = var_349_object; // 0x2faa Mov
	var_355_int = 649; // 0x2fab MovI
	func_12234(var_353_bool, var_354_object, var_355_int); // 0x2fac NEW_2
	return 2; // 0x2fae Return
}


func_7078(var_2_object, var_1340_string)
{
	var_1341_bool = 0; // 0x1ba7 PushV
	func_10509(var_1341_bool); // 0x1ba8 NEW_2
	var_1342_bool = var_1341_bool == 0; // 0x1baa Not
	if(var_1342_bool == 0) goto Label_7085; // 0x1bab JumpB
	return 0; // 0x1bac Return
	
Label_7085:
	var_1343_bool = var_1340_string == var_2_object; // 0x1bad Eq
	if(var_1343_bool == 0) goto Label_7088; // 0x1bae JumpB
	return 0; // 0x1baf Return
	
Label_7088:
	var_1344_string = ""; var_1345_bool = 0; // 0x1bb0 PushV
	var_1344_string = var_1340_string; // 0x1bb1 Mov
	var_1346_string = ""; // 0x1bb2 PushS
	var_1347_bool = var_1340_string == var_1346_string; // 0x1bb3 Eq
	if(var_1347_bool == 0) goto Label_7095; // 0x1bb4 JumpB
	var_1345_bool = 0; // 0x1bb5 MovB
	goto Label_7096; // 0x1bb6 Jump
	
Label_7096:
	func_10214(var_1344_string, var_1345_bool); // 0x1bb8 NEW_2
	var_2_object = var_1340_string; // 0x1bba TMov
	return 0; // 0x1bbb Return
	
Label_7095:
	var_1345_bool = 1; // 0x1bb7 MovB
}


func_10665()
{
	var_1157_string = "ood8MladVlad6"; // 0x29aa PushS
	var_1158_int = 1; // 0x29ab PushI
	SetVariable(var_1157_string, var_1158_int); // 0x29ac Func
	return 0; // 0x29ae Return
}


func_426(var_2_object, var_277_string)
{
	var_278_bool = 0; // 0x1ab PushV
	func_10509(var_278_bool); // 0x1ac NEW_2
	var_279_bool = var_278_bool == 0; // 0x1ae Not
	if(var_279_bool == 0) goto Label_433; // 0x1af JumpB
	return 0; // 0x1b0 Return
	
Label_433:
	var_280_bool = var_277_string == var_2_object; // 0x1b1 Eq
	if(var_280_bool == 0) goto Label_436; // 0x1b2 JumpB
	return 0; // 0x1b3 Return
	
Label_436:
	var_281_string = ""; var_282_bool = 0; // 0x1b4 PushV
	var_281_string = var_277_string; // 0x1b5 Mov
	var_283_string = ""; // 0x1b6 PushS
	var_284_bool = var_277_string == var_283_string; // 0x1b7 Eq
	if(var_284_bool == 0) goto Label_443; // 0x1b8 JumpB
	var_282_bool = 0; // 0x1b9 MovB
	goto Label_444; // 0x1ba Jump
	
Label_444:
	func_10214(var_281_string, var_282_bool); // 0x1bc NEW_2
	var_2_object = var_277_string; // 0x1be TMov
	return 0; // 0x1bf Return
	
Label_443:
	var_282_bool = 1; // 0x1bb MovB
}


func_10155(var_209_bool)
{
	var_211_string = ""; var_212_int = 0; var_213_bool = 0; var_214_int = 0; var_215_string = ""; var_216_string = ""; var_217_int = 0; var_218_bool = 0; var_219_int = 0; var_220_string = ""; // 0x27ab PushV
	var_221_string = "d"; // 0x27ac PushS
	var_222_int = 0; // 0x27ad PushV
	func_10448(var_222_int); // 0x27ae NEW_2
	var_228_int = var_221_string + var_222_int; // 0x27b0 Add
	var_229_string = "m"; // 0x27b1 PushS
	var_216_string = var_228_int + var_229_string; // 0x27b2 Add2
	var_217_int = 0; // 0x27b3 MovI
	
Label_10164:
	var_230_int = 1; // 0x27b4 PushI
	if(var_230_int == 0) goto Label_10177; // 0x27b5 JumpB
	var_231_int = 1; // 0x27b6 PushI
	var_232_int = var_217_int + var_231_int; // 0x27b7 Add
	var_233_int = var_216_string + var_232_int; // 0x27b8 Add
	HasProperty(var_233_int, var_218_bool); // 0x27b9 ObjFunc
	var_234_bool = var_218_bool == 0; // 0x27bb Not
	if(var_234_bool == 0) goto Label_10174; // 0x27bc JumpB
	goto Label_10177; // 0x27bd Jump
	
Label_10177:
	var_235_bool = var_217_int == 0; // 0x27c1 Not
	if(var_235_bool == 0) goto Label_10181; // 0x27c2 JumpB
	var_209_bool = 0; // 0x27c3 MovB
	return 10; // 0x27c4 Return
	
Label_10181:
	var_219_int = 0; // 0x27c5 MovI
	var_236_int = 1; // 0x27c6 PushI
	var_237_bool = var_217_int > var_236_int; // 0x27c7 GT
	if(var_237_bool == 0) goto Label_10187; // 0x27c8 JumpB
	irand(var_219_int, var_217_int); // 0x27c9 Func
	
Label_10187:
	var_238_int = 1; // 0x27cb PushI
	var_239_int = var_219_int + var_238_int; // 0x27cc Add
	var_240_int = var_216_string + var_239_int; // 0x27cd Add
	GetProperty(var_240_int, var_220_string); // 0x27ce ObjFunc
	var_241_bool = 0; var_242_string = ""; // 0x27d0 PushV
	var_242_string = var_220_string; // 0x27d1 Mov
	func_10229(var_241_bool, var_242_string); // 0x27d2 NEW_2
	var_209_bool = var_241_bool; // 0x27d3 Mov
	return 10; // 0x27d5 Return
	
Label_10174:
	var_243_int = 1; // 0x27be PushI
	var_217_int = var_217_int + var_243_int; // 0x27bf Add2
	goto Label_10164; // 0x27c0 Jump
}


func_10671()
{
	var_338_object = Obj(); var_339_object = Obj(); // 0x29af PushV
	var_340_string = "d8q04"; // 0x29b0 PushS
	var_341_int = 3; // 0x29b1 PushI
	SetVariable(var_340_string, var_341_int); // 0x29b2 Func
	var_342_object = Obj(); // 0x29b4 PushV
	func_12262(var_342_object); // 0x29b5 NEW_2
	var_339_object = var_342_object; // 0x29b6 Mov
	var_343_string = "d8q04MladVladGotoMark"; // 0x29b8 PushS
	var_344_string = "pt_map_theater"; // 0x29b9 PushS
	var_345_int = 0; // 0x29ba PushI
	var_346_int = 515322; // 0x29bb PushI
	var_347_float = 0; // 0x29bc PushV
	func_10443(var_347_float); // 0x29bd NEW_2
	AddMark(var_343_string, var_344_string, var_345_int, var_346_int, var_347_float); // 0x29bf ObjFunc
	func_12195(); // 0x29c2 NEW_2
	return 2; // 0x29c4 Return
}


func_11696(var_897_bool)
{
	var_899_int = 0; var_900_string = ""; // 0x2db1 PushV
	var_900_string = "d5q03"; // 0x2db2 MovS
	func_10296(var_899_int, var_900_string); // 0x2db3 NEW_2
	var_901_int = 2; // 0x2db5 PushI
	var_902_bool = var_899_int == var_901_int; // 0x2db6 Eq
	if(var_902_bool == 0) goto Label_11706; // 0x2db7 JumpB
	var_897_bool = 1; // 0x2db8 MovB
	return 0; // 0x2db9 Return
	
Label_11706:
	var_897_bool = 0; // 0x2dba MovB
	return 0; // 0x2dbb Return
}


func_12208()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x2fb0 PushV
	var_109_int = 650; // 0x2fb1 PushI
	var_110_int = 2; // 0x2fb2 PushI
	var_111_int = 533363; // 0x2fb3 PushI
	CreateDiaryEntry(var_108_object, var_109_int, var_110_int, var_111_int); // 0x2fb4 Func
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0; // 0x2fb6 PushV
	var_113_object = var_108_object; // 0x2fb7 Mov
	var_114_int = 649; // 0x2fb8 MovI
	func_12234(var_112_bool, var_113_object, var_114_int); // 0x2fb9 NEW_2
	return 2; // 0x2fbb Return
}


func_11708(var_903_bool)
{
	var_905_int = 0; var_906_string = ""; // 0x2dbd PushV
	var_906_string = "ood5MladVlad1"; // 0x2dbe MovS
	func_10296(var_905_int, var_906_string); // 0x2dbf NEW_2
	var_907_int = 0; // 0x2dc1 PushI
	var_908_bool = var_905_int == var_907_int; // 0x2dc2 Eq
	if(var_908_bool == 0) goto Label_11718; // 0x2dc3 JumpB
	var_903_bool = 1; // 0x2dc4 MovB
	return 0; // 0x2dc5 Return
	
Label_11718:
	var_903_bool = 0; // 0x2dc6 MovB
	return 0; // 0x2dc7 Return
}


func_12221(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x2fbd PushV
	GetDiaryRoot(var_116_object); // 0x2fbe Func
	var_117_bool = var_116_object == 0; // 0x2fc0 Not
	if(var_117_bool == 0) goto Label_12231; // 0x2fc1 JumpB
	var_118_string = "Can't retrieve diary root"; // 0x2fc2 PushS
	Trace(var_118_string); // 0x2fc3 Func
	var_114_object = 0; // 0x2fc5 MovB
	return 2; // 0x2fc6 Return
	
Label_12231:
	var_114_object = var_116_object; // 0x2fc7 Mov
	return 2; // 0x2fc8 Return
}


func_7615(var_2_object, var_1462_string)
{
	var_1463_bool = 0; // 0x1dc0 PushV
	func_10509(var_1463_bool); // 0x1dc1 NEW_2
	var_1464_bool = var_1463_bool == 0; // 0x1dc3 Not
	if(var_1464_bool == 0) goto Label_7622; // 0x1dc4 JumpB
	return 0; // 0x1dc5 Return
	
Label_7622:
	var_1465_bool = var_1462_string == var_2_object; // 0x1dc6 Eq
	if(var_1465_bool == 0) goto Label_7625; // 0x1dc7 JumpB
	return 0; // 0x1dc8 Return
	
Label_7625:
	var_1466_string = ""; var_1467_bool = 0; // 0x1dc9 PushV
	var_1466_string = var_1462_string; // 0x1dca Mov
	var_1468_string = ""; // 0x1dcb PushS
	var_1469_bool = var_1462_string == var_1468_string; // 0x1dcc Eq
	if(var_1469_bool == 0) goto Label_7632; // 0x1dcd JumpB
	var_1467_bool = 0; // 0x1dce MovB
	goto Label_7633; // 0x1dcf Jump
	
Label_7633:
	func_10214(var_1466_string, var_1467_bool); // 0x1dd1 NEW_2
	var_2_object = var_1462_string; // 0x1dd3 TMov
	return 0; // 0x1dd4 Return
	
Label_7632:
	var_1467_bool = 1; // 0x1dd0 MovB
}


func_11205()
{
	var_275_string = "ood8MladVlad3"; // 0x2bc6 PushS
	var_276_int = 1; // 0x2bc7 PushI
	SetVariable(var_275_string, var_276_int); // 0x2bc8 Func
	return 0; // 0x2bca Return
}


func_10694()
{
	var_1161_string = "d8MladVladVisit"; // 0x29c7 PushS
	var_1162_int = 1; // 0x29c8 PushI
	SetVariable(var_1161_string, var_1162_int); // 0x29c9 Func
	return 0; // 0x29cb Return
}


func_9670(var_2_object, var_1591_string)
{
	var_1592_bool = 0; // 0x25c7 PushV
	func_10509(var_1592_bool); // 0x25c8 NEW_2
	var_1593_bool = var_1592_bool == 0; // 0x25ca Not
	if(var_1593_bool == 0) goto Label_9677; // 0x25cb JumpB
	return 0; // 0x25cc Return
	
Label_9677:
	var_1594_bool = var_1591_string == var_2_object; // 0x25cd Eq
	if(var_1594_bool == 0) goto Label_9680; // 0x25ce JumpB
	return 0; // 0x25cf Return
	
Label_9680:
	var_1595_string = ""; var_1596_bool = 0; // 0x25d0 PushV
	var_1595_string = var_1591_string; // 0x25d1 Mov
	var_1597_string = ""; // 0x25d2 PushS
	var_1598_bool = var_1591_string == var_1597_string; // 0x25d3 Eq
	if(var_1598_bool == 0) goto Label_9687; // 0x25d4 JumpB
	var_1596_bool = 0; // 0x25d5 MovB
	goto Label_9688; // 0x25d6 Jump
	
Label_9688:
	func_10214(var_1595_string, var_1596_bool); // 0x25d8 NEW_2
	var_2_object = var_1591_string; // 0x25da TMov
	return 0; // 0x25db Return
	
Label_9687:
	var_1596_bool = 1; // 0x25d7 MovB
}


func_11720(var_915_bool)
{
	var_917_int = 0; var_918_string = ""; // 0x2dc9 PushV
	var_918_string = "ood5MladVlad2"; // 0x2dca MovS
	func_10296(var_917_int, var_918_string); // 0x2dcb NEW_2
	var_919_int = 0; // 0x2dcd PushI
	var_920_bool = var_917_int == var_919_int; // 0x2dce Eq
	if(var_920_bool == 0) goto Label_11730; // 0x2dcf JumpB
	var_915_bool = 1; // 0x2dd0 MovB
	return 0; // 0x2dd1 Return
	
Label_11730:
	var_915_bool = 0; // 0x2dd2 MovB
	return 0; // 0x2dd3 Return
}


func_12234(var_105_bool, var_106_object, var_107_int)
{
	var_108_object = Obj(); var_109_object = Obj(); var_110_int = 0; var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0; // 0x2fca PushV
	var_114_object = Obj(); // 0x2fcb PushV
	func_12221(var_114_object); // 0x2fcc NEW_2
	var_111_object = var_114_object; // 0x2fcd Mov
	Find(var_107_int, var_112_object); // 0x2fcf ObjFunc
	var_119_bool = var_112_object == 0; // 0x2fd1 Not
	if(var_119_bool == 0) goto Label_12249; // 0x2fd2 JumpB
	var_120_string = "Can't find diary parent with id: "; // 0x2fd3 PushS
	var_121_int = var_120_string + var_107_int; // 0x2fd4 Add
	Trace(var_121_int); // 0x2fd5 Func
	var_105_bool = 0; // 0x2fd7 MovB
	return 6; // 0x2fd8 Return
	
Label_12249:
	AddChild(var_106_object); // 0x2fd9 ObjFunc
	var_122_int = 7; // 0x2fdb PushI
	SendWorldWndMessage(var_122_int); // 0x2fdc Func
	GetCategory(var_113_int); // 0x2fde ObjFunc
	SetDiarySection(var_113_int); // 0x2fe0 Func
	var_105_bool = 0; // 0x2fe2 MovB
	return 6; // 0x2fe3 Return
}


func_11211()
{
	var_281_string = "d8q01MladVladIsVictim"; // 0x2bcc PushS
	var_282_int = 1; // 0x2bcd PushI
	SetVariable(var_281_string, var_282_int); // 0x2bce Func
	return 0; // 0x2bd0 Return
}


func_10700()
{
	var_167_object = Obj(); var_168_string = ""; var_169_float = 0; // 0x29cd PushV
	var_170_object = Obj(); // 0x29ce PushV
	func_12262(var_170_object); // 0x29cf NEW_2
	var_167_object = var_170_object; // 0x29d0 Mov
	var_168_string = "pt_gmap_r7_house2_01"; // 0x29d2 MovS
	var_169_float = 2; // 0x29d3 MovI
	func_12279(var_167_object, var_168_string, var_169_float); // 0x29d4 NEW_2
	var_190_object = Obj(); // 0x29d6 PushV
	func_12262(var_190_object); // 0x29d7 NEW_2
	ShowMap(var_190_object); // 0x29d9 ObjFunc
	return 0; // 0x29db Return
}


func_11217()
{
	var_293_string = "ood8MladVlad4"; // 0x2bd2 PushS
	var_294_int = 1; // 0x2bd3 PushI
	SetVariable(var_293_string, var_294_int); // 0x2bd4 Func
	return 0; // 0x2bd6 Return
}


func_11732(var_837_bool)
{
	var_839_int = 0; var_840_string = ""; // 0x2dd5 PushV
	var_840_string = "ood5MladVlad3"; // 0x2dd6 MovS
	func_10296(var_839_int, var_840_string); // 0x2dd7 NEW_2
	var_841_int = 0; // 0x2dd9 PushI
	var_842_bool = var_839_int == var_841_int; // 0x2dda Eq
	if(var_842_bool == 0) goto Label_11742; // 0x2ddb JumpB
	var_837_bool = 1; // 0x2ddc MovB
	return 0; // 0x2ddd Return
	
Label_11742:
	var_837_bool = 0; // 0x2dde MovB
	return 0; // 0x2ddf Return
}


func_10198(var_300_string)
{
	var_301_bool = 0; var_302_float = 0; var_303_float = 0; var_304_bool = 0; var_305_float = 0; var_306_float = 0; // 0x27d6 PushV
	lshHasAnimation(var_304_bool, var_300_string); // 0x27d7 Func
	var_307_bool = var_304_bool; // 0x27d9 Push
	if(var_307_bool == 0) goto Label_10209; // 0x27da JumpB
	lshGetAnimTimes(var_300_string, var_305_float, var_306_float); // 0x27db Func
	var_308_bool = 0; // 0x27dd PushB
	lshPlayAnimation(var_305_float, var_306_float, var_308_bool); // 0x27de Func
	goto Label_10213; // 0x27e0 Jump
	
Label_10213:
	return 6; // 0x27e5 Return
	
Label_10209:
	var_309_string = "Can't find lsh animation : "; // 0x27e1 PushS
	var_310_int = var_309_string + var_300_string; // 0x27e2 Add
	Trace(var_310_int); // 0x27e3 Func
}


func_3542(var_2_object, var_861_string)
{
	var_862_bool = 0; // 0xdd7 PushV
	func_10509(var_862_bool); // 0xdd8 NEW_2
	var_863_bool = var_862_bool == 0; // 0xdda Not
	if(var_863_bool == 0) goto Label_3549; // 0xddb JumpB
	return 0; // 0xddc Return
	
Label_3549:
	var_864_bool = var_861_string == var_2_object; // 0xddd Eq
	if(var_864_bool == 0) goto Label_3552; // 0xdde JumpB
	return 0; // 0xddf Return
	
Label_3552:
	var_865_string = ""; var_866_bool = 0; // 0xde0 PushV
	var_865_string = var_861_string; // 0xde1 Mov
	var_867_string = ""; // 0xde2 PushS
	var_868_bool = var_861_string == var_867_string; // 0xde3 Eq
	if(var_868_bool == 0) goto Label_3559; // 0xde4 JumpB
	var_866_bool = 0; // 0xde5 MovB
	goto Label_3560; // 0xde6 Jump
	
Label_3560:
	func_10214(var_865_string, var_866_bool); // 0xde8 NEW_2
	var_2_object = var_861_string; // 0xdea TMov
	return 0; // 0xdeb Return
	
Label_3559:
	var_866_bool = 1; // 0xde7 MovB
}


func_11223()
{
	var_287_string = "ood8MladVlad5"; // 0x2bd8 PushS
	var_288_int = 1; // 0x2bd9 PushI
	SetVariable(var_287_string, var_288_int); // 0x2bda Func
	return 0; // 0x2bdc Return
}


func_10716()
{
	func_11961(); // 0x29de NEW_2
	var_105_bool = 0; var_106_string = ""; var_107_string = ""; // 0x29e0 PushV
	var_106_string = "quest_d11_05"; // 0x29e1 MovS
	var_107_string = "place_enemy_after"; // 0x29e2 MovS
	func_10431(var_105_bool, var_106_string, var_107_string); // 0x29e3 NEW_2
	var_111_bool = 0; var_112_string = ""; var_113_string = ""; // 0x29e5 PushV
	var_112_string = "quest_d11_05"; // 0x29e6 MovS
	var_113_string = "completed"; // 0x29e7 MovS
	func_10431(var_111_bool, var_112_string, var_113_string); // 0x29e8 NEW_2
	return 0; // 0x29ea Return
}


func_11229()
{
	var_82_string = "d8q04"; // 0x2bde PushS
	var_83_int = 1; // 0x2bdf PushI
	SetVariable(var_82_string, var_83_int); // 0x2be0 Func
	func_12182(); // 0x2be3 NEW_2
	func_12208(); // 0x2be6 NEW_2
	var_115_object = Obj(); var_116_string = ""; // 0x2be8 PushV
	var_116_string = "quest_d8_04"; // 0x2be9 MovS
	func_10301(var_115_object, var_116_string); // 0x2bea NEW_2
	return 0; // 0x2bec Return
}


func_4061(var_0_bool, var_937_int, var_938_object)
{
	var_940_object = Obj(); var_941_bool = 0; var_942_int = 0; var_943_bool = 0; var_944_object = Obj(); var_945_bool = 0; var_946_int = 0; var_947_bool = 0; // 0xfdd PushV
	var_0_bool = var_938_object; // 0xfde TMov
	var_948_bool = 0; var_949_object = Obj(); var_950_float = 0; // 0xfdf PushV
	var_949_object = var_938_object; // 0xfe0 Mov
	var_950_float = 70.0; // 0xfe1 MovF
	func_9973(var_949_object, var_950_float); // 0xfe2 NEW_2
	var_951_bool = var_948_bool == 0; // 0xfe4 Not
	if(var_951_bool == 0) goto Label_4072; // 0xfe5 JumpB
	var_937_int = -2; // 0xfe6 MovI
	return 8; // 0xfe7 Return
	
Label_4072:
	CreateDialog(var_944_object); // 0xfe8 Func
	var_952_int = 0; // 0xfea PushV
	func_10503(var_952_int); // 0xfeb NEW_2
	SetNPCName(var_952_int); // 0xfed ObjFunc
	var_953_int = 0; // 0xfef PushV
	func_10501(var_953_int); // 0xff0 NEW_2
	SetNPCDescription(var_953_int); // 0xff2 ObjFunc
	var_954_string = ""; // 0xff4 PushV
	func_10505(var_954_string); // 0xff5 NEW_2
	SetPhoto(var_954_string); // 0xff7 ObjFunc
	var_955_string = ""; // 0xff9 PushV
	func_10507(var_955_string); // 0xffa NEW_2
	SetPhoto2(var_955_string); // 0xffc ObjFunc
	var_956_int = 0; // 0xffe PushV
	func_12312(var_956_int); // 0xfff NEW_2
	SetPlayerName(var_956_int); // 0x1001 ObjFunc
	var_946_int = -1; // 0x1003 MovI
	IsOverrideActive(var_945_bool); // 0x1004 Func
	var_957_bool = var_945_bool; // 0x1006 Push
	if(var_957_bool == 0) goto Label_4106; // 0x1007 JumpB
	var_937_int = -2; // 0x1008 MovI
	return 8; // 0x1009 Return
	
Label_4106:
	DoDialog(var_944_object); // 0x100a Func
	var_958_bool = 0; var_959_object = Obj(); // 0x100c PushV
	var_960_object = Obj(); // 0x100d PushV
	func_10251(var_960_object); // 0x100e NEW_2
	var_959_object = var_960_object; // 0x100f Mov
	func_10060(var_958_bool, var_959_object); // 0x1011 NEW_2
	var_961_object = Obj(); var_962_object = Obj(); // 0x1013 PushV
	var_961_object = var_938_object; // 0x1014 Mov
	var_962_object = var_944_object; // 0x1015 Mov
	TaskCall(15); // 0x1016 TaskCall
	func_4142(var_963_object, var_964_object, var_965_string, var_966_bool, var_961_object, var_962_object); // 0x1017 NEW_2
	TaskReturn(); // 0x1018 TaskReturn
	IsDialogEnd(var_947_bool); // 0x101a ObjFunc
	
Label_4124:
	var_1053_bool = var_947_bool == 0; // 0x101c Not
	if(var_1053_bool == 0) goto Label_4131; // 0x101d JumpB
	sync(); // 0x101e Func
	IsDialogEnd(var_947_bool); // 0x1020 ObjFunc
	goto Label_4124; // 0x1022 Jump
	
Label_4131:
	var_1054_object = Obj(); // 0x1023 PushV
	var_1054_object = var_938_object; // 0x1024 Mov
	func_10042(); // 0x1025 NEW_2
	StopDialog(var_944_object); // 0x1027 Func
	GetReturnValue(var_946_int); // 0x1029 ObjFunc
	var_937_int = var_946_int; // 0x102b Mov
	return 8; // 0x102c Return
}


func_11744(var_1015_bool)
{
	var_1017_int = 0; var_1018_string = ""; // 0x2de1 PushV
	var_1018_string = "d6q02GorbunDeath"; // 0x2de2 MovS
	func_10296(var_1017_int, var_1018_string); // 0x2de3 NEW_2
	var_1019_int = 0; // 0x2de5 PushI
	var_1020_bool = var_1017_int != var_1019_int; // 0x2de6 Neq
	if(var_1020_bool == 0) goto Label_11754; // 0x2de7 JumpB
	var_1015_bool = 1; // 0x2de8 MovB
	return 0; // 0x2de9 Return
	
Label_11754:
	var_1015_bool = 0; // 0x2dea MovB
	return 0; // 0x2deb Return
}


func_10214(var_281_string, var_282_bool)
{
	var_285_bool = 0; var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_float = 0; var_290_float = 0; // 0x27e6 PushV
	lshHasAnimation(var_288_bool, var_281_string); // 0x27e7 Func
	var_291_bool = var_288_bool; // 0x27e9 Push
	if(var_291_bool == 0) goto Label_10224; // 0x27ea JumpB
	lshGetAnimTimes(var_281_string, var_289_float, var_290_float); // 0x27eb Func
	lshPlayAnimation(var_289_float, var_290_float, var_282_bool); // 0x27ed Func
	goto Label_10228; // 0x27ef Jump
	
Label_10228:
	return 6; // 0x27f4 Return
	
Label_10224:
	var_292_string = "Can't find lsh animation : "; // 0x27f0 PushS
	var_293_int = var_292_string + var_281_string; // 0x27f1 Add
	Trace(var_293_int); // 0x27f2 Func
}


func_12262(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj(); var_90_object = Obj(); // 0x2fe6 PushV
	GetMainOutdoorScene(var_89_object); // 0x2fe7 Func
	var_91_bool = var_89_object == 0; // 0x2fe9 NullEq
	if(var_91_bool == 0) goto Label_12273; // 0x2fea JumpB
	var_92_string = "Can't find main outdoor scene"; // 0x2feb PushS
	Trace(var_92_string); // 0x2fec Func
	var_90_object = 0; // 0x2fee SetNull
	var_86_object = var_90_object; // 0x2fef Mov
	return 4; // 0x2ff0 Return
	
Label_12273:
	GetMap(var_90_object); // 0x2ff1 ObjFunc
	var_86_object = var_90_object; // 0x2ff3 Mov
	return 4; // 0x2ff4 Return
}


func_10731()
{
	var_143_string = "ood3MladVlad3"; // 0x29ec PushS
	var_144_int = 1; // 0x29ed PushI
	SetVariable(var_143_string, var_144_int); // 0x29ee Func
	return 0; // 0x29f0 Return
}


func_11756(var_1032_bool)
{
	var_1034_int = 0; var_1035_string = ""; // 0x2ded PushV
	var_1035_string = "d6q02Trigger"; // 0x2dee MovS
	func_10296(var_1034_int, var_1035_string); // 0x2def NEW_2
	var_1036_int = 0; // 0x2df1 PushI
	var_1037_bool = var_1034_int != var_1036_int; // 0x2df2 Neq
	if(var_1037_bool == 0) goto Label_11766; // 0x2df3 JumpB
	var_1032_bool = 1; // 0x2df4 MovB
	return 0; // 0x2df5 Return
	
Label_11766:
	var_1032_bool = 0; // 0x2df6 MovB
	return 0; // 0x2df7 Return
}


func_11245()
{
	var_271_string = "KnowMladVlad"; // 0x2bee PushS
	var_272_int = 1; // 0x2bef PushI
	SetVariable(var_271_string, var_272_int); // 0x2bf0 Func
	return 0; // 0x2bf2 Return
}


func_8176(var_2_object, var_396_string)
{
	var_397_bool = 0; // 0x1ff1 PushV
	func_10509(var_397_bool); // 0x1ff2 NEW_2
	var_398_bool = var_397_bool == 0; // 0x1ff4 Not
	if(var_398_bool == 0) goto Label_8183; // 0x1ff5 JumpB
	return 0; // 0x1ff6 Return
	
Label_8183:
	var_399_bool = var_396_string == var_2_object; // 0x1ff7 Eq
	if(var_399_bool == 0) goto Label_8186; // 0x1ff8 JumpB
	return 0; // 0x1ff9 Return
	
Label_8186:
	var_400_string = ""; var_401_bool = 0; // 0x1ffa PushV
	var_400_string = var_396_string; // 0x1ffb Mov
	var_402_string = ""; // 0x1ffc PushS
	var_403_bool = var_396_string == var_402_string; // 0x1ffd Eq
	if(var_403_bool == 0) goto Label_8193; // 0x1ffe JumpB
	var_401_bool = 0; // 0x1fff MovB
	goto Label_8194; // 0x2000 Jump
	
Label_8194:
	func_10214(var_400_string, var_401_bool); // 0x2002 NEW_2
	var_2_object = var_396_string; // 0x2004 TMov
	return 0; // 0x2005 Return
	
Label_8193:
	var_401_bool = 1; // 0x2001 MovB
}


func_10737()
{
	var_240_int = 0; var_241_string = ""; // 0x29f2 PushV
	var_241_string = "map_chertez_state"; // 0x29f3 MovS
	func_10296(var_240_int, var_241_string); // 0x29f4 NEW_2
	var_242_int = 2; // 0x29f6 PushI
	var_243_bool = var_240_int <= var_242_int; // 0x29f7 LE
	if(var_243_bool == 0) goto Label_10753; // 0x29f8 JumpB
	var_244_string = "map_chertez_state"; // 0x29f9 PushS
	var_245_int = 2; // 0x29fa PushI
	SetVariable(var_244_string, var_245_int); // 0x29fb Func
	var_246_string = "map_chertez_force"; // 0x29fd PushS
	var_247_int = 1; // 0x29fe PushI
	SetVariable(var_246_string, var_247_int); // 0x29ff Func
	
Label_10753:
	return 0; // 0x2a01 Return
}


func_11251()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2bf3 PushV
	var_84_int = 0; var_85_string = ""; // 0x2bf4 PushV
	var_85_string = "d5q03"; // 0x2bf5 MovS
	func_10296(var_84_int, var_85_string); // 0x2bf6 NEW_2
	var_88_int = 0; // 0x2bf8 PushI
	var_89_bool = var_84_int == var_88_int; // 0x2bf9 Eq
	if(var_89_bool == 0) goto Label_11292; // 0x2bfa JumpB
	var_90_string = "d5q03"; // 0x2bfb PushS
	var_91_int = 1; // 0x2bfc PushI
	SetVariable(var_90_string, var_91_int); // 0x2bfd Func
	var_92_object = Obj(); // 0x2bff PushV
	func_12262(var_92_object); // 0x2c00 NEW_2
	var_83_object = var_92_object; // 0x2c01 Mov
	var_99_string = "d5q03SavePrisoners"; // 0x2c03 PushS
	var_100_string = "pt_map_uprava_prison"; // 0x2c04 PushS
	var_101_int = 0; // 0x2c05 PushI
	var_102_int = 515370; // 0x2c06 PushI
	var_103_float = 0; // 0x2c07 PushV
	func_10443(var_103_float); // 0x2c08 NEW_2
	AddMark(var_99_string, var_100_string, var_101_int, var_102_int, var_103_float); // 0x2c0a ObjFunc
	func_12078(); // 0x2c0d NEW_2
	func_12091(); // 0x2c10 NEW_2
	var_137_object = Obj(); var_138_string = ""; // 0x2c12 PushV
	var_138_string = "quest_d5_03"; // 0x2c13 MovS
	func_10301(var_137_object, var_138_string); // 0x2c14 NEW_2
	var_145_bool = 0; var_146_string = ""; var_147_string = ""; // 0x2c16 PushV
	var_146_string = "quest_d5_03"; // 0x2c17 MovS
	var_147_string = "place_prisoners"; // 0x2c18 MovS
	func_10431(var_145_bool, var_146_string, var_147_string); // 0x2c19 NEW_2
	var_83_object = 0; // 0x2c1b SetNull
	
Label_11292:
	return 2; // 0x2c1c Return
}


func_10229(var_201_bool, var_202_string)
{
	var_203_bool = 0; var_204_bool = 0; // 0x27f5 PushV
	var_205_bool = 0; // 0x27f6 PushV
	func_10509(var_205_bool); // 0x27f7 NEW_2
	if(var_205_bool == 0) goto Label_10242; // 0x27f9 JumpB
	lshHasSpeech(var_204_bool, var_202_string); // 0x27fa Func
	var_206_bool = var_204_bool; // 0x27fc Push
	if(var_206_bool == 0) goto Label_10242; // 0x27fd JumpB
	lshPlaySpeech(var_202_string); // 0x27fe Func
	var_201_bool = 1; // 0x2800 MovB
	return 2; // 0x2801 Return
	
Label_10242:
	var_201_bool = 0; // 0x2802 MovB
	return 2; // 0x2803 Return
}


func_12279(var_141_object, var_142_string, var_143_float)
{
	var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_object = Obj(); var_148_bool = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_object = Obj(); var_152_bool = 0; // 0x2ff7 PushV
	GetMainOutdoorScene(var_151_object); // 0x2ff8 Func
	var_153_bool = var_151_object == 0; // 0x2ffa NullEq
	if(var_153_bool == 0) goto Label_12288; // 0x2ffb JumpB
	var_154_string = "Can't find main outdoor scene"; // 0x2ffc PushS
	Trace(var_154_string); // 0x2ffd Func
	return 8; // 0x2fff Return
	
Label_12288:
	GetLocator(var_142_string, var_152_bool, var_149_cvector, var_150_cvector); // 0x3000 ObjFunc
	var_155_bool = var_152_bool == 0; // 0x3002 Not
	if(var_155_bool == 0) goto Label_12298; // 0x3003 JumpB
	var_156_string = "Warning: outdoor scene locator "; // 0x3004 PushS
	var_157_int = var_156_string + var_142_string; // 0x3005 Add
	var_158_string = " doesnt exist"; // 0x3006 PushS
	var_159_int = var_157_int + var_158_string; // 0x3007 Add
	Trace(var_159_int); // 0x3008 Func
	
Label_12298:
	GetMap(var_141_object); // 0x300a ObjFunc
	var_160_bool = var_141_object == 0; // 0x300c NullEq
	if(var_160_bool == 0) goto Label_12306; // 0x300d JumpB
	var_161_string = "Can't find map"; // 0x300e PushS
	Trace(var_161_string); // 0x300f Func
	return 8; // 0x3011 Return
	
Label_12306:
	var_162_float = GetByIndex(var_149_cvector, 0); // 0x3012 PushE
	var_163_float = GetByIndex(var_149_cvector, 2); // 0x3013 PushE
	SetMapParams(var_162_float, var_163_float, var_143_float); // 0x3014 ObjFunc
	return 8; // 0x3016 Return
}


func_11768(var_1190_bool)
{
	var_1192_int = 0; var_1193_string = ""; // 0x2df9 PushV
	var_1193_string = "d8q01"; // 0x2dfa MovS
	func_10296(var_1192_int, var_1193_string); // 0x2dfb NEW_2
	var_1194_int = 1; // 0x2dfd PushI
	var_1195_bool = var_1192_int == var_1194_int; // 0x2dfe Eq
	if(var_1195_bool == 0) goto Label_11778; // 0x2dff JumpB
	var_1190_bool = 1; // 0x2e00 MovB
	return 0; // 0x2e01 Return
	
Label_11778:
	var_1190_bool = 0; // 0x2e02 MovB
	return 0; // 0x2e03 Return
}


func_9210(var_0_bool, var_1504_int, var_1505_object)
{
	var_1507_object = Obj(); var_1508_bool = 0; var_1509_int = 0; var_1510_bool = 0; var_1511_object = Obj(); var_1512_bool = 0; var_1513_int = 0; var_1514_bool = 0; // 0x23fa PushV
	var_0_bool = var_1505_object; // 0x23fb TMov
	var_1515_bool = 0; var_1516_object = Obj(); var_1517_float = 0; // 0x23fc PushV
	var_1516_object = var_1505_object; // 0x23fd Mov
	var_1517_float = 70.0; // 0x23fe MovF
	func_9973(var_1516_object, var_1517_float); // 0x23ff NEW_2
	var_1518_bool = var_1515_bool == 0; // 0x2401 Not
	if(var_1518_bool == 0) goto Label_9221; // 0x2402 JumpB
	var_1504_int = -2; // 0x2403 MovI
	return 8; // 0x2404 Return
	
Label_9221:
	CreateDialog(var_1511_object); // 0x2405 Func
	var_1519_int = 0; // 0x2407 PushV
	func_10503(var_1519_int); // 0x2408 NEW_2
	SetNPCName(var_1519_int); // 0x240a ObjFunc
	var_1520_int = 0; // 0x240c PushV
	func_10501(var_1520_int); // 0x240d NEW_2
	SetNPCDescription(var_1520_int); // 0x240f ObjFunc
	var_1521_string = ""; // 0x2411 PushV
	func_10505(var_1521_string); // 0x2412 NEW_2
	SetPhoto(var_1521_string); // 0x2414 ObjFunc
	var_1522_string = ""; // 0x2416 PushV
	func_10507(var_1522_string); // 0x2417 NEW_2
	SetPhoto2(var_1522_string); // 0x2419 ObjFunc
	var_1523_int = 0; // 0x241b PushV
	func_12312(var_1523_int); // 0x241c NEW_2
	SetPlayerName(var_1523_int); // 0x241e ObjFunc
	var_1513_int = -1; // 0x2420 MovI
	IsOverrideActive(var_1512_bool); // 0x2421 Func
	var_1524_bool = var_1512_bool; // 0x2423 Push
	if(var_1524_bool == 0) goto Label_9255; // 0x2424 JumpB
	var_1504_int = -2; // 0x2425 MovI
	return 8; // 0x2426 Return
	
Label_9255:
	DoDialog(var_1511_object); // 0x2427 Func
	var_1525_bool = 0; var_1526_object = Obj(); // 0x2429 PushV
	var_1527_object = Obj(); // 0x242a PushV
	func_10251(var_1527_object); // 0x242b NEW_2
	var_1526_object = var_1527_object; // 0x242c Mov
	func_10060(var_1525_bool, var_1526_object); // 0x242e NEW_2
	var_1528_object = Obj(); var_1529_object = Obj(); // 0x2430 PushV
	var_1528_object = var_1505_object; // 0x2431 Mov
	var_1529_object = var_1511_object; // 0x2432 Mov
	TaskCall(29); // 0x2433 TaskCall
	func_9291(var_1530_object, var_1531_object, var_1532_string, var_1533_bool, var_1528_object, var_1529_object); // 0x2434 NEW_2
	TaskReturn(); // 0x2435 TaskReturn
	IsDialogEnd(var_1514_bool); // 0x2437 ObjFunc
	
Label_9273:
	var_1558_bool = var_1514_bool == 0; // 0x2439 Not
	if(var_1558_bool == 0) goto Label_9280; // 0x243a JumpB
	sync(); // 0x243b Func
	IsDialogEnd(var_1514_bool); // 0x243d ObjFunc
	goto Label_9273; // 0x243f Jump
	
Label_9280:
	var_1559_object = Obj(); // 0x2440 PushV
	var_1559_object = var_1505_object; // 0x2441 Mov
	func_10042(); // 0x2442 NEW_2
	StopDialog(var_1511_object); // 0x2444 Func
	GetReturnValue(var_1513_int); // 0x2446 ObjFunc
	var_1504_int = var_1513_int; // 0x2448 Mov
	return 8; // 0x2449 Return
}


