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
	func_5201(); // 0x3d NEW_2
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
	func_4657(var_54_object); // 0x50 NEW_2
	EventEnable(0); // 0x52 EventEnable
	var_67_object = Obj(); // 0x53 PushV
	var_67_object = var_49_int; // 0x54 Mov
	func_5904(var_67_object); // 0x55 NEW_2
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
	func_4625(var_62_object); // 0x84 NEW_2
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
	func_5201(); // 0xa6 NEW_2
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
	func_4657(var_54_object); // 0xb9 NEW_2
	EventEnable(0); // 0xbb EventEnable
	var_67_object = Obj(); // 0xbc PushV
	var_67_object = var_49_int; // 0xbd Mov
	func_5904(var_67_object); // 0xbe NEW_2
	
Label_192:
	return 2; // 0xc0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	func_5201(); // 0xf8 NEW_2
	TaskCall(0); // 0xfb TaskCall
	func_0(); // 0xfc NEW_2
	TaskReturn(); // 0xfd TaskReturn
	return 0; // 0xff Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x1f8 PushI
	if(var_51_int == 0) goto Label_967; // 0x1f9 JumpB
	func_4953(); // 0x1fb NEW_2
	var_53_int = 21076; // 0x1fd PushI
	var_54_bool = var_50_int == var_53_int; // 0x1fe Eq
	if(var_54_bool == 0) goto Label_517; // 0x1ff JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x200 PushV
	var_55_object = var_1_object; // 0x201 MovT
	var_56_object = var_0_bool; // 0x202 MovT
	func_5250(); // 0x203 NEW_2
	
Label_517:
	var_59_int = 21082; // 0x205 PushI
	var_60_bool = var_50_int == var_59_int; // 0x206 Eq
	if(var_60_bool == 0) goto Label_530; // 0x207 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x208 PushV
	var_61_object = var_1_object; // 0x209 MovT
	var_62_object = var_0_bool; // 0x20a MovT
	func_5234(); // 0x20b NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x20d PushV
	var_79_object = var_1_object; // 0x20e MovT
	var_80_object = var_0_bool; // 0x20f MovT
	func_5532(); // 0x210 NEW_2
	
Label_530:
	var_83_int = 21085; // 0x212 PushI
	var_84_bool = var_50_int == var_83_int; // 0x213 Eq
	if(var_84_bool == 0) goto Label_543; // 0x214 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x215 PushV
	var_85_object = var_1_object; // 0x216 MovT
	var_86_object = var_0_bool; // 0x217 MovT
	func_5234(); // 0x218 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x21a PushV
	var_87_object = var_1_object; // 0x21b MovT
	var_88_object = var_0_bool; // 0x21c MovT
	func_5532(); // 0x21d NEW_2
	
Label_543:
	var_89_int = 21224; // 0x21f PushI
	var_90_bool = var_49_float == var_89_int; // 0x220 Eq
	if(var_90_bool == 0) goto Label_626; // 0x221 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x222 PushV
	var_92_object = var_1_object; // 0x223 MovT
	func_5609(var_92_object); // 0x224 NEW_2
	if(var_91_bool == 0) goto Label_571; // 0x226 JumpB
	var_99_string = ""; // 0x227 PushV
	var_99_string = "Untrust"; // 0x228 MovS
	func_481(var_50_int, var_99_string); // 0x229 NEW_2
	var_116_int = 520042; // 0x22b PushI
	SetMessage(var_116_int); // 0x22c TObjFunc
	ClearReplies(); // 0x22e TObjFunc
	var_117_int = 520043; // 0x230 PushI
	var_118_int = 21227; // 0x231 PushI
	var_119_int = 21225; // 0x232 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x233 TObjFunc
	var_120_int = 520044; // 0x235 PushI
	var_121_int = -1; // 0x236 PushI
	var_122_int = 21226; // 0x237 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x238 TObjFunc
	return 0; // 0x23a Return
	
Label_571:
	var_123_bool = 0; var_124_object = Obj(); // 0x23b PushV
	var_124_object = var_1_object; // 0x23c MovT
	func_5621(var_124_object); // 0x23d NEW_2
	if(var_123_bool == 0) goto Label_601; // 0x23f JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x240 PushV
	var_129_object = var_1_object; // 0x241 MovT
	var_130_object = var_0_bool; // 0x242 MovT
	func_5228(); // 0x243 NEW_2
	var_133_string = ""; // 0x245 PushV
	var_133_string = "Neutral"; // 0x246 MovS
	func_481(var_50_int, var_133_string); // 0x247 NEW_2
	var_134_int = 519876; // 0x249 PushI
	SetMessage(var_134_int); // 0x24a TObjFunc
	ClearReplies(); // 0x24c TObjFunc
	var_135_int = 519877; // 0x24e PushI
	var_136_int = 21042; // 0x24f PushI
	var_137_int = 21041; // 0x250 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x251 TObjFunc
	var_138_int = 519905; // 0x253 PushI
	var_139_int = 21042; // 0x254 PushI
	var_140_int = 21073; // 0x255 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x256 TObjFunc
	return 0; // 0x258 Return
	
Label_601:
	var_141_string = ""; // 0x259 PushV
	var_141_string = "Neutral"; // 0x25a MovS
	func_481(var_50_int, var_141_string); // 0x25b NEW_2
	var_142_int = 519906; // 0x25d PushI
	SetMessage(var_142_int); // 0x25e TObjFunc
	ClearReplies(); // 0x260 TObjFunc
	var_143_bool = 0; var_144_object = Obj(); // 0x262 PushV
	var_144_object = var_1_object; // 0x263 MovT
	func_5633(var_144_object); // 0x264 NEW_2
	if(var_143_bool == 0) goto Label_620; // 0x266 JumpB
	var_149_int = 519907; // 0x267 PushI
	var_150_int = 21077; // 0x268 PushI
	var_151_int = 21076; // 0x269 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x26a TObjFunc
	
Label_620:
	var_152_int = 519917; // 0x26c PushI
	var_153_int = -1; // 0x26d PushI
	var_154_int = 21086; // 0x26e PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x26f TObjFunc
	return 0; // 0x271 Return
	
Label_626:
	var_155_int = 21077; // 0x272 PushI
	var_156_bool = var_49_float == var_155_int; // 0x273 Eq
	if(var_156_bool == 0) goto Label_660; // 0x274 JumpB
	var_157_string = ""; // 0x275 PushV
	var_157_string = "Neutral"; // 0x276 MovS
	func_481(var_50_int, var_157_string); // 0x277 NEW_2
	var_158_int = 519908; // 0x279 PushI
	SetMessage(var_158_int); // 0x27a TObjFunc
	ClearReplies(); // 0x27c TObjFunc
	var_159_bool = 0; var_160_object = Obj(); // 0x27e PushV
	var_160_object = var_1_object; // 0x27f MovT
	func_5597(var_160_object); // 0x280 NEW_2
	var_165_bool = var_159_bool == 0; // 0x282 Not
	if(var_165_bool == 0) goto Label_649; // 0x283 JumpB
	var_166_int = 519909; // 0x284 PushI
	var_167_int = 21079; // 0x285 PushI
	var_168_int = 21078; // 0x286 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x287 TObjFunc
	
Label_649:
	var_169_bool = 0; var_170_object = Obj(); // 0x289 PushV
	var_170_object = var_1_object; // 0x28a MovT
	func_5597(var_170_object); // 0x28b NEW_2
	if(var_169_bool == 0) goto Label_659; // 0x28d JumpB
	var_171_int = 519914; // 0x28e PushI
	var_172_int = 21084; // 0x28f PushI
	var_173_int = 21083; // 0x290 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x291 TObjFunc
	
Label_659:
	return 0; // 0x293 Return
	
Label_660:
	var_174_int = 21084; // 0x294 PushI
	var_175_bool = var_49_float == var_174_int; // 0x295 Eq
	if(var_175_bool == 0) goto Label_678; // 0x296 JumpB
	var_176_string = ""; // 0x297 PushV
	var_176_string = "Neutral"; // 0x298 MovS
	func_481(var_50_int, var_176_string); // 0x299 NEW_2
	var_177_int = 519915; // 0x29b PushI
	SetMessage(var_177_int); // 0x29c TObjFunc
	ClearReplies(); // 0x29e TObjFunc
	var_178_int = 519916; // 0x2a0 PushI
	var_179_int = -1; // 0x2a1 PushI
	var_180_int = 21085; // 0x2a2 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x2a3 TObjFunc
	return 0; // 0x2a5 Return
	
Label_678:
	var_181_int = 21079; // 0x2a6 PushI
	var_182_bool = var_49_float == var_181_int; // 0x2a7 Eq
	if(var_182_bool == 0) goto Label_696; // 0x2a8 JumpB
	var_183_string = ""; // 0x2a9 PushV
	var_183_string = "Untrust"; // 0x2aa MovS
	func_481(var_50_int, var_183_string); // 0x2ab NEW_2
	var_184_int = 519910; // 0x2ad PushI
	SetMessage(var_184_int); // 0x2ae TObjFunc
	ClearReplies(); // 0x2b0 TObjFunc
	var_185_int = 519911; // 0x2b2 PushI
	var_186_int = 21081; // 0x2b3 PushI
	var_187_int = 21080; // 0x2b4 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x2b5 TObjFunc
	return 0; // 0x2b7 Return
	
Label_696:
	var_188_int = 21081; // 0x2b8 PushI
	var_189_bool = var_49_float == var_188_int; // 0x2b9 Eq
	if(var_189_bool == 0) goto Label_714; // 0x2ba JumpB
	var_190_string = ""; // 0x2bb PushV
	var_190_string = "Neutral"; // 0x2bc MovS
	func_481(var_50_int, var_190_string); // 0x2bd NEW_2
	var_191_int = 519912; // 0x2bf PushI
	SetMessage(var_191_int); // 0x2c0 TObjFunc
	ClearReplies(); // 0x2c2 TObjFunc
	var_192_int = 519913; // 0x2c4 PushI
	var_193_int = -1; // 0x2c5 PushI
	var_194_int = 21082; // 0x2c6 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x2c7 TObjFunc
	return 0; // 0x2c9 Return
	
Label_714:
	var_195_int = 21042; // 0x2ca PushI
	var_196_bool = var_49_float == var_195_int; // 0x2cb Eq
	if(var_196_bool == 0) goto Label_737; // 0x2cc JumpB
	var_197_string = ""; // 0x2cd PushV
	var_197_string = "Untrust"; // 0x2ce MovS
	func_481(var_50_int, var_197_string); // 0x2cf NEW_2
	var_198_int = 519878; // 0x2d1 PushI
	SetMessage(var_198_int); // 0x2d2 TObjFunc
	ClearReplies(); // 0x2d4 TObjFunc
	var_199_int = 519879; // 0x2d6 PushI
	var_200_int = 21044; // 0x2d7 PushI
	var_201_int = 21043; // 0x2d8 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x2d9 TObjFunc
	var_202_int = 519902; // 0x2db PushI
	var_203_int = 21070; // 0x2dc PushI
	var_204_int = 21069; // 0x2dd PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x2de TObjFunc
	return 0; // 0x2e0 Return
	
Label_737:
	var_205_int = 21070; // 0x2e1 PushI
	var_206_bool = var_49_float == var_205_int; // 0x2e2 Eq
	if(var_206_bool == 0) goto Label_755; // 0x2e3 JumpB
	var_207_string = ""; // 0x2e4 PushV
	var_207_string = "Untrust"; // 0x2e5 MovS
	func_481(var_50_int, var_207_string); // 0x2e6 NEW_2
	var_208_int = 519903; // 0x2e8 PushI
	SetMessage(var_208_int); // 0x2e9 TObjFunc
	ClearReplies(); // 0x2eb TObjFunc
	var_209_int = 519904; // 0x2ed PushI
	var_210_int = 21044; // 0x2ee PushI
	var_211_int = 21071; // 0x2ef PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x2f0 TObjFunc
	return 0; // 0x2f2 Return
	
Label_755:
	var_212_int = 21044; // 0x2f3 PushI
	var_213_bool = var_49_float == var_212_int; // 0x2f4 Eq
	if(var_213_bool == 0) goto Label_778; // 0x2f5 JumpB
	var_214_string = ""; // 0x2f6 PushV
	var_214_string = "Neutral"; // 0x2f7 MovS
	func_481(var_50_int, var_214_string); // 0x2f8 NEW_2
	var_215_int = 519880; // 0x2fa PushI
	SetMessage(var_215_int); // 0x2fb TObjFunc
	ClearReplies(); // 0x2fd TObjFunc
	var_216_int = 519881; // 0x2ff PushI
	var_217_int = 21046; // 0x300 PushI
	var_218_int = 21045; // 0x301 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x302 TObjFunc
	var_219_int = 519897; // 0x304 PushI
	var_220_int = 21064; // 0x305 PushI
	var_221_int = 21063; // 0x306 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x307 TObjFunc
	return 0; // 0x309 Return
	
Label_778:
	var_222_int = 21064; // 0x30a PushI
	var_223_bool = var_49_float == var_222_int; // 0x30b Eq
	if(var_223_bool == 0) goto Label_796; // 0x30c JumpB
	var_224_string = ""; // 0x30d PushV
	var_224_string = "Sly"; // 0x30e MovS
	func_481(var_50_int, var_224_string); // 0x30f NEW_2
	var_225_int = 519898; // 0x311 PushI
	SetMessage(var_225_int); // 0x312 TObjFunc
	ClearReplies(); // 0x314 TObjFunc
	var_226_int = 519899; // 0x316 PushI
	var_227_int = 21066; // 0x317 PushI
	var_228_int = 21065; // 0x318 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x319 TObjFunc
	return 0; // 0x31b Return
	
Label_796:
	var_229_int = 21066; // 0x31c PushI
	var_230_bool = var_49_float == var_229_int; // 0x31d Eq
	if(var_230_bool == 0) goto Label_814; // 0x31e JumpB
	var_231_string = ""; // 0x31f PushV
	var_231_string = "Sly"; // 0x320 MovS
	func_481(var_50_int, var_231_string); // 0x321 NEW_2
	var_232_int = 519900; // 0x323 PushI
	SetMessage(var_232_int); // 0x324 TObjFunc
	ClearReplies(); // 0x326 TObjFunc
	var_233_int = 519901; // 0x328 PushI
	var_234_int = 21046; // 0x329 PushI
	var_235_int = 21067; // 0x32a PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x32b TObjFunc
	return 0; // 0x32d Return
	
Label_814:
	var_236_int = 21046; // 0x32e PushI
	var_237_bool = var_49_float == var_236_int; // 0x32f Eq
	if(var_237_bool == 0) goto Label_837; // 0x330 JumpB
	var_238_string = ""; // 0x331 PushV
	var_238_string = "Neutral"; // 0x332 MovS
	func_481(var_50_int, var_238_string); // 0x333 NEW_2
	var_239_int = 519882; // 0x335 PushI
	SetMessage(var_239_int); // 0x336 TObjFunc
	ClearReplies(); // 0x338 TObjFunc
	var_240_int = 519883; // 0x33a PushI
	var_241_int = 21048; // 0x33b PushI
	var_242_int = 21047; // 0x33c PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x33d TObjFunc
	var_243_int = 519896; // 0x33f PushI
	var_244_int = 21048; // 0x340 PushI
	var_245_int = 21061; // 0x341 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x342 TObjFunc
	return 0; // 0x344 Return
	
Label_837:
	var_246_int = 21048; // 0x345 PushI
	var_247_bool = var_49_float == var_246_int; // 0x346 Eq
	if(var_247_bool == 0) goto Label_860; // 0x347 JumpB
	var_248_string = ""; // 0x348 PushV
	var_248_string = "Untrust"; // 0x349 MovS
	func_481(var_50_int, var_248_string); // 0x34a NEW_2
	var_249_int = 519884; // 0x34c PushI
	SetMessage(var_249_int); // 0x34d TObjFunc
	ClearReplies(); // 0x34f TObjFunc
	var_250_int = 519885; // 0x351 PushI
	var_251_int = 21050; // 0x352 PushI
	var_252_int = 21049; // 0x353 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x354 TObjFunc
	var_253_int = 519893; // 0x356 PushI
	var_254_int = 21058; // 0x357 PushI
	var_255_int = 21057; // 0x358 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x359 TObjFunc
	return 0; // 0x35b Return
	
Label_860:
	var_256_int = 21058; // 0x35c PushI
	var_257_bool = var_49_float == var_256_int; // 0x35d Eq
	if(var_257_bool == 0) goto Label_878; // 0x35e JumpB
	var_258_string = ""; // 0x35f PushV
	var_258_string = "Neutral"; // 0x360 MovS
	func_481(var_50_int, var_258_string); // 0x361 NEW_2
	var_259_int = 519894; // 0x363 PushI
	SetMessage(var_259_int); // 0x364 TObjFunc
	ClearReplies(); // 0x366 TObjFunc
	var_260_int = 519895; // 0x368 PushI
	var_261_int = 21052; // 0x369 PushI
	var_262_int = 21059; // 0x36a PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x36b TObjFunc
	return 0; // 0x36d Return
	
Label_878:
	var_263_int = 21050; // 0x36e PushI
	var_264_bool = var_49_float == var_263_int; // 0x36f Eq
	if(var_264_bool == 0) goto Label_896; // 0x370 JumpB
	var_265_string = ""; // 0x371 PushV
	var_265_string = "Sly"; // 0x372 MovS
	func_481(var_50_int, var_265_string); // 0x373 NEW_2
	var_266_int = 519886; // 0x375 PushI
	SetMessage(var_266_int); // 0x376 TObjFunc
	ClearReplies(); // 0x378 TObjFunc
	var_267_int = 519887; // 0x37a PushI
	var_268_int = 21052; // 0x37b PushI
	var_269_int = 21051; // 0x37c PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x37d TObjFunc
	return 0; // 0x37f Return
	
Label_896:
	var_270_int = 21052; // 0x380 PushI
	var_271_bool = var_49_float == var_270_int; // 0x381 Eq
	if(var_271_bool == 0) goto Label_914; // 0x382 JumpB
	var_272_string = ""; // 0x383 PushV
	var_272_string = "Neutral"; // 0x384 MovS
	func_481(var_50_int, var_272_string); // 0x385 NEW_2
	var_273_int = 519888; // 0x387 PushI
	SetMessage(var_273_int); // 0x388 TObjFunc
	ClearReplies(); // 0x38a TObjFunc
	var_274_int = 519889; // 0x38c PushI
	var_275_int = 21054; // 0x38d PushI
	var_276_int = 21053; // 0x38e PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x38f TObjFunc
	return 0; // 0x391 Return
	
Label_914:
	var_277_int = 21054; // 0x392 PushI
	var_278_bool = var_49_float == var_277_int; // 0x393 Eq
	if(var_278_bool == 0) goto Label_937; // 0x394 JumpB
	var_279_string = ""; // 0x395 PushV
	var_279_string = "Neutral"; // 0x396 MovS
	func_481(var_50_int, var_279_string); // 0x397 NEW_2
	var_280_int = 519890; // 0x399 PushI
	SetMessage(var_280_int); // 0x39a TObjFunc
	ClearReplies(); // 0x39c TObjFunc
	var_281_int = 519891; // 0x39e PushI
	var_282_int = -1; // 0x39f PushI
	var_283_int = 21055; // 0x3a0 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x3a1 TObjFunc
	var_284_int = 519892; // 0x3a3 PushI
	var_285_int = -1; // 0x3a4 PushI
	var_286_int = 21056; // 0x3a5 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_287_int = 21227; // 0x3a9 PushI
	var_288_bool = var_49_float == var_287_int; // 0x3aa Eq
	if(var_288_bool == 0) goto Label_955; // 0x3ab JumpB
	var_289_string = ""; // 0x3ac PushV
	var_289_string = "Untrust"; // 0x3ad MovS
	func_481(var_50_int, var_289_string); // 0x3ae NEW_2
	var_290_int = 520045; // 0x3b0 PushI
	SetMessage(var_290_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_291_int = 520046; // 0x3b5 PushI
	var_292_int = -1; // 0x3b6 PushI
	var_293_int = 21228; // 0x3b7 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x3b8 TObjFunc
	return 0; // 0x3ba Return
	
Label_955:
	var_3_object = 1; // 0x3bb TMovB
	var_294_bool = 0; // 0x3bc PushV
	func_5210(var_294_bool); // 0x3bd NEW_2
	if(var_294_bool == 0) goto Label_963; // 0x3bf JumpB
	lshStopAnimation(); // 0x3c0 Func
	goto Label_965; // 0x3c2 Jump
	
Label_965:
	return 0; // 0x3c5 Return
	
Label_963:
	StopAnimation(); // 0x3c3 Func
	
Label_967:
	return 0; // 0x3c7 Return
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x497 PushI
	if(var_51_int == 0) goto Label_1635; // 0x498 JumpB
	func_4953(); // 0x49a NEW_2
	var_53_int = 21192; // 0x49c PushI
	var_54_bool = var_50_int == var_53_int; // 0x49d Eq
	if(var_54_bool == 0) goto Label_1198; // 0x49e JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x49f PushV
	var_55_object = var_1_object; // 0x4a0 MovT
	var_56_object = var_0_bool; // 0x4a1 MovT
	func_5256(); // 0x4a2 NEW_2
	var_75_object = Obj(); var_76_object = Obj(); // 0x4a4 PushV
	var_75_object = var_1_object; // 0x4a5 MovT
	var_76_object = var_0_bool; // 0x4a6 MovT
	func_5212(); // 0x4a7 NEW_2
	var_101_object = Obj(); var_102_object = Obj(); // 0x4a9 PushV
	var_101_object = var_1_object; // 0x4aa MovT
	var_102_object = var_0_bool; // 0x4ab MovT
	func_5276(); // 0x4ac NEW_2
	
Label_1198:
	var_113_int = 21193; // 0x4ae PushI
	var_114_bool = var_50_int == var_113_int; // 0x4af Eq
	if(var_114_bool == 0) goto Label_1216; // 0x4b0 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x4b1 PushV
	var_115_object = var_1_object; // 0x4b2 MovT
	var_116_object = var_0_bool; // 0x4b3 MovT
	func_5256(); // 0x4b4 NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x4b6 PushV
	var_117_object = var_1_object; // 0x4b7 MovT
	var_118_object = var_0_bool; // 0x4b8 MovT
	func_5212(); // 0x4b9 NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x4bb PushV
	var_119_object = var_1_object; // 0x4bc MovT
	var_120_object = var_0_bool; // 0x4bd MovT
	func_5276(); // 0x4be NEW_2
	
Label_1216:
	var_121_int = 21194; // 0x4c0 PushI
	var_122_bool = var_50_int == var_121_int; // 0x4c1 Eq
	if(var_122_bool == 0) goto Label_1234; // 0x4c2 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x4c3 PushV
	var_123_object = var_1_object; // 0x4c4 MovT
	var_124_object = var_0_bool; // 0x4c5 MovT
	func_5256(); // 0x4c6 NEW_2
	var_125_object = Obj(); var_126_object = Obj(); // 0x4c8 PushV
	var_125_object = var_1_object; // 0x4c9 MovT
	var_126_object = var_0_bool; // 0x4ca MovT
	func_5212(); // 0x4cb NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x4cd PushV
	var_127_object = var_1_object; // 0x4ce MovT
	var_128_object = var_0_bool; // 0x4cf MovT
	func_5276(); // 0x4d0 NEW_2
	
Label_1234:
	var_129_int = 21204; // 0x4d2 PushI
	var_130_bool = var_50_int == var_129_int; // 0x4d3 Eq
	if(var_130_bool == 0) goto Label_1242; // 0x4d4 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x4d5 PushV
	var_131_object = var_1_object; // 0x4d6 MovT
	var_132_object = var_0_bool; // 0x4d7 MovT
	func_5283(); // 0x4d8 NEW_2
	
Label_1242:
	var_135_int = 21212; // 0x4da PushI
	var_136_bool = var_50_int == var_135_int; // 0x4db Eq
	if(var_136_bool == 0) goto Label_1255; // 0x4dc JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x4dd PushV
	var_137_object = var_1_object; // 0x4de MovT
	var_138_object = var_0_bool; // 0x4df MovT
	func_5289(); // 0x4e0 NEW_2
	var_165_object = Obj(); var_166_object = Obj(); // 0x4e2 PushV
	var_165_object = var_1_object; // 0x4e3 MovT
	var_166_object = var_0_bool; // 0x4e4 MovT
	func_5532(); // 0x4e5 NEW_2
	
Label_1255:
	var_169_int = 21213; // 0x4e7 PushI
	var_170_bool = var_50_int == var_169_int; // 0x4e8 Eq
	if(var_170_bool == 0) goto Label_1268; // 0x4e9 JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x4ea PushV
	var_171_object = var_1_object; // 0x4eb MovT
	var_172_object = var_0_bool; // 0x4ec MovT
	func_5289(); // 0x4ed NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x4ef PushV
	var_173_object = var_1_object; // 0x4f0 MovT
	var_174_object = var_0_bool; // 0x4f1 MovT
	func_5532(); // 0x4f2 NEW_2
	
Label_1268:
	var_175_int = 21181; // 0x4f4 PushI
	var_176_bool = var_49_float == var_175_int; // 0x4f5 Eq
	if(var_176_bool == 0) goto Label_1336; // 0x4f6 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x4f7 PushV
	var_178_object = var_1_object; // 0x4f8 MovT
	func_5645(var_178_object); // 0x4f9 NEW_2
	var_183_bool = var_177_bool == 0; // 0x4fb Not
	if(var_183_bool == 0) goto Label_1302; // 0x4fc JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x4fd PushV
	var_184_object = var_1_object; // 0x4fe MovT
	var_185_object = var_0_bool; // 0x4ff MovT
	func_5459(); // 0x500 NEW_2
	var_192_string = ""; // 0x502 PushV
	var_192_string = "Neutral"; // 0x503 MovS
	func_1152(var_50_int, var_192_string); // 0x504 NEW_2
	var_209_int = 520000; // 0x506 PushI
	SetMessage(var_209_int); // 0x507 TObjFunc
	ClearReplies(); // 0x509 TObjFunc
	var_210_int = 520001; // 0x50b PushI
	var_211_int = 21183; // 0x50c PushI
	var_212_int = 21182; // 0x50d PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x50e TObjFunc
	var_213_int = 520017; // 0x510 PushI
	var_214_int = 21183; // 0x511 PushI
	var_215_int = 21199; // 0x512 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x513 TObjFunc
	return 0; // 0x515 Return
	
Label_1302:
	var_216_string = ""; // 0x516 PushV
	var_216_string = "Neutral"; // 0x517 MovS
	func_1152(var_50_int, var_216_string); // 0x518 NEW_2
	var_217_int = 520019; // 0x51a PushI
	SetMessage(var_217_int); // 0x51b TObjFunc
	ClearReplies(); // 0x51d TObjFunc
	var_218_bool = 0; // 0x51f PushV
	var_218_bool = 0; // 0x520 MovB
	var_219_bool = 0; var_220_object = Obj(); // 0x521 PushV
	var_220_object = var_1_object; // 0x522 MovT
	func_5657(var_220_object); // 0x523 NEW_2
	if(var_219_bool == 0) goto Label_1324; // 0x525 JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0x526 PushV
	var_226_object = var_1_object; // 0x527 MovT
	func_5645(var_226_object); // 0x528 NEW_2
	if(var_225_bool == 0) goto Label_1324; // 0x52a JumpB
	var_218_bool = 1; // 0x52b MovB
	
Label_1324:
	if(var_218_bool == 0) goto Label_1330; // 0x52c JumpB
	var_227_int = 520020; // 0x52d PushI
	var_228_int = 21205; // 0x52e PushI
	var_229_int = 21204; // 0x52f PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x530 TObjFunc
	
Label_1330:
	var_230_int = 520030; // 0x532 PushI
	var_231_int = -1; // 0x533 PushI
	var_232_int = 21214; // 0x534 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x535 TObjFunc
	return 0; // 0x537 Return
	
Label_1336:
	var_233_int = 21205; // 0x538 PushI
	var_234_bool = var_49_float == var_233_int; // 0x539 Eq
	if(var_234_bool == 0) goto Label_1359; // 0x53a JumpB
	var_235_string = ""; // 0x53b PushV
	var_235_string = "Neutral"; // 0x53c MovS
	func_1152(var_50_int, var_235_string); // 0x53d NEW_2
	var_236_int = 520021; // 0x53f PushI
	SetMessage(var_236_int); // 0x540 TObjFunc
	ClearReplies(); // 0x542 TObjFunc
	var_237_int = 520022; // 0x544 PushI
	var_238_int = 21207; // 0x545 PushI
	var_239_int = 21206; // 0x546 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x547 TObjFunc
	var_240_int = 527733; // 0x549 PushI
	var_241_int = 29085; // 0x54a PushI
	var_242_int = 29084; // 0x54b PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x54c TObjFunc
	return 0; // 0x54e Return
	
Label_1359:
	var_243_int = 29085; // 0x54f PushI
	var_244_bool = var_49_float == var_243_int; // 0x550 Eq
	if(var_244_bool == 0) goto Label_1377; // 0x551 JumpB
	var_245_string = ""; // 0x552 PushV
	var_245_string = "Neutral"; // 0x553 MovS
	func_1152(var_50_int, var_245_string); // 0x554 NEW_2
	var_246_int = 527734; // 0x556 PushI
	SetMessage(var_246_int); // 0x557 TObjFunc
	ClearReplies(); // 0x559 TObjFunc
	var_247_int = 520029; // 0x55b PushI
	var_248_int = -1; // 0x55c PushI
	var_249_int = 21213; // 0x55d PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x55e TObjFunc
	return 0; // 0x560 Return
	
Label_1377:
	var_250_int = 21207; // 0x561 PushI
	var_251_bool = var_49_float == var_250_int; // 0x562 Eq
	if(var_251_bool == 0) goto Label_1395; // 0x563 JumpB
	var_252_string = ""; // 0x564 PushV
	var_252_string = "Untrust"; // 0x565 MovS
	func_1152(var_50_int, var_252_string); // 0x566 NEW_2
	var_253_int = 520023; // 0x568 PushI
	SetMessage(var_253_int); // 0x569 TObjFunc
	ClearReplies(); // 0x56b TObjFunc
	var_254_int = 520024; // 0x56d PushI
	var_255_int = 21209; // 0x56e PushI
	var_256_int = 21208; // 0x56f PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x570 TObjFunc
	return 0; // 0x572 Return
	
Label_1395:
	var_257_int = 21209; // 0x573 PushI
	var_258_bool = var_49_float == var_257_int; // 0x574 Eq
	if(var_258_bool == 0) goto Label_1418; // 0x575 JumpB
	var_259_string = ""; // 0x576 PushV
	var_259_string = "Neutral"; // 0x577 MovS
	func_1152(var_50_int, var_259_string); // 0x578 NEW_2
	var_260_int = 520025; // 0x57a PushI
	SetMessage(var_260_int); // 0x57b TObjFunc
	ClearReplies(); // 0x57d TObjFunc
	var_261_int = 520026; // 0x57f PushI
	var_262_int = 21211; // 0x580 PushI
	var_263_int = 21210; // 0x581 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x582 TObjFunc
	var_264_int = 527735; // 0x584 PushI
	var_265_int = 29087; // 0x585 PushI
	var_266_int = 29086; // 0x586 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x587 TObjFunc
	return 0; // 0x589 Return
	
Label_1418:
	var_267_int = 29087; // 0x58a PushI
	var_268_bool = var_49_float == var_267_int; // 0x58b Eq
	if(var_268_bool == 0) goto Label_1436; // 0x58c JumpB
	var_269_string = ""; // 0x58d PushV
	var_269_string = "Untrust"; // 0x58e MovS
	func_1152(var_50_int, var_269_string); // 0x58f NEW_2
	var_270_int = 527736; // 0x591 PushI
	SetMessage(var_270_int); // 0x592 TObjFunc
	ClearReplies(); // 0x594 TObjFunc
	var_271_int = 527737; // 0x596 PushI
	var_272_int = 21211; // 0x597 PushI
	var_273_int = 29088; // 0x598 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x599 TObjFunc
	return 0; // 0x59b Return
	
Label_1436:
	var_274_int = 21211; // 0x59c PushI
	var_275_bool = var_49_float == var_274_int; // 0x59d Eq
	if(var_275_bool == 0) goto Label_1454; // 0x59e JumpB
	var_276_string = ""; // 0x59f PushV
	var_276_string = "Neutral"; // 0x5a0 MovS
	func_1152(var_50_int, var_276_string); // 0x5a1 NEW_2
	var_277_int = 520027; // 0x5a3 PushI
	SetMessage(var_277_int); // 0x5a4 TObjFunc
	ClearReplies(); // 0x5a6 TObjFunc
	var_278_int = 520028; // 0x5a8 PushI
	var_279_int = -1; // 0x5a9 PushI
	var_280_int = 21212; // 0x5aa PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x5ab TObjFunc
	return 0; // 0x5ad Return
	
Label_1454:
	var_281_int = 21183; // 0x5ae PushI
	var_282_bool = var_49_float == var_281_int; // 0x5af Eq
	if(var_282_bool == 0) goto Label_1477; // 0x5b0 JumpB
	var_283_string = ""; // 0x5b1 PushV
	var_283_string = "Untrust"; // 0x5b2 MovS
	func_1152(var_50_int, var_283_string); // 0x5b3 NEW_2
	var_284_int = 520002; // 0x5b5 PushI
	SetMessage(var_284_int); // 0x5b6 TObjFunc
	ClearReplies(); // 0x5b8 TObjFunc
	var_285_int = 520003; // 0x5ba PushI
	var_286_int = 21185; // 0x5bb PushI
	var_287_int = 21184; // 0x5bc PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x5bd TObjFunc
	var_288_int = 527725; // 0x5bf PushI
	var_289_int = 29074; // 0x5c0 PushI
	var_290_int = 29073; // 0x5c1 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x5c2 TObjFunc
	return 0; // 0x5c4 Return
	
Label_1477:
	var_291_int = 29074; // 0x5c5 PushI
	var_292_bool = var_49_float == var_291_int; // 0x5c6 Eq
	if(var_292_bool == 0) goto Label_1495; // 0x5c7 JumpB
	var_293_string = ""; // 0x5c8 PushV
	var_293_string = "Rage"; // 0x5c9 MovS
	func_1152(var_50_int, var_293_string); // 0x5ca NEW_2
	var_294_int = 527726; // 0x5cc PushI
	SetMessage(var_294_int); // 0x5cd TObjFunc
	ClearReplies(); // 0x5cf TObjFunc
	var_295_int = 527727; // 0x5d1 PushI
	var_296_int = 21185; // 0x5d2 PushI
	var_297_int = 29075; // 0x5d3 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x5d4 TObjFunc
	return 0; // 0x5d6 Return
	
Label_1495:
	var_298_int = 21185; // 0x5d7 PushI
	var_299_bool = var_49_float == var_298_int; // 0x5d8 Eq
	if(var_299_bool == 0) goto Label_1518; // 0x5d9 JumpB
	var_300_string = ""; // 0x5da PushV
	var_300_string = "Sly"; // 0x5db MovS
	func_1152(var_50_int, var_300_string); // 0x5dc NEW_2
	var_301_int = 520004; // 0x5de PushI
	SetMessage(var_301_int); // 0x5df TObjFunc
	ClearReplies(); // 0x5e1 TObjFunc
	var_302_int = 520005; // 0x5e3 PushI
	var_303_int = 21187; // 0x5e4 PushI
	var_304_int = 21186; // 0x5e5 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x5e6 TObjFunc
	var_305_int = 520015; // 0x5e8 PushI
	var_306_int = 21187; // 0x5e9 PushI
	var_307_int = 21196; // 0x5ea PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x5eb TObjFunc
	return 0; // 0x5ed Return
	
Label_1518:
	var_308_int = 21187; // 0x5ee PushI
	var_309_bool = var_49_float == var_308_int; // 0x5ef Eq
	if(var_309_bool == 0) goto Label_1541; // 0x5f0 JumpB
	var_310_string = ""; // 0x5f1 PushV
	var_310_string = "Untrust"; // 0x5f2 MovS
	func_1152(var_50_int, var_310_string); // 0x5f3 NEW_2
	var_311_int = 520006; // 0x5f5 PushI
	SetMessage(var_311_int); // 0x5f6 TObjFunc
	ClearReplies(); // 0x5f8 TObjFunc
	var_312_int = 520007; // 0x5fa PushI
	var_313_int = 21189; // 0x5fb PushI
	var_314_int = 21188; // 0x5fc PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x5fd TObjFunc
	var_315_int = 527728; // 0x5ff PushI
	var_316_int = 29079; // 0x600 PushI
	var_317_int = 29078; // 0x601 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x602 TObjFunc
	return 0; // 0x604 Return
	
Label_1541:
	var_318_int = 29079; // 0x605 PushI
	var_319_bool = var_49_float == var_318_int; // 0x606 Eq
	if(var_319_bool == 0) goto Label_1559; // 0x607 JumpB
	var_320_string = ""; // 0x608 PushV
	var_320_string = "Neutral"; // 0x609 MovS
	func_1152(var_50_int, var_320_string); // 0x60a NEW_2
	var_321_int = 527729; // 0x60c PushI
	SetMessage(var_321_int); // 0x60d TObjFunc
	ClearReplies(); // 0x60f TObjFunc
	var_322_int = 527730; // 0x611 PushI
	var_323_int = 29081; // 0x612 PushI
	var_324_int = 29080; // 0x613 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x614 TObjFunc
	return 0; // 0x616 Return
	
Label_1559:
	var_325_int = 29081; // 0x617 PushI
	var_326_bool = var_49_float == var_325_int; // 0x618 Eq
	if(var_326_bool == 0) goto Label_1577; // 0x619 JumpB
	var_327_string = ""; // 0x61a PushV
	var_327_string = "Neutral"; // 0x61b MovS
	func_1152(var_50_int, var_327_string); // 0x61c NEW_2
	var_328_int = 527731; // 0x61e PushI
	SetMessage(var_328_int); // 0x61f TObjFunc
	ClearReplies(); // 0x621 TObjFunc
	var_329_int = 527732; // 0x623 PushI
	var_330_int = 21189; // 0x624 PushI
	var_331_int = 29082; // 0x625 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x626 TObjFunc
	return 0; // 0x628 Return
	
Label_1577:
	var_332_int = 21189; // 0x629 PushI
	var_333_bool = var_49_float == var_332_int; // 0x62a Eq
	if(var_333_bool == 0) goto Label_1600; // 0x62b JumpB
	var_334_string = ""; // 0x62c PushV
	var_334_string = "Neutral"; // 0x62d MovS
	func_1152(var_50_int, var_334_string); // 0x62e NEW_2
	var_335_int = 520008; // 0x630 PushI
	SetMessage(var_335_int); // 0x631 TObjFunc
	ClearReplies(); // 0x633 TObjFunc
	var_336_int = 520009; // 0x635 PushI
	var_337_int = 21191; // 0x636 PushI
	var_338_int = 21190; // 0x637 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x638 TObjFunc
	var_339_int = 520013; // 0x63a PushI
	var_340_int = -1; // 0x63b PushI
	var_341_int = 21194; // 0x63c PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x63d TObjFunc
	return 0; // 0x63f Return
	
Label_1600:
	var_342_int = 21191; // 0x640 PushI
	var_343_bool = var_49_float == var_342_int; // 0x641 Eq
	if(var_343_bool == 0) goto Label_1623; // 0x642 JumpB
	var_344_string = ""; // 0x643 PushV
	var_344_string = "Sly"; // 0x644 MovS
	func_1152(var_50_int, var_344_string); // 0x645 NEW_2
	var_345_int = 520010; // 0x647 PushI
	SetMessage(var_345_int); // 0x648 TObjFunc
	ClearReplies(); // 0x64a TObjFunc
	var_346_int = 520011; // 0x64c PushI
	var_347_int = -1; // 0x64d PushI
	var_348_int = 21192; // 0x64e PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x64f TObjFunc
	var_349_int = 520012; // 0x651 PushI
	var_350_int = -1; // 0x652 PushI
	var_351_int = 21193; // 0x653 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x654 TObjFunc
	return 0; // 0x656 Return
	
Label_1623:
	var_3_object = 1; // 0x657 TMovB
	var_352_bool = 0; // 0x658 PushV
	func_5210(var_352_bool); // 0x659 NEW_2
	if(var_352_bool == 0) goto Label_1631; // 0x65b JumpB
	lshStopAnimation(); // 0x65c Func
	goto Label_1633; // 0x65e Jump
	
Label_1633:
	return 0; // 0x661 Return
	
Label_1631:
	StopAnimation(); // 0x65f Func
	
Label_1635:
	return 0; // 0x663 Return
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x733 PushI
	if(var_51_int == 0) goto Label_2335; // 0x734 JumpB
	func_4953(); // 0x736 NEW_2
	var_53_int = 21333; // 0x738 PushI
	var_54_bool = var_50_int == var_53_int; // 0x739 Eq
	if(var_54_bool == 0) goto Label_1866; // 0x73a JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x73b PushV
	var_55_object = var_1_object; // 0x73c MovT
	var_56_object = var_0_bool; // 0x73d MovT
	func_5386(var_56_object); // 0x73e NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x740 PushV
	var_79_object = var_1_object; // 0x741 MovT
	var_80_object = var_0_bool; // 0x742 MovT
	func_5482(); // 0x743 NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0x745 PushV
	var_83_object = var_1_object; // 0x746 MovT
	var_84_object = var_0_bool; // 0x747 MovT
	func_5340(); // 0x748 NEW_2
	
Label_1866:
	var_135_int = 21335; // 0x74a PushI
	var_136_bool = var_50_int == var_135_int; // 0x74b Eq
	if(var_136_bool == 0) goto Label_1884; // 0x74c JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x74d PushV
	var_137_object = var_1_object; // 0x74e MovT
	var_138_object = var_0_bool; // 0x74f MovT
	func_5386(var_138_object); // 0x750 NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x752 PushV
	var_139_object = var_1_object; // 0x753 MovT
	var_140_object = var_0_bool; // 0x754 MovT
	func_5482(); // 0x755 NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0x757 PushV
	var_141_object = var_1_object; // 0x758 MovT
	var_142_object = var_0_bool; // 0x759 MovT
	func_5340(); // 0x75a NEW_2
	
Label_1884:
	var_143_int = 21349; // 0x75c PushI
	var_144_bool = var_50_int == var_143_int; // 0x75d Eq
	if(var_144_bool == 0) goto Label_1912; // 0x75e JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x75f PushV
	var_145_object = var_1_object; // 0x760 MovT
	var_146_object = var_0_bool; // 0x761 MovT
	func_5376(var_146_object); // 0x762 NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x764 PushV
	var_163_object = var_1_object; // 0x765 MovT
	var_164_object = var_0_bool; // 0x766 MovT
	func_5476(); // 0x767 NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x769 PushV
	var_167_object = var_1_object; // 0x76a MovT
	var_168_object = var_0_bool; // 0x76b MovT
	func_5386(var_168_object); // 0x76c NEW_2
	var_169_object = Obj(); var_170_object = Obj(); // 0x76e PushV
	var_169_object = var_1_object; // 0x76f MovT
	var_170_object = var_0_bool; // 0x770 MovT
	func_5340(); // 0x771 NEW_2
	var_171_object = Obj(); var_172_object = Obj(); // 0x773 PushV
	var_171_object = var_1_object; // 0x774 MovT
	var_172_object = var_0_bool; // 0x775 MovT
	func_5466(var_172_object); // 0x776 NEW_2
	
Label_1912:
	var_176_int = 21350; // 0x778 PushI
	var_177_bool = var_50_int == var_176_int; // 0x779 Eq
	if(var_177_bool == 0) goto Label_1930; // 0x77a JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x77b PushV
	var_178_object = var_1_object; // 0x77c MovT
	var_179_object = var_0_bool; // 0x77d MovT
	func_5386(var_179_object); // 0x77e NEW_2
	var_180_object = Obj(); var_181_object = Obj(); // 0x780 PushV
	var_180_object = var_1_object; // 0x781 MovT
	var_181_object = var_0_bool; // 0x782 MovT
	func_5482(); // 0x783 NEW_2
	var_182_object = Obj(); var_183_object = Obj(); // 0x785 PushV
	var_182_object = var_1_object; // 0x786 MovT
	var_183_object = var_0_bool; // 0x787 MovT
	func_5340(); // 0x788 NEW_2
	
Label_1930:
	var_184_int = 21361; // 0x78a PushI
	var_185_bool = var_50_int == var_184_int; // 0x78b Eq
	if(var_185_bool == 0) goto Label_1958; // 0x78c JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0x78d PushV
	var_186_object = var_1_object; // 0x78e MovT
	var_187_object = var_0_bool; // 0x78f MovT
	func_5366(); // 0x790 NEW_2
	var_199_object = Obj(); var_200_object = Obj(); // 0x792 PushV
	var_199_object = var_1_object; // 0x793 MovT
	var_200_object = var_0_bool; // 0x794 MovT
	func_5494(var_200_object); // 0x795 NEW_2
	var_204_object = Obj(); var_205_object = Obj(); // 0x797 PushV
	var_204_object = var_1_object; // 0x798 MovT
	var_205_object = var_0_bool; // 0x799 MovT
	func_5504(var_205_object); // 0x79a NEW_2
	var_210_object = Obj(); var_211_object = Obj(); // 0x79c PushV
	var_210_object = var_1_object; // 0x79d MovT
	var_211_object = var_0_bool; // 0x79e MovT
	func_5515(var_211_object); // 0x79f NEW_2
	var_216_object = Obj(); var_217_object = Obj(); // 0x7a1 PushV
	var_216_object = var_1_object; // 0x7a2 MovT
	var_217_object = var_0_bool; // 0x7a3 MovT
	func_5482(); // 0x7a4 NEW_2
	
Label_1958:
	var_218_int = 21322; // 0x7a6 PushI
	var_219_bool = var_49_float == var_218_int; // 0x7a7 Eq
	if(var_219_bool == 0) goto Label_2026; // 0x7a8 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x7a9 PushV
	var_221_object = var_1_object; // 0x7aa MovT
	func_5669(var_221_object); // 0x7ab NEW_2
	if(var_220_bool == 0) goto Label_1991; // 0x7ad JumpB
	var_228_object = Obj(); var_229_object = Obj(); // 0x7ae PushV
	var_228_object = var_1_object; // 0x7af MovT
	var_229_object = var_0_bool; // 0x7b0 MovT
	func_5334(); // 0x7b1 NEW_2
	var_232_object = Obj(); var_233_object = Obj(); // 0x7b3 PushV
	var_232_object = var_1_object; // 0x7b4 MovT
	var_233_object = var_0_bool; // 0x7b5 MovT
	func_5488(); // 0x7b6 NEW_2
	var_236_string = ""; // 0x7b8 PushV
	var_236_string = "Rage"; // 0x7b9 MovS
	func_1820(var_50_int, var_236_string); // 0x7ba NEW_2
	var_253_int = 520138; // 0x7bc PushI
	SetMessage(var_253_int); // 0x7bd TObjFunc
	ClearReplies(); // 0x7bf TObjFunc
	var_254_int = 520139; // 0x7c1 PushI
	var_255_int = 21324; // 0x7c2 PushI
	var_256_int = 21323; // 0x7c3 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x7c4 TObjFunc
	return 0; // 0x7c6 Return
	
Label_1991:
	var_257_string = ""; // 0x7c7 PushV
	var_257_string = "Rage"; // 0x7c8 MovS
	func_1820(var_50_int, var_257_string); // 0x7c9 NEW_2
	var_258_int = 520157; // 0x7cb PushI
	SetMessage(var_258_int); // 0x7cc TObjFunc
	ClearReplies(); // 0x7ce TObjFunc
	var_259_bool = 0; var_260_object = Obj(); // 0x7d0 PushV
	var_260_object = var_1_object; // 0x7d1 MovT
	func_5681(var_260_object); // 0x7d2 NEW_2
	if(var_259_bool == 0) goto Label_2010; // 0x7d4 JumpB
	var_265_int = 520158; // 0x7d5 PushI
	var_266_int = 21346; // 0x7d6 PushI
	var_267_int = 21345; // 0x7d7 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x7d8 TObjFunc
	
Label_2010:
	var_268_bool = 0; var_269_object = Obj(); // 0x7da PushV
	var_269_object = var_1_object; // 0x7db MovT
	func_5693(var_269_object); // 0x7dc NEW_2
	if(var_268_bool == 0) goto Label_2020; // 0x7de JumpB
	var_274_int = 520164; // 0x7df PushI
	var_275_int = 21352; // 0x7e0 PushI
	var_276_int = 21351; // 0x7e1 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x7e2 TObjFunc
	
Label_2020:
	var_277_int = 520180; // 0x7e4 PushI
	var_278_int = -1; // 0x7e5 PushI
	var_279_int = 21370; // 0x7e6 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x7e7 TObjFunc
	return 0; // 0x7e9 Return
	
Label_2026:
	var_280_int = 21352; // 0x7ea PushI
	var_281_bool = var_49_float == var_280_int; // 0x7eb Eq
	if(var_281_bool == 0) goto Label_2049; // 0x7ec JumpB
	var_282_string = ""; // 0x7ed PushV
	var_282_string = "Neutral"; // 0x7ee MovS
	func_1820(var_50_int, var_282_string); // 0x7ef NEW_2
	var_283_int = 520165; // 0x7f1 PushI
	SetMessage(var_283_int); // 0x7f2 TObjFunc
	ClearReplies(); // 0x7f4 TObjFunc
	var_284_int = 520166; // 0x7f6 PushI
	var_285_int = 21354; // 0x7f7 PushI
	var_286_int = 21353; // 0x7f8 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x7f9 TObjFunc
	var_287_int = 520179; // 0x7fb PushI
	var_288_int = 21354; // 0x7fc PushI
	var_289_int = 21368; // 0x7fd PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x7fe TObjFunc
	return 0; // 0x800 Return
	
Label_2049:
	var_290_int = 21354; // 0x801 PushI
	var_291_bool = var_49_float == var_290_int; // 0x802 Eq
	if(var_291_bool == 0) goto Label_2072; // 0x803 JumpB
	var_292_string = ""; // 0x804 PushV
	var_292_string = "Neutral"; // 0x805 MovS
	func_1820(var_50_int, var_292_string); // 0x806 NEW_2
	var_293_int = 520167; // 0x808 PushI
	SetMessage(var_293_int); // 0x809 TObjFunc
	ClearReplies(); // 0x80b TObjFunc
	var_294_int = 520168; // 0x80d PushI
	var_295_int = 21356; // 0x80e PushI
	var_296_int = 21355; // 0x80f PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x810 TObjFunc
	var_297_int = 520178; // 0x812 PushI
	var_298_int = 21360; // 0x813 PushI
	var_299_int = 21366; // 0x814 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x815 TObjFunc
	return 0; // 0x817 Return
	
Label_2072:
	var_300_int = 21356; // 0x818 PushI
	var_301_bool = var_49_float == var_300_int; // 0x819 Eq
	if(var_301_bool == 0) goto Label_2090; // 0x81a JumpB
	var_302_string = ""; // 0x81b PushV
	var_302_string = "Fear"; // 0x81c MovS
	func_1820(var_50_int, var_302_string); // 0x81d NEW_2
	var_303_int = 520169; // 0x81f PushI
	SetMessage(var_303_int); // 0x820 TObjFunc
	ClearReplies(); // 0x822 TObjFunc
	var_304_int = 520170; // 0x824 PushI
	var_305_int = 21358; // 0x825 PushI
	var_306_int = 21357; // 0x826 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x827 TObjFunc
	return 0; // 0x829 Return
	
Label_2090:
	var_307_int = 21358; // 0x82a PushI
	var_308_bool = var_49_float == var_307_int; // 0x82b Eq
	if(var_308_bool == 0) goto Label_2113; // 0x82c JumpB
	var_309_string = ""; // 0x82d PushV
	var_309_string = "Fear"; // 0x82e MovS
	func_1820(var_50_int, var_309_string); // 0x82f NEW_2
	var_310_int = 520171; // 0x831 PushI
	SetMessage(var_310_int); // 0x832 TObjFunc
	ClearReplies(); // 0x834 TObjFunc
	var_311_int = 520172; // 0x836 PushI
	var_312_int = 21360; // 0x837 PushI
	var_313_int = 21359; // 0x838 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x839 TObjFunc
	var_314_int = 520175; // 0x83b PushI
	var_315_int = 21363; // 0x83c PushI
	var_316_int = 21362; // 0x83d PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x83e TObjFunc
	return 0; // 0x840 Return
	
Label_2113:
	var_317_int = 21363; // 0x841 PushI
	var_318_bool = var_49_float == var_317_int; // 0x842 Eq
	if(var_318_bool == 0) goto Label_2131; // 0x843 JumpB
	var_319_string = ""; // 0x844 PushV
	var_319_string = "Sly"; // 0x845 MovS
	func_1820(var_50_int, var_319_string); // 0x846 NEW_2
	var_320_int = 520176; // 0x848 PushI
	SetMessage(var_320_int); // 0x849 TObjFunc
	ClearReplies(); // 0x84b TObjFunc
	var_321_int = 520177; // 0x84d PushI
	var_322_int = 21360; // 0x84e PushI
	var_323_int = 21364; // 0x84f PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x850 TObjFunc
	return 0; // 0x852 Return
	
Label_2131:
	var_324_int = 21360; // 0x853 PushI
	var_325_bool = var_49_float == var_324_int; // 0x854 Eq
	if(var_325_bool == 0) goto Label_2149; // 0x855 JumpB
	var_326_string = ""; // 0x856 PushV
	var_326_string = "Neutral"; // 0x857 MovS
	func_1820(var_50_int, var_326_string); // 0x858 NEW_2
	var_327_int = 520173; // 0x85a PushI
	SetMessage(var_327_int); // 0x85b TObjFunc
	ClearReplies(); // 0x85d TObjFunc
	var_328_int = 520174; // 0x85f PushI
	var_329_int = -1; // 0x860 PushI
	var_330_int = 21361; // 0x861 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x862 TObjFunc
	return 0; // 0x864 Return
	
Label_2149:
	var_331_int = 21346; // 0x865 PushI
	var_332_bool = var_49_float == var_331_int; // 0x866 Eq
	if(var_332_bool == 0) goto Label_2172; // 0x867 JumpB
	var_333_string = ""; // 0x868 PushV
	var_333_string = "Sly"; // 0x869 MovS
	func_1820(var_50_int, var_333_string); // 0x86a NEW_2
	var_334_int = 520159; // 0x86c PushI
	SetMessage(var_334_int); // 0x86d TObjFunc
	ClearReplies(); // 0x86f TObjFunc
	var_335_int = 520160; // 0x871 PushI
	var_336_int = 21348; // 0x872 PushI
	var_337_int = 21347; // 0x873 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x874 TObjFunc
	var_338_int = 520163; // 0x876 PushI
	var_339_int = -1; // 0x877 PushI
	var_340_int = 21350; // 0x878 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x879 TObjFunc
	return 0; // 0x87b Return
	
Label_2172:
	var_341_int = 21348; // 0x87c PushI
	var_342_bool = var_49_float == var_341_int; // 0x87d Eq
	if(var_342_bool == 0) goto Label_2190; // 0x87e JumpB
	var_343_string = ""; // 0x87f PushV
	var_343_string = "Neutral"; // 0x880 MovS
	func_1820(var_50_int, var_343_string); // 0x881 NEW_2
	var_344_int = 520161; // 0x883 PushI
	SetMessage(var_344_int); // 0x884 TObjFunc
	ClearReplies(); // 0x886 TObjFunc
	var_345_int = 520162; // 0x888 PushI
	var_346_int = -1; // 0x889 PushI
	var_347_int = 21349; // 0x88a PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x88b TObjFunc
	return 0; // 0x88d Return
	
Label_2190:
	var_348_int = 21324; // 0x88e PushI
	var_349_bool = var_49_float == var_348_int; // 0x88f Eq
	if(var_349_bool == 0) goto Label_2213; // 0x890 JumpB
	var_350_string = ""; // 0x891 PushV
	var_350_string = "Rage"; // 0x892 MovS
	func_1820(var_50_int, var_350_string); // 0x893 NEW_2
	var_351_int = 520140; // 0x895 PushI
	SetMessage(var_351_int); // 0x896 TObjFunc
	ClearReplies(); // 0x898 TObjFunc
	var_352_int = 520141; // 0x89a PushI
	var_353_int = 21326; // 0x89b PushI
	var_354_int = 21325; // 0x89c PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x89d TObjFunc
	var_355_int = 520154; // 0x89f PushI
	var_356_int = 21341; // 0x8a0 PushI
	var_357_int = 21340; // 0x8a1 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x8a2 TObjFunc
	return 0; // 0x8a4 Return
	
Label_2213:
	var_358_int = 21341; // 0x8a5 PushI
	var_359_bool = var_49_float == var_358_int; // 0x8a6 Eq
	if(var_359_bool == 0) goto Label_2231; // 0x8a7 JumpB
	var_360_string = ""; // 0x8a8 PushV
	var_360_string = "Sly"; // 0x8a9 MovS
	func_1820(var_50_int, var_360_string); // 0x8aa NEW_2
	var_361_int = 520155; // 0x8ac PushI
	SetMessage(var_361_int); // 0x8ad TObjFunc
	ClearReplies(); // 0x8af TObjFunc
	var_362_int = 520156; // 0x8b1 PushI
	var_363_int = 21326; // 0x8b2 PushI
	var_364_int = 21342; // 0x8b3 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x8b4 TObjFunc
	return 0; // 0x8b6 Return
	
Label_2231:
	var_365_int = 21326; // 0x8b7 PushI
	var_366_bool = var_49_float == var_365_int; // 0x8b8 Eq
	if(var_366_bool == 0) goto Label_2254; // 0x8b9 JumpB
	var_367_string = ""; // 0x8ba PushV
	var_367_string = "Rage"; // 0x8bb MovS
	func_1820(var_50_int, var_367_string); // 0x8bc NEW_2
	var_368_int = 520142; // 0x8be PushI
	SetMessage(var_368_int); // 0x8bf TObjFunc
	ClearReplies(); // 0x8c1 TObjFunc
	var_369_int = 520143; // 0x8c3 PushI
	var_370_int = 21328; // 0x8c4 PushI
	var_371_int = 21327; // 0x8c5 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x8c6 TObjFunc
	var_372_int = 520153; // 0x8c8 PushI
	var_373_int = 21330; // 0x8c9 PushI
	var_374_int = 21338; // 0x8ca PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x8cb TObjFunc
	return 0; // 0x8cd Return
	
Label_2254:
	var_375_int = 21328; // 0x8ce PushI
	var_376_bool = var_49_float == var_375_int; // 0x8cf Eq
	if(var_376_bool == 0) goto Label_2277; // 0x8d0 JumpB
	var_377_string = ""; // 0x8d1 PushV
	var_377_string = "Sly"; // 0x8d2 MovS
	func_1820(var_50_int, var_377_string); // 0x8d3 NEW_2
	var_378_int = 520144; // 0x8d5 PushI
	SetMessage(var_378_int); // 0x8d6 TObjFunc
	ClearReplies(); // 0x8d8 TObjFunc
	var_379_int = 520145; // 0x8da PushI
	var_380_int = 21330; // 0x8db PushI
	var_381_int = 21329; // 0x8dc PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x8dd TObjFunc
	var_382_int = 520152; // 0x8df PushI
	var_383_int = 21330; // 0x8e0 PushI
	var_384_int = 21336; // 0x8e1 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x8e2 TObjFunc
	return 0; // 0x8e4 Return
	
Label_2277:
	var_385_int = 21330; // 0x8e5 PushI
	var_386_bool = var_49_float == var_385_int; // 0x8e6 Eq
	if(var_386_bool == 0) goto Label_2300; // 0x8e7 JumpB
	var_387_string = ""; // 0x8e8 PushV
	var_387_string = "Sly"; // 0x8e9 MovS
	func_1820(var_50_int, var_387_string); // 0x8ea NEW_2
	var_388_int = 520146; // 0x8ec PushI
	SetMessage(var_388_int); // 0x8ed TObjFunc
	ClearReplies(); // 0x8ef TObjFunc
	var_389_int = 520147; // 0x8f1 PushI
	var_390_int = 21332; // 0x8f2 PushI
	var_391_int = 21331; // 0x8f3 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x8f4 TObjFunc
	var_392_int = 520151; // 0x8f6 PushI
	var_393_int = -1; // 0x8f7 PushI
	var_394_int = 21335; // 0x8f8 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x8f9 TObjFunc
	return 0; // 0x8fb Return
	
Label_2300:
	var_395_int = 21332; // 0x8fc PushI
	var_396_bool = var_49_float == var_395_int; // 0x8fd Eq
	if(var_396_bool == 0) goto Label_2323; // 0x8fe JumpB
	var_397_string = ""; // 0x8ff PushV
	var_397_string = "Neutral"; // 0x900 MovS
	func_1820(var_50_int, var_397_string); // 0x901 NEW_2
	var_398_int = 520148; // 0x903 PushI
	SetMessage(var_398_int); // 0x904 TObjFunc
	ClearReplies(); // 0x906 TObjFunc
	var_399_int = 520149; // 0x908 PushI
	var_400_int = -1; // 0x909 PushI
	var_401_int = 21333; // 0x90a PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x90b TObjFunc
	var_402_int = 520150; // 0x90d PushI
	var_403_int = -1; // 0x90e PushI
	var_404_int = 21334; // 0x90f PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x910 TObjFunc
	return 0; // 0x912 Return
	
Label_2323:
	var_3_object = 1; // 0x913 TMovB
	var_405_bool = 0; // 0x914 PushV
	func_5210(var_405_bool); // 0x915 NEW_2
	if(var_405_bool == 0) goto Label_2331; // 0x917 JumpB
	lshStopAnimation(); // 0x918 Func
	goto Label_2333; // 0x91a Jump
	
Label_2333:
	return 0; // 0x91d Return
	
Label_2331:
	StopAnimation(); // 0x91b Func
	
Label_2335:
	return 0; // 0x91f Return
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x9c2 PushI
	if(var_51_int == 0) goto Label_2574; // 0x9c3 JumpB
	func_4953(); // 0x9c5 NEW_2
	var_53_int = 21982; // 0x9c7 PushI
	var_54_bool = var_49_float == var_53_int; // 0x9c8 Eq
	if(var_54_bool == 0) goto Label_2526; // 0x9c9 JumpB
	var_55_string = ""; // 0x9ca PushV
	var_55_string = "Neutral"; // 0x9cb MovS
	func_2475(var_50_int, var_55_string); // 0x9cc NEW_2
	var_72_int = 520768; // 0x9ce PushI
	SetMessage(var_72_int); // 0x9cf TObjFunc
	ClearReplies(); // 0x9d1 TObjFunc
	var_73_int = 520769; // 0x9d3 PushI
	var_74_int = 21984; // 0x9d4 PushI
	var_75_int = 21983; // 0x9d5 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x9d6 TObjFunc
	var_76_int = 520772; // 0x9d8 PushI
	var_77_int = 21987; // 0x9d9 PushI
	var_78_int = 21986; // 0x9da PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x9db TObjFunc
	return 0; // 0x9dd Return
	
Label_2526:
	var_79_int = 21987; // 0x9de PushI
	var_80_bool = var_49_float == var_79_int; // 0x9df Eq
	if(var_80_bool == 0) goto Label_2544; // 0x9e0 JumpB
	var_81_string = ""; // 0x9e1 PushV
	var_81_string = "Neutral"; // 0x9e2 MovS
	func_2475(var_50_int, var_81_string); // 0x9e3 NEW_2
	var_82_int = 520773; // 0x9e5 PushI
	SetMessage(var_82_int); // 0x9e6 TObjFunc
	ClearReplies(); // 0x9e8 TObjFunc
	var_83_int = 520774; // 0x9ea PushI
	var_84_int = -1; // 0x9eb PushI
	var_85_int = 21988; // 0x9ec PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x9ed TObjFunc
	return 0; // 0x9ef Return
	
Label_2544:
	var_86_int = 21984; // 0x9f0 PushI
	var_87_bool = var_49_float == var_86_int; // 0x9f1 Eq
	if(var_87_bool == 0) goto Label_2562; // 0x9f2 JumpB
	var_88_string = ""; // 0x9f3 PushV
	var_88_string = "Neutral"; // 0x9f4 MovS
	func_2475(var_50_int, var_88_string); // 0x9f5 NEW_2
	var_89_int = 520770; // 0x9f7 PushI
	SetMessage(var_89_int); // 0x9f8 TObjFunc
	ClearReplies(); // 0x9fa TObjFunc
	var_90_int = 520771; // 0x9fc PushI
	var_91_int = -1; // 0x9fd PushI
	var_92_int = 21985; // 0x9fe PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x9ff TObjFunc
	return 0; // 0xa01 Return
	
Label_2562:
	var_3_object = 1; // 0xa02 TMovB
	var_93_bool = 0; // 0xa03 PushV
	func_5210(var_93_bool); // 0xa04 NEW_2
	if(var_93_bool == 0) goto Label_2570; // 0xa06 JumpB
	lshStopAnimation(); // 0xa07 Func
	goto Label_2572; // 0xa09 Jump
	
Label_2572:
	return 0; // 0xa0c Return
	
Label_2570:
	StopAnimation(); // 0xa0a Func
	
Label_2574:
	return 0; // 0xa0e Return
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0xab1 PushI
	if(var_51_int == 0) goto Label_2826; // 0xab2 JumpB
	func_4953(); // 0xab4 NEW_2
	var_53_int = 22403; // 0xab6 PushI
	var_54_bool = var_50_int == var_53_int; // 0xab7 Eq
	if(var_54_bool == 0) goto Label_2750; // 0xab8 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xab9 PushV
	var_55_object = var_1_object; // 0xaba MovT
	var_56_object = var_0_bool; // 0xabb MovT
	func_5397(); // 0xabc NEW_2
	
Label_2750:
	var_81_int = 22399; // 0xabe PushI
	var_82_bool = var_49_float == var_81_int; // 0xabf Eq
	if(var_82_bool == 0) goto Label_2773; // 0xac0 JumpB
	var_83_string = ""; // 0xac1 PushV
	var_83_string = "Untrust"; // 0xac2 MovS
	func_2714(var_50_int, var_83_string); // 0xac3 NEW_2
	var_100_int = 521202; // 0xac5 PushI
	SetMessage(var_100_int); // 0xac6 TObjFunc
	ClearReplies(); // 0xac8 TObjFunc
	var_101_int = 521203; // 0xaca PushI
	var_102_int = 22402; // 0xacb PushI
	var_103_int = 22400; // 0xacc PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xacd TObjFunc
	var_104_int = 521204; // 0xacf PushI
	var_105_int = -1; // 0xad0 PushI
	var_106_int = 22401; // 0xad1 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xad2 TObjFunc
	return 0; // 0xad4 Return
	
Label_2773:
	var_107_int = 22402; // 0xad5 PushI
	var_108_bool = var_49_float == var_107_int; // 0xad6 Eq
	if(var_108_bool == 0) goto Label_2796; // 0xad7 JumpB
	var_109_string = ""; // 0xad8 PushV
	var_109_string = "Untrust"; // 0xad9 MovS
	func_2714(var_50_int, var_109_string); // 0xada NEW_2
	var_110_int = 521205; // 0xadc PushI
	SetMessage(var_110_int); // 0xadd TObjFunc
	ClearReplies(); // 0xadf TObjFunc
	var_111_int = 528423; // 0xae1 PushI
	var_112_int = 29808; // 0xae2 PushI
	var_113_int = 29806; // 0xae3 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xae4 TObjFunc
	var_114_int = 528424; // 0xae6 PushI
	var_115_int = 29808; // 0xae7 PushI
	var_116_int = 29807; // 0xae8 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xae9 TObjFunc
	return 0; // 0xaeb Return
	
Label_2796:
	var_117_int = 29808; // 0xaec PushI
	var_118_bool = var_49_float == var_117_int; // 0xaed Eq
	if(var_118_bool == 0) goto Label_2814; // 0xaee JumpB
	var_119_string = ""; // 0xaef PushV
	var_119_string = "Sly"; // 0xaf0 MovS
	func_2714(var_50_int, var_119_string); // 0xaf1 NEW_2
	var_120_int = 528425; // 0xaf3 PushI
	SetMessage(var_120_int); // 0xaf4 TObjFunc
	ClearReplies(); // 0xaf6 TObjFunc
	var_121_int = 521206; // 0xaf8 PushI
	var_122_int = -1; // 0xaf9 PushI
	var_123_int = 22403; // 0xafa PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xafb TObjFunc
	return 0; // 0xafd Return
	
Label_2814:
	var_3_object = 1; // 0xafe TMovB
	var_124_bool = 0; // 0xaff PushV
	func_5210(var_124_bool); // 0xb00 NEW_2
	if(var_124_bool == 0) goto Label_2822; // 0xb02 JumpB
	lshStopAnimation(); // 0xb03 Func
	goto Label_2824; // 0xb05 Jump
	
Label_2824:
	return 0; // 0xb08 Return
	
Label_2822:
	StopAnimation(); // 0xb06 Func
	
Label_2826:
	return 0; // 0xb0a Return
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0xbe9 PushI
	if(var_51_int == 0) goto Label_3519; // 0xbea JumpB
	func_4953(); // 0xbec NEW_2
	var_53_int = 22637; // 0xbee PushI
	var_54_bool = var_50_int == var_53_int; // 0xbef Eq
	if(var_54_bool == 0) goto Label_3062; // 0xbf0 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xbf1 PushV
	var_55_object = var_1_object; // 0xbf2 MovT
	var_56_object = var_0_bool; // 0xbf3 MovT
	func_5408(); // 0xbf4 NEW_2
	
Label_3062:
	var_98_int = 22643; // 0xbf6 PushI
	var_99_bool = var_50_int == var_98_int; // 0xbf7 Eq
	if(var_99_bool == 0) goto Label_3070; // 0xbf8 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0xbf9 PushV
	var_100_object = var_1_object; // 0xbfa MovT
	var_101_object = var_0_bool; // 0xbfb MovT
	func_5408(); // 0xbfc NEW_2
	
Label_3070:
	var_102_int = 22646; // 0xbfe PushI
	var_103_bool = var_50_int == var_102_int; // 0xbff Eq
	if(var_103_bool == 0) goto Label_3093; // 0xc00 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0xc01 PushV
	var_104_object = var_1_object; // 0xc02 MovT
	var_105_object = var_0_bool; // 0xc03 MovT
	func_5424(); // 0xc04 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0xc06 PushV
	var_124_object = var_1_object; // 0xc07 MovT
	var_125_object = var_0_bool; // 0xc08 MovT
	func_5526(); // 0xc09 NEW_2
	var_128_object = Obj(); var_129_object = Obj(); // 0xc0b PushV
	var_128_object = var_1_object; // 0xc0c MovT
	var_129_object = var_0_bool; // 0xc0d MovT
	func_5376(var_129_object); // 0xc0e NEW_2
	var_149_object = Obj(); var_150_object = Obj(); // 0xc10 PushV
	var_149_object = var_1_object; // 0xc11 MovT
	var_150_object = var_0_bool; // 0xc12 MovT
	func_5476(); // 0xc13 NEW_2
	
Label_3093:
	var_153_int = 25069; // 0xc15 PushI
	var_154_bool = var_50_int == var_153_int; // 0xc16 Eq
	if(var_154_bool == 0) goto Label_3101; // 0xc17 JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0xc18 PushV
	var_155_object = var_1_object; // 0xc19 MovT
	var_156_object = var_0_bool; // 0xc1a MovT
	func_5424(); // 0xc1b NEW_2
	
Label_3101:
	var_157_int = 22634; // 0xc1d PushI
	var_158_bool = var_49_float == var_157_int; // 0xc1e Eq
	if(var_158_bool == 0) goto Label_3184; // 0xc1f JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0xc20 PushV
	var_160_object = var_1_object; // 0xc21 MovT
	func_5538(var_160_object); // 0xc22 NEW_2
	if(var_159_bool == 0) goto Label_3134; // 0xc24 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0xc25 PushV
	var_167_object = var_1_object; // 0xc26 MovT
	var_168_object = var_0_bool; // 0xc27 MovT
	func_5438(); // 0xc28 NEW_2
	var_171_string = ""; // 0xc2a PushV
	var_171_string = "Rage"; // 0xc2b MovS
	func_3026(var_50_int, var_171_string); // 0xc2c NEW_2
	var_188_int = 521469; // 0xc2e PushI
	SetMessage(var_188_int); // 0xc2f TObjFunc
	ClearReplies(); // 0xc31 TObjFunc
	var_189_int = 523789; // 0xc33 PushI
	var_190_int = 25055; // 0xc34 PushI
	var_191_int = 25054; // 0xc35 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xc36 TObjFunc
	var_192_int = 523804; // 0xc38 PushI
	var_193_int = 25055; // 0xc39 PushI
	var_194_int = 25070; // 0xc3a PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xc3b TObjFunc
	return 0; // 0xc3d Return
	
Label_3134:
	var_195_string = ""; // 0xc3e PushV
	var_195_string = "Rage"; // 0xc3f MovS
	func_3026(var_50_int, var_195_string); // 0xc40 NEW_2
	var_196_int = 521474; // 0xc42 PushI
	SetMessage(var_196_int); // 0xc43 TObjFunc
	ClearReplies(); // 0xc45 TObjFunc
	var_197_bool = 0; var_198_object = Obj(); // 0xc47 PushV
	var_198_object = var_1_object; // 0xc48 MovT
	func_5550(var_198_object); // 0xc49 NEW_2
	if(var_197_bool == 0) goto Label_3153; // 0xc4b JumpB
	var_203_int = 521475; // 0xc4c PushI
	var_204_int = 22642; // 0xc4d PushI
	var_205_int = 22640; // 0xc4e PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xc4f TObjFunc
	
Label_3153:
	var_206_bool = 0; // 0xc51 PushV
	var_206_bool = 0; // 0xc52 MovB
	var_207_bool = 0; var_208_object = Obj(); // 0xc53 PushV
	var_208_object = var_1_object; // 0xc54 MovT
	func_5550(var_208_object); // 0xc55 NEW_2
	var_209_bool = var_207_bool == 0; // 0xc57 Not
	if(var_209_bool == 0) goto Label_3167; // 0xc58 JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0xc59 PushV
	var_211_object = var_1_object; // 0xc5a MovT
	func_5562(var_210_bool, var_211_object); // 0xc5b NEW_2
	if(var_210_bool == 0) goto Label_3167; // 0xc5d JumpB
	var_206_bool = 1; // 0xc5e MovB
	
Label_3167:
	if(var_206_bool == 0) goto Label_3173; // 0xc5f JumpB
	var_219_int = 521479; // 0xc60 PushI
	var_220_int = 22645; // 0xc61 PushI
	var_221_int = 22644; // 0xc62 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xc63 TObjFunc
	
Label_3173:
	var_222_int = 523837; // 0xc65 PushI
	var_223_int = 25111; // 0xc66 PushI
	var_224_int = 25110; // 0xc67 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xc68 TObjFunc
	var_225_int = 521476; // 0xc6a PushI
	var_226_int = -1; // 0xc6b PushI
	var_227_int = 22641; // 0xc6c PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xc6d TObjFunc
	return 0; // 0xc6f Return
	
Label_3184:
	var_228_int = 25111; // 0xc70 PushI
	var_229_bool = var_49_float == var_228_int; // 0xc71 Eq
	if(var_229_bool == 0) goto Label_3202; // 0xc72 JumpB
	var_230_string = ""; // 0xc73 PushV
	var_230_string = "Untrust"; // 0xc74 MovS
	func_3026(var_50_int, var_230_string); // 0xc75 NEW_2
	var_231_int = 523838; // 0xc77 PushI
	SetMessage(var_231_int); // 0xc78 TObjFunc
	ClearReplies(); // 0xc7a TObjFunc
	var_232_int = 523839; // 0xc7c PushI
	var_233_int = 25113; // 0xc7d PushI
	var_234_int = 25112; // 0xc7e PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xc7f TObjFunc
	return 0; // 0xc81 Return
	
Label_3202:
	var_235_int = 25113; // 0xc82 PushI
	var_236_bool = var_49_float == var_235_int; // 0xc83 Eq
	if(var_236_bool == 0) goto Label_3220; // 0xc84 JumpB
	var_237_string = ""; // 0xc85 PushV
	var_237_string = "Fear"; // 0xc86 MovS
	func_3026(var_50_int, var_237_string); // 0xc87 NEW_2
	var_238_int = 523840; // 0xc89 PushI
	SetMessage(var_238_int); // 0xc8a TObjFunc
	ClearReplies(); // 0xc8c TObjFunc
	var_239_int = 523841; // 0xc8e PushI
	var_240_int = 25115; // 0xc8f PushI
	var_241_int = 25114; // 0xc90 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xc91 TObjFunc
	return 0; // 0xc93 Return
	
Label_3220:
	var_242_int = 25115; // 0xc94 PushI
	var_243_bool = var_49_float == var_242_int; // 0xc95 Eq
	if(var_243_bool == 0) goto Label_3238; // 0xc96 JumpB
	var_244_string = ""; // 0xc97 PushV
	var_244_string = "Untrust"; // 0xc98 MovS
	func_3026(var_50_int, var_244_string); // 0xc99 NEW_2
	var_245_int = 523842; // 0xc9b PushI
	SetMessage(var_245_int); // 0xc9c TObjFunc
	ClearReplies(); // 0xc9e TObjFunc
	var_246_int = 523843; // 0xca0 PushI
	var_247_int = 25117; // 0xca1 PushI
	var_248_int = 25116; // 0xca2 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xca3 TObjFunc
	return 0; // 0xca5 Return
	
Label_3238:
	var_249_int = 25117; // 0xca6 PushI
	var_250_bool = var_49_float == var_249_int; // 0xca7 Eq
	if(var_250_bool == 0) goto Label_3256; // 0xca8 JumpB
	var_251_string = ""; // 0xca9 PushV
	var_251_string = "Untrust"; // 0xcaa MovS
	func_3026(var_50_int, var_251_string); // 0xcab NEW_2
	var_252_int = 523844; // 0xcad PushI
	SetMessage(var_252_int); // 0xcae TObjFunc
	ClearReplies(); // 0xcb0 TObjFunc
	var_253_int = 523845; // 0xcb2 PushI
	var_254_int = -1; // 0xcb3 PushI
	var_255_int = 25118; // 0xcb4 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xcb5 TObjFunc
	return 0; // 0xcb7 Return
	
Label_3256:
	var_256_int = 22645; // 0xcb8 PushI
	var_257_bool = var_49_float == var_256_int; // 0xcb9 Eq
	if(var_257_bool == 0) goto Label_3279; // 0xcba JumpB
	var_258_string = ""; // 0xcbb PushV
	var_258_string = "Sly"; // 0xcbc MovS
	func_3026(var_50_int, var_258_string); // 0xcbd NEW_2
	var_259_int = 521480; // 0xcbf PushI
	SetMessage(var_259_int); // 0xcc0 TObjFunc
	ClearReplies(); // 0xcc2 TObjFunc
	var_260_int = 523798; // 0xcc4 PushI
	var_261_int = 25065; // 0xcc5 PushI
	var_262_int = 25063; // 0xcc6 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xcc7 TObjFunc
	var_263_int = 523799; // 0xcc9 PushI
	var_264_int = 25066; // 0xcca PushI
	var_265_int = 25064; // 0xccb PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xccc TObjFunc
	return 0; // 0xcce Return
	
Label_3279:
	var_266_int = 25066; // 0xccf PushI
	var_267_bool = var_49_float == var_266_int; // 0xcd0 Eq
	if(var_267_bool == 0) goto Label_3297; // 0xcd1 JumpB
	var_268_string = ""; // 0xcd2 PushV
	var_268_string = "Neutral"; // 0xcd3 MovS
	func_3026(var_50_int, var_268_string); // 0xcd4 NEW_2
	var_269_int = 523801; // 0xcd6 PushI
	SetMessage(var_269_int); // 0xcd7 TObjFunc
	ClearReplies(); // 0xcd9 TObjFunc
	var_270_int = 523802; // 0xcdb PushI
	var_271_int = 25065; // 0xcdc PushI
	var_272_int = 25067; // 0xcdd PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0xcde TObjFunc
	return 0; // 0xce0 Return
	
Label_3297:
	var_273_int = 25065; // 0xce1 PushI
	var_274_bool = var_49_float == var_273_int; // 0xce2 Eq
	if(var_274_bool == 0) goto Label_3320; // 0xce3 JumpB
	var_275_string = ""; // 0xce4 PushV
	var_275_string = "Neutral"; // 0xce5 MovS
	func_3026(var_50_int, var_275_string); // 0xce6 NEW_2
	var_276_int = 523800; // 0xce8 PushI
	SetMessage(var_276_int); // 0xce9 TObjFunc
	ClearReplies(); // 0xceb TObjFunc
	var_277_int = 521481; // 0xced PushI
	var_278_int = -1; // 0xcee PushI
	var_279_int = 22646; // 0xcef PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0xcf0 TObjFunc
	var_280_int = 523803; // 0xcf2 PushI
	var_281_int = -1; // 0xcf3 PushI
	var_282_int = 25069; // 0xcf4 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xcf5 TObjFunc
	return 0; // 0xcf7 Return
	
Label_3320:
	var_283_int = 22642; // 0xcf8 PushI
	var_284_bool = var_49_float == var_283_int; // 0xcf9 Eq
	if(var_284_bool == 0) goto Label_3338; // 0xcfa JumpB
	var_285_string = ""; // 0xcfb PushV
	var_285_string = "Neutral"; // 0xcfc MovS
	func_3026(var_50_int, var_285_string); // 0xcfd NEW_2
	var_286_int = 521477; // 0xcff PushI
	SetMessage(var_286_int); // 0xd00 TObjFunc
	ClearReplies(); // 0xd02 TObjFunc
	var_287_int = 521478; // 0xd04 PushI
	var_288_int = -1; // 0xd05 PushI
	var_289_int = 22643; // 0xd06 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0xd07 TObjFunc
	return 0; // 0xd09 Return
	
Label_3338:
	var_290_int = 25055; // 0xd0a PushI
	var_291_bool = var_49_float == var_290_int; // 0xd0b Eq
	if(var_291_bool == 0) goto Label_3361; // 0xd0c JumpB
	var_292_string = ""; // 0xd0d PushV
	var_292_string = "Rage"; // 0xd0e MovS
	func_3026(var_50_int, var_292_string); // 0xd0f NEW_2
	var_293_int = 523790; // 0xd11 PushI
	SetMessage(var_293_int); // 0xd12 TObjFunc
	ClearReplies(); // 0xd14 TObjFunc
	var_294_int = 523791; // 0xd16 PushI
	var_295_int = 25057; // 0xd17 PushI
	var_296_int = 25056; // 0xd18 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0xd19 TObjFunc
	var_297_int = 523805; // 0xd1b PushI
	var_298_int = 25057; // 0xd1c PushI
	var_299_int = 25072; // 0xd1d PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xd1e TObjFunc
	return 0; // 0xd20 Return
	
Label_3361:
	var_300_int = 25057; // 0xd21 PushI
	var_301_bool = var_49_float == var_300_int; // 0xd22 Eq
	if(var_301_bool == 0) goto Label_3384; // 0xd23 JumpB
	var_302_string = ""; // 0xd24 PushV
	var_302_string = "Rage"; // 0xd25 MovS
	func_3026(var_50_int, var_302_string); // 0xd26 NEW_2
	var_303_int = 523792; // 0xd28 PushI
	SetMessage(var_303_int); // 0xd29 TObjFunc
	ClearReplies(); // 0xd2b TObjFunc
	var_304_int = 523793; // 0xd2d PushI
	var_305_int = 25059; // 0xd2e PushI
	var_306_int = 25058; // 0xd2f PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xd30 TObjFunc
	var_307_int = 523797; // 0xd32 PushI
	var_308_int = 25059; // 0xd33 PushI
	var_309_int = 25062; // 0xd34 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xd35 TObjFunc
	return 0; // 0xd37 Return
	
Label_3384:
	var_310_int = 25059; // 0xd38 PushI
	var_311_bool = var_49_float == var_310_int; // 0xd39 Eq
	if(var_311_bool == 0) goto Label_3407; // 0xd3a JumpB
	var_312_string = ""; // 0xd3b PushV
	var_312_string = "Rage"; // 0xd3c MovS
	func_3026(var_50_int, var_312_string); // 0xd3d NEW_2
	var_313_int = 523794; // 0xd3f PushI
	SetMessage(var_313_int); // 0xd40 TObjFunc
	ClearReplies(); // 0xd42 TObjFunc
	var_314_int = 523795; // 0xd44 PushI
	var_315_int = 25075; // 0xd45 PushI
	var_316_int = 25060; // 0xd46 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xd47 TObjFunc
	var_317_int = 523810; // 0xd49 PushI
	var_318_int = 25080; // 0xd4a PushI
	var_319_int = 25079; // 0xd4b PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xd4c TObjFunc
	return 0; // 0xd4e Return
	
Label_3407:
	var_320_int = 25080; // 0xd4f PushI
	var_321_bool = var_49_float == var_320_int; // 0xd50 Eq
	if(var_321_bool == 0) goto Label_3425; // 0xd51 JumpB
	var_322_string = ""; // 0xd52 PushV
	var_322_string = "Rage"; // 0xd53 MovS
	func_3026(var_50_int, var_322_string); // 0xd54 NEW_2
	var_323_int = 523811; // 0xd56 PushI
	SetMessage(var_323_int); // 0xd57 TObjFunc
	ClearReplies(); // 0xd59 TObjFunc
	var_324_int = 523812; // 0xd5b PushI
	var_325_int = 25075; // 0xd5c PushI
	var_326_int = 25081; // 0xd5d PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xd5e TObjFunc
	return 0; // 0xd60 Return
	
Label_3425:
	var_327_int = 25075; // 0xd61 PushI
	var_328_bool = var_49_float == var_327_int; // 0xd62 Eq
	if(var_328_bool == 0) goto Label_3443; // 0xd63 JumpB
	var_329_string = ""; // 0xd64 PushV
	var_329_string = "Rage"; // 0xd65 MovS
	func_3026(var_50_int, var_329_string); // 0xd66 NEW_2
	var_330_int = 523806; // 0xd68 PushI
	SetMessage(var_330_int); // 0xd69 TObjFunc
	ClearReplies(); // 0xd6b TObjFunc
	var_331_int = 523807; // 0xd6d PushI
	var_332_int = 25077; // 0xd6e PushI
	var_333_int = 25076; // 0xd6f PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xd70 TObjFunc
	return 0; // 0xd72 Return
	
Label_3443:
	var_334_int = 25077; // 0xd73 PushI
	var_335_bool = var_49_float == var_334_int; // 0xd74 Eq
	if(var_335_bool == 0) goto Label_3461; // 0xd75 JumpB
	var_336_string = ""; // 0xd76 PushV
	var_336_string = "Sly"; // 0xd77 MovS
	func_3026(var_50_int, var_336_string); // 0xd78 NEW_2
	var_337_int = 523808; // 0xd7a PushI
	SetMessage(var_337_int); // 0xd7b TObjFunc
	ClearReplies(); // 0xd7d TObjFunc
	var_338_int = 523809; // 0xd7f PushI
	var_339_int = 22636; // 0xd80 PushI
	var_340_int = 25078; // 0xd81 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0xd82 TObjFunc
	return 0; // 0xd84 Return
	
Label_3461:
	var_341_int = 22636; // 0xd85 PushI
	var_342_bool = var_49_float == var_341_int; // 0xd86 Eq
	if(var_342_bool == 0) goto Label_3484; // 0xd87 JumpB
	var_343_string = ""; // 0xd88 PushV
	var_343_string = "Rage"; // 0xd89 MovS
	func_3026(var_50_int, var_343_string); // 0xd8a NEW_2
	var_344_int = 521471; // 0xd8c PushI
	SetMessage(var_344_int); // 0xd8d TObjFunc
	ClearReplies(); // 0xd8f TObjFunc
	var_345_int = 523813; // 0xd91 PushI
	var_346_int = 25084; // 0xd92 PushI
	var_347_int = 25083; // 0xd93 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xd94 TObjFunc
	var_348_int = 523815; // 0xd96 PushI
	var_349_int = 25084; // 0xd97 PushI
	var_350_int = 25085; // 0xd98 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0xd99 TObjFunc
	return 0; // 0xd9b Return
	
Label_3484:
	var_351_int = 25084; // 0xd9c PushI
	var_352_bool = var_49_float == var_351_int; // 0xd9d Eq
	if(var_352_bool == 0) goto Label_3507; // 0xd9e JumpB
	var_353_string = ""; // 0xd9f PushV
	var_353_string = "Fear"; // 0xda0 MovS
	func_3026(var_50_int, var_353_string); // 0xda1 NEW_2
	var_354_int = 523814; // 0xda3 PushI
	SetMessage(var_354_int); // 0xda4 TObjFunc
	ClearReplies(); // 0xda6 TObjFunc
	var_355_int = 521472; // 0xda8 PushI
	var_356_int = -1; // 0xda9 PushI
	var_357_int = 22637; // 0xdaa PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xdab TObjFunc
	var_358_int = 521473; // 0xdad PushI
	var_359_int = -1; // 0xdae PushI
	var_360_int = 22638; // 0xdaf PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xdb0 TObjFunc
	return 0; // 0xdb2 Return
	
Label_3507:
	var_3_object = 1; // 0xdb3 TMovB
	var_361_bool = 0; // 0xdb4 PushV
	func_5210(var_361_bool); // 0xdb5 NEW_2
	if(var_361_bool == 0) goto Label_3515; // 0xdb7 JumpB
	lshStopAnimation(); // 0xdb8 Func
	goto Label_3517; // 0xdba Jump
	
Label_3517:
	return 0; // 0xdbd Return
	
Label_3515:
	StopAnimation(); // 0xdbb Func
	
Label_3519:
	return 0; // 0xdbf Return
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0xe6c PushI
	if(var_51_int == 0) goto Label_4007; // 0xe6d JumpB
	func_4953(); // 0xe6f NEW_2
	var_53_int = 24800; // 0xe71 PushI
	var_54_bool = var_50_int == var_53_int; // 0xe72 Eq
	if(var_54_bool == 0) goto Label_3705; // 0xe73 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xe74 PushV
	var_55_object = var_1_object; // 0xe75 MovT
	var_56_object = var_0_bool; // 0xe76 MovT
	func_5453(); // 0xe77 NEW_2
	
Label_3705:
	var_59_int = 23247; // 0xe79 PushI
	var_60_bool = var_50_int == var_59_int; // 0xe7a Eq
	if(var_60_bool == 0) goto Label_3713; // 0xe7b JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0xe7c PushV
	var_61_object = var_1_object; // 0xe7d MovT
	var_62_object = var_0_bool; // 0xe7e MovT
	func_5444(); // 0xe7f NEW_2
	
Label_3713:
	var_88_int = 23248; // 0xe81 PushI
	var_89_bool = var_49_float == var_88_int; // 0xe82 Eq
	if(var_89_bool == 0) goto Label_3746; // 0xe83 JumpB
	var_90_string = ""; // 0xe84 PushV
	var_90_string = "Fear"; // 0xe85 MovS
	func_3669(var_50_int, var_90_string); // 0xe86 NEW_2
	var_107_int = 522079; // 0xe88 PushI
	SetMessage(var_107_int); // 0xe89 TObjFunc
	ClearReplies(); // 0xe8b TObjFunc
	var_108_bool = 0; var_109_object = Obj(); // 0xe8d PushV
	var_109_object = var_1_object; // 0xe8e MovT
	func_5585(var_109_object); // 0xe8f NEW_2
	if(var_108_bool == 0) goto Label_3735; // 0xe91 JumpB
	var_116_int = 523566; // 0xe92 PushI
	var_117_int = 24801; // 0xe93 PushI
	var_118_int = 24800; // 0xe94 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0xe95 TObjFunc
	
Label_3735:
	var_119_int = 523569; // 0xe97 PushI
	var_120_int = 24804; // 0xe98 PushI
	var_121_int = 24803; // 0xe99 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xe9a TObjFunc
	var_122_int = 522080; // 0xe9c PushI
	var_123_int = -1; // 0xe9d PushI
	var_124_int = 23249; // 0xe9e PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xe9f TObjFunc
	return 0; // 0xea1 Return
	
Label_3746:
	var_125_int = 24804; // 0xea2 PushI
	var_126_bool = var_49_float == var_125_int; // 0xea3 Eq
	if(var_126_bool == 0) goto Label_3769; // 0xea4 JumpB
	var_127_string = ""; // 0xea5 PushV
	var_127_string = "Sly"; // 0xea6 MovS
	func_3669(var_50_int, var_127_string); // 0xea7 NEW_2
	var_128_int = 523570; // 0xea9 PushI
	SetMessage(var_128_int); // 0xeaa TObjFunc
	ClearReplies(); // 0xeac TObjFunc
	var_129_int = 523571; // 0xeae PushI
	var_130_int = 24807; // 0xeaf PushI
	var_131_int = 24805; // 0xeb0 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xeb1 TObjFunc
	var_132_int = 523572; // 0xeb3 PushI
	var_133_int = -1; // 0xeb4 PushI
	var_134_int = 24806; // 0xeb5 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xeb6 TObjFunc
	return 0; // 0xeb8 Return
	
Label_3769:
	var_135_int = 24807; // 0xeb9 PushI
	var_136_bool = var_49_float == var_135_int; // 0xeba Eq
	if(var_136_bool == 0) goto Label_3792; // 0xebb JumpB
	var_137_string = ""; // 0xebc PushV
	var_137_string = "Fear"; // 0xebd MovS
	func_3669(var_50_int, var_137_string); // 0xebe NEW_2
	var_138_int = 523573; // 0xec0 PushI
	SetMessage(var_138_int); // 0xec1 TObjFunc
	ClearReplies(); // 0xec3 TObjFunc
	var_139_int = 523574; // 0xec5 PushI
	var_140_int = 24809; // 0xec6 PushI
	var_141_int = 24808; // 0xec7 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xec8 TObjFunc
	var_142_int = 523576; // 0xeca PushI
	var_143_int = 24811; // 0xecb PushI
	var_144_int = 24810; // 0xecc PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xecd TObjFunc
	return 0; // 0xecf Return
	
Label_3792:
	var_145_int = 24811; // 0xed0 PushI
	var_146_bool = var_49_float == var_145_int; // 0xed1 Eq
	if(var_146_bool == 0) goto Label_3810; // 0xed2 JumpB
	var_147_string = ""; // 0xed3 PushV
	var_147_string = "Rage"; // 0xed4 MovS
	func_3669(var_50_int, var_147_string); // 0xed5 NEW_2
	var_148_int = 523577; // 0xed7 PushI
	SetMessage(var_148_int); // 0xed8 TObjFunc
	ClearReplies(); // 0xeda TObjFunc
	var_149_int = 523578; // 0xedc PushI
	var_150_int = 24809; // 0xedd PushI
	var_151_int = 24812; // 0xede PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xedf TObjFunc
	return 0; // 0xee1 Return
	
Label_3810:
	var_152_int = 24809; // 0xee2 PushI
	var_153_bool = var_49_float == var_152_int; // 0xee3 Eq
	if(var_153_bool == 0) goto Label_3844; // 0xee4 JumpB
	var_154_string = ""; // 0xee5 PushV
	var_154_string = "Sly"; // 0xee6 MovS
	func_3669(var_50_int, var_154_string); // 0xee7 NEW_2
	var_155_int = 523575; // 0xee9 PushI
	SetMessage(var_155_int); // 0xeea TObjFunc
	ClearReplies(); // 0xeec TObjFunc
	var_156_bool = 0; var_157_object = Obj(); // 0xeee PushV
	var_157_object = var_1_object; // 0xeef MovT
	func_5573(var_157_object); // 0xef0 NEW_2
	var_162_bool = var_156_bool == 0; // 0xef2 Not
	if(var_162_bool == 0) goto Label_3833; // 0xef3 JumpB
	var_163_int = 522078; // 0xef4 PushI
	var_164_int = -1; // 0xef5 PushI
	var_165_int = 23247; // 0xef6 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0xef7 TObjFunc
	
Label_3833:
	var_166_bool = 0; var_167_object = Obj(); // 0xef9 PushV
	var_167_object = var_1_object; // 0xefa MovT
	func_5573(var_167_object); // 0xefb NEW_2
	if(var_166_bool == 0) goto Label_3843; // 0xefd JumpB
	var_168_int = 522087; // 0xefe PushI
	var_169_int = 24814; // 0xeff PushI
	var_170_int = 23256; // 0xf00 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0xf01 TObjFunc
	
Label_3843:
	return 0; // 0xf03 Return
	
Label_3844:
	var_171_int = 24814; // 0xf04 PushI
	var_172_bool = var_49_float == var_171_int; // 0xf05 Eq
	if(var_172_bool == 0) goto Label_3867; // 0xf06 JumpB
	var_173_string = ""; // 0xf07 PushV
	var_173_string = "Sly"; // 0xf08 MovS
	func_3669(var_50_int, var_173_string); // 0xf09 NEW_2
	var_174_int = 523580; // 0xf0b PushI
	SetMessage(var_174_int); // 0xf0c TObjFunc
	ClearReplies(); // 0xf0e TObjFunc
	var_175_int = 523582; // 0xf10 PushI
	var_176_int = 24819; // 0xf11 PushI
	var_177_int = 24817; // 0xf12 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0xf13 TObjFunc
	var_178_int = 523583; // 0xf15 PushI
	var_179_int = -1; // 0xf16 PushI
	var_180_int = 24818; // 0xf17 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0xf18 TObjFunc
	return 0; // 0xf1a Return
	
Label_3867:
	var_181_int = 24819; // 0xf1b PushI
	var_182_bool = var_49_float == var_181_int; // 0xf1c Eq
	if(var_182_bool == 0) goto Label_3890; // 0xf1d JumpB
	var_183_string = ""; // 0xf1e PushV
	var_183_string = "Sly"; // 0xf1f MovS
	func_3669(var_50_int, var_183_string); // 0xf20 NEW_2
	var_184_int = 523584; // 0xf22 PushI
	SetMessage(var_184_int); // 0xf23 TObjFunc
	ClearReplies(); // 0xf25 TObjFunc
	var_185_int = 523585; // 0xf27 PushI
	var_186_int = -1; // 0xf28 PushI
	var_187_int = 24820; // 0xf29 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0xf2a TObjFunc
	var_188_int = 523586; // 0xf2c PushI
	var_189_int = -1; // 0xf2d PushI
	var_190_int = 24821; // 0xf2e PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xf2f TObjFunc
	return 0; // 0xf31 Return
	
Label_3890:
	var_191_int = 24801; // 0xf32 PushI
	var_192_bool = var_49_float == var_191_int; // 0xf33 Eq
	if(var_192_bool == 0) goto Label_3908; // 0xf34 JumpB
	var_193_string = ""; // 0xf35 PushV
	var_193_string = "Sly"; // 0xf36 MovS
	func_3669(var_50_int, var_193_string); // 0xf37 NEW_2
	var_194_int = 523567; // 0xf39 PushI
	SetMessage(var_194_int); // 0xf3a TObjFunc
	ClearReplies(); // 0xf3c TObjFunc
	var_195_int = 523568; // 0xf3e PushI
	var_196_int = 24822; // 0xf3f PushI
	var_197_int = 24802; // 0xf40 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xf41 TObjFunc
	return 0; // 0xf43 Return
	
Label_3908:
	var_198_int = 24822; // 0xf44 PushI
	var_199_bool = var_49_float == var_198_int; // 0xf45 Eq
	if(var_199_bool == 0) goto Label_3931; // 0xf46 JumpB
	var_200_string = ""; // 0xf47 PushV
	var_200_string = "Sly"; // 0xf48 MovS
	func_3669(var_50_int, var_200_string); // 0xf49 NEW_2
	var_201_int = 523587; // 0xf4b PushI
	SetMessage(var_201_int); // 0xf4c TObjFunc
	ClearReplies(); // 0xf4e TObjFunc
	var_202_int = 523588; // 0xf50 PushI
	var_203_int = 24824; // 0xf51 PushI
	var_204_int = 24823; // 0xf52 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0xf53 TObjFunc
	var_205_int = 523595; // 0xf55 PushI
	var_206_int = -1; // 0xf56 PushI
	var_207_int = 24830; // 0xf57 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xf58 TObjFunc
	return 0; // 0xf5a Return
	
Label_3931:
	var_208_int = 24824; // 0xf5b PushI
	var_209_bool = var_49_float == var_208_int; // 0xf5c Eq
	if(var_209_bool == 0) goto Label_3949; // 0xf5d JumpB
	var_210_string = ""; // 0xf5e PushV
	var_210_string = "Neutral"; // 0xf5f MovS
	func_3669(var_50_int, var_210_string); // 0xf60 NEW_2
	var_211_int = 523589; // 0xf62 PushI
	SetMessage(var_211_int); // 0xf63 TObjFunc
	ClearReplies(); // 0xf65 TObjFunc
	var_212_int = 523590; // 0xf67 PushI
	var_213_int = 24826; // 0xf68 PushI
	var_214_int = 24825; // 0xf69 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xf6a TObjFunc
	return 0; // 0xf6c Return
	
Label_3949:
	var_215_int = 24826; // 0xf6d PushI
	var_216_bool = var_49_float == var_215_int; // 0xf6e Eq
	if(var_216_bool == 0) goto Label_3972; // 0xf6f JumpB
	var_217_string = ""; // 0xf70 PushV
	var_217_string = "Untrust"; // 0xf71 MovS
	func_3669(var_50_int, var_217_string); // 0xf72 NEW_2
	var_218_int = 523591; // 0xf74 PushI
	SetMessage(var_218_int); // 0xf75 TObjFunc
	ClearReplies(); // 0xf77 TObjFunc
	var_219_int = 523592; // 0xf79 PushI
	var_220_int = 24828; // 0xf7a PushI
	var_221_int = 24827; // 0xf7b PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xf7c TObjFunc
	var_222_int = 523594; // 0xf7e PushI
	var_223_int = -1; // 0xf7f PushI
	var_224_int = 24829; // 0xf80 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xf81 TObjFunc
	return 0; // 0xf83 Return
	
Label_3972:
	var_225_int = 24828; // 0xf84 PushI
	var_226_bool = var_49_float == var_225_int; // 0xf85 Eq
	if(var_226_bool == 0) goto Label_3995; // 0xf86 JumpB
	var_227_string = ""; // 0xf87 PushV
	var_227_string = "Sly"; // 0xf88 MovS
	func_3669(var_50_int, var_227_string); // 0xf89 NEW_2
	var_228_int = 523593; // 0xf8b PushI
	SetMessage(var_228_int); // 0xf8c TObjFunc
	ClearReplies(); // 0xf8e TObjFunc
	var_229_int = 523596; // 0xf90 PushI
	var_230_int = -1; // 0xf91 PushI
	var_231_int = 24831; // 0xf92 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xf93 TObjFunc
	var_232_int = 523597; // 0xf95 PushI
	var_233_int = -1; // 0xf96 PushI
	var_234_int = 24832; // 0xf97 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xf98 TObjFunc
	return 0; // 0xf9a Return
	
Label_3995:
	var_3_object = 1; // 0xf9b TMovB
	var_235_bool = 0; // 0xf9c PushV
	func_5210(var_235_bool); // 0xf9d NEW_2
	if(var_235_bool == 0) goto Label_4003; // 0xf9f JumpB
	lshStopAnimation(); // 0xfa0 Func
	goto Label_4005; // 0xfa2 Jump
	
Label_4005:
	return 0; // 0xfa5 Return
	
Label_4003:
	StopAnimation(); // 0xfa3 Func
	
Label_4007:
	return 0; // 0xfa7 Return
}


task_19_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x104f PushI
	if(var_51_int == 0) goto Label_4266; // 0x1050 JumpB
	func_4953(); // 0x1052 NEW_2
	var_53_int = 36906; // 0x1054 PushI
	var_54_bool = var_49_float == var_53_int; // 0x1055 Eq
	if(var_54_bool == 0) goto Label_4208; // 0x1056 JumpB
	var_55_string = ""; // 0x1057 PushV
	var_55_string = "Neutral"; // 0x1058 MovS
	func_4152(var_50_int, var_55_string); // 0x1059 NEW_2
	var_72_int = 535231; // 0x105b PushI
	SetMessage(var_72_int); // 0x105c TObjFunc
	ClearReplies(); // 0x105e TObjFunc
	var_73_int = 535232; // 0x1060 PushI
	var_74_int = 36953; // 0x1061 PushI
	var_75_int = 36907; // 0x1062 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1063 TObjFunc
	var_76_int = 535233; // 0x1065 PushI
	var_77_int = -1; // 0x1066 PushI
	var_78_int = 36908; // 0x1067 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x1068 TObjFunc
	var_79_int = 535280; // 0x106a PushI
	var_80_int = -1; // 0x106b PushI
	var_81_int = 36956; // 0x106c PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x106d TObjFunc
	return 0; // 0x106f Return
	
Label_4208:
	var_82_int = 36953; // 0x1070 PushI
	var_83_bool = var_49_float == var_82_int; // 0x1071 Eq
	if(var_83_bool == 0) goto Label_4231; // 0x1072 JumpB
	var_84_string = ""; // 0x1073 PushV
	var_84_string = "Neutral"; // 0x1074 MovS
	func_4152(var_50_int, var_84_string); // 0x1075 NEW_2
	var_85_int = 535277; // 0x1077 PushI
	SetMessage(var_85_int); // 0x1078 TObjFunc
	ClearReplies(); // 0x107a TObjFunc
	var_86_int = 535278; // 0x107c PushI
	var_87_int = 36957; // 0x107d PushI
	var_88_int = 36954; // 0x107e PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x107f TObjFunc
	var_89_int = 535279; // 0x1081 PushI
	var_90_int = 36957; // 0x1082 PushI
	var_91_int = 36955; // 0x1083 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x1084 TObjFunc
	return 0; // 0x1086 Return
	
Label_4231:
	var_92_int = 36957; // 0x1087 PushI
	var_93_bool = var_49_float == var_92_int; // 0x1088 Eq
	if(var_93_bool == 0) goto Label_4254; // 0x1089 JumpB
	var_94_string = ""; // 0x108a PushV
	var_94_string = "Neutral"; // 0x108b MovS
	func_4152(var_50_int, var_94_string); // 0x108c NEW_2
	var_95_int = 535281; // 0x108e PushI
	SetMessage(var_95_int); // 0x108f TObjFunc
	ClearReplies(); // 0x1091 TObjFunc
	var_96_int = 535282; // 0x1093 PushI
	var_97_int = -1; // 0x1094 PushI
	var_98_int = 36958; // 0x1095 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x1096 TObjFunc
	var_99_int = 535283; // 0x1098 PushI
	var_100_int = -1; // 0x1099 PushI
	var_101_int = 36959; // 0x109a PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x109b TObjFunc
	return 0; // 0x109d Return
	
Label_4254:
	var_3_object = 1; // 0x109e TMovB
	var_102_bool = 0; // 0x109f PushV
	func_5210(var_102_bool); // 0x10a0 NEW_2
	if(var_102_bool == 0) goto Label_4262; // 0x10a2 JumpB
	lshStopAnimation(); // 0x10a3 Func
	goto Label_4264; // 0x10a5 Jump
	
Label_4264:
	return 0; // 0x10a8 Return
	
Label_4262:
	StopAnimation(); // 0x10a6 Func
	
Label_4266:
	return 0; // 0x10aa Return
}


task_21_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_float, var_49_float, var_50_int)
{
	var_51_int = 1; // 0x114d PushI
	if(var_51_int == 0) goto Label_4469; // 0x114e JumpB
	func_4953(); // 0x1150 NEW_2
	var_53_int = 42563; // 0x1152 PushI
	var_54_bool = var_49_float == var_53_int; // 0x1153 Eq
	if(var_54_bool == 0) goto Label_4457; // 0x1154 JumpB
	var_55_string = ""; // 0x1155 PushV
	var_55_string = "Neutral"; // 0x1156 MovS
	func_4406(var_50_int, var_55_string); // 0x1157 NEW_2
	var_72_int = 540554; // 0x1159 PushI
	SetMessage(var_72_int); // 0x115a TObjFunc
	ClearReplies(); // 0x115c TObjFunc
	var_73_int = 540555; // 0x115e PushI
	var_74_int = -1; // 0x115f PushI
	var_75_int = 42564; // 0x1160 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1161 TObjFunc
	var_76_int = 540794; // 0x1163 PushI
	var_77_int = -1; // 0x1164 PushI
	var_78_int = 42843; // 0x1165 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x1166 TObjFunc
	return 0; // 0x1168 Return
	
Label_4457:
	var_3_object = 1; // 0x1169 TMovB
	var_79_bool = 0; // 0x116a PushV
	func_5210(var_79_bool); // 0x116b NEW_2
	if(var_79_bool == 0) goto Label_4465; // 0x116d JumpB
	lshStopAnimation(); // 0x116e Func
	goto Label_4467; // 0x1170 Jump
	
Label_4467:
	return 0; // 0x1173 Return
	
Label_4465:
	StopAnimation(); // 0x1171 Func
	
Label_4469:
	return 0; // 0x1175 Return
}


task_22_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	func_5201(); // 0x11f4 NEW_2
	TaskCall(0); // 0x11f7 TaskCall
	func_0(); // 0x11f8 NEW_2
	TaskReturn(); // 0x11f9 TaskReturn
	return 0; // 0x11fb Return
}


task_22_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int, var_49_object)
{
	var_50_bool = 0; var_51_bool = 0; // 0x11fc PushV
	IsOverrideActive(var_51_bool); // 0x11fd Func
	var_52_bool = var_51_bool == 0; // 0x11ff Not
	if(var_52_bool == 0) goto Label_4619; // 0x1200 JumpB
	EventDisable(0); // 0x1201 EventDisable
	var_53_bool = 0; var_54_object = Obj(); // 0x1202 PushV
	var_54_object = var_49_object; // 0x1203 Mov
	func_4657(var_54_object); // 0x1204 NEW_2
	EventEnable(0); // 0x1206 EventEnable
	var_67_object = Obj(); // 0x1207 PushV
	var_67_object = var_49_object; // 0x1208 Mov
	func_5904(var_67_object); // 0x1209 NEW_2
	
Label_4619:
	return 2; // 0x120b Return
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	return 0; // 0x1451 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	var_49_bool = GlobalVars[2]; // 0x1176 PushGE
	var_49_bool = 0; // 0x1177 MovB
	GlobalVars[2] = var_49_bool; // 0x1178 PopGE
	func_4477(var_46_float, var_47_float, var_48_int); // 0x117a NEW_2
	return 0; // 0x117c Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_91_bool = 0; // 0x2 PushV
	func_4677(var_91_bool); // 0x3 NEW_2
	var_92_bool = var_91_bool == 0; // 0x5 Not
	if(var_92_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_5633(var_381_bool)
{
	var_383_int = 0; var_384_string = ""; // 0x1602 PushV
	var_384_string = "oob1MladVlad2"; // 0x1603 MovS
	func_4994(var_383_int, var_384_string); // 0x1604 NEW_2
	var_385_int = 0; // 0x1606 PushI
	var_386_bool = var_383_int == var_385_int; // 0x1607 Eq
	if(var_386_bool == 0) goto Label_5643; // 0x1608 JumpB
	var_381_bool = 1; // 0x1609 MovB
	return 0; // 0x160a Return
	
Label_5643:
	var_381_bool = 0; // 0x160b MovB
	return 0; // 0x160c Return
}


func_5120(var_57_object, var_58_string, var_59_string)
{
	var_64_object = Obj(); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x1400 PushV
	var_72_bool = var_57_object == 0; // 0x1401 Not
	if(var_72_bool == 0) goto Label_5124; // 0x1402 JumpB
	return 8; // 0x1403 Return
	
Label_5124:
	GetSceneByName(var_68_object, var_58_string); // 0x1404 Func
	GetLocator(var_59_string, var_69_bool, var_70_cvector, var_71_cvector); // 0x1406 ObjFunc
	var_73_bool = var_69_bool == 0; // 0x1408 Not
	if(var_73_bool == 0) goto Label_5140; // 0x1409 JumpB
	var_74_string = "Teleport location '"; // 0x140a PushS
	var_75_int = var_74_string + var_59_string; // 0x140b Add
	var_76_string = "' not found in scene '"; // 0x140c PushS
	var_77_int = var_75_int + var_76_string; // 0x140d Add
	var_78_int = var_77_int + var_58_string; // 0x140e Add
	var_79_string = "'"; // 0x140f PushS
	var_80_int = var_78_int + var_79_string; // 0x1410 Add
	Trace(var_80_int); // 0x1411 Func
	goto Label_5142; // 0x1413 Jump
	
Label_5142:
	return 8; // 0x1416 Return
	
Label_5140:
	Teleport(var_57_object, var_68_object, var_70_cvector, var_71_cvector); // 0x1414 Func
}


func_4620(var_113_cvector)
{
	var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); // 0x120c PushV
	GetPosition(var_115_cvector); // 0x120d Func
	var_113_cvector = var_115_cvector; // 0x120f Mov
	return 2; // 0x1210 Return
}


func_5645(var_428_bool)
{
	var_430_int = 0; var_431_string = ""; // 0x160e PushV
	var_431_string = "b2MladVladBurahHomeTalk"; // 0x160f MovS
	func_4994(var_430_int, var_431_string); // 0x1610 NEW_2
	var_432_int = 1; // 0x1612 PushI
	var_433_bool = var_430_int == var_432_int; // 0x1613 Eq
	if(var_433_bool == 0) goto Label_5655; // 0x1614 JumpB
	var_428_bool = 1; // 0x1615 MovB
	return 0; // 0x1616 Return
	
Label_5655:
	var_428_bool = 0; // 0x1617 MovB
	return 0; // 0x1618 Return
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
	func_4647(var_140_bool, var_141_cvector); // 0x15 NEW_2
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


func_2575(var_0_bool, var_579_int, var_580_object)
{
	var_582_object = Obj(); var_583_bool = 0; var_584_int = 0; var_585_bool = 0; var_586_object = Obj(); var_587_bool = 0; var_588_int = 0; var_589_bool = 0; // 0xa0f PushV
	var_0_bool = var_580_object; // 0xa10 TMov
	var_590_bool = 0; var_591_object = Obj(); var_592_float = 0; // 0xa11 PushV
	var_591_object = var_580_object; // 0xa12 Mov
	var_592_float = 70.0; // 0xa13 MovF
	func_4682(var_591_object, var_592_float); // 0xa14 NEW_2
	var_593_bool = var_590_bool == 0; // 0xa16 Not
	if(var_593_bool == 0) goto Label_2586; // 0xa17 JumpB
	var_579_int = -2; // 0xa18 MovI
	return 8; // 0xa19 Return
	
Label_2586:
	CreateDialog(var_586_object); // 0xa1a Func
	var_594_int = 0; // 0xa1c PushV
	func_5204(var_594_int); // 0xa1d NEW_2
	SetNPCName(var_594_int); // 0xa1f ObjFunc
	var_595_int = 0; // 0xa21 PushV
	func_5202(var_595_int); // 0xa22 NEW_2
	SetNPCDescription(var_595_int); // 0xa24 ObjFunc
	var_596_string = ""; // 0xa26 PushV
	func_5206(var_596_string); // 0xa27 NEW_2
	SetPhoto(var_596_string); // 0xa29 ObjFunc
	var_597_string = ""; // 0xa2b PushV
	func_5208(var_597_string); // 0xa2c NEW_2
	SetPhoto2(var_597_string); // 0xa2e ObjFunc
	var_598_int = 0; // 0xa30 PushV
	func_5887(var_598_int); // 0xa31 NEW_2
	SetPlayerName(var_598_int); // 0xa33 ObjFunc
	var_588_int = -1; // 0xa35 MovI
	IsOverrideActive(var_587_bool); // 0xa36 Func
	var_599_bool = var_587_bool; // 0xa38 Push
	if(var_599_bool == 0) goto Label_2620; // 0xa39 JumpB
	var_579_int = -2; // 0xa3a MovI
	return 8; // 0xa3b Return
	
Label_2620:
	DoDialog(var_586_object); // 0xa3c Func
	var_600_bool = 0; var_601_object = Obj(); // 0xa3e PushV
	var_602_object = Obj(); // 0xa3f PushV
	func_4960(var_602_object); // 0xa40 NEW_2
	var_601_object = var_602_object; // 0xa41 Mov
	func_4769(var_600_bool, var_601_object); // 0xa43 NEW_2
	var_603_object = Obj(); var_604_object = Obj(); // 0xa45 PushV
	var_603_object = var_580_object; // 0xa46 Mov
	var_604_object = var_586_object; // 0xa47 Mov
	TaskCall(13); // 0xa48 TaskCall
	func_2656(var_605_object, var_606_object, var_607_string, var_608_bool, var_603_object, var_604_object); // 0xa49 NEW_2
	TaskReturn(); // 0xa4a TaskReturn
	IsDialogEnd(var_589_bool); // 0xa4c ObjFunc
	
Label_2638:
	var_633_bool = var_589_bool == 0; // 0xa4e Not
	if(var_633_bool == 0) goto Label_2645; // 0xa4f JumpB
	sync(); // 0xa50 Func
	IsDialogEnd(var_589_bool); // 0xa52 ObjFunc
	goto Label_2638; // 0xa54 Jump
	
Label_2645:
	var_634_object = Obj(); // 0xa55 PushV
	var_634_object = var_580_object; // 0xa56 Mov
	func_4751(); // 0xa57 NEW_2
	StopDialog(var_586_object); // 0xa59 Func
	GetReturnValue(var_588_int); // 0xa5b ObjFunc
	var_579_int = var_588_int; // 0xa5d Mov
	return 8; // 0xa5e Return
}


func_4625(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x1211 PushV
	GetPosition(var_66_cvector); // 0x1212 Func
	GetPosition(var_67_cvector); // 0x1214 ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x1216 Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x1217 Or2
	return 6; // 0x1218 Return
}


func_3601(var_0_bool, var_1_object, var_2_object, var_3_object, var_762_object, var_763_object)
{
	var_0_bool = var_763_object; // 0xe12 TMov
	var_1_object = var_762_object; // 0xe13 TMov
	var_3_object = 0; // 0xe14 TMovB
	var_768_int = 1; // 0xe15 PushI
	if(var_768_int == 0) goto Label_3639; // 0xe16 JumpB
	var_769_string = ""; // 0xe17 PushV
	var_769_string = "Fear"; // 0xe18 MovS
	func_3669(var_763_object, var_769_string); // 0xe19 NEW_2
	var_777_int = 522079; // 0xe1b PushI
	SetMessage(var_777_int); // 0xe1c TObjFunc
	ClearReplies(); // 0xe1e TObjFunc
	var_778_bool = 0; var_779_object = Obj(); // 0xe20 PushV
	var_779_object = var_1_object; // 0xe21 MovT
	func_5585(var_779_object); // 0xe22 NEW_2
	if(var_778_bool == 0) goto Label_3626; // 0xe24 JumpB
	var_784_int = 523566; // 0xe25 PushI
	var_785_int = 24801; // 0xe26 PushI
	var_786_int = 24800; // 0xe27 PushI
	AddReply(var_784_int, var_785_int, var_786_int); // 0xe28 TObjFunc
	
Label_3626:
	var_787_int = 523569; // 0xe2a PushI
	var_788_int = 24804; // 0xe2b PushI
	var_789_int = 24803; // 0xe2c PushI
	AddReply(var_787_int, var_788_int, var_789_int); // 0xe2d TObjFunc
	var_790_int = 522080; // 0xe2f PushI
	var_791_int = -1; // 0xe30 PushI
	var_792_int = 23249; // 0xe31 PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0xe32 TObjFunc
	goto Label_3639; // 0xe34 Jump
	
Label_3639:
	var_793_bool = 0; // 0xe37 PushV
	func_5210(var_793_bool); // 0xe38 NEW_2
	if(var_793_bool == 0) goto Label_3654; // 0xe3a JumpB
	
Label_3643:
	lshWaitForAnimEnd(); // 0xe3b Func
	var_794_object = var_3_object; // 0xe3d PushT
	if(var_794_object == 0) goto Label_3648; // 0xe3e JumpB
	goto Label_3653; // 0xe3f Jump
	
Label_3653:
	goto Label_3668; // 0xe45 Jump
	
Label_3668:
	return 0; // 0xe54 Return
	
Label_3648:
	var_795_string = ""; // 0xe40 PushV
	var_795_string = var_2_object; // 0xe41 MovT
	func_4907(var_795_string); // 0xe42 NEW_2
	goto Label_3643; // 0xe44 Jump
	
Label_3654:
	var_796_string = "all"; // 0xe46 PushS
	var_797_string = "idle"; // 0xe47 PushS
	PlayAnimation(var_796_string, var_797_string); // 0xe48 Func
	
Label_3658:
	WaitForAnimEnd(); // 0xe4a Func
	var_798_object = var_3_object; // 0xe4c PushT
	if(var_798_object == 0) goto Label_3663; // 0xe4d JumpB
	goto Label_3668; // 0xe4e Jump
	
Label_3663:
	var_799_string = "all"; // 0xe4f PushS
	var_800_string = "idle"; // 0xe50 PushS
	PlayAnimation(var_799_string, var_800_string); // 0xe51 Func
	goto Label_3658; // 0xe53 Jump
}


func_5144(var_72_float)
{
	var_73_float = 0; var_74_float = 0; // 0x1418 PushV
	GetGameTime(var_74_float); // 0x1419 Func
	var_72_float = var_74_float; // 0x141b Mov
	return 2; // 0x141c Return
}


func_5657(var_469_bool)
{
	var_471_int = 0; var_472_string = ""; // 0x161a PushV
	var_472_string = "oob2MladVlad1"; // 0x161b MovS
	func_4994(var_471_int, var_472_string); // 0x161c NEW_2
	var_473_int = 0; // 0x161e PushI
	var_474_bool = var_471_int == var_473_int; // 0x161f Eq
	if(var_474_bool == 0) goto Label_5667; // 0x1620 JumpB
	var_469_bool = 1; // 0x1621 MovB
	return 0; // 0x1622 Return
	
Label_5667:
	var_469_bool = 0; // 0x1623 MovB
	return 0; // 0x1624 Return
}


func_4633(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x1219 PushV
	var_63_string = "player"; // 0x121a PushS
	FindActor(var_62_object, var_63_string); // 0x121b Func
	var_60_object = var_62_object; // 0x121d Mov
	return 2; // 0x121e Return
}


func_1049(var_0_bool, var_1_object, var_2_object, var_3_object, var_421_object, var_422_object)
{
	var_0_bool = var_422_object; // 0x41a TMov
	var_1_object = var_421_object; // 0x41b TMov
	var_3_object = 0; // 0x41c TMovB
	var_427_int = 1; // 0x41d PushI
	if(var_427_int == 0) goto Label_1122; // 0x41e JumpB
	var_428_bool = 0; var_429_object = Obj(); // 0x41f PushV
	var_429_object = var_1_object; // 0x420 MovT
	func_5645(var_429_object); // 0x421 NEW_2
	var_434_bool = var_428_bool == 0; // 0x423 Not
	if(var_434_bool == 0) goto Label_1086; // 0x424 JumpB
	var_435_object = Obj(); var_436_object = Obj(); // 0x425 PushV
	var_435_object = var_1_object; // 0x426 MovT
	var_436_object = var_0_bool; // 0x427 MovT
	func_5459(); // 0x428 NEW_2
	var_443_string = ""; // 0x42a PushV
	var_443_string = "Neutral"; // 0x42b MovS
	func_1152(var_422_object, var_443_string); // 0x42c NEW_2
	var_451_int = 520000; // 0x42e PushI
	SetMessage(var_451_int); // 0x42f TObjFunc
	ClearReplies(); // 0x431 TObjFunc
	var_452_int = 520001; // 0x433 PushI
	var_453_int = 21183; // 0x434 PushI
	var_454_int = 21182; // 0x435 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x436 TObjFunc
	var_455_int = 520017; // 0x438 PushI
	var_456_int = 21183; // 0x439 PushI
	var_457_int = 21199; // 0x43a PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x43b TObjFunc
	goto Label_1122; // 0x43d Jump
	
Label_1122:
	var_458_bool = 0; // 0x462 PushV
	func_5210(var_458_bool); // 0x463 NEW_2
	if(var_458_bool == 0) goto Label_1137; // 0x465 JumpB
	
Label_1126:
	lshWaitForAnimEnd(); // 0x466 Func
	var_459_object = var_3_object; // 0x468 PushT
	if(var_459_object == 0) goto Label_1131; // 0x469 JumpB
	goto Label_1136; // 0x46a Jump
	
Label_1136:
	goto Label_1151; // 0x470 Jump
	
Label_1151:
	return 0; // 0x47f Return
	
Label_1131:
	var_460_string = ""; // 0x46b PushV
	var_460_string = var_2_object; // 0x46c MovT
	func_4907(var_460_string); // 0x46d NEW_2
	goto Label_1126; // 0x46f Jump
	
Label_1137:
	var_461_string = "all"; // 0x471 PushS
	var_462_string = "idle"; // 0x472 PushS
	PlayAnimation(var_461_string, var_462_string); // 0x473 Func
	
Label_1141:
	WaitForAnimEnd(); // 0x475 Func
	var_463_object = var_3_object; // 0x477 PushT
	if(var_463_object == 0) goto Label_1146; // 0x478 JumpB
	goto Label_1151; // 0x479 Jump
	
Label_1146:
	var_464_string = "all"; // 0x47a PushS
	var_465_string = "idle"; // 0x47b PushS
	PlayAnimation(var_464_string, var_465_string); // 0x47c Func
	goto Label_1141; // 0x47e Jump
	
Label_1086:
	var_466_string = ""; // 0x43e PushV
	var_466_string = "Neutral"; // 0x43f MovS
	func_1152(var_422_object, var_466_string); // 0x440 NEW_2
	var_467_int = 520019; // 0x442 PushI
	SetMessage(var_467_int); // 0x443 TObjFunc
	ClearReplies(); // 0x445 TObjFunc
	var_468_bool = 0; // 0x447 PushV
	var_468_bool = 0; // 0x448 MovB
	var_469_bool = 0; var_470_object = Obj(); // 0x449 PushV
	var_470_object = var_1_object; // 0x44a MovT
	func_5657(var_470_object); // 0x44b NEW_2
	if(var_469_bool == 0) goto Label_1108; // 0x44d JumpB
	var_475_bool = 0; var_476_object = Obj(); // 0x44e PushV
	var_476_object = var_1_object; // 0x44f MovT
	func_5645(var_476_object); // 0x450 NEW_2
	if(var_475_bool == 0) goto Label_1108; // 0x452 JumpB
	var_468_bool = 1; // 0x453 MovB
	
Label_1108:
	if(var_468_bool == 0) goto Label_1114; // 0x454 JumpB
	var_477_int = 520020; // 0x455 PushI
	var_478_int = 21205; // 0x456 PushI
	var_479_int = 21204; // 0x457 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x458 TObjFunc
	
Label_1114:
	var_480_int = 520030; // 0x45a PushI
	var_481_int = -1; // 0x45b PushI
	var_482_int = 21214; // 0x45c PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x45d TObjFunc
	goto Label_1122; // 0x45f Jump
}


func_5149(var_197_int)
{
	var_198_float = 0; var_199_float = 0; // 0x141d PushV
	GetGameTime(var_199_float); // 0x141e Func
	var_200_int = 1; // 0x1420 PushI
	var_201_int = 0; // 0x1421 PushV
	var_202_int = 24; // 0x1422 PushI
	var_201_int = var_199_float / var_199_float; // 0x1423 Div2
	var_197_int = var_200_int + var_201_int; // 0x1424 Add2
	return 2; // 0x1425 Return
}


func_4640(var_136_string, var_137_int)
{
	var_138_int = 0; var_139_int = 0; // 0x1220 PushV
	GetProperty(var_136_string, var_139_int); // 0x1221 ObjFunc
	var_140_int = var_139_int + var_137_int; // 0x1223 Add
	SetProperty(var_136_string, var_140_int); // 0x1224 ObjFunc
	return 2; // 0x1226 Return
}


func_5669(var_518_bool)
{
	var_520_int = 0; var_521_string = ""; // 0x1626 PushV
	var_521_string = "oob5MladVlad1"; // 0x1627 MovS
	func_4994(var_520_int, var_521_string); // 0x1628 NEW_2
	var_522_int = 0; // 0x162a PushI
	var_523_bool = var_520_int == var_522_int; // 0x162b Eq
	if(var_523_bool == 0) goto Label_5679; // 0x162c JumpB
	var_518_bool = 1; // 0x162d MovB
	return 0; // 0x162e Return
	
Label_5679:
	var_518_bool = 0; // 0x162f MovB
	return 0; // 0x1630 Return
}


func_5158(var_296_bool, var_297_int)
{
	var_298_int = 0; // 0x1427 PushV
	func_5149(var_298_int); // 0x1428 NEW_2
	var_296_bool = var_298_int == var_297_int; // 0x142a Eq2
	return 0; // 0x142b Return
}


func_4647(var_140_bool, var_141_cvector)
{
	var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_bool = 0; // 0x1227 PushV
	GetPosition(var_145_cvector); // 0x1228 Func
	var_146_cvector = var_141_cvector - var_145_cvector; // 0x122a Sub2
	var_148_float = GetByIndex(var_146_cvector, 0); // 0x122b PushE
	var_149_float = GetByIndex(var_146_cvector, 2); // 0x122c PushE
	Rotate(var_148_float, var_149_float, var_147_bool); // 0x122d Func
	var_140_bool = var_147_bool; // 0x122f Mov
	return 6; // 0x1230 Return
}


func_5164(var_201_string, var_202_int)
{
	var_203_string = ""; var_204_string = ""; // 0x142c PushV
	var_204_string = "idle"; // 0x142d MovS
	var_205_int = var_202_int; // 0x142e Push
	if(var_205_int == 0) goto Label_5169; // 0x142f JumpB
	var_204_string = var_204_string + var_202_int; // 0x1430 Add2
	
Label_5169:
	var_201_string = var_204_string; // 0x1431 Mov
	return 2; // 0x1432 Return
}


func_4657(var_53_bool)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x1231 PushV
	GetPosition(var_56_cvector); // 0x1232 ObjFunc
	var_57_bool = 0; var_58_cvector = CVector(0,0,0); // 0x1234 PushV
	var_58_cvector = var_56_cvector; // 0x1235 Mov
	func_4647(var_57_bool, var_58_cvector); // 0x1236 NEW_2
	var_53_bool = var_57_bool; // 0x1237 Mov
	return 2; // 0x1239 Return
}


func_5681(var_554_bool)
{
	var_556_int = 0; var_557_string = ""; // 0x1632 PushV
	var_557_string = "b5q02"; // 0x1633 MovS
	func_4994(var_556_int, var_557_string); // 0x1634 NEW_2
	var_558_int = 0; // 0x1636 PushI
	var_559_bool = var_556_int == var_558_int; // 0x1637 Eq
	if(var_559_bool == 0) goto Label_5691; // 0x1638 JumpB
	var_554_bool = 1; // 0x1639 MovB
	return 0; // 0x163a Return
	
Label_5691:
	var_554_bool = 0; // 0x163b MovB
	return 0; // 0x163c Return
}


func_5171(var_195_int)
{
	var_196_int = 0; var_197_bool = 0; var_198_int = 0; var_199_bool = 0; // 0x1433 PushV
	var_198_int = 0; // 0x1434 MovI
	
Label_5173:
	var_200_string = "all"; // 0x1435 PushS
	var_201_string = ""; var_202_int = 0; // 0x1436 PushV
	var_202_int = var_198_int; // 0x1437 Mov
	func_5164(var_201_string, var_202_int); // 0x1438 NEW_2
	HasAnimation(var_199_bool, var_200_string, var_201_string); // 0x143a Func
	var_206_bool = var_199_bool == 0; // 0x143c Not
	if(var_206_bool == 0) goto Label_5183; // 0x143d JumpB
	goto Label_5186; // 0x143e Jump
	
Label_5186:
	var_195_int = var_198_int; // 0x1442 Mov
	return 4; // 0x1443 Return
	
Label_5183:
	var_207_int = 1; // 0x143f PushI
	var_198_int = var_198_int + var_207_int; // 0x1440 Add2
	goto Label_5173; // 0x1441 Jump
}


func_4152(var_2_object, var_839_string)
{
	var_840_bool = 0; // 0x1039 PushV
	func_5210(var_840_bool); // 0x103a NEW_2
	var_841_bool = var_840_bool == 0; // 0x103c Not
	if(var_841_bool == 0) goto Label_4159; // 0x103d JumpB
	return 0; // 0x103e Return
	
Label_4159:
	var_842_bool = var_839_string == var_2_object; // 0x103f Eq
	if(var_842_bool == 0) goto Label_4162; // 0x1040 JumpB
	return 0; // 0x1041 Return
	
Label_4162:
	var_843_string = ""; var_844_bool = 0; // 0x1042 PushV
	var_843_string = var_839_string; // 0x1043 Mov
	var_845_string = ""; // 0x1044 PushS
	var_846_bool = var_839_string == var_845_string; // 0x1045 Eq
	if(var_846_bool == 0) goto Label_4169; // 0x1046 JumpB
	var_844_bool = 0; // 0x1047 MovB
	goto Label_4170; // 0x1048 Jump
	
Label_4170:
	func_4923(var_843_string, var_844_bool); // 0x104a NEW_2
	var_2_object = var_839_string; // 0x104c TMov
	return 0; // 0x104d Return
	
Label_4169:
	var_844_bool = 1; // 0x1049 MovB
}


func_4666()
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x123a PushV
	GetPosition(var_83_cvector); // 0x123b ObjFunc
	GetPosition(var_84_cvector); // 0x123d Func
	var_85_cvector = var_83_cvector - var_84_cvector; // 0x123f Sub2
	var_86_float = GetByIndex(var_85_cvector, 0); // 0x1240 PushE
	var_87_float = GetByIndex(var_85_cvector, 2); // 0x1241 PushE
	RotateAsync(var_86_float, var_87_float); // 0x1242 Func
	return 6; // 0x1244 Return
}


func_5693(var_563_bool)
{
	var_565_int = 0; var_566_string = ""; // 0x163e PushV
	var_566_string = "b5q02"; // 0x163f MovS
	func_4994(var_565_int, var_566_string); // 0x1640 NEW_2
	var_567_int = 2; // 0x1642 PushI
	var_568_bool = var_565_int == var_567_int; // 0x1643 Eq
	if(var_568_bool == 0) goto Label_5703; // 0x1644 JumpB
	var_563_bool = 1; // 0x1645 MovB
	return 0; // 0x1646 Return
	
Label_5703:
	var_563_bool = 0; // 0x1647 MovB
	return 0; // 0x1648 Return
}


func_5188(var_77_string, var_78_int)
{
	var_79_int = 0; // 0x1445 PushI
	var_80_bool = var_78_int == var_79_int; // 0x1446 Eq
	if(var_80_bool == 0) goto Label_5196; // 0x1447 JumpB
	var_81_string = "pt_"; // 0x1448 PushS
	var_82_string = GlobalVars[0]; // 0x1449 PushGE
	var_77_string = var_81_string + var_82_string; // 0x144a Add2
	goto Label_5200; // 0x144b Jump
	
Label_5200:
	return 0; // 0x1450 Return
	
Label_5196:
	var_83_string = "pt_"; // 0x144c PushS
	var_84_string = GlobalVars[0]; // 0x144d PushGE
	var_85_int = var_83_string + var_84_string; // 0x144e Add
	var_77_string = var_85_int + var_78_int; // 0x144f Add2
}


func_4677(var_87_bool)
{
	var_88_bool = 0; var_89_bool = 0; // 0x1245 PushV
	IsLoaded(var_89_bool); // 0x1246 Func
	var_87_bool = var_89_bool; // 0x1248 Mov
	return 2; // 0x1249 Return
}


func_5705()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1649 PushV
	var_67_int = 315; // 0x164a PushI
	var_68_int = 1; // 0x164b PushI
	var_69_int = 522057; // 0x164c PushI
	CreateDiaryEntry(var_66_object, var_67_int, var_68_int, var_69_int); // 0x164d Func
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; // 0x164f PushV
	var_71_object = var_66_object; // 0x1650 Mov
	var_72_int = 313; // 0x1651 MovI
	func_5809(var_70_bool, var_71_object, var_72_int); // 0x1652 NEW_2
	return 2; // 0x1654 Return
}


func_4682(var_81_bool, var_83_float)
{
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_bool = 0; var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_bool = 0; // 0x124a PushV
	GetPosition(var_94_cvector); // 0x124b ObjFunc
	GetEyesHeight(var_93_float); // 0x124d ObjFunc
	var_102_float = GetByIndex(var_94_cvector, 1); // 0x124f PushE
	var_102_float = var_102_float + var_93_float; // 0x1250 Add2
	SetByIndex(var_94_cvector, 1) = var_102_float; // 0x1251 PopE
	GetPosition(var_95_cvector); // 0x1252 Func
	GetEyesHeight(var_93_float); // 0x1254 Func
	var_103_float = GetByIndex(var_95_cvector, 1); // 0x1256 PushE
	var_103_float = var_103_float + var_93_float; // 0x1257 Add2
	SetByIndex(var_95_cvector, 1) = var_103_float; // 0x1258 PopE
	var_96_cvector = var_94_cvector - var_95_cvector; // 0x1259 Sub2
	var_104_float = GetByIndex(var_96_cvector, 1); // 0x125a PushE
	var_104_float = 0; // 0x125b MovI
	SetByIndex(var_96_cvector, 1) = var_104_float; // 0x125c PopE
	var_105_int = var_96_cvector | var_96_cvector; // 0x125d Or
	var_106_float = sqrt(var_105_int); // 0x125e Sqrt
	var_96_cvector = var_96_cvector / var_96_cvector; // 0x125f Div2
	var_97_cvector = -var_96_cvector; // 0x1260 Neg2
	var_107_float = var_96_cvector * var_83_float; // 0x1261 Mult
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); // 0x1262 PushV
	var_110_cvector = CVector(0.0, 1.0, 0.0); // 0x1263 PushVec
	var_109_cvector = var_97_cvector ^ var_110_cvector; // 0x1264 Xor2
	func_4966(var_108_cvector, var_109_cvector); // 0x1265 NEW_2
	var_116_int = 25; // 0x1267 PushI
	var_117_float = var_108_cvector * var_116_int; // 0x1268 Mult
	var_118_int = var_107_float + var_117_float; // 0x1269 Add
	var_119_cvector = CVector(0.0, 10.0, 0.0); // 0x126a PushVec
	var_98_cvector = var_118_int - var_119_cvector; // 0x126b Sub2
	var_99_cvector = var_95_cvector + var_98_cvector; // 0x126c Add2
	IsOverrideActive(var_100_bool); // 0x126d Func
	var_120_bool = var_100_bool; // 0x126f Push
	if(var_120_bool == 0) goto Label_4723; // 0x1270 JumpB
	var_81_bool = 0; // 0x1271 MovB
	return 18; // 0x1272 Return
	
Label_4723:
	StopWorld(); // 0x1273 Func
	var_121_bool = 1; // 0x1275 PushB
	CameraTransit(var_99_cvector, var_97_cvector, var_121_bool); // 0x1276 Func
	var_122_float = GetByIndex(var_98_cvector, 0); // 0x1278 PushE
	var_123_float = GetByIndex(var_98_cvector, 2); // 0x1279 PushE
	Rotate(var_122_float, var_123_float); // 0x127a Func
	var_124_bool = 0; // 0x127c PushV
	func_5210(var_124_bool); // 0x127d NEW_2
	if(var_124_bool == 0) goto Label_4737; // 0x127f JumpB
	goto Label_4745; // 0x1280 Jump
	
Label_4745:
	CameraWaitForPlayFinish(); // 0x1289 Func
	ResumeWorld(); // 0x128b Func
	var_81_bool = 1; // 0x128d MovB
	return 18; // 0x128e Return
	
Label_4737:
	var_125_string = "head"; // 0x1281 PushS
	HasAnimationTrack(var_101_bool, var_125_string); // 0x1282 Func
	var_126_bool = var_101_bool; // 0x1284 Push
	if(var_126_bool == 0) goto Label_4745; // 0x1285 JumpB
	var_127_string = "head"; // 0x1286 PushS
	LookAsyncCamera(var_127_string); // 0x1287 Func
}


func_5202(var_130_int)
{
	var_130_int = 515547; // 0x1452 MovI
	return 0; // 0x1453 Return
}


func_5204(var_129_int)
{
	var_129_int = 502872; // 0x1454 MovI
	return 0; // 0x1455 Return
}


func_3669(var_2_object, var_769_string)
{
	var_770_bool = 0; // 0xe56 PushV
	func_5210(var_770_bool); // 0xe57 NEW_2
	var_771_bool = var_770_bool == 0; // 0xe59 Not
	if(var_771_bool == 0) goto Label_3676; // 0xe5a JumpB
	return 0; // 0xe5b Return
	
Label_3676:
	var_772_bool = var_769_string == var_2_object; // 0xe5c Eq
	if(var_772_bool == 0) goto Label_3679; // 0xe5d JumpB
	return 0; // 0xe5e Return
	
Label_3679:
	var_773_string = ""; var_774_bool = 0; // 0xe5f PushV
	var_773_string = var_769_string; // 0xe60 Mov
	var_775_string = ""; // 0xe61 PushS
	var_776_bool = var_769_string == var_775_string; // 0xe62 Eq
	if(var_776_bool == 0) goto Label_3686; // 0xe63 JumpB
	var_774_bool = 0; // 0xe64 MovB
	goto Label_3687; // 0xe65 Jump
	
Label_3687:
	func_4923(var_773_string, var_774_bool); // 0xe67 NEW_2
	var_2_object = var_769_string; // 0xe69 TMov
	return 0; // 0xe6a Return
	
Label_3686:
	var_774_bool = 1; // 0xe66 MovB
}


func_5206(var_131_string)
{
	var_131_string = "ui/NPC_MladVlad.png"; // 0x1456 MovS
	return 0; // 0x1457 Return
}


func_5718()
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x1656 PushV
	var_89_int = 249; // 0x1657 PushI
	var_90_int = 2; // 0x1658 PushI
	var_91_int = 520665; // 0x1659 PushI
	CreateDiaryEntry(var_88_object, var_89_int, var_90_int, var_91_int); // 0x165a Func
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; // 0x165c PushV
	var_93_object = var_88_object; // 0x165d Mov
	var_94_int = -1; // 0x165e MovI
	func_5809(var_92_bool, var_93_object, var_94_int); // 0x165f NEW_2
	return 2; // 0x1661 Return
}


func_5208(var_132_string)
{
	var_132_string = "ui/NPC_MladVlad_b.png"; // 0x1458 MovS
	return 0; // 0x1459 Return
}


func_5210(var_124_bool)
{
	var_124_bool = 1; // 0x145a MovB
	return 0; // 0x145b Return
}


func_5212()
{
	var_77_object = Obj(); var_78_string = ""; var_79_float = 0; // 0x145d PushV
	var_80_object = Obj(); // 0x145e PushV
	func_5837(var_80_object); // 0x145f NEW_2
	var_77_object = var_80_object; // 0x1460 Mov
	var_78_string = "pt_map_burah_home"; // 0x1462 MovS
	var_79_float = 2; // 0x1463 MovI
	func_5854(var_77_object, var_78_string, var_79_float); // 0x1464 NEW_2
	var_100_object = Obj(); // 0x1466 PushV
	func_5837(var_100_object); // 0x1467 NEW_2
	ShowMap(var_100_object); // 0x1469 ObjFunc
	return 0; // 0x146b Return
}


func_2656(var_0_bool, var_1_object, var_2_object, var_3_object, var_603_object, var_604_object)
{
	var_0_bool = var_604_object; // 0xa61 TMov
	var_1_object = var_603_object; // 0xa62 TMov
	var_3_object = 0; // 0xa63 TMovB
	var_609_int = 1; // 0xa64 PushI
	if(var_609_int == 0) goto Label_2684; // 0xa65 JumpB
	var_610_string = ""; // 0xa66 PushV
	var_610_string = "Untrust"; // 0xa67 MovS
	func_2714(var_604_object, var_610_string); // 0xa68 NEW_2
	var_618_int = 521202; // 0xa6a PushI
	SetMessage(var_618_int); // 0xa6b TObjFunc
	ClearReplies(); // 0xa6d TObjFunc
	var_619_int = 521203; // 0xa6f PushI
	var_620_int = 22402; // 0xa70 PushI
	var_621_int = 22400; // 0xa71 PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0xa72 TObjFunc
	var_622_int = 521204; // 0xa74 PushI
	var_623_int = -1; // 0xa75 PushI
	var_624_int = 22401; // 0xa76 PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0xa77 TObjFunc
	goto Label_2684; // 0xa79 Jump
	
Label_2684:
	var_625_bool = 0; // 0xa7c PushV
	func_5210(var_625_bool); // 0xa7d NEW_2
	if(var_625_bool == 0) goto Label_2699; // 0xa7f JumpB
	
Label_2688:
	lshWaitForAnimEnd(); // 0xa80 Func
	var_626_object = var_3_object; // 0xa82 PushT
	if(var_626_object == 0) goto Label_2693; // 0xa83 JumpB
	goto Label_2698; // 0xa84 Jump
	
Label_2698:
	goto Label_2713; // 0xa8a Jump
	
Label_2713:
	return 0; // 0xa99 Return
	
Label_2693:
	var_627_string = ""; // 0xa85 PushV
	var_627_string = var_2_object; // 0xa86 MovT
	func_4907(var_627_string); // 0xa87 NEW_2
	goto Label_2688; // 0xa89 Jump
	
Label_2699:
	var_628_string = "all"; // 0xa8b PushS
	var_629_string = "idle"; // 0xa8c PushS
	PlayAnimation(var_628_string, var_629_string); // 0xa8d Func
	
Label_2703:
	WaitForAnimEnd(); // 0xa8f Func
	var_630_object = var_3_object; // 0xa91 PushT
	if(var_630_object == 0) goto Label_2708; // 0xa92 JumpB
	goto Label_2713; // 0xa93 Jump
	
Label_2708:
	var_631_string = "all"; // 0xa94 PushS
	var_632_string = "idle"; // 0xa95 PushS
	PlayAnimation(var_631_string, var_632_string); // 0xa96 Func
	goto Label_2703; // 0xa98 Jump
}


func_5731()
{
	var_188_object = Obj(); var_189_object = Obj(); // 0x1663 PushV
	var_190_int = 252; // 0x1664 PushI
	var_191_int = 2; // 0x1665 PushI
	var_192_int = 520668; // 0x1666 PushI
	CreateDiaryEntry(var_189_object, var_190_int, var_191_int, var_192_int); // 0x1667 Func
	var_193_bool = 0; var_194_object = Obj(); var_195_int = 0; // 0x1669 PushV
	var_194_object = var_189_object; // 0x166a Mov
	var_195_int = 249; // 0x166b MovI
	func_5809(var_193_bool, var_194_object, var_195_int); // 0x166c NEW_2
	return 2; // 0x166e Return
}


func_1636(var_0_bool, var_487_int, var_488_object)
{
	var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_bool = 0; var_494_object = Obj(); var_495_bool = 0; var_496_int = 0; var_497_bool = 0; // 0x664 PushV
	var_0_bool = var_488_object; // 0x665 TMov
	var_498_bool = 0; var_499_object = Obj(); var_500_float = 0; // 0x666 PushV
	var_499_object = var_488_object; // 0x667 Mov
	var_500_float = 70.0; // 0x668 MovF
	func_4682(var_499_object, var_500_float); // 0x669 NEW_2
	var_501_bool = var_498_bool == 0; // 0x66b Not
	if(var_501_bool == 0) goto Label_1647; // 0x66c JumpB
	var_487_int = -2; // 0x66d MovI
	return 8; // 0x66e Return
	
Label_1647:
	CreateDialog(var_494_object); // 0x66f Func
	var_502_int = 0; // 0x671 PushV
	func_5204(var_502_int); // 0x672 NEW_2
	SetNPCName(var_502_int); // 0x674 ObjFunc
	var_503_int = 0; // 0x676 PushV
	func_5202(var_503_int); // 0x677 NEW_2
	SetNPCDescription(var_503_int); // 0x679 ObjFunc
	var_504_string = ""; // 0x67b PushV
	func_5206(var_504_string); // 0x67c NEW_2
	SetPhoto(var_504_string); // 0x67e ObjFunc
	var_505_string = ""; // 0x680 PushV
	func_5208(var_505_string); // 0x681 NEW_2
	SetPhoto2(var_505_string); // 0x683 ObjFunc
	var_506_int = 0; // 0x685 PushV
	func_5887(var_506_int); // 0x686 NEW_2
	SetPlayerName(var_506_int); // 0x688 ObjFunc
	var_496_int = -1; // 0x68a MovI
	IsOverrideActive(var_495_bool); // 0x68b Func
	var_507_bool = var_495_bool; // 0x68d Push
	if(var_507_bool == 0) goto Label_1681; // 0x68e JumpB
	var_487_int = -2; // 0x68f MovI
	return 8; // 0x690 Return
	
Label_1681:
	DoDialog(var_494_object); // 0x691 Func
	var_508_bool = 0; var_509_object = Obj(); // 0x693 PushV
	var_510_object = Obj(); // 0x694 PushV
	func_4960(var_510_object); // 0x695 NEW_2
	var_509_object = var_510_object; // 0x696 Mov
	func_4769(var_508_bool, var_509_object); // 0x698 NEW_2
	var_511_object = Obj(); var_512_object = Obj(); // 0x69a PushV
	var_511_object = var_488_object; // 0x69b Mov
	var_512_object = var_494_object; // 0x69c Mov
	TaskCall(9); // 0x69d TaskCall
	func_1717(var_513_object, var_514_object, var_515_string, var_516_bool, var_511_object, var_512_object); // 0x69e NEW_2
	TaskReturn(); // 0x69f TaskReturn
	IsDialogEnd(var_497_bool); // 0x6a1 ObjFunc
	
Label_1699:
	var_575_bool = var_497_bool == 0; // 0x6a3 Not
	if(var_575_bool == 0) goto Label_1706; // 0x6a4 JumpB
	sync(); // 0x6a5 Func
	IsDialogEnd(var_497_bool); // 0x6a7 ObjFunc
	goto Label_1699; // 0x6a9 Jump
	
Label_1706:
	var_576_object = Obj(); // 0x6aa PushV
	var_576_object = var_488_object; // 0x6ab Mov
	func_4751(); // 0x6ac NEW_2
	StopDialog(var_494_object); // 0x6ae Func
	GetReturnValue(var_496_int); // 0x6b0 ObjFunc
	var_487_int = var_496_int; // 0x6b2 Mov
	return 8; // 0x6b3 Return
}


func_5228()
{
	var_369_string = "oob1MladVlad1"; // 0x146d PushS
	var_370_int = 1; // 0x146e PushI
	SetVariable(var_369_string, var_370_int); // 0x146f Func
	return 0; // 0x1471 Return
}


func_5744()
{
	var_110_object = Obj(); var_111_object = Obj(); // 0x1670 PushV
	var_112_int = 250; // 0x1671 PushI
	var_113_int = 2; // 0x1672 PushI
	var_114_int = 520666; // 0x1673 PushI
	CreateDiaryEntry(var_111_object, var_112_int, var_113_int, var_114_int); // 0x1674 Func
	var_115_bool = 0; var_116_object = Obj(); var_117_int = 0; // 0x1676 PushV
	var_116_object = var_111_object; // 0x1677 Mov
	var_117_int = 249; // 0x1678 MovI
	func_5809(var_115_bool, var_116_object, var_117_int); // 0x1679 NEW_2
	return 2; // 0x167b Return
}


func_5234()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x1472 PushV
	var_65_object = Obj(); // 0x1473 PushV
	func_5837(var_65_object); // 0x1474 NEW_2
	var_64_object = var_65_object; // 0x1475 Mov
	var_72_string = "b1MladVladGotoGrif"; // 0x1477 PushS
	var_73_string = "pt_map_grif"; // 0x1478 PushS
	var_74_int = 3; // 0x1479 PushI
	var_75_int = 520047; // 0x147a PushI
	var_76_float = 0; // 0x147b PushV
	func_5144(var_76_float); // 0x147c NEW_2
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x147e ObjFunc
	return 2; // 0x1480 Return
}


func_5757()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x167d PushV
	var_61_int = 293; // 0x167e PushI
	var_62_int = 2; // 0x167f PushI
	var_63_int = 521491; // 0x1680 PushI
	CreateDiaryEntry(var_60_object, var_61_int, var_62_int, var_63_int); // 0x1681 Func
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; // 0x1683 PushV
	var_65_object = var_60_object; // 0x1684 Mov
	var_66_int = -1; // 0x1685 MovI
	func_5809(var_64_bool, var_65_object, var_66_int); // 0x1686 NEW_2
	return 2; // 0x1688 Return
}


func_1152(var_2_object, var_443_string)
{
	var_444_bool = 0; // 0x481 PushV
	func_5210(var_444_bool); // 0x482 NEW_2
	var_445_bool = var_444_bool == 0; // 0x484 Not
	if(var_445_bool == 0) goto Label_1159; // 0x485 JumpB
	return 0; // 0x486 Return
	
Label_1159:
	var_446_bool = var_443_string == var_2_object; // 0x487 Eq
	if(var_446_bool == 0) goto Label_1162; // 0x488 JumpB
	return 0; // 0x489 Return
	
Label_1162:
	var_447_string = ""; var_448_bool = 0; // 0x48a PushV
	var_447_string = var_443_string; // 0x48b Mov
	var_449_string = ""; // 0x48c PushS
	var_450_bool = var_443_string == var_449_string; // 0x48d Eq
	if(var_450_bool == 0) goto Label_1169; // 0x48e JumpB
	var_448_bool = 0; // 0x48f MovB
	goto Label_1170; // 0x490 Jump
	
Label_1170:
	func_4923(var_447_string, var_448_bool); // 0x492 NEW_2
	var_2_object = var_443_string; // 0x494 TMov
	return 0; // 0x495 Return
	
Label_1169:
	var_448_bool = 1; // 0x491 MovB
}


func_5250()
{
	var_57_string = "oob1MladVlad2"; // 0x1483 PushS
	var_58_int = 1; // 0x1484 PushI
	SetVariable(var_57_string, var_58_int); // 0x1485 Func
	return 0; // 0x1487 Return
}


func_5256()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x1488 PushV
	var_59_string = "b2MladVladBurahHomeTalk"; // 0x1489 PushS
	var_60_int = 1; // 0x148a PushI
	SetVariable(var_59_string, var_60_int); // 0x148b Func
	var_61_object = Obj(); // 0x148d PushV
	func_5837(var_61_object); // 0x148e NEW_2
	var_58_object = var_61_object; // 0x148f Mov
	var_68_string = "b2BurahHome"; // 0x1491 PushS
	var_69_string = "pt_map_burah_home"; // 0x1492 PushS
	var_70_int = 3; // 0x1493 PushI
	var_71_int = 520460; // 0x1494 PushI
	var_72_float = 0; // 0x1495 PushV
	func_5144(var_72_float); // 0x1496 NEW_2
	AddMark(var_68_string, var_69_string, var_70_int, var_71_int, var_72_float); // 0x1498 ObjFunc
	return 2; // 0x149a Return
}


func_5770()
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x168a PushV
	var_110_int = 296; // 0x168b PushI
	var_111_int = 2; // 0x168c PushI
	var_112_int = 521494; // 0x168d PushI
	CreateDiaryEntry(var_109_object, var_110_int, var_111_int, var_112_int); // 0x168e Func
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0; // 0x1690 PushV
	var_114_object = var_109_object; // 0x1691 Mov
	var_115_int = 293; // 0x1692 MovI
	func_5809(var_113_bool, var_114_object, var_115_int); // 0x1693 NEW_2
	return 2; // 0x1695 Return
}


func_4751()
{
	var_288_bool = 0; var_289_bool = 0; // 0x128f PushV
	var_290_bool = 1; // 0x1290 PushB
	CameraSwitchToNormal(var_290_bool); // 0x1291 Func
	var_291_bool = 0; // 0x1293 PushV
	func_5210(var_291_bool); // 0x1294 NEW_2
	if(var_291_bool == 0) goto Label_4760; // 0x1296 JumpB
	goto Label_4768; // 0x1297 Jump
	
Label_4768:
	return 2; // 0x12a0 Return
	
Label_4760:
	var_292_string = "head"; // 0x1298 PushS
	HasAnimationTrack(var_289_bool, var_292_string); // 0x1299 Func
	var_293_bool = var_289_bool; // 0x129b Push
	if(var_293_bool == 0) goto Label_4768; // 0x129c JumpB
	var_294_string = "head"; // 0x129d PushS
	UnlookAsync(var_294_string); // 0x129e Func
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
	func_4666(); // 0x9c NEW_2
	var_88_int = 6; // 0x9e PushI
	Sleep(var_88_int); // 0x9f Func
	return 2; // 0xa1 Return
}


func_5783()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x1697 PushV
	var_84_int = 294; // 0x1698 PushI
	var_85_int = 2; // 0x1699 PushI
	var_86_int = 521492; // 0x169a PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x169b Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x169d PushV
	var_88_object = var_83_object; // 0x169e Mov
	var_89_int = 293; // 0x169f MovI
	func_5809(var_87_bool, var_88_object, var_89_int); // 0x16a0 NEW_2
	return 2; // 0x16a2 Return
}


func_2714(var_2_object, var_610_string)
{
	var_611_bool = 0; // 0xa9b PushV
	func_5210(var_611_bool); // 0xa9c NEW_2
	var_612_bool = var_611_bool == 0; // 0xa9e Not
	if(var_612_bool == 0) goto Label_2721; // 0xa9f JumpB
	return 0; // 0xaa0 Return
	
Label_2721:
	var_613_bool = var_610_string == var_2_object; // 0xaa1 Eq
	if(var_613_bool == 0) goto Label_2724; // 0xaa2 JumpB
	return 0; // 0xaa3 Return
	
Label_2724:
	var_614_string = ""; var_615_bool = 0; // 0xaa4 PushV
	var_614_string = var_610_string; // 0xaa5 Mov
	var_616_string = ""; // 0xaa6 PushS
	var_617_bool = var_610_string == var_616_string; // 0xaa7 Eq
	if(var_617_bool == 0) goto Label_2731; // 0xaa8 JumpB
	var_615_bool = 0; // 0xaa9 MovB
	goto Label_2732; // 0xaaa Jump
	
Label_2732:
	func_4923(var_614_string, var_615_bool); // 0xaac NEW_2
	var_2_object = var_610_string; // 0xaae TMov
	return 0; // 0xaaf Return
	
Label_2731:
	var_615_bool = 1; // 0xaab MovB
}


func_5276()
{
	var_103_string = ""; var_104_bool = 0; // 0x149d PushV
	var_103_string = "burah_home@door1"; // 0x149e MovS
	var_104_bool = 0; // 0x149f MovB
	func_5021(var_103_string, var_104_bool); // 0x14a0 NEW_2
	return 0; // 0x14a2 Return
}


func_4769(var_142_bool, var_143_object)
{
	var_147_int = 0; var_148_int = 0; var_149_int = 0; var_150_int = 0; // 0x12a1 PushV
	var_151_string = "voice_common"; // 0x12a2 PushS
	GetVariable(var_151_string, var_149_int); // 0x12a3 Func
	var_152_int = var_149_int; // 0x12a5 Push
	if(var_152_int == 0) goto Label_4807; // 0x12a6 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x12a7 PushV
	var_154_object = var_143_object; // 0x12a8 Mov
	func_4827(var_154_object); // 0x12a9 NEW_2
	var_183_bool = var_153_bool == 0; // 0x12ab Not
	if(var_183_bool == 0) goto Label_4789; // 0x12ac JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x12ad PushV
	var_185_object = var_143_object; // 0x12ae Mov
	func_4864(var_185_object); // 0x12af NEW_2
	var_219_bool = var_184_bool == 0; // 0x12b1 Not
	if(var_219_bool == 0) goto Label_4789; // 0x12b2 JumpB
	var_142_bool = 0; // 0x12b3 MovB
	return 4; // 0x12b4 Return
	
Label_4789:
	var_220_int = 2; // 0x12b5 PushI
	irand(var_150_int, var_220_int); // 0x12b6 Func
	var_221_int = var_150_int; // 0x12b8 Push
	if(var_221_int == 0) goto Label_4802; // 0x12b9 JumpB
	var_222_string = "voice_common"; // 0x12ba PushS
	var_223_int = 1; // 0x12bb PushI
	var_224_int = var_149_int + var_223_int; // 0x12bc Add
	var_225_int = 3; // 0x12bd PushI
	var_226_int = var_224_int / var_225_int; // 0x12be Mod
	SetVariable(var_222_string, var_226_int); // 0x12bf Func
	goto Label_4806; // 0x12c1 Jump
	
Label_4806:
	goto Label_4825; // 0x12c6 Jump
	
Label_4825:
	var_142_bool = 1; // 0x12d9 MovB
	return 4; // 0x12da Return
	
Label_4802:
	var_227_string = "voice_common"; // 0x12c2 PushS
	var_228_int = 0; // 0x12c3 PushI
	SetVariable(var_227_string, var_228_int); // 0x12c4 Func
	
Label_4807:
	var_229_bool = 0; var_230_object = Obj(); // 0x12c7 PushV
	var_230_object = var_143_object; // 0x12c8 Mov
	func_4864(var_230_object); // 0x12c9 NEW_2
	var_231_bool = var_229_bool == 0; // 0x12cb Not
	if(var_231_bool == 0) goto Label_4821; // 0x12cc JumpB
	var_232_bool = 0; var_233_object = Obj(); // 0x12cd PushV
	var_233_object = var_143_object; // 0x12ce Mov
	func_4827(var_233_object); // 0x12cf NEW_2
	var_234_bool = var_232_bool == 0; // 0x12d1 Not
	if(var_234_bool == 0) goto Label_4821; // 0x12d2 JumpB
	var_142_bool = 0; // 0x12d3 MovB
	return 4; // 0x12d4 Return
	
Label_4821:
	var_235_string = "voice_common"; // 0x12d5 PushS
	var_236_int = 1; // 0x12d6 PushI
	SetVariable(var_235_string, var_236_int); // 0x12d7 Func
}


func_5283()
{
	var_133_string = "oob2MladVlad1"; // 0x14a4 PushS
	var_134_int = 1; // 0x14a5 PushI
	SetVariable(var_133_string, var_134_int); // 0x14a6 Func
	return 0; // 0x14a8 Return
}


func_5796(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x16a4 PushV
	GetDiaryRoot(var_81_object); // 0x16a5 Func
	var_82_bool = var_81_object == 0; // 0x16a7 Not
	if(var_82_bool == 0) goto Label_5806; // 0x16a8 JumpB
	var_83_string = "Can't retrieve diary root"; // 0x16a9 PushS
	Trace(var_83_string); // 0x16aa Func
	var_79_object = 0; // 0x16ac MovB
	return 2; // 0x16ad Return
	
Label_5806:
	var_79_object = var_81_object; // 0x16ae Mov
	return 2; // 0x16af Return
}


func_5289()
{
	var_139_object = Obj(); var_140_object = Obj(); // 0x14a9 PushV
	var_141_int = 0; var_142_string = ""; // 0x14aa PushV
	var_142_string = "b2TravnikMark"; // 0x14ab MovS
	func_4994(var_141_int, var_142_string); // 0x14ac NEW_2
	var_145_int = 0; // 0x14ae PushI
	var_146_bool = var_141_int == var_145_int; // 0x14af Eq
	if(var_146_bool == 0) goto Label_5333; // 0x14b0 JumpB
	var_147_string = "b2TravnikMark"; // 0x14b1 PushS
	var_148_int = 1; // 0x14b2 PushI
	SetVariable(var_147_string, var_148_int); // 0x14b3 Func
	var_149_object = Obj(); // 0x14b5 PushV
	func_5837(var_149_object); // 0x14b6 NEW_2
	var_140_object = var_149_object; // 0x14b7 Mov
	var_150_string = "b2Travnik1"; // 0x14b9 PushS
	var_151_string = "pt_map_gatherer1"; // 0x14ba PushS
	var_152_int = 3; // 0x14bb PushI
	var_153_int = 520463; // 0x14bc PushI
	var_154_float = 0; // 0x14bd PushV
	func_5144(var_154_float); // 0x14be NEW_2
	AddMark(var_150_string, var_151_string, var_152_int, var_153_int, var_154_float); // 0x14c0 ObjFunc
	var_155_string = "b2Travnik2"; // 0x14c2 PushS
	var_156_string = "pt_map_gatherer2"; // 0x14c3 PushS
	var_157_int = 3; // 0x14c4 PushI
	var_158_int = 520464; // 0x14c5 PushI
	var_159_float = 0; // 0x14c6 PushV
	func_5144(var_159_float); // 0x14c7 NEW_2
	AddMark(var_155_string, var_156_string, var_157_int, var_158_int, var_159_float); // 0x14c9 ObjFunc
	var_160_string = "b2Travnik3"; // 0x14cb PushS
	var_161_string = "pt_map_gatherer3"; // 0x14cc PushS
	var_162_int = 3; // 0x14cd PushI
	var_163_int = 520465; // 0x14ce PushI
	var_164_float = 0; // 0x14cf PushV
	func_5144(var_164_float); // 0x14d0 NEW_2
	AddMark(var_160_string, var_161_string, var_162_int, var_163_int, var_164_float); // 0x14d2 ObjFunc
	var_140_object = 0; // 0x14d4 SetNull
	
Label_5333:
	return 2; // 0x14d5 Return
}


func_4267(var_0_bool, var_868_int, var_869_object)
{
	var_871_object = Obj(); var_872_bool = 0; var_873_int = 0; var_874_bool = 0; var_875_object = Obj(); var_876_bool = 0; var_877_int = 0; var_878_bool = 0; // 0x10ab PushV
	var_0_bool = var_869_object; // 0x10ac TMov
	var_879_bool = 0; var_880_object = Obj(); var_881_float = 0; // 0x10ad PushV
	var_880_object = var_869_object; // 0x10ae Mov
	var_881_float = 70.0; // 0x10af MovF
	func_4682(var_880_object, var_881_float); // 0x10b0 NEW_2
	var_882_bool = var_879_bool == 0; // 0x10b2 Not
	if(var_882_bool == 0) goto Label_4278; // 0x10b3 JumpB
	var_868_int = -2; // 0x10b4 MovI
	return 8; // 0x10b5 Return
	
Label_4278:
	CreateDialog(var_875_object); // 0x10b6 Func
	var_883_int = 0; // 0x10b8 PushV
	func_5204(var_883_int); // 0x10b9 NEW_2
	SetNPCName(var_883_int); // 0x10bb ObjFunc
	var_884_int = 0; // 0x10bd PushV
	func_5202(var_884_int); // 0x10be NEW_2
	SetNPCDescription(var_884_int); // 0x10c0 ObjFunc
	var_885_string = ""; // 0x10c2 PushV
	func_5206(var_885_string); // 0x10c3 NEW_2
	SetPhoto(var_885_string); // 0x10c5 ObjFunc
	var_886_string = ""; // 0x10c7 PushV
	func_5208(var_886_string); // 0x10c8 NEW_2
	SetPhoto2(var_886_string); // 0x10ca ObjFunc
	var_887_int = 0; // 0x10cc PushV
	func_5887(var_887_int); // 0x10cd NEW_2
	SetPlayerName(var_887_int); // 0x10cf ObjFunc
	var_877_int = -1; // 0x10d1 MovI
	IsOverrideActive(var_876_bool); // 0x10d2 Func
	var_888_bool = var_876_bool; // 0x10d4 Push
	if(var_888_bool == 0) goto Label_4312; // 0x10d5 JumpB
	var_868_int = -2; // 0x10d6 MovI
	return 8; // 0x10d7 Return
	
Label_4312:
	DoDialog(var_875_object); // 0x10d8 Func
	var_889_bool = 0; var_890_object = Obj(); // 0x10da PushV
	var_891_object = Obj(); // 0x10db PushV
	func_4960(var_891_object); // 0x10dc NEW_2
	var_890_object = var_891_object; // 0x10dd Mov
	func_4769(var_889_bool, var_890_object); // 0x10df NEW_2
	var_892_object = Obj(); var_893_object = Obj(); // 0x10e1 PushV
	var_892_object = var_869_object; // 0x10e2 Mov
	var_893_object = var_875_object; // 0x10e3 Mov
	TaskCall(21); // 0x10e4 TaskCall
	func_4348(var_894_object, var_895_object, var_896_string, var_897_bool, var_892_object, var_893_object); // 0x10e5 NEW_2
	TaskReturn(); // 0x10e6 TaskReturn
	IsDialogEnd(var_878_bool); // 0x10e8 ObjFunc
	
Label_4330:
	var_922_bool = var_878_bool == 0; // 0x10ea Not
	if(var_922_bool == 0) goto Label_4337; // 0x10eb JumpB
	sync(); // 0x10ec Func
	IsDialogEnd(var_878_bool); // 0x10ee ObjFunc
	goto Label_4330; // 0x10f0 Jump
	
Label_4337:
	var_923_object = Obj(); // 0x10f1 PushV
	var_923_object = var_869_object; // 0x10f2 Mov
	func_4751(); // 0x10f3 NEW_2
	StopDialog(var_875_object); // 0x10f5 Func
	GetReturnValue(var_877_int); // 0x10f7 ObjFunc
	var_868_int = var_877_int; // 0x10f9 Mov
	return 8; // 0x10fa Return
}


func_5809(var_70_bool, var_71_object, var_72_int)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0; // 0x16b1 PushV
	var_79_object = Obj(); // 0x16b2 PushV
	func_5796(var_79_object); // 0x16b3 NEW_2
	var_76_object = var_79_object; // 0x16b4 Mov
	Find(var_72_int, var_77_object); // 0x16b6 ObjFunc
	var_84_bool = var_77_object == 0; // 0x16b8 Not
	if(var_84_bool == 0) goto Label_5824; // 0x16b9 JumpB
	var_85_string = "Can't find diary parent with id: "; // 0x16ba PushS
	var_86_int = var_85_string + var_72_int; // 0x16bb Add
	Trace(var_86_int); // 0x16bc Func
	var_70_bool = 0; // 0x16be MovB
	return 6; // 0x16bf Return
	
Label_5824:
	AddChild(var_71_object); // 0x16c0 ObjFunc
	var_87_int = 7; // 0x16c2 PushI
	SendWorldWndMessage(var_87_int); // 0x16c3 Func
	GetCategory(var_78_int); // 0x16c5 ObjFunc
	SetDiarySection(var_78_int); // 0x16c7 Func
	var_70_bool = 0; // 0x16c9 MovB
	return 6; // 0x16ca Return
}


func_1717(var_0_bool, var_1_object, var_2_object, var_3_object, var_511_object, var_512_object)
{
	var_0_bool = var_512_object; // 0x6b6 TMov
	var_1_object = var_511_object; // 0x6b7 TMov
	var_3_object = 0; // 0x6b8 TMovB
	var_517_int = 1; // 0x6b9 PushI
	if(var_517_int == 0) goto Label_1790; // 0x6ba JumpB
	var_518_bool = 0; var_519_object = Obj(); // 0x6bb PushV
	var_519_object = var_1_object; // 0x6bc MovT
	func_5669(var_519_object); // 0x6bd NEW_2
	if(var_518_bool == 0) goto Label_1753; // 0x6bf JumpB
	var_524_object = Obj(); var_525_object = Obj(); // 0x6c0 PushV
	var_524_object = var_1_object; // 0x6c1 MovT
	var_525_object = var_0_bool; // 0x6c2 MovT
	func_5334(); // 0x6c3 NEW_2
	var_528_object = Obj(); var_529_object = Obj(); // 0x6c5 PushV
	var_528_object = var_1_object; // 0x6c6 MovT
	var_529_object = var_0_bool; // 0x6c7 MovT
	func_5488(); // 0x6c8 NEW_2
	var_532_string = ""; // 0x6ca PushV
	var_532_string = "Rage"; // 0x6cb MovS
	func_1820(var_512_object, var_532_string); // 0x6cc NEW_2
	var_540_int = 520138; // 0x6ce PushI
	SetMessage(var_540_int); // 0x6cf TObjFunc
	ClearReplies(); // 0x6d1 TObjFunc
	var_541_int = 520139; // 0x6d3 PushI
	var_542_int = 21324; // 0x6d4 PushI
	var_543_int = 21323; // 0x6d5 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x6d6 TObjFunc
	goto Label_1790; // 0x6d8 Jump
	
Label_1790:
	var_544_bool = 0; // 0x6fe PushV
	func_5210(var_544_bool); // 0x6ff NEW_2
	if(var_544_bool == 0) goto Label_1805; // 0x701 JumpB
	
Label_1794:
	lshWaitForAnimEnd(); // 0x702 Func
	var_545_object = var_3_object; // 0x704 PushT
	if(var_545_object == 0) goto Label_1799; // 0x705 JumpB
	goto Label_1804; // 0x706 Jump
	
Label_1804:
	goto Label_1819; // 0x70c Jump
	
Label_1819:
	return 0; // 0x71b Return
	
Label_1799:
	var_546_string = ""; // 0x707 PushV
	var_546_string = var_2_object; // 0x708 MovT
	func_4907(var_546_string); // 0x709 NEW_2
	goto Label_1794; // 0x70b Jump
	
Label_1805:
	var_547_string = "all"; // 0x70d PushS
	var_548_string = "idle"; // 0x70e PushS
	PlayAnimation(var_547_string, var_548_string); // 0x70f Func
	
Label_1809:
	WaitForAnimEnd(); // 0x711 Func
	var_549_object = var_3_object; // 0x713 PushT
	if(var_549_object == 0) goto Label_1814; // 0x714 JumpB
	goto Label_1819; // 0x715 Jump
	
Label_1814:
	var_550_string = "all"; // 0x716 PushS
	var_551_string = "idle"; // 0x717 PushS
	PlayAnimation(var_550_string, var_551_string); // 0x718 Func
	goto Label_1809; // 0x71a Jump
	
Label_1753:
	var_552_string = ""; // 0x6d9 PushV
	var_552_string = "Rage"; // 0x6da MovS
	func_1820(var_512_object, var_552_string); // 0x6db NEW_2
	var_553_int = 520157; // 0x6dd PushI
	SetMessage(var_553_int); // 0x6de TObjFunc
	ClearReplies(); // 0x6e0 TObjFunc
	var_554_bool = 0; var_555_object = Obj(); // 0x6e2 PushV
	var_555_object = var_1_object; // 0x6e3 MovT
	func_5681(var_555_object); // 0x6e4 NEW_2
	if(var_554_bool == 0) goto Label_1772; // 0x6e6 JumpB
	var_560_int = 520158; // 0x6e7 PushI
	var_561_int = 21346; // 0x6e8 PushI
	var_562_int = 21345; // 0x6e9 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x6ea TObjFunc
	
Label_1772:
	var_563_bool = 0; var_564_object = Obj(); // 0x6ec PushV
	var_564_object = var_1_object; // 0x6ed MovT
	func_5693(var_564_object); // 0x6ee NEW_2
	if(var_563_bool == 0) goto Label_1782; // 0x6f0 JumpB
	var_569_int = 520164; // 0x6f1 PushI
	var_570_int = 21352; // 0x6f2 PushI
	var_571_int = 21351; // 0x6f3 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x6f4 TObjFunc
	
Label_1782:
	var_572_int = 520180; // 0x6f6 PushI
	var_573_int = -1; // 0x6f7 PushI
	var_574_int = 21370; // 0x6f8 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x6f9 TObjFunc
	goto Label_1790; // 0x6fb Jump
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
	func_5171(var_195_int); // 0xe6 NEW_2
	var_172_int = var_195_int; // 0xe7 Mov
	var_208_int = var_172_int; // 0xe9 Push
	if(var_208_int == 0) goto Label_246; // 0xea JumpB
	irand(var_173_int, var_172_int); // 0xeb Func
	var_209_string = "all"; // 0xed PushS
	var_210_string = ""; var_211_int = 0; // 0xee PushV
	var_211_int = var_173_int; // 0xef Mov
	func_5164(var_210_string, var_211_int); // 0xf0 NEW_2
	PlayAnimation(var_209_string, var_210_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	
Label_204:
	var_167_string = "ptidle"; // 0xcc MovS
}


func_5837(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); var_64_object = Obj(); var_65_object = Obj(); // 0x16cd PushV
	GetMainOutdoorScene(var_64_object); // 0x16ce Func
	var_66_bool = var_64_object == 0; // 0x16d0 NullEq
	if(var_66_bool == 0) goto Label_5848; // 0x16d1 JumpB
	var_67_string = "Can't find main outdoor scene"; // 0x16d2 PushS
	Trace(var_67_string); // 0x16d3 Func
	var_65_object = 0; // 0x16d5 SetNull
	var_61_object = var_65_object; // 0x16d6 Mov
	return 4; // 0x16d7 Return
	
Label_5848:
	GetMap(var_65_object); // 0x16d8 ObjFunc
	var_61_object = var_65_object; // 0x16da Mov
	return 4; // 0x16db Return
}


func_5334()
{
	var_526_string = "oob5MladVlad1"; // 0x14d7 PushS
	var_527_int = 1; // 0x14d8 PushI
	SetVariable(var_526_string, var_527_int); // 0x14d9 Func
	return 0; // 0x14db Return
}


func_4827(var_153_bool)
{
	var_155_string = ""; var_156_int = 0; var_157_bool = 0; var_158_int = 0; var_159_string = ""; var_160_string = ""; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_string = ""; // 0x12db PushV
	var_160_string = "c"; // 0x12dc MovS
	var_161_int = 0; // 0x12dd MovI
	
Label_4830:
	var_165_int = 1; // 0x12de PushI
	if(var_165_int == 0) goto Label_4843; // 0x12df JumpB
	var_166_int = 1; // 0x12e0 PushI
	var_167_int = var_161_int + var_166_int; // 0x12e1 Add
	var_168_int = var_160_string + var_167_int; // 0x12e2 Add
	HasProperty(var_168_int, var_162_bool); // 0x12e3 ObjFunc
	var_169_bool = var_162_bool == 0; // 0x12e5 Not
	if(var_169_bool == 0) goto Label_4840; // 0x12e6 JumpB
	goto Label_4843; // 0x12e7 Jump
	
Label_4843:
	var_170_bool = var_161_int == 0; // 0x12eb Not
	if(var_170_bool == 0) goto Label_4847; // 0x12ec JumpB
	var_153_bool = 0; // 0x12ed MovB
	return 10; // 0x12ee Return
	
Label_4847:
	var_163_int = 0; // 0x12ef MovI
	var_171_int = 1; // 0x12f0 PushI
	var_172_bool = var_161_int > var_171_int; // 0x12f1 GT
	if(var_172_bool == 0) goto Label_4853; // 0x12f2 JumpB
	irand(var_163_int, var_161_int); // 0x12f3 Func
	
Label_4853:
	var_173_int = 1; // 0x12f5 PushI
	var_174_int = var_163_int + var_173_int; // 0x12f6 Add
	var_175_int = var_160_string + var_174_int; // 0x12f7 Add
	GetProperty(var_175_int, var_164_string); // 0x12f8 ObjFunc
	var_176_bool = 0; var_177_string = ""; // 0x12fa PushV
	var_177_string = var_164_string; // 0x12fb Mov
	func_4938(var_176_bool, var_177_string); // 0x12fc NEW_2
	var_153_bool = var_176_bool; // 0x12fd Mov
	return 10; // 0x12ff Return
	
Label_4840:
	var_182_int = 1; // 0x12e8 PushI
	var_161_int = var_161_int + var_182_int; // 0x12e9 Add2
	goto Label_4830; // 0x12ea Jump
}


func_5340()
{
	var_85_string = "b5q02"; // 0x14dd PushS
	var_86_int = 1; // 0x14de PushI
	SetVariable(var_85_string, var_86_int); // 0x14df Func
	func_5718(); // 0x14e2 NEW_2
	func_5744(); // 0x14e5 NEW_2
	var_118_object = Obj(); var_119_string = ""; // 0x14e7 PushV
	var_119_string = "quest_b5_02"; // 0x14e8 MovS
	func_4999(var_118_object, var_119_string); // 0x14e9 NEW_2
	var_126_bool = 0; var_127_string = ""; var_128_string = ""; // 0x14eb PushV
	var_127_string = "quest_b5_02"; // 0x14ec MovS
	var_128_string = "place_prophet"; // 0x14ed MovS
	func_5108(var_126_bool, var_127_string, var_128_string); // 0x14ee NEW_2
	var_132_bool = 0; var_133_string = ""; var_134_string = ""; // 0x14f0 PushV
	var_133_string = "quest_b5_02"; // 0x14f1 MovS
	var_134_string = "maze_start"; // 0x14f2 MovS
	func_5108(var_132_bool, var_133_string, var_134_string); // 0x14f3 NEW_2
	return 0; // 0x14f5 Return
}


func_5854(var_77_object, var_78_string, var_79_float)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0; // 0x16de PushV
	GetMainOutdoorScene(var_87_object); // 0x16df Func
	var_89_bool = var_87_object == 0; // 0x16e1 NullEq
	if(var_89_bool == 0) goto Label_5863; // 0x16e2 JumpB
	var_90_string = "Can't find main outdoor scene"; // 0x16e3 PushS
	Trace(var_90_string); // 0x16e4 Func
	return 8; // 0x16e6 Return
	
Label_5863:
	GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector); // 0x16e7 ObjFunc
	var_91_bool = var_88_bool == 0; // 0x16e9 Not
	if(var_91_bool == 0) goto Label_5873; // 0x16ea JumpB
	var_92_string = "Warning: outdoor scene locator "; // 0x16eb PushS
	var_93_int = var_92_string + var_78_string; // 0x16ec Add
	var_94_string = " doesnt exist"; // 0x16ed PushS
	var_95_int = var_93_int + var_94_string; // 0x16ee Add
	Trace(var_95_int); // 0x16ef Func
	
Label_5873:
	GetMap(var_77_object); // 0x16f1 ObjFunc
	var_96_bool = var_77_object == 0; // 0x16f3 NullEq
	if(var_96_bool == 0) goto Label_5881; // 0x16f4 JumpB
	var_97_string = "Can't find map"; // 0x16f5 PushS
	Trace(var_97_string); // 0x16f6 Func
	return 8; // 0x16f8 Return
	
Label_5881:
	var_98_float = GetByIndex(var_85_cvector, 0); // 0x16f9 PushE
	var_99_float = GetByIndex(var_85_cvector, 2); // 0x16fa PushE
	SetMapParams(var_98_float, var_99_float, var_79_float); // 0x16fb ObjFunc
	return 8; // 0x16fd Return
}


func_5366()
{
	func_5731(); // 0x14f8 NEW_2
	var_196_bool = 0; var_197_string = ""; var_198_string = ""; // 0x14fa PushV
	var_197_string = "quest_b5_02"; // 0x14fb MovS
	var_198_string = "completed"; // 0x14fc MovS
	func_5108(var_196_bool, var_197_string, var_198_string); // 0x14fd NEW_2
	return 0; // 0x14ff Return
}


func_4348(var_0_bool, var_1_object, var_2_object, var_3_object, var_892_object, var_893_object)
{
	var_0_bool = var_893_object; // 0x10fd TMov
	var_1_object = var_892_object; // 0x10fe TMov
	var_3_object = 0; // 0x10ff TMovB
	var_898_int = 1; // 0x1100 PushI
	if(var_898_int == 0) goto Label_4376; // 0x1101 JumpB
	var_899_string = ""; // 0x1102 PushV
	var_899_string = "Neutral"; // 0x1103 MovS
	func_4406(var_893_object, var_899_string); // 0x1104 NEW_2
	var_907_int = 540554; // 0x1106 PushI
	SetMessage(var_907_int); // 0x1107 TObjFunc
	ClearReplies(); // 0x1109 TObjFunc
	var_908_int = 540555; // 0x110b PushI
	var_909_int = -1; // 0x110c PushI
	var_910_int = 42564; // 0x110d PushI
	AddReply(var_908_int, var_909_int, var_910_int); // 0x110e TObjFunc
	var_911_int = 540794; // 0x1110 PushI
	var_912_int = -1; // 0x1111 PushI
	var_913_int = 42843; // 0x1112 PushI
	AddReply(var_911_int, var_912_int, var_913_int); // 0x1113 TObjFunc
	goto Label_4376; // 0x1115 Jump
	
Label_4376:
	var_914_bool = 0; // 0x1118 PushV
	func_5210(var_914_bool); // 0x1119 NEW_2
	if(var_914_bool == 0) goto Label_4391; // 0x111b JumpB
	
Label_4380:
	lshWaitForAnimEnd(); // 0x111c Func
	var_915_object = var_3_object; // 0x111e PushT
	if(var_915_object == 0) goto Label_4385; // 0x111f JumpB
	goto Label_4390; // 0x1120 Jump
	
Label_4390:
	goto Label_4405; // 0x1126 Jump
	
Label_4405:
	return 0; // 0x1135 Return
	
Label_4385:
	var_916_string = ""; // 0x1121 PushV
	var_916_string = var_2_object; // 0x1122 MovT
	func_4907(var_916_string); // 0x1123 NEW_2
	goto Label_4380; // 0x1125 Jump
	
Label_4391:
	var_917_string = "all"; // 0x1127 PushS
	var_918_string = "idle"; // 0x1128 PushS
	PlayAnimation(var_917_string, var_918_string); // 0x1129 Func
	
Label_4395:
	WaitForAnimEnd(); // 0x112b Func
	var_919_object = var_3_object; // 0x112d PushT
	if(var_919_object == 0) goto Label_4400; // 0x112e JumpB
	goto Label_4405; // 0x112f Jump
	
Label_4400:
	var_920_string = "all"; // 0x1130 PushS
	var_921_string = "idle"; // 0x1131 PushS
	PlayAnimation(var_920_string, var_921_string); // 0x1132 Func
	goto Label_4395; // 0x1134 Jump
}


func_5887(var_133_int)
{
	var_134_int = 0; var_135_int = 0; // 0x16ff PushV
	var_136_string = "branch"; // 0x1700 PushS
	GetVariable(var_136_string, var_135_int); // 0x1701 Func
	var_137_int = 0; // 0x1703 PushI
	var_138_bool = var_135_int == var_137_int; // 0x1704 Eq
	if(var_138_bool == 0) goto Label_5897; // 0x1705 JumpB
	var_133_int = 1; // 0x1706 MovI
	return 2; // 0x1707 Return
	
Label_5897:
	var_139_int = 1; // 0x1709 PushI
	var_140_bool = var_135_int == var_139_int; // 0x170a Eq
	if(var_140_bool == 0) goto Label_5902; // 0x170b JumpB
	var_133_int = 2; // 0x170c MovI
	return 2; // 0x170d Return
	
Label_5902:
	var_133_int = 3; // 0x170e MovI
	return 2; // 0x170f Return
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


func_5376(var_128_object)
{
	var_130_string = "money 4000 is given"; // 0x1501 PushS
	Trace(var_130_string); // 0x1502 Func
	var_131_object = Obj(); var_132_int = 0; // 0x1504 PushV
	var_131_object = var_128_object; // 0x1505 Mov
	var_132_int = 4000; // 0x1506 MovI
	func_5050(var_131_object, var_132_int); // 0x1507 NEW_2
	return 0; // 0x1509 Return
}


func_4864(var_184_bool)
{
	var_186_string = ""; var_187_int = 0; var_188_bool = 0; var_189_int = 0; var_190_string = ""; var_191_string = ""; var_192_int = 0; var_193_bool = 0; var_194_int = 0; var_195_string = ""; // 0x1300 PushV
	var_196_string = "d"; // 0x1301 PushS
	var_197_int = 0; // 0x1302 PushV
	func_5149(var_197_int); // 0x1303 NEW_2
	var_203_int = var_196_string + var_197_int; // 0x1305 Add
	var_204_string = "m"; // 0x1306 PushS
	var_191_string = var_203_int + var_204_string; // 0x1307 Add2
	var_192_int = 0; // 0x1308 MovI
	
Label_4873:
	var_205_int = 1; // 0x1309 PushI
	if(var_205_int == 0) goto Label_4886; // 0x130a JumpB
	var_206_int = 1; // 0x130b PushI
	var_207_int = var_192_int + var_206_int; // 0x130c Add
	var_208_int = var_191_string + var_207_int; // 0x130d Add
	HasProperty(var_208_int, var_193_bool); // 0x130e ObjFunc
	var_209_bool = var_193_bool == 0; // 0x1310 Not
	if(var_209_bool == 0) goto Label_4883; // 0x1311 JumpB
	goto Label_4886; // 0x1312 Jump
	
Label_4886:
	var_210_bool = var_192_int == 0; // 0x1316 Not
	if(var_210_bool == 0) goto Label_4890; // 0x1317 JumpB
	var_184_bool = 0; // 0x1318 MovB
	return 10; // 0x1319 Return
	
Label_4890:
	var_194_int = 0; // 0x131a MovI
	var_211_int = 1; // 0x131b PushI
	var_212_bool = var_192_int > var_211_int; // 0x131c GT
	if(var_212_bool == 0) goto Label_4896; // 0x131d JumpB
	irand(var_194_int, var_192_int); // 0x131e Func
	
Label_4896:
	var_213_int = 1; // 0x1320 PushI
	var_214_int = var_194_int + var_213_int; // 0x1321 Add
	var_215_int = var_191_string + var_214_int; // 0x1322 Add
	GetProperty(var_215_int, var_195_string); // 0x1323 ObjFunc
	var_216_bool = 0; var_217_string = ""; // 0x1325 PushV
	var_217_string = var_195_string; // 0x1326 Mov
	func_4938(var_216_bool, var_217_string); // 0x1327 NEW_2
	var_184_bool = var_216_bool; // 0x1328 Mov
	return 10; // 0x132a Return
	
Label_4883:
	var_218_int = 1; // 0x1313 PushI
	var_192_int = var_192_int + var_218_int; // 0x1314 Add2
	goto Label_4873; // 0x1315 Jump
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


func_5386(var_55_object)
{
	var_57_string = "kerosene50 is given"; // 0x150b PushS
	Trace(var_57_string); // 0x150c Func
	var_58_object = Obj(); var_59_string = ""; var_60_int = 0; // 0x150e PushV
	var_58_object = var_55_object; // 0x150f Mov
	var_59_string = "kerosene"; // 0x1510 MovS
	var_60_int = 50; // 0x1511 MovI
	func_5088(var_58_object, var_59_string, var_60_int); // 0x1512 NEW_2
	return 0; // 0x1514 Return
}


func_2827(var_0_bool, var_637_int, var_638_object)
{
	var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0; var_644_object = Obj(); var_645_bool = 0; var_646_int = 0; var_647_bool = 0; // 0xb0b PushV
	var_0_bool = var_638_object; // 0xb0c TMov
	var_648_bool = 0; var_649_object = Obj(); var_650_float = 0; // 0xb0d PushV
	var_649_object = var_638_object; // 0xb0e Mov
	var_650_float = 70.0; // 0xb0f MovF
	func_4682(var_649_object, var_650_float); // 0xb10 NEW_2
	var_651_bool = var_648_bool == 0; // 0xb12 Not
	if(var_651_bool == 0) goto Label_2838; // 0xb13 JumpB
	var_637_int = -2; // 0xb14 MovI
	return 8; // 0xb15 Return
	
Label_2838:
	CreateDialog(var_644_object); // 0xb16 Func
	var_652_int = 0; // 0xb18 PushV
	func_5204(var_652_int); // 0xb19 NEW_2
	SetNPCName(var_652_int); // 0xb1b ObjFunc
	var_653_int = 0; // 0xb1d PushV
	func_5202(var_653_int); // 0xb1e NEW_2
	SetNPCDescription(var_653_int); // 0xb20 ObjFunc
	var_654_string = ""; // 0xb22 PushV
	func_5206(var_654_string); // 0xb23 NEW_2
	SetPhoto(var_654_string); // 0xb25 ObjFunc
	var_655_string = ""; // 0xb27 PushV
	func_5208(var_655_string); // 0xb28 NEW_2
	SetPhoto2(var_655_string); // 0xb2a ObjFunc
	var_656_int = 0; // 0xb2c PushV
	func_5887(var_656_int); // 0xb2d NEW_2
	SetPlayerName(var_656_int); // 0xb2f ObjFunc
	var_646_int = -1; // 0xb31 MovI
	IsOverrideActive(var_645_bool); // 0xb32 Func
	var_657_bool = var_645_bool; // 0xb34 Push
	if(var_657_bool == 0) goto Label_2872; // 0xb35 JumpB
	var_637_int = -2; // 0xb36 MovI
	return 8; // 0xb37 Return
	
Label_2872:
	DoDialog(var_644_object); // 0xb38 Func
	var_658_bool = 0; var_659_object = Obj(); // 0xb3a PushV
	var_660_object = Obj(); // 0xb3b PushV
	func_4960(var_660_object); // 0xb3c NEW_2
	var_659_object = var_660_object; // 0xb3d Mov
	func_4769(var_658_bool, var_659_object); // 0xb3f NEW_2
	var_661_object = Obj(); var_662_object = Obj(); // 0xb41 PushV
	var_661_object = var_638_object; // 0xb42 Mov
	var_662_object = var_644_object; // 0xb43 Mov
	TaskCall(15); // 0xb44 TaskCall
	func_2908(var_663_object, var_664_object, var_665_string, var_666_bool, var_661_object, var_662_object); // 0xb45 NEW_2
	TaskReturn(); // 0xb46 TaskReturn
	IsDialogEnd(var_647_bool); // 0xb48 ObjFunc
	
Label_2890:
	var_734_bool = var_647_bool == 0; // 0xb4a Not
	if(var_734_bool == 0) goto Label_2897; // 0xb4b JumpB
	sync(); // 0xb4c Func
	IsDialogEnd(var_647_bool); // 0xb4e ObjFunc
	goto Label_2890; // 0xb50 Jump
	
Label_2897:
	var_735_object = Obj(); // 0xb51 PushV
	var_735_object = var_638_object; // 0xb52 Mov
	func_4751(); // 0xb53 NEW_2
	StopDialog(var_644_object); // 0xb55 Func
	GetReturnValue(var_646_int); // 0xb57 ObjFunc
	var_637_int = var_646_int; // 0xb59 Mov
	return 8; // 0xb5a Return
}


func_5904(var_67_object)
{
	var_68_bool = GlobalVars[2]; // 0x1711 PushGE
	var_69_bool = var_68_bool == 0; // 0x1712 Not
	if(var_69_bool == 0) goto Label_5917; // 0x1713 JumpB
	var_70_int = 0; var_71_object = Obj(); // 0x1714 PushV
	var_71_object = var_67_object; // 0x1715 Mov
	TaskCall(10); // 0x1716 TaskCall
	func_2336(var_72_object, var_70_int, var_71_object); // 0x1717 NEW_2
	TaskReturn(); // 0x1718 TaskReturn
	var_295_bool = GlobalVars[2]; // 0x171a PushGE
	var_295_bool = 1; // 0x171b MovB
	GlobalVars[2] = var_295_bool; // 0x171c PopGE
	
Label_5917:
	var_296_bool = 0; var_297_int = 0; // 0x171d PushV
	var_297_int = 1; // 0x171e MovI
	func_5158(var_296_bool, var_297_int); // 0x171f NEW_2
	if(var_296_bool == 0) goto Label_5929; // 0x1721 JumpB
	var_299_int = 0; var_300_object = Obj(); // 0x1722 PushV
	var_300_object = var_67_object; // 0x1723 Mov
	TaskCall(4); // 0x1724 TaskCall
	func_282(var_301_object, var_299_int, var_300_object); // 0x1725 NEW_2
	TaskReturn(); // 0x1726 TaskReturn
	return 0; // 0x1728 Return
	
Label_5929:
	var_395_bool = 0; var_396_int = 0; // 0x1729 PushV
	var_396_int = 2; // 0x172a MovI
	func_5158(var_395_bool, var_396_int); // 0x172b NEW_2
	if(var_395_bool == 0) goto Label_5941; // 0x172d JumpB
	var_397_int = 0; var_398_object = Obj(); // 0x172e PushV
	var_398_object = var_67_object; // 0x172f Mov
	TaskCall(6); // 0x1730 TaskCall
	func_968(var_399_object, var_397_int, var_398_object); // 0x1731 NEW_2
	TaskReturn(); // 0x1732 TaskReturn
	return 0; // 0x1734 Return
	
Label_5941:
	var_485_bool = 0; var_486_int = 0; // 0x1735 PushV
	var_486_int = 5; // 0x1736 MovI
	func_5158(var_485_bool, var_486_int); // 0x1737 NEW_2
	if(var_485_bool == 0) goto Label_5953; // 0x1739 JumpB
	var_487_int = 0; var_488_object = Obj(); // 0x173a PushV
	var_488_object = var_67_object; // 0x173b Mov
	TaskCall(8); // 0x173c TaskCall
	func_1636(var_489_object, var_487_int, var_488_object); // 0x173d NEW_2
	TaskReturn(); // 0x173e TaskReturn
	return 0; // 0x1740 Return
	
Label_5953:
	var_577_bool = 0; var_578_int = 0; // 0x1741 PushV
	var_578_int = 6; // 0x1742 MovI
	func_5158(var_577_bool, var_578_int); // 0x1743 NEW_2
	if(var_577_bool == 0) goto Label_5965; // 0x1745 JumpB
	var_579_int = 0; var_580_object = Obj(); // 0x1746 PushV
	var_580_object = var_67_object; // 0x1747 Mov
	TaskCall(12); // 0x1748 TaskCall
	func_2575(var_581_object, var_579_int, var_580_object); // 0x1749 NEW_2
	TaskReturn(); // 0x174a TaskReturn
	return 0; // 0x174c Return
	
Label_5965:
	var_635_bool = 0; var_636_int = 0; // 0x174d PushV
	var_636_int = 8; // 0x174e MovI
	func_5158(var_635_bool, var_636_int); // 0x174f NEW_2
	if(var_635_bool == 0) goto Label_5977; // 0x1751 JumpB
	var_637_int = 0; var_638_object = Obj(); // 0x1752 PushV
	var_638_object = var_67_object; // 0x1753 Mov
	TaskCall(14); // 0x1754 TaskCall
	func_2827(var_639_object, var_637_int, var_638_object); // 0x1755 NEW_2
	TaskReturn(); // 0x1756 TaskReturn
	return 0; // 0x1758 Return
	
Label_5977:
	var_736_bool = 0; var_737_int = 0; // 0x1759 PushV
	var_737_int = 11; // 0x175a MovI
	func_5158(var_736_bool, var_737_int); // 0x175b NEW_2
	if(var_736_bool == 0) goto Label_5989; // 0x175d JumpB
	var_738_int = 0; var_739_object = Obj(); // 0x175e PushV
	var_739_object = var_67_object; // 0x175f Mov
	TaskCall(16); // 0x1760 TaskCall
	func_3520(var_740_object, var_738_int, var_739_object); // 0x1761 NEW_2
	TaskReturn(); // 0x1762 TaskReturn
	return 0; // 0x1764 Return
	
Label_5989:
	var_803_bool = 0; // 0x1765 PushV
	var_803_bool = 0; // 0x1766 MovB
	var_804_bool = 0; var_805_int = 0; // 0x1767 PushV
	var_805_int = 12; // 0x1768 MovI
	func_5158(var_804_bool, var_805_int); // 0x1769 NEW_2
	if(var_804_bool == 0) goto Label_6000; // 0x176b JumpB
	var_806_bool = GlobalVars[3]; // 0x176c PushGE
	var_807_bool = var_806_bool == 0; // 0x176d Not
	if(var_807_bool == 0) goto Label_6000; // 0x176e JumpB
	var_803_bool = 1; // 0x176f MovB
	
Label_6000:
	if(var_803_bool == 0) goto Label_6011; // 0x1770 JumpB
	var_808_int = 0; var_809_object = Obj(); // 0x1771 PushV
	var_809_object = var_67_object; // 0x1772 Mov
	TaskCall(18); // 0x1773 TaskCall
	func_4008(var_810_object, var_808_int, var_809_object); // 0x1774 NEW_2
	TaskReturn(); // 0x1775 TaskReturn
	var_867_bool = GlobalVars[3]; // 0x1777 PushGE
	var_867_bool = 1; // 0x1778 MovB
	GlobalVars[3] = var_867_bool; // 0x1779 PopGE
	return 0; // 0x177a Return
	
Label_6011:
	var_868_int = 0; var_869_object = Obj(); // 0x177b PushV
	var_869_object = var_67_object; // 0x177c Mov
	TaskCall(20); // 0x177d TaskCall
	func_4267(var_870_object, var_868_int, var_869_object); // 0x177e NEW_2
	TaskReturn(); // 0x177f TaskReturn
	return 0; // 0x1781 Return
}


func_5397()
{
	var_57_object = Obj(); var_58_string = ""; var_59_string = ""; // 0x1516 PushV
	var_60_object = Obj(); // 0x1517 PushV
	func_4633(var_60_object); // 0x1518 NEW_2
	var_57_object = var_60_object; // 0x1519 Mov
	var_58_string = "house_vlad"; // 0x151b MovS
	var_59_string = "pt_maze_start"; // 0x151c MovS
	func_5120(var_57_object, var_58_string, var_59_string); // 0x151d NEW_2
	return 0; // 0x151f Return
}


func_282(var_0_bool, var_299_int, var_300_object)
{
	var_302_object = Obj(); var_303_bool = 0; var_304_int = 0; var_305_bool = 0; var_306_object = Obj(); var_307_bool = 0; var_308_int = 0; var_309_bool = 0; // 0x11a PushV
	var_0_bool = var_300_object; // 0x11b TMov
	var_310_bool = 0; var_311_object = Obj(); var_312_float = 0; // 0x11c PushV
	var_311_object = var_300_object; // 0x11d Mov
	var_312_float = 70.0; // 0x11e MovF
	func_4682(var_311_object, var_312_float); // 0x11f NEW_2
	var_313_bool = var_310_bool == 0; // 0x121 Not
	if(var_313_bool == 0) goto Label_293; // 0x122 JumpB
	var_299_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	CreateDialog(var_306_object); // 0x125 Func
	var_314_int = 0; // 0x127 PushV
	func_5204(var_314_int); // 0x128 NEW_2
	SetNPCName(var_314_int); // 0x12a ObjFunc
	var_315_int = 0; // 0x12c PushV
	func_5202(var_315_int); // 0x12d NEW_2
	SetNPCDescription(var_315_int); // 0x12f ObjFunc
	var_316_string = ""; // 0x131 PushV
	func_5206(var_316_string); // 0x132 NEW_2
	SetPhoto(var_316_string); // 0x134 ObjFunc
	var_317_string = ""; // 0x136 PushV
	func_5208(var_317_string); // 0x137 NEW_2
	SetPhoto2(var_317_string); // 0x139 ObjFunc
	var_318_int = 0; // 0x13b PushV
	func_5887(var_318_int); // 0x13c NEW_2
	SetPlayerName(var_318_int); // 0x13e ObjFunc
	var_308_int = -1; // 0x140 MovI
	IsOverrideActive(var_307_bool); // 0x141 Func
	var_319_bool = var_307_bool; // 0x143 Push
	if(var_319_bool == 0) goto Label_327; // 0x144 JumpB
	var_299_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	DoDialog(var_306_object); // 0x147 Func
	var_320_bool = 0; var_321_object = Obj(); // 0x149 PushV
	var_322_object = Obj(); // 0x14a PushV
	func_4960(var_322_object); // 0x14b NEW_2
	var_321_object = var_322_object; // 0x14c Mov
	func_4769(var_320_bool, var_321_object); // 0x14e NEW_2
	var_323_object = Obj(); var_324_object = Obj(); // 0x150 PushV
	var_323_object = var_300_object; // 0x151 Mov
	var_324_object = var_306_object; // 0x152 Mov
	TaskCall(5); // 0x153 TaskCall
	func_363(var_325_object, var_326_object, var_327_string, var_328_bool, var_323_object, var_324_object); // 0x154 NEW_2
	TaskReturn(); // 0x155 TaskReturn
	IsDialogEnd(var_309_bool); // 0x157 ObjFunc
	
Label_345:
	var_393_bool = var_309_bool == 0; // 0x159 Not
	if(var_393_bool == 0) goto Label_352; // 0x15a JumpB
	sync(); // 0x15b Func
	IsDialogEnd(var_309_bool); // 0x15d ObjFunc
	goto Label_345; // 0x15f Jump
	
Label_352:
	var_394_object = Obj(); // 0x160 PushV
	var_394_object = var_300_object; // 0x161 Mov
	func_4751(); // 0x162 NEW_2
	StopDialog(var_306_object); // 0x164 Func
	GetReturnValue(var_308_int); // 0x166 ObjFunc
	var_299_int = var_308_int; // 0x168 Mov
	return 8; // 0x169 Return
}


func_1820(var_2_object, var_532_string)
{
	var_533_bool = 0; // 0x71d PushV
	func_5210(var_533_bool); // 0x71e NEW_2
	var_534_bool = var_533_bool == 0; // 0x720 Not
	if(var_534_bool == 0) goto Label_1827; // 0x721 JumpB
	return 0; // 0x722 Return
	
Label_1827:
	var_535_bool = var_532_string == var_2_object; // 0x723 Eq
	if(var_535_bool == 0) goto Label_1830; // 0x724 JumpB
	return 0; // 0x725 Return
	
Label_1830:
	var_536_string = ""; var_537_bool = 0; // 0x726 PushV
	var_536_string = var_532_string; // 0x727 Mov
	var_538_string = ""; // 0x728 PushS
	var_539_bool = var_532_string == var_538_string; // 0x729 Eq
	if(var_539_bool == 0) goto Label_1837; // 0x72a JumpB
	var_537_bool = 0; // 0x72b MovB
	goto Label_1838; // 0x72c Jump
	
Label_1838:
	func_4923(var_536_string, var_537_bool); // 0x72e NEW_2
	var_2_object = var_532_string; // 0x730 TMov
	return 0; // 0x731 Return
	
Label_1837:
	var_537_bool = 1; // 0x72d MovB
}


func_5408()
{
	var_57_string = "b8q02"; // 0x1521 PushS
	var_58_int = 1; // 0x1522 PushI
	SetVariable(var_57_string, var_58_int); // 0x1523 Func
	func_5757(); // 0x1526 NEW_2
	func_5783(); // 0x1529 NEW_2
	var_90_object = Obj(); var_91_string = ""; // 0x152b PushV
	var_91_string = "quest_b8_02"; // 0x152c MovS
	func_5010(var_90_object, var_91_string); // 0x152d NEW_2
	return 0; // 0x152f Return
}


func_2336(var_0_bool, var_70_int, var_71_object)
{
	var_73_object = Obj(); var_74_bool = 0; var_75_int = 0; var_76_bool = 0; var_77_object = Obj(); var_78_bool = 0; var_79_int = 0; var_80_bool = 0; // 0x920 PushV
	var_0_bool = var_71_object; // 0x921 TMov
	var_81_bool = 0; var_82_object = Obj(); var_83_float = 0; // 0x922 PushV
	var_82_object = var_71_object; // 0x923 Mov
	var_83_float = 70.0; // 0x924 MovF
	func_4682(var_82_object, var_83_float); // 0x925 NEW_2
	var_128_bool = var_81_bool == 0; // 0x927 Not
	if(var_128_bool == 0) goto Label_2347; // 0x928 JumpB
	var_70_int = -2; // 0x929 MovI
	return 8; // 0x92a Return
	
Label_2347:
	CreateDialog(var_77_object); // 0x92b Func
	var_129_int = 0; // 0x92d PushV
	func_5204(var_129_int); // 0x92e NEW_2
	SetNPCName(var_129_int); // 0x930 ObjFunc
	var_130_int = 0; // 0x932 PushV
	func_5202(var_130_int); // 0x933 NEW_2
	SetNPCDescription(var_130_int); // 0x935 ObjFunc
	var_131_string = ""; // 0x937 PushV
	func_5206(var_131_string); // 0x938 NEW_2
	SetPhoto(var_131_string); // 0x93a ObjFunc
	var_132_string = ""; // 0x93c PushV
	func_5208(var_132_string); // 0x93d NEW_2
	SetPhoto2(var_132_string); // 0x93f ObjFunc
	var_133_int = 0; // 0x941 PushV
	func_5887(var_133_int); // 0x942 NEW_2
	SetPlayerName(var_133_int); // 0x944 ObjFunc
	var_79_int = -1; // 0x946 MovI
	IsOverrideActive(var_78_bool); // 0x947 Func
	var_141_bool = var_78_bool; // 0x949 Push
	if(var_141_bool == 0) goto Label_2381; // 0x94a JumpB
	var_70_int = -2; // 0x94b MovI
	return 8; // 0x94c Return
	
Label_2381:
	DoDialog(var_77_object); // 0x94d Func
	var_142_bool = 0; var_143_object = Obj(); // 0x94f PushV
	var_144_object = Obj(); // 0x950 PushV
	func_4960(var_144_object); // 0x951 NEW_2
	var_143_object = var_144_object; // 0x952 Mov
	func_4769(var_142_bool, var_143_object); // 0x954 NEW_2
	var_237_object = Obj(); var_238_object = Obj(); // 0x956 PushV
	var_237_object = var_71_object; // 0x957 Mov
	var_238_object = var_77_object; // 0x958 Mov
	TaskCall(11); // 0x959 TaskCall
	func_2417(var_239_object, var_240_object, var_241_string, var_242_bool, var_237_object, var_238_object); // 0x95a NEW_2
	TaskReturn(); // 0x95b TaskReturn
	IsDialogEnd(var_80_bool); // 0x95d ObjFunc
	
Label_2399:
	var_286_bool = var_80_bool == 0; // 0x95f Not
	if(var_286_bool == 0) goto Label_2406; // 0x960 JumpB
	sync(); // 0x961 Func
	IsDialogEnd(var_80_bool); // 0x963 ObjFunc
	goto Label_2399; // 0x965 Jump
	
Label_2406:
	var_287_object = Obj(); // 0x966 PushV
	var_287_object = var_71_object; // 0x967 Mov
	func_4751(); // 0x968 NEW_2
	StopDialog(var_77_object); // 0x96a Func
	GetReturnValue(var_79_int); // 0x96c ObjFunc
	var_70_int = var_79_int; // 0x96e Mov
	return 8; // 0x96f Return
}


func_4907(var_270_string)
{
	var_271_bool = 0; var_272_float = 0; var_273_float = 0; var_274_bool = 0; var_275_float = 0; var_276_float = 0; // 0x132b PushV
	lshHasAnimation(var_274_bool, var_270_string); // 0x132c Func
	var_277_bool = var_274_bool; // 0x132e Push
	if(var_277_bool == 0) goto Label_4918; // 0x132f JumpB
	lshGetAnimTimes(var_270_string, var_275_float, var_276_float); // 0x1330 Func
	var_278_bool = 0; // 0x1332 PushB
	lshPlayAnimation(var_275_float, var_276_float, var_278_bool); // 0x1333 Func
	goto Label_4922; // 0x1335 Jump
	
Label_4922:
	return 6; // 0x133a Return
	
Label_4918:
	var_279_string = "Can't find lsh animation : "; // 0x1336 PushS
	var_280_int = var_279_string + var_270_string; // 0x1337 Add
	Trace(var_280_int); // 0x1338 Func
}


func_5424()
{
	var_106_int = 0; var_107_int = 0; // 0x1530 PushV
	func_5770(); // 0x1532 NEW_2
	var_116_bool = 0; var_117_string = ""; var_118_string = ""; // 0x1534 PushV
	var_117_string = "quest_b8_02"; // 0x1535 MovS
	var_118_string = "completed"; // 0x1536 MovS
	func_5108(var_116_bool, var_117_string, var_118_string); // 0x1537 NEW_2
	var_122_string = "b8q02_book"; // 0x1539 PushS
	var_123_int = 1; // 0x153a PushI
	RemoveItemByType(var_107_int, var_122_string, var_123_int); // 0x153b ObjFunc
	return 2; // 0x153d Return
}


func_4406(var_2_object, var_899_string)
{
	var_900_bool = 0; // 0x1137 PushV
	func_5210(var_900_bool); // 0x1138 NEW_2
	var_901_bool = var_900_bool == 0; // 0x113a Not
	if(var_901_bool == 0) goto Label_4413; // 0x113b JumpB
	return 0; // 0x113c Return
	
Label_4413:
	var_902_bool = var_899_string == var_2_object; // 0x113d Eq
	if(var_902_bool == 0) goto Label_4416; // 0x113e JumpB
	return 0; // 0x113f Return
	
Label_4416:
	var_903_string = ""; var_904_bool = 0; // 0x1140 PushV
	var_903_string = var_899_string; // 0x1141 Mov
	var_905_string = ""; // 0x1142 PushS
	var_906_bool = var_899_string == var_905_string; // 0x1143 Eq
	if(var_906_bool == 0) goto Label_4423; // 0x1144 JumpB
	var_904_bool = 0; // 0x1145 MovB
	goto Label_4424; // 0x1146 Jump
	
Label_4424:
	func_4923(var_903_string, var_904_bool); // 0x1148 NEW_2
	var_2_object = var_899_string; // 0x114a TMov
	return 0; // 0x114b Return
	
Label_4423:
	var_904_bool = 1; // 0x1147 MovB
}


func_4923(var_248_string, var_249_bool)
{
	var_252_bool = 0; var_253_float = 0; var_254_float = 0; var_255_bool = 0; var_256_float = 0; var_257_float = 0; // 0x133b PushV
	lshHasAnimation(var_255_bool, var_248_string); // 0x133c Func
	var_258_bool = var_255_bool; // 0x133e Push
	if(var_258_bool == 0) goto Label_4933; // 0x133f JumpB
	lshGetAnimTimes(var_248_string, var_256_float, var_257_float); // 0x1340 Func
	lshPlayAnimation(var_256_float, var_257_float, var_249_bool); // 0x1342 Func
	goto Label_4937; // 0x1344 Jump
	
Label_4937:
	return 6; // 0x1349 Return
	
Label_4933:
	var_259_string = "Can't find lsh animation : "; // 0x1345 PushS
	var_260_int = var_259_string + var_248_string; // 0x1346 Add
	Trace(var_260_int); // 0x1347 Func
}


func_5438()
{
	var_676_string = "oob8MladVlad1"; // 0x153f PushS
	var_677_int = 1; // 0x1540 PushI
	SetVariable(var_676_string, var_677_int); // 0x1541 Func
	return 0; // 0x1543 Return
}


func_5444()
{
	var_63_string = "b11q01KnowWhoKilled"; // 0x1545 PushS
	var_64_int = 1; // 0x1546 PushI
	SetVariable(var_63_string, var_64_int); // 0x1547 Func
	func_5705(); // 0x154a NEW_2
	return 0; // 0x154c Return
}


func_4938(var_176_bool, var_177_string)
{
	var_178_bool = 0; var_179_bool = 0; // 0x134a PushV
	var_180_bool = 0; // 0x134b PushV
	func_5210(var_180_bool); // 0x134c NEW_2
	if(var_180_bool == 0) goto Label_4951; // 0x134e JumpB
	lshHasSpeech(var_179_bool, var_177_string); // 0x134f Func
	var_181_bool = var_179_bool; // 0x1351 Push
	if(var_181_bool == 0) goto Label_4951; // 0x1352 JumpB
	lshPlaySpeech(var_177_string); // 0x1353 Func
	var_176_bool = 1; // 0x1355 MovB
	return 2; // 0x1356 Return
	
Label_4951:
	var_176_bool = 0; // 0x1357 MovB
	return 2; // 0x1358 Return
}


func_5453()
{
	var_57_string = "oob11MladVlad1"; // 0x154e PushS
	var_58_int = 1; // 0x154f PushI
	SetVariable(var_57_string, var_58_int); // 0x1550 Func
	return 0; // 0x1552 Return
}


func_5459()
{
	var_437_bool = 0; var_438_string = ""; var_439_string = ""; // 0x1554 PushV
	var_438_string = "quest_b2_01"; // 0x1555 MovS
	var_439_string = "place_mladvlad"; // 0x1556 MovS
	func_5108(var_437_bool, var_438_string, var_439_string); // 0x1557 NEW_2
	return 0; // 0x1559 Return
}


func_4953()
{
	var_52_bool = 0; // 0x1359 PushV
	func_5210(var_52_bool); // 0x135a NEW_2
	if(var_52_bool == 0) goto Label_4959; // 0x135c JumpB
	lshStopSpeech(); // 0x135d Func
	
Label_4959:
	return 0; // 0x135f Return
}


func_5466(var_171_object)
{
	var_173_string = "money10000 is given"; // 0x155b PushS
	Trace(var_173_string); // 0x155c Func
	var_174_object = Obj(); var_175_int = 0; // 0x155e PushV
	var_174_object = var_171_object; // 0x155f Mov
	var_175_int = 10000; // 0x1560 MovI
	func_5050(var_174_object, var_175_int); // 0x1561 NEW_2
	return 0; // 0x1563 Return
}


func_2908(var_0_bool, var_1_object, var_2_object, var_3_object, var_661_object, var_662_object)
{
	var_0_bool = var_662_object; // 0xb5d TMov
	var_1_object = var_661_object; // 0xb5e TMov
	var_3_object = 0; // 0xb5f TMovB
	var_667_int = 1; // 0xb60 PushI
	if(var_667_int == 0) goto Label_2996; // 0xb61 JumpB
	var_668_bool = 0; var_669_object = Obj(); // 0xb62 PushV
	var_669_object = var_1_object; // 0xb63 MovT
	func_5538(var_669_object); // 0xb64 NEW_2
	if(var_668_bool == 0) goto Label_2944; // 0xb66 JumpB
	var_674_object = Obj(); var_675_object = Obj(); // 0xb67 PushV
	var_674_object = var_1_object; // 0xb68 MovT
	var_675_object = var_0_bool; // 0xb69 MovT
	func_5438(); // 0xb6a NEW_2
	var_678_string = ""; // 0xb6c PushV
	var_678_string = "Rage"; // 0xb6d MovS
	func_3026(var_662_object, var_678_string); // 0xb6e NEW_2
	var_686_int = 521469; // 0xb70 PushI
	SetMessage(var_686_int); // 0xb71 TObjFunc
	ClearReplies(); // 0xb73 TObjFunc
	var_687_int = 523789; // 0xb75 PushI
	var_688_int = 25055; // 0xb76 PushI
	var_689_int = 25054; // 0xb77 PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0xb78 TObjFunc
	var_690_int = 523804; // 0xb7a PushI
	var_691_int = 25055; // 0xb7b PushI
	var_692_int = 25070; // 0xb7c PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0xb7d TObjFunc
	goto Label_2996; // 0xb7f Jump
	
Label_2996:
	var_693_bool = 0; // 0xbb4 PushV
	func_5210(var_693_bool); // 0xbb5 NEW_2
	if(var_693_bool == 0) goto Label_3011; // 0xbb7 JumpB
	
Label_3000:
	lshWaitForAnimEnd(); // 0xbb8 Func
	var_694_object = var_3_object; // 0xbba PushT
	if(var_694_object == 0) goto Label_3005; // 0xbbb JumpB
	goto Label_3010; // 0xbbc Jump
	
Label_3010:
	goto Label_3025; // 0xbc2 Jump
	
Label_3025:
	return 0; // 0xbd1 Return
	
Label_3005:
	var_695_string = ""; // 0xbbd PushV
	var_695_string = var_2_object; // 0xbbe MovT
	func_4907(var_695_string); // 0xbbf NEW_2
	goto Label_3000; // 0xbc1 Jump
	
Label_3011:
	var_696_string = "all"; // 0xbc3 PushS
	var_697_string = "idle"; // 0xbc4 PushS
	PlayAnimation(var_696_string, var_697_string); // 0xbc5 Func
	
Label_3015:
	WaitForAnimEnd(); // 0xbc7 Func
	var_698_object = var_3_object; // 0xbc9 PushT
	if(var_698_object == 0) goto Label_3020; // 0xbca JumpB
	goto Label_3025; // 0xbcb Jump
	
Label_3020:
	var_699_string = "all"; // 0xbcc PushS
	var_700_string = "idle"; // 0xbcd PushS
	PlayAnimation(var_699_string, var_700_string); // 0xbce Func
	goto Label_3015; // 0xbd0 Jump
	
Label_2944:
	var_701_string = ""; // 0xb80 PushV
	var_701_string = "Rage"; // 0xb81 MovS
	func_3026(var_662_object, var_701_string); // 0xb82 NEW_2
	var_702_int = 521474; // 0xb84 PushI
	SetMessage(var_702_int); // 0xb85 TObjFunc
	ClearReplies(); // 0xb87 TObjFunc
	var_703_bool = 0; var_704_object = Obj(); // 0xb89 PushV
	var_704_object = var_1_object; // 0xb8a MovT
	func_5550(var_704_object); // 0xb8b NEW_2
	if(var_703_bool == 0) goto Label_2963; // 0xb8d JumpB
	var_709_int = 521475; // 0xb8e PushI
	var_710_int = 22642; // 0xb8f PushI
	var_711_int = 22640; // 0xb90 PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0xb91 TObjFunc
	
Label_2963:
	var_712_bool = 0; // 0xb93 PushV
	var_712_bool = 0; // 0xb94 MovB
	var_713_bool = 0; var_714_object = Obj(); // 0xb95 PushV
	var_714_object = var_1_object; // 0xb96 MovT
	func_5550(var_714_object); // 0xb97 NEW_2
	var_715_bool = var_713_bool == 0; // 0xb99 Not
	if(var_715_bool == 0) goto Label_2977; // 0xb9a JumpB
	var_716_bool = 0; var_717_object = Obj(); // 0xb9b PushV
	var_717_object = var_1_object; // 0xb9c MovT
	func_5562(var_716_bool, var_717_object); // 0xb9d NEW_2
	if(var_716_bool == 0) goto Label_2977; // 0xb9f JumpB
	var_712_bool = 1; // 0xba0 MovB
	
Label_2977:
	if(var_712_bool == 0) goto Label_2983; // 0xba1 JumpB
	var_725_int = 521479; // 0xba2 PushI
	var_726_int = 22645; // 0xba3 PushI
	var_727_int = 22644; // 0xba4 PushI
	AddReply(var_725_int, var_726_int, var_727_int); // 0xba5 TObjFunc
	
Label_2983:
	var_728_int = 523837; // 0xba7 PushI
	var_729_int = 25111; // 0xba8 PushI
	var_730_int = 25110; // 0xba9 PushI
	AddReply(var_728_int, var_729_int, var_730_int); // 0xbaa TObjFunc
	var_731_int = 521476; // 0xbac PushI
	var_732_int = -1; // 0xbad PushI
	var_733_int = 22641; // 0xbae PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0xbaf TObjFunc
	goto Label_2996; // 0xbb1 Jump
}


func_4960(var_144_object)
{
	var_145_object = Obj(); var_146_object = Obj(); // 0x1360 PushV
	self(var_146_object); // 0x1361 Func
	var_144_object = var_146_object; // 0x1363 Mov
	return 2; // 0x1364 Return
}


func_5476()
{
	var_151_string = "playsound"; // 0x1565 PushS
	var_152_string = "givemoney"; // 0x1566 PushS
	TriggerWorld(var_151_string, var_152_string); // 0x1567 Func
	return 0; // 0x1569 Return
}


func_4966(var_108_cvector, var_109_cvector)
{
	var_111_float = 0; var_112_float = 0; // 0x1366 PushV
	var_113_int = var_109_cvector | var_109_cvector; // 0x1367 Or
	var_112_float = sqrt(var_113_int); // 0x1368 Sqrt2
	var_114_float = 0.0; // 0x1369 PushF
	var_115_bool = var_112_float < var_114_float; // 0x136a LT
	if(var_115_bool == 0) goto Label_4974; // 0x136b JumpB
	var_108_cvector = CVector(0.0, 0.0, 0.0); // 0x136c MovV
	return 2; // 0x136d Return
	
Label_4974:
	var_108_cvector = var_109_cvector / var_109_cvector; // 0x136e Div2
	return 2; // 0x136f Return
}


func_5482()
{
	var_81_string = "playsound"; // 0x156b PushS
	var_82_string = "giveitem"; // 0x156c PushS
	TriggerWorld(var_81_string, var_82_string); // 0x156d Func
	return 0; // 0x156f Return
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_323_object, var_324_object)
{
	var_0_bool = var_324_object; // 0x16c TMov
	var_1_object = var_323_object; // 0x16d TMov
	var_3_object = 0; // 0x16e TMovB
	var_329_int = 1; // 0x16f PushI
	if(var_329_int == 0) goto Label_451; // 0x170 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x171 PushV
	var_331_object = var_1_object; // 0x172 MovT
	func_5609(var_331_object); // 0x173 NEW_2
	if(var_330_bool == 0) goto Label_394; // 0x175 JumpB
	var_338_string = ""; // 0x176 PushV
	var_338_string = "Untrust"; // 0x177 MovS
	func_481(var_324_object, var_338_string); // 0x178 NEW_2
	var_346_int = 520042; // 0x17a PushI
	SetMessage(var_346_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_347_int = 520043; // 0x17f PushI
	var_348_int = 21227; // 0x180 PushI
	var_349_int = 21225; // 0x181 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x182 TObjFunc
	var_350_int = 520044; // 0x184 PushI
	var_351_int = -1; // 0x185 PushI
	var_352_int = 21226; // 0x186 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x187 TObjFunc
	goto Label_451; // 0x189 Jump
	
Label_451:
	var_353_bool = 0; // 0x1c3 PushV
	func_5210(var_353_bool); // 0x1c4 NEW_2
	if(var_353_bool == 0) goto Label_466; // 0x1c6 JumpB
	
Label_455:
	lshWaitForAnimEnd(); // 0x1c7 Func
	var_354_object = var_3_object; // 0x1c9 PushT
	if(var_354_object == 0) goto Label_460; // 0x1ca JumpB
	goto Label_465; // 0x1cb Jump
	
Label_465:
	goto Label_480; // 0x1d1 Jump
	
Label_480:
	return 0; // 0x1e0 Return
	
Label_460:
	var_355_string = ""; // 0x1cc PushV
	var_355_string = var_2_object; // 0x1cd MovT
	func_4907(var_355_string); // 0x1ce NEW_2
	goto Label_455; // 0x1d0 Jump
	
Label_466:
	var_356_string = "all"; // 0x1d2 PushS
	var_357_string = "idle"; // 0x1d3 PushS
	PlayAnimation(var_356_string, var_357_string); // 0x1d4 Func
	
Label_470:
	WaitForAnimEnd(); // 0x1d6 Func
	var_358_object = var_3_object; // 0x1d8 PushT
	if(var_358_object == 0) goto Label_475; // 0x1d9 JumpB
	goto Label_480; // 0x1da Jump
	
Label_475:
	var_359_string = "all"; // 0x1db PushS
	var_360_string = "idle"; // 0x1dc PushS
	PlayAnimation(var_359_string, var_360_string); // 0x1dd Func
	goto Label_470; // 0x1df Jump
	
Label_394:
	var_361_bool = 0; var_362_object = Obj(); // 0x18a PushV
	var_362_object = var_1_object; // 0x18b MovT
	func_5621(var_362_object); // 0x18c NEW_2
	if(var_361_bool == 0) goto Label_424; // 0x18e JumpB
	var_367_object = Obj(); var_368_object = Obj(); // 0x18f PushV
	var_367_object = var_1_object; // 0x190 MovT
	var_368_object = var_0_bool; // 0x191 MovT
	func_5228(); // 0x192 NEW_2
	var_371_string = ""; // 0x194 PushV
	var_371_string = "Neutral"; // 0x195 MovS
	func_481(var_324_object, var_371_string); // 0x196 NEW_2
	var_372_int = 519876; // 0x198 PushI
	SetMessage(var_372_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_373_int = 519877; // 0x19d PushI
	var_374_int = 21042; // 0x19e PushI
	var_375_int = 21041; // 0x19f PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x1a0 TObjFunc
	var_376_int = 519905; // 0x1a2 PushI
	var_377_int = 21042; // 0x1a3 PushI
	var_378_int = 21073; // 0x1a4 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x1a5 TObjFunc
	goto Label_451; // 0x1a7 Jump
	
Label_424:
	var_379_string = ""; // 0x1a8 PushV
	var_379_string = "Neutral"; // 0x1a9 MovS
	func_481(var_324_object, var_379_string); // 0x1aa NEW_2
	var_380_int = 519906; // 0x1ac PushI
	SetMessage(var_380_int); // 0x1ad TObjFunc
	ClearReplies(); // 0x1af TObjFunc
	var_381_bool = 0; var_382_object = Obj(); // 0x1b1 PushV
	var_382_object = var_1_object; // 0x1b2 MovT
	func_5633(var_382_object); // 0x1b3 NEW_2
	if(var_381_bool == 0) goto Label_443; // 0x1b5 JumpB
	var_387_int = 519907; // 0x1b6 PushI
	var_388_int = 21077; // 0x1b7 PushI
	var_389_int = 21076; // 0x1b8 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x1b9 TObjFunc
	
Label_443:
	var_390_int = 519917; // 0x1bb PushI
	var_391_int = -1; // 0x1bc PushI
	var_392_int = 21086; // 0x1bd PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x1be TObjFunc
	goto Label_451; // 0x1c0 Jump
}


func_5488()
{
	var_530_string = "b5MladVladVisit"; // 0x1571 PushS
	var_531_int = 1; // 0x1572 PushI
	SetVariable(var_530_string, var_531_int); // 0x1573 Func
	return 0; // 0x1575 Return
}


func_2417(var_0_bool, var_1_object, var_2_object, var_3_object, var_237_object, var_238_object)
{
	var_0_bool = var_238_object; // 0x972 TMov
	var_1_object = var_237_object; // 0x973 TMov
	var_3_object = 0; // 0x974 TMovB
	var_243_int = 1; // 0x975 PushI
	if(var_243_int == 0) goto Label_2445; // 0x976 JumpB
	var_244_string = ""; // 0x977 PushV
	var_244_string = "Neutral"; // 0x978 MovS
	func_2475(var_238_object, var_244_string); // 0x979 NEW_2
	var_261_int = 520768; // 0x97b PushI
	SetMessage(var_261_int); // 0x97c TObjFunc
	ClearReplies(); // 0x97e TObjFunc
	var_262_int = 520769; // 0x980 PushI
	var_263_int = 21984; // 0x981 PushI
	var_264_int = 21983; // 0x982 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x983 TObjFunc
	var_265_int = 520772; // 0x985 PushI
	var_266_int = 21987; // 0x986 PushI
	var_267_int = 21986; // 0x987 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x988 TObjFunc
	goto Label_2445; // 0x98a Jump
	
Label_2445:
	var_268_bool = 0; // 0x98d PushV
	func_5210(var_268_bool); // 0x98e NEW_2
	if(var_268_bool == 0) goto Label_2460; // 0x990 JumpB
	
Label_2449:
	lshWaitForAnimEnd(); // 0x991 Func
	var_269_object = var_3_object; // 0x993 PushT
	if(var_269_object == 0) goto Label_2454; // 0x994 JumpB
	goto Label_2459; // 0x995 Jump
	
Label_2459:
	goto Label_2474; // 0x99b Jump
	
Label_2474:
	return 0; // 0x9aa Return
	
Label_2454:
	var_270_string = ""; // 0x996 PushV
	var_270_string = var_2_object; // 0x997 MovT
	func_4907(var_270_string); // 0x998 NEW_2
	goto Label_2449; // 0x99a Jump
	
Label_2460:
	var_281_string = "all"; // 0x99c PushS
	var_282_string = "idle"; // 0x99d PushS
	PlayAnimation(var_281_string, var_282_string); // 0x99e Func
	
Label_2464:
	WaitForAnimEnd(); // 0x9a0 Func
	var_283_object = var_3_object; // 0x9a2 PushT
	if(var_283_object == 0) goto Label_2469; // 0x9a3 JumpB
	goto Label_2474; // 0x9a4 Jump
	
Label_2469:
	var_284_string = "all"; // 0x9a5 PushS
	var_285_string = "idle"; // 0x9a6 PushS
	PlayAnimation(var_284_string, var_285_string); // 0x9a7 Func
	goto Label_2464; // 0x9a9 Jump
}


func_4976(var_105_float, var_106_float)
{
	var_108_int = 0; // 0x1371 PushI
	var_109_bool = var_106_float < var_108_int; // 0x1372 LT
	if(var_109_bool == 0) goto Label_4982; // 0x1373 JumpB
	var_105_float = -var_106_float; // 0x1374 Neg2
	goto Label_4983; // 0x1375 Jump
	
Label_4983:
	return 0; // 0x1377 Return
	
Label_4982:
	var_105_float = var_106_float; // 0x1376 Mov
}


func_5494(var_199_object)
{
	var_201_string = "money 7000 is given"; // 0x1577 PushS
	Trace(var_201_string); // 0x1578 Func
	var_202_object = Obj(); var_203_int = 0; // 0x157a PushV
	var_202_object = var_199_object; // 0x157b Mov
	var_203_int = 7000; // 0x157c MovI
	func_5050(var_202_object, var_203_int); // 0x157d NEW_2
	return 0; // 0x157f Return
}


func_4984(var_116_float, var_117_cvector)
{
	var_118_float = GetByIndex(var_117_cvector, 0); // 0x1379 PushE
	var_119_float = GetByIndex(var_117_cvector, 0); // 0x137a PushE
	var_120_float = var_118_float * var_119_float; // 0x137b Mult
	var_121_float = GetByIndex(var_117_cvector, 2); // 0x137c PushE
	var_122_float = GetByIndex(var_117_cvector, 2); // 0x137d PushE
	var_123_float = var_121_float * var_122_float; // 0x137e Mult
	var_124_int = var_120_float + var_123_float; // 0x137f Add
	var_116_float = sqrt(var_124_int); // 0x1380 Sqrt2
	return 0; // 0x1381 Return
}


func_4477(var_0_bool, var_1_object, var_2_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_cvector = CVector(0,0,0); // 0x117d PushV
	var_72_bool = 1; // 0x117e PushB
	SensePlayerOnly(var_72_bool); // 0x117f Func
	func_4565(); // 0x1182 NEW_2
	GetScene(var_61_object); // 0x1184 Func
	var_2_object = 0; // 0x1186 TMovI
	
Label_4487:
	var_77_string = ""; var_78_int = 0; // 0x1187 PushV
	var_78_int = var_2_object; // 0x1188 MovT
	func_5188(var_77_string, var_78_int); // 0x1189 NEW_2
	GetLocator(var_77_string, var_62_bool); // 0x118b ObjFunc
	var_86_bool = var_62_bool == 0; // 0x118d Not
	if(var_86_bool == 0) goto Label_4496; // 0x118e JumpB
	goto Label_4499; // 0x118f Jump
	
Label_4499:
	var_87_bool = 0; // 0x1193 PushV
	func_4677(var_87_bool); // 0x1194 NEW_2
	var_90_bool = var_87_bool == 0; // 0x1196 Not
	if(var_90_bool == 0) goto Label_4509; // 0x1197 JumpB
	TaskCall(0); // 0x1199 TaskCall
	func_0(); // 0x119a NEW_2
	TaskReturn(); // 0x119b TaskReturn
	
Label_4509:
	func_4573(var_70_bool, var_71_cvector); // 0x119e NEW_2
	
Label_4512:
	irand(var_63_int, var_70_bool); // 0x11a0 Func
	var_111_string = ""; var_112_int = 0; // 0x11a2 PushV
	var_112_int = var_63_int; // 0x11a3 Mov
	func_5188(var_111_string, var_112_int); // 0x11a4 NEW_2
	GetLocator(var_111_string, var_64_bool, var_65_cvector, var_66_cvector); // 0x11a6 ObjFunc
	var_113_cvector = CVector(0,0,0); // 0x11a8 PushV
	func_4620(var_113_cvector); // 0x11a9 NEW_2
	var_67_cvector = var_65_cvector - var_113_cvector; // 0x11ab Sub2
	var_116_float = 0; var_117_cvector = CVector(0,0,0); // 0x11ac PushV
	var_117_cvector = var_67_cvector; // 0x11ad Mov
	func_4984(var_116_float, var_117_cvector); // 0x11ae NEW_2
	var_125_bool = var_116_float > var_1_object; // 0x11b0 GT
	if(var_125_bool == 0) goto Label_4559; // 0x11b1 JumpB
	GetHeight(var_68_float); // 0x11b2 Func
	var_69_cvector = var_65_cvector; // 0x11b4 Mov
	var_126_float = GetByIndex(var_69_cvector, 1); // 0x11b5 PushE
	var_126_float = var_126_float + var_68_float; // 0x11b6 Add2
	SetByIndex(var_69_cvector, 1) = var_126_float; // 0x11b7 PopE
	CanReachByPF(var_70_bool, var_69_cvector); // 0x11b8 Func
	var_127_bool = var_70_bool; // 0x11ba Push
	if(var_127_bool == 0) goto Label_4559; // 0x11bb JumpB
	var_128_int = var_67_cvector | var_67_cvector; // 0x11bc Or
	var_129_float = sqrt(var_128_int); // 0x11bd Sqrt
	var_130_float = var_0_bool / var_129_float; // 0x11be Div
	var_131_float = var_67_cvector * var_130_float; // 0x11bf Mult
	var_71_cvector = var_65_cvector - var_131_float; // 0x11c0 Sub2
	var_132_bool = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); // 0x11c1 PushV
	var_133_cvector = var_71_cvector; // 0x11c2 Mov
	var_134_cvector = var_66_cvector; // 0x11c3 Mov
	TaskCall(1); // 0x11c4 TaskCall
	func_13(var_135_bool, var_132_bool, var_133_cvector, var_134_cvector); // 0x11c5 NEW_2
	TaskReturn(); // 0x11c6 TaskReturn
	if(var_135_bool == 0) goto Label_4559; // 0x11c8 JumpB
	var_159_int = 0; // 0x11c9 PushV
	var_159_int = var_63_int; // 0x11ca Mov
	TaskCall(3); // 0x11cb TaskCall
	func_198(var_159_int); // 0x11cc NEW_2
	TaskReturn(); // 0x11cd TaskReturn
	
Label_4559:
	var_212_int = 1; // 0x11cf PushI
	Sleep(var_212_int); // 0x11d0 Func
	goto Label_4512; // 0x11d2 Jump
	
Label_4496:
	var_213_int = 1; // 0x1190 PushI
	var_2_object = var_2_object + var_213_int; // 0x1191 Add2
	goto Label_4487; // 0x1192 Jump
}


func_5504(var_204_object)
{
	var_206_string = "recipe2 is given"; // 0x1581 PushS
	Trace(var_206_string); // 0x1582 Func
	var_207_object = Obj(); var_208_string = ""; var_209_int = 0; // 0x1584 PushV
	var_207_object = var_204_object; // 0x1585 Mov
	var_208_string = "recipe2"; // 0x1586 MovS
	var_209_int = 1; // 0x1587 MovI
	func_5088(var_207_object, var_208_string, var_209_int); // 0x1588 NEW_2
	return 0; // 0x158a Return
}


func_4994(var_332_int, var_333_string)
{
	var_334_int = 0; var_335_int = 0; // 0x1382 PushV
	GetVariable(var_333_string, var_335_int); // 0x1383 Func
	var_332_int = var_335_int; // 0x1385 Mov
	return 2; // 0x1386 Return
}


func_4999(var_118_object, var_119_string)
{
	var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj(); var_123_object = Obj(); // 0x1387 PushV
	GetMainOutdoorScene(var_122_object); // 0x1388 Func
	var_124_string = ".bin"; // 0x138a PushS
	var_125_int = var_119_string + var_124_string; // 0x138b Add
	AddBlankActor(var_123_object, var_122_object, var_119_string, var_125_int); // 0x138c Func
	var_118_object = var_123_object; // 0x138e Mov
	return 4; // 0x138f Return
}


func_5515(var_210_object)
{
	var_212_string = "recipe3 is given"; // 0x158c PushS
	Trace(var_212_string); // 0x158d Func
	var_213_object = Obj(); var_214_string = ""; var_215_int = 0; // 0x158f PushV
	var_213_object = var_210_object; // 0x1590 Mov
	var_214_string = "recipe3"; // 0x1591 MovS
	var_215_int = 1; // 0x1592 MovI
	func_5088(var_213_object, var_214_string, var_215_int); // 0x1593 NEW_2
	return 0; // 0x1595 Return
}


func_5010(var_90_object, var_91_string)
{
	var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); // 0x1392 PushV
	GetMainOutdoorScene(var_94_object); // 0x1393 Func
	var_96_string = ".xml"; // 0x1395 PushS
	var_97_int = var_91_string + var_96_string; // 0x1396 Add
	AddBlankActorFromXml(var_95_object, var_94_object, var_91_string, var_97_int); // 0x1397 Func
	var_90_object = var_95_object; // 0x1399 Mov
	return 4; // 0x139a Return
}


func_5526()
{
	var_126_string = "playsound"; // 0x1597 PushS
	var_127_string = "giveitem"; // 0x1598 PushS
	TriggerWorld(var_126_string, var_127_string); // 0x1599 Func
	return 0; // 0x159b Return
}


func_5532()
{
	var_167_string = "playsound"; // 0x159d PushS
	var_168_string = "mapmark"; // 0x159e PushS
	TriggerWorld(var_167_string, var_168_string); // 0x159f Func
	return 0; // 0x15a1 Return
}


func_5021(var_103_string, var_104_bool)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x139d PushV
	FindActor(var_106_object, var_103_string); // 0x139e Func
	var_107_bool = var_106_object == 0; // 0x13a0 Not
	if(var_107_bool == 0) goto Label_5033; // 0x13a1 JumpB
	var_108_string = "Door "; // 0x13a2 PushS
	var_109_int = var_108_string + var_103_string; // 0x13a3 Add
	var_110_string = " not found"; // 0x13a4 PushS
	var_111_int = var_109_int + var_110_string; // 0x13a5 Add
	Trace(var_111_int); // 0x13a6 Func
	goto Label_5036; // 0x13a8 Jump
	
Label_5036:
	return 2; // 0x13ac Return
	
Label_5033:
	var_112_string = "locked"; // 0x13a9 PushS
	SetProperty(var_112_string, var_104_bool); // 0x13aa ObjFunc
}


func_5538(var_668_bool)
{
	var_670_int = 0; var_671_string = ""; // 0x15a3 PushV
	var_671_string = "oob8MladVlad1"; // 0x15a4 MovS
	func_4994(var_670_int, var_671_string); // 0x15a5 NEW_2
	var_672_int = 0; // 0x15a7 PushI
	var_673_bool = var_670_int == var_672_int; // 0x15a8 Eq
	if(var_673_bool == 0) goto Label_5548; // 0x15a9 JumpB
	var_668_bool = 1; // 0x15aa MovB
	return 0; // 0x15ab Return
	
Label_5548:
	var_668_bool = 0; // 0x15ac MovB
	return 0; // 0x15ad Return
}


func_4008(var_0_bool, var_808_int, var_809_object)
{
	var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0; var_815_object = Obj(); var_816_bool = 0; var_817_int = 0; var_818_bool = 0; // 0xfa8 PushV
	var_0_bool = var_809_object; // 0xfa9 TMov
	var_819_bool = 0; var_820_object = Obj(); var_821_float = 0; // 0xfaa PushV
	var_820_object = var_809_object; // 0xfab Mov
	var_821_float = 70.0; // 0xfac MovF
	func_4682(var_820_object, var_821_float); // 0xfad NEW_2
	var_822_bool = var_819_bool == 0; // 0xfaf Not
	if(var_822_bool == 0) goto Label_4019; // 0xfb0 JumpB
	var_808_int = -2; // 0xfb1 MovI
	return 8; // 0xfb2 Return
	
Label_4019:
	CreateDialog(var_815_object); // 0xfb3 Func
	var_823_int = 0; // 0xfb5 PushV
	func_5204(var_823_int); // 0xfb6 NEW_2
	SetNPCName(var_823_int); // 0xfb8 ObjFunc
	var_824_int = 0; // 0xfba PushV
	func_5202(var_824_int); // 0xfbb NEW_2
	SetNPCDescription(var_824_int); // 0xfbd ObjFunc
	var_825_string = ""; // 0xfbf PushV
	func_5206(var_825_string); // 0xfc0 NEW_2
	SetPhoto(var_825_string); // 0xfc2 ObjFunc
	var_826_string = ""; // 0xfc4 PushV
	func_5208(var_826_string); // 0xfc5 NEW_2
	SetPhoto2(var_826_string); // 0xfc7 ObjFunc
	var_827_int = 0; // 0xfc9 PushV
	func_5887(var_827_int); // 0xfca NEW_2
	SetPlayerName(var_827_int); // 0xfcc ObjFunc
	var_817_int = -1; // 0xfce MovI
	IsOverrideActive(var_816_bool); // 0xfcf Func
	var_828_bool = var_816_bool; // 0xfd1 Push
	if(var_828_bool == 0) goto Label_4053; // 0xfd2 JumpB
	var_808_int = -2; // 0xfd3 MovI
	return 8; // 0xfd4 Return
	
Label_4053:
	DoDialog(var_815_object); // 0xfd5 Func
	var_829_bool = 0; var_830_object = Obj(); // 0xfd7 PushV
	var_831_object = Obj(); // 0xfd8 PushV
	func_4960(var_831_object); // 0xfd9 NEW_2
	var_830_object = var_831_object; // 0xfda Mov
	func_4769(var_829_bool, var_830_object); // 0xfdc NEW_2
	var_832_object = Obj(); var_833_object = Obj(); // 0xfde PushV
	var_832_object = var_809_object; // 0xfdf Mov
	var_833_object = var_815_object; // 0xfe0 Mov
	TaskCall(19); // 0xfe1 TaskCall
	func_4089(var_834_object, var_835_object, var_836_string, var_837_bool, var_832_object, var_833_object); // 0xfe2 NEW_2
	TaskReturn(); // 0xfe3 TaskReturn
	IsDialogEnd(var_818_bool); // 0xfe5 ObjFunc
	
Label_4071:
	var_865_bool = var_818_bool == 0; // 0xfe7 Not
	if(var_865_bool == 0) goto Label_4078; // 0xfe8 JumpB
	sync(); // 0xfe9 Func
	IsDialogEnd(var_818_bool); // 0xfeb ObjFunc
	goto Label_4071; // 0xfed Jump
	
Label_4078:
	var_866_object = Obj(); // 0xfee PushV
	var_866_object = var_809_object; // 0xfef Mov
	func_4751(); // 0xff0 NEW_2
	StopDialog(var_815_object); // 0xff2 Func
	GetReturnValue(var_817_int); // 0xff4 ObjFunc
	var_808_int = var_817_int; // 0xff6 Mov
	return 8; // 0xff7 Return
}


func_2475(var_2_object, var_244_string)
{
	var_245_bool = 0; // 0x9ac PushV
	func_5210(var_245_bool); // 0x9ad NEW_2
	var_246_bool = var_245_bool == 0; // 0x9af Not
	if(var_246_bool == 0) goto Label_2482; // 0x9b0 JumpB
	return 0; // 0x9b1 Return
	
Label_2482:
	var_247_bool = var_244_string == var_2_object; // 0x9b2 Eq
	if(var_247_bool == 0) goto Label_2485; // 0x9b3 JumpB
	return 0; // 0x9b4 Return
	
Label_2485:
	var_248_string = ""; var_249_bool = 0; // 0x9b5 PushV
	var_248_string = var_244_string; // 0x9b6 Mov
	var_250_string = ""; // 0x9b7 PushS
	var_251_bool = var_244_string == var_250_string; // 0x9b8 Eq
	if(var_251_bool == 0) goto Label_2492; // 0x9b9 JumpB
	var_249_bool = 0; // 0x9ba MovB
	goto Label_2493; // 0x9bb Jump
	
Label_2493:
	func_4923(var_248_string, var_249_bool); // 0x9bd NEW_2
	var_2_object = var_244_string; // 0x9bf TMov
	return 0; // 0x9c0 Return
	
Label_2492:
	var_249_bool = 1; // 0x9bc MovB
}


func_5550(var_703_bool)
{
	var_705_int = 0; var_706_string = ""; // 0x15af PushV
	var_706_string = "b8q02"; // 0x15b0 MovS
	func_4994(var_705_int, var_706_string); // 0x15b1 NEW_2
	var_707_int = 0; // 0x15b3 PushI
	var_708_bool = var_705_int == var_707_int; // 0x15b4 Eq
	if(var_708_bool == 0) goto Label_5560; // 0x15b5 JumpB
	var_703_bool = 1; // 0x15b6 MovB
	return 0; // 0x15b7 Return
	
Label_5560:
	var_703_bool = 0; // 0x15b8 MovB
	return 0; // 0x15b9 Return
}


func_5038(var_144_int, var_145_int)
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x13ae PushV
	CreateIntVector(var_147_object); // 0x13af Func
	add(var_144_int); // 0x13b1 ObjFunc
	add(var_145_int); // 0x13b3 ObjFunc
	var_148_int = 3; // 0x13b5 PushI
	SendWorldWndMessage(var_148_int, var_147_object); // 0x13b6 Func
	return 2; // 0x13b8 Return
}


func_5562(var_716_bool, var_717_object)
{
	var_718_bool = 0; var_719_object = Obj(); var_720_string = ""; // 0x15bb PushV
	var_719_object = var_717_object; // 0x15bc Mov
	var_720_string = "b8q02_book"; // 0x15bd MovS
	func_5101(var_719_object, var_720_string); // 0x15be NEW_2
	if(var_718_bool == 0) goto Label_5571; // 0x15c0 JumpB
	var_716_bool = 1; // 0x15c1 MovB
	return 0; // 0x15c2 Return
	
Label_5571:
	var_716_bool = 0; // 0x15c3 MovB
	return 0; // 0x15c4 Return
}


func_5050(var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0; // 0x13ba PushV
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0; // 0x13bb PushV
	var_135_object = var_131_object; // 0x13bc Mov
	var_136_string = "money"; // 0x13bd MovS
	var_137_int = var_132_int; // 0x13be Mov
	func_4640(var_136_string, var_137_int); // 0x13bf NEW_2
	var_141_int = 0; // 0x13c1 PushI
	var_142_bool = var_132_int > var_141_int; // 0x13c2 GT
	if(var_142_bool == 0) goto Label_5068; // 0x13c3 JumpB
	var_143_string = "Money"; // 0x13c4 PushS
	GetInvItemByName(var_134_int, var_143_string); // 0x13c5 Func
	var_144_int = 0; var_145_int = 0; // 0x13c7 PushV
	var_144_int = var_134_int; // 0x13c8 Mov
	var_145_int = var_132_int; // 0x13c9 Mov
	func_5038(var_144_int, var_145_int); // 0x13ca NEW_2
	
Label_5068:
	return 2; // 0x13cc Return
}


func_3520(var_0_bool, var_738_int, var_739_object)
{
	var_741_object = Obj(); var_742_bool = 0; var_743_int = 0; var_744_bool = 0; var_745_object = Obj(); var_746_bool = 0; var_747_int = 0; var_748_bool = 0; // 0xdc0 PushV
	var_0_bool = var_739_object; // 0xdc1 TMov
	var_749_bool = 0; var_750_object = Obj(); var_751_float = 0; // 0xdc2 PushV
	var_750_object = var_739_object; // 0xdc3 Mov
	var_751_float = 70.0; // 0xdc4 MovF
	func_4682(var_750_object, var_751_float); // 0xdc5 NEW_2
	var_752_bool = var_749_bool == 0; // 0xdc7 Not
	if(var_752_bool == 0) goto Label_3531; // 0xdc8 JumpB
	var_738_int = -2; // 0xdc9 MovI
	return 8; // 0xdca Return
	
Label_3531:
	CreateDialog(var_745_object); // 0xdcb Func
	var_753_int = 0; // 0xdcd PushV
	func_5204(var_753_int); // 0xdce NEW_2
	SetNPCName(var_753_int); // 0xdd0 ObjFunc
	var_754_int = 0; // 0xdd2 PushV
	func_5202(var_754_int); // 0xdd3 NEW_2
	SetNPCDescription(var_754_int); // 0xdd5 ObjFunc
	var_755_string = ""; // 0xdd7 PushV
	func_5206(var_755_string); // 0xdd8 NEW_2
	SetPhoto(var_755_string); // 0xdda ObjFunc
	var_756_string = ""; // 0xddc PushV
	func_5208(var_756_string); // 0xddd NEW_2
	SetPhoto2(var_756_string); // 0xddf ObjFunc
	var_757_int = 0; // 0xde1 PushV
	func_5887(var_757_int); // 0xde2 NEW_2
	SetPlayerName(var_757_int); // 0xde4 ObjFunc
	var_747_int = -1; // 0xde6 MovI
	IsOverrideActive(var_746_bool); // 0xde7 Func
	var_758_bool = var_746_bool; // 0xde9 Push
	if(var_758_bool == 0) goto Label_3565; // 0xdea JumpB
	var_738_int = -2; // 0xdeb MovI
	return 8; // 0xdec Return
	
Label_3565:
	DoDialog(var_745_object); // 0xded Func
	var_759_bool = 0; var_760_object = Obj(); // 0xdef PushV
	var_761_object = Obj(); // 0xdf0 PushV
	func_4960(var_761_object); // 0xdf1 NEW_2
	var_760_object = var_761_object; // 0xdf2 Mov
	func_4769(var_759_bool, var_760_object); // 0xdf4 NEW_2
	var_762_object = Obj(); var_763_object = Obj(); // 0xdf6 PushV
	var_762_object = var_739_object; // 0xdf7 Mov
	var_763_object = var_745_object; // 0xdf8 Mov
	TaskCall(17); // 0xdf9 TaskCall
	func_3601(var_764_object, var_765_object, var_766_string, var_767_bool, var_762_object, var_763_object); // 0xdfa NEW_2
	TaskReturn(); // 0xdfb TaskReturn
	IsDialogEnd(var_748_bool); // 0xdfd ObjFunc
	
Label_3583:
	var_801_bool = var_748_bool == 0; // 0xdff Not
	if(var_801_bool == 0) goto Label_3590; // 0xe00 JumpB
	sync(); // 0xe01 Func
	IsDialogEnd(var_748_bool); // 0xe03 ObjFunc
	goto Label_3583; // 0xe05 Jump
	
Label_3590:
	var_802_object = Obj(); // 0xe06 PushV
	var_802_object = var_739_object; // 0xe07 Mov
	func_4751(); // 0xe08 NEW_2
	StopDialog(var_745_object); // 0xe0a Func
	GetReturnValue(var_747_int); // 0xe0c ObjFunc
	var_738_int = var_747_int; // 0xe0e Mov
	return 8; // 0xe0f Return
}


func_5573(var_156_bool)
{
	var_158_int = 0; var_159_string = ""; // 0x15c6 PushV
	var_159_string = "b11q01"; // 0x15c7 MovS
	func_4994(var_158_int, var_159_string); // 0x15c8 NEW_2
	var_160_int = 1000; // 0x15ca PushI
	var_161_bool = var_158_int == var_160_int; // 0x15cb Eq
	if(var_161_bool == 0) goto Label_5583; // 0x15cc JumpB
	var_156_bool = 1; // 0x15cd MovB
	return 0; // 0x15ce Return
	
Label_5583:
	var_156_bool = 0; // 0x15cf MovB
	return 0; // 0x15d0 Return
}


func_968(var_0_bool, var_397_int, var_398_object)
{
	var_400_object = Obj(); var_401_bool = 0; var_402_int = 0; var_403_bool = 0; var_404_object = Obj(); var_405_bool = 0; var_406_int = 0; var_407_bool = 0; // 0x3c8 PushV
	var_0_bool = var_398_object; // 0x3c9 TMov
	var_408_bool = 0; var_409_object = Obj(); var_410_float = 0; // 0x3ca PushV
	var_409_object = var_398_object; // 0x3cb Mov
	var_410_float = 70.0; // 0x3cc MovF
	func_4682(var_409_object, var_410_float); // 0x3cd NEW_2
	var_411_bool = var_408_bool == 0; // 0x3cf Not
	if(var_411_bool == 0) goto Label_979; // 0x3d0 JumpB
	var_397_int = -2; // 0x3d1 MovI
	return 8; // 0x3d2 Return
	
Label_979:
	CreateDialog(var_404_object); // 0x3d3 Func
	var_412_int = 0; // 0x3d5 PushV
	func_5204(var_412_int); // 0x3d6 NEW_2
	SetNPCName(var_412_int); // 0x3d8 ObjFunc
	var_413_int = 0; // 0x3da PushV
	func_5202(var_413_int); // 0x3db NEW_2
	SetNPCDescription(var_413_int); // 0x3dd ObjFunc
	var_414_string = ""; // 0x3df PushV
	func_5206(var_414_string); // 0x3e0 NEW_2
	SetPhoto(var_414_string); // 0x3e2 ObjFunc
	var_415_string = ""; // 0x3e4 PushV
	func_5208(var_415_string); // 0x3e5 NEW_2
	SetPhoto2(var_415_string); // 0x3e7 ObjFunc
	var_416_int = 0; // 0x3e9 PushV
	func_5887(var_416_int); // 0x3ea NEW_2
	SetPlayerName(var_416_int); // 0x3ec ObjFunc
	var_406_int = -1; // 0x3ee MovI
	IsOverrideActive(var_405_bool); // 0x3ef Func
	var_417_bool = var_405_bool; // 0x3f1 Push
	if(var_417_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_397_int = -2; // 0x3f3 MovI
	return 8; // 0x3f4 Return
	
Label_1013:
	DoDialog(var_404_object); // 0x3f5 Func
	var_418_bool = 0; var_419_object = Obj(); // 0x3f7 PushV
	var_420_object = Obj(); // 0x3f8 PushV
	func_4960(var_420_object); // 0x3f9 NEW_2
	var_419_object = var_420_object; // 0x3fa Mov
	func_4769(var_418_bool, var_419_object); // 0x3fc NEW_2
	var_421_object = Obj(); var_422_object = Obj(); // 0x3fe PushV
	var_421_object = var_398_object; // 0x3ff Mov
	var_422_object = var_404_object; // 0x400 Mov
	TaskCall(7); // 0x401 TaskCall
	func_1049(var_423_object, var_424_object, var_425_string, var_426_bool, var_421_object, var_422_object); // 0x402 NEW_2
	TaskReturn(); // 0x403 TaskReturn
	IsDialogEnd(var_407_bool); // 0x405 ObjFunc
	
Label_1031:
	var_483_bool = var_407_bool == 0; // 0x407 Not
	if(var_483_bool == 0) goto Label_1038; // 0x408 JumpB
	sync(); // 0x409 Func
	IsDialogEnd(var_407_bool); // 0x40b ObjFunc
	goto Label_1031; // 0x40d Jump
	
Label_1038:
	var_484_object = Obj(); // 0x40e PushV
	var_484_object = var_398_object; // 0x40f Mov
	func_4751(); // 0x410 NEW_2
	StopDialog(var_404_object); // 0x412 Func
	GetReturnValue(var_406_int); // 0x414 ObjFunc
	var_397_int = var_406_int; // 0x416 Mov
	return 8; // 0x417 Return
}


func_5069(var_64_object, var_65_int)
{
	var_66_int = 0; var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0; var_71_bool = 0; // 0x13cd PushV
	GetItemID(var_69_int); // 0x13ce ObjFunc
	var_72_string = "Category"; // 0x13d0 PushS
	GetInvItemProperty(var_70_int, var_69_int, var_72_string); // 0x13d1 Func
	AddItem(var_71_bool, var_64_object, var_70_int, var_65_int); // 0x13d3 ObjFunc
	var_73_bool = var_71_bool == 0; // 0x13d5 Not
	if(var_73_bool == 0) goto Label_5082; // 0x13d6 JumpB
	DropItems(var_64_object, var_65_int); // 0x13d7 ObjFunc
	goto Label_5087; // 0x13d9 Jump
	
Label_5087:
	return 6; // 0x13df Return
	
Label_5082:
	var_74_int = 0; var_75_int = 0; // 0x13da PushV
	var_74_int = var_69_int; // 0x13db Mov
	var_75_int = var_65_int; // 0x13dc Mov
	func_5038(var_74_int, var_75_int); // 0x13dd NEW_2
}


func_5585(var_778_bool)
{
	var_780_int = 0; var_781_string = ""; // 0x15d2 PushV
	var_781_string = "oob11MladVlad1"; // 0x15d3 MovS
	func_4994(var_780_int, var_781_string); // 0x15d4 NEW_2
	var_782_int = 0; // 0x15d6 PushI
	var_783_bool = var_780_int == var_782_int; // 0x15d7 Eq
	if(var_783_bool == 0) goto Label_5595; // 0x15d8 JumpB
	var_778_bool = 1; // 0x15d9 MovB
	return 0; // 0x15da Return
	
Label_5595:
	var_778_bool = 0; // 0x15db MovB
	return 0; // 0x15dc Return
}


func_3026(var_2_object, var_678_string)
{
	var_679_bool = 0; // 0xbd3 PushV
	func_5210(var_679_bool); // 0xbd4 NEW_2
	var_680_bool = var_679_bool == 0; // 0xbd6 Not
	if(var_680_bool == 0) goto Label_3033; // 0xbd7 JumpB
	return 0; // 0xbd8 Return
	
Label_3033:
	var_681_bool = var_678_string == var_2_object; // 0xbd9 Eq
	if(var_681_bool == 0) goto Label_3036; // 0xbda JumpB
	return 0; // 0xbdb Return
	
Label_3036:
	var_682_string = ""; var_683_bool = 0; // 0xbdc PushV
	var_682_string = var_678_string; // 0xbdd Mov
	var_684_string = ""; // 0xbde PushS
	var_685_bool = var_678_string == var_684_string; // 0xbdf Eq
	if(var_685_bool == 0) goto Label_3043; // 0xbe0 JumpB
	var_683_bool = 0; // 0xbe1 MovB
	goto Label_3044; // 0xbe2 Jump
	
Label_3044:
	func_4923(var_682_string, var_683_bool); // 0xbe4 NEW_2
	var_2_object = var_678_string; // 0xbe6 TMov
	return 0; // 0xbe7 Return
	
Label_3043:
	var_683_bool = 1; // 0xbe3 MovB
}


func_4565()
{
	var_73_string = ""; var_74_string = ""; // 0x11d5 PushV
	var_75_string = "loc"; // 0x11d6 PushS
	GetProperty(var_75_string, var_74_string); // 0x11d7 Func
	var_76_string = GlobalVars[0]; // 0x11d9 PushGE
	var_76_string = var_74_string; // 0x11da Mov
	GlobalVars[0] = var_76_string; // 0x11db PopGE
	return 2; // 0x11dc Return
}


func_5597(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0x15de PushV
	var_162_string = "KnowGrif"; // 0x15df MovS
	func_4994(var_161_int, var_162_string); // 0x15e0 NEW_2
	var_163_int = 1; // 0x15e2 PushI
	var_164_bool = var_161_int == var_163_int; // 0x15e3 Eq
	if(var_164_bool == 0) goto Label_5607; // 0x15e4 JumpB
	var_159_bool = 1; // 0x15e5 MovB
	return 0; // 0x15e6 Return
	
Label_5607:
	var_159_bool = 0; // 0x15e7 MovB
	return 0; // 0x15e8 Return
}


func_4573(var_0_bool, var_1_object)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x11dd PushV
	var_97_string = "all"; // 0x11de PushS
	var_98_string = "walk_stopl"; // 0x11df PushS
	GetAnimationOffset(var_95_cvector, var_97_string, var_98_string); // 0x11e0 Func
	var_99_string = "all"; // 0x11e2 PushS
	var_100_string = "walk_stopr"; // 0x11e3 PushS
	GetAnimationOffset(var_96_cvector, var_99_string, var_100_string); // 0x11e4 Func
	var_101_float = GetByIndex(var_95_cvector, 2); // 0x11e6 PushE
	var_102_float = GetByIndex(var_96_cvector, 2); // 0x11e7 PushE
	var_103_int = var_101_float + var_102_float; // 0x11e8 Add
	var_104_float = 2.0; // 0x11e9 PushF
	var_0_bool = var_103_int / var_103_int; // 0x11ea Div2
	var_105_float = 0; var_106_float = 0; // 0x11eb PushV
	var_107_float = GetByIndex(var_95_cvector, 2); // 0x11ec PushE
	var_106_float = var_107_float - var_0_bool; // 0x11ed Sub2
	func_4976(var_105_float, var_106_float); // 0x11ee NEW_2
	var_110_int = 40; // 0x11f0 PushI
	var_1_object = var_105_float + var_110_int; // 0x11f1 Add2
	return 4; // 0x11f2 Return
}


func_5088(var_58_object, var_59_string, var_60_int)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x13e0 PushV
	CreateInvItem(var_62_object); // 0x13e1 Func
	SetItemName(var_59_string); // 0x13e3 ObjFunc
	var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; // 0x13e5 PushV
	var_63_object = var_58_object; // 0x13e6 Mov
	var_64_object = var_62_object; // 0x13e7 Mov
	var_65_int = var_60_int; // 0x13e8 Mov
	func_5069(var_64_object, var_65_int); // 0x13e9 NEW_2
	return 2; // 0x13eb Return
}


func_481(var_2_object, var_338_string)
{
	var_339_bool = 0; // 0x1e2 PushV
	func_5210(var_339_bool); // 0x1e3 NEW_2
	var_340_bool = var_339_bool == 0; // 0x1e5 Not
	if(var_340_bool == 0) goto Label_488; // 0x1e6 JumpB
	return 0; // 0x1e7 Return
	
Label_488:
	var_341_bool = var_338_string == var_2_object; // 0x1e8 Eq
	if(var_341_bool == 0) goto Label_491; // 0x1e9 JumpB
	return 0; // 0x1ea Return
	
Label_491:
	var_342_string = ""; var_343_bool = 0; // 0x1eb PushV
	var_342_string = var_338_string; // 0x1ec Mov
	var_344_string = ""; // 0x1ed PushS
	var_345_bool = var_338_string == var_344_string; // 0x1ee Eq
	if(var_345_bool == 0) goto Label_498; // 0x1ef JumpB
	var_343_bool = 0; // 0x1f0 MovB
	goto Label_499; // 0x1f1 Jump
	
Label_499:
	func_4923(var_342_string, var_343_bool); // 0x1f3 NEW_2
	var_2_object = var_338_string; // 0x1f5 TMov
	return 0; // 0x1f6 Return
	
Label_498:
	var_343_bool = 1; // 0x1f2 MovB
}


func_5609(var_330_bool)
{
	var_332_int = 0; var_333_string = ""; // 0x15ea PushV
	var_333_string = "b1q01"; // 0x15eb MovS
	func_4994(var_332_int, var_333_string); // 0x15ec NEW_2
	var_336_int = 0; // 0x15ee PushI
	var_337_bool = var_332_int == var_336_int; // 0x15ef Eq
	if(var_337_bool == 0) goto Label_5619; // 0x15f0 JumpB
	var_330_bool = 1; // 0x15f1 MovB
	return 0; // 0x15f2 Return
	
Label_5619:
	var_330_bool = 0; // 0x15f3 MovB
	return 0; // 0x15f4 Return
}


func_5101(var_718_bool, var_720_string)
{
	var_721_int = 0; var_722_bool = 0; var_723_int = 0; var_724_bool = 0; // 0x13ed PushV
	GetInvItemByName(var_723_int, var_720_string); // 0x13ee Func
	HasItem(var_723_int, var_724_bool); // 0x13f0 ObjFunc
	var_718_bool = var_724_bool; // 0x13f2 Mov
	return 4; // 0x13f3 Return
}


func_5108(var_437_bool, var_438_string, var_439_string)
{
	var_440_object = Obj(); var_441_object = Obj(); // 0x13f4 PushV
	FindActor(var_441_object, var_438_string); // 0x13f5 Func
	var_442_bool = var_441_object == 0; // 0x13f7 NullEq
	if(var_442_bool == 0) goto Label_5115; // 0x13f8 JumpB
	var_437_bool = 0; // 0x13f9 MovB
	return 2; // 0x13fa Return
	
Label_5115:
	Trigger(var_441_object, var_439_string); // 0x13fb Func
	var_437_bool = 1; // 0x13fd MovB
	return 2; // 0x13fe Return
}


func_5621(var_361_bool)
{
	var_363_int = 0; var_364_string = ""; // 0x15f6 PushV
	var_364_string = "oob1MladVlad1"; // 0x15f7 MovS
	func_4994(var_363_int, var_364_string); // 0x15f8 NEW_2
	var_365_int = 0; // 0x15fa PushI
	var_366_bool = var_363_int == var_365_int; // 0x15fb Eq
	if(var_366_bool == 0) goto Label_5631; // 0x15fc JumpB
	var_361_bool = 1; // 0x15fd MovB
	return 0; // 0x15fe Return
	
Label_5631:
	var_361_bool = 0; // 0x15ff MovB
	return 0; // 0x1600 Return
}


func_4089(var_0_bool, var_1_object, var_2_object, var_3_object, var_832_object, var_833_object)
{
	var_0_bool = var_833_object; // 0xffa TMov
	var_1_object = var_832_object; // 0xffb TMov
	var_3_object = 0; // 0xffc TMovB
	var_838_int = 1; // 0xffd PushI
	if(var_838_int == 0) goto Label_4122; // 0xffe JumpB
	var_839_string = ""; // 0xfff PushV
	var_839_string = "Neutral"; // 0x1000 MovS
	func_4152(var_833_object, var_839_string); // 0x1001 NEW_2
	var_847_int = 535231; // 0x1003 PushI
	SetMessage(var_847_int); // 0x1004 TObjFunc
	ClearReplies(); // 0x1006 TObjFunc
	var_848_int = 535232; // 0x1008 PushI
	var_849_int = 36953; // 0x1009 PushI
	var_850_int = 36907; // 0x100a PushI
	AddReply(var_848_int, var_849_int, var_850_int); // 0x100b TObjFunc
	var_851_int = 535233; // 0x100d PushI
	var_852_int = -1; // 0x100e PushI
	var_853_int = 36908; // 0x100f PushI
	AddReply(var_851_int, var_852_int, var_853_int); // 0x1010 TObjFunc
	var_854_int = 535280; // 0x1012 PushI
	var_855_int = -1; // 0x1013 PushI
	var_856_int = 36956; // 0x1014 PushI
	AddReply(var_854_int, var_855_int, var_856_int); // 0x1015 TObjFunc
	goto Label_4122; // 0x1017 Jump
	
Label_4122:
	var_857_bool = 0; // 0x101a PushV
	func_5210(var_857_bool); // 0x101b NEW_2
	if(var_857_bool == 0) goto Label_4137; // 0x101d JumpB
	
Label_4126:
	lshWaitForAnimEnd(); // 0x101e Func
	var_858_object = var_3_object; // 0x1020 PushT
	if(var_858_object == 0) goto Label_4131; // 0x1021 JumpB
	goto Label_4136; // 0x1022 Jump
	
Label_4136:
	goto Label_4151; // 0x1028 Jump
	
Label_4151:
	return 0; // 0x1037 Return
	
Label_4131:
	var_859_string = ""; // 0x1023 PushV
	var_859_string = var_2_object; // 0x1024 MovT
	func_4907(var_859_string); // 0x1025 NEW_2
	goto Label_4126; // 0x1027 Jump
	
Label_4137:
	var_860_string = "all"; // 0x1029 PushS
	var_861_string = "idle"; // 0x102a PushS
	PlayAnimation(var_860_string, var_861_string); // 0x102b Func
	
Label_4141:
	WaitForAnimEnd(); // 0x102d Func
	var_862_object = var_3_object; // 0x102f PushT
	if(var_862_object == 0) goto Label_4146; // 0x1030 JumpB
	goto Label_4151; // 0x1031 Jump
	
Label_4146:
	var_863_string = "all"; // 0x1032 PushS
	var_864_string = "idle"; // 0x1033 PushS
	PlayAnimation(var_863_string, var_864_string); // 0x1034 Func
	goto Label_4141; // 0x1036 Jump
}


