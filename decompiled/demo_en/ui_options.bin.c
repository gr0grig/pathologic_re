task_0_event_100(var_0_object, var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_int)
{
	func_103(var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_int); // 0x13 NEW_2
	var_20_int = 1; // 0x15 PushI
	SendMessageToParent(var_20_int); // 0x16 Func
	return 0; // 0x18 Return
}


task_0_event_200(var_0_object, var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_int, var_20_string, var_21_object)
{
	var_22_string = "key_form"; // 0xb8 PushS
	var_23_bool = var_20_string == var_22_string; // 0xb9 Eq
	if(var_23_bool == 0) goto Label_190; // 0xba JumpB
	CaptureKeyboard(); // 0xbb Func
	goto Label_227; // 0xbd Jump
	
Label_227:
	var_24_int = 0; // 0xe3 PushI
	var_25_bool = var_2_int == var_24_int; // 0xe4 Eq
	if(var_25_bool == 0) goto Label_247; // 0xe5 JumpB
	var_26_string = "gamma_scrollbar"; // 0xe6 PushS
	var_27_bool = var_20_string == var_26_string; // 0xe7 Eq
	if(var_27_bool == 0) goto Label_241; // 0xe8 JumpB
	var_28_float = 0; var_29_int = 0; // 0xe9 PushV
	var_29_int = var_19_int; // 0xea Mov
	func_33(var_28_float, var_29_int); // 0xeb NEW_2
	var_3_float = var_28_float; // 0xec TMov
	SetGammaCorrection(var_19_int); // 0xee Func
	goto Label_246; // 0xf0 Jump
	
Label_246:
	goto Label_299; // 0xf6 Jump
	
Label_299:
	return 0; // 0x12b Return
	
Label_241:
	var_35_string = "shadow_check"; // 0xf1 PushS
	var_36_bool = var_20_string == var_35_string; // 0xf2 Eq
	if(var_36_bool == 0) goto Label_246; // 0xf3 JumpB
	var_37_int = 0; // 0xf4 PushI
	var_15_bool = var_19_int != var_37_int; // 0xf5 Neq2
	
Label_247:
	var_38_int = 1; // 0xf7 PushI
	var_39_bool = var_2_int == var_38_int; // 0xf8 Eq
	if(var_39_bool == 0) goto Label_282; // 0xf9 JumpB
	var_40_string = "master_scrollbar"; // 0xfa PushS
	var_41_bool = var_20_string == var_40_string; // 0xfb Eq
	if(var_41_bool == 0) goto Label_258; // 0xfc JumpB
	var_42_float = 100.0; // 0xfd PushF
	var_4_float = var_19_int / var_19_int; // 0xfe Div2
	SetVolMaster(var_18_bool); // 0xff Func
	goto Label_281; // 0x101 Jump
	
Label_281:
	goto Label_299; // 0x119 Jump
	
Label_258:
	var_43_string = "music_scrollbar"; // 0x102 PushS
	var_44_bool = var_20_string == var_43_string; // 0x103 Eq
	if(var_44_bool == 0) goto Label_266; // 0x104 JumpB
	var_45_float = 100.0; // 0x105 PushF
	var_5_float = var_19_int / var_19_int; // 0x106 Div2
	SetVolMusic(var_17_bool); // 0x107 Func
	goto Label_281; // 0x109 Jump
	
Label_266:
	var_46_string = "voice_scrollbar"; // 0x10a PushS
	var_47_bool = var_20_string == var_46_string; // 0x10b Eq
	if(var_47_bool == 0) goto Label_274; // 0x10c JumpB
	var_48_float = 100.0; // 0x10d PushF
	var_6_float = var_19_int / var_19_int; // 0x10e Div2
	SetVolVoice(var_16_bool); // 0x10f Func
	goto Label_281; // 0x111 Jump
	
Label_274:
	var_49_string = "sounds_scrollbar"; // 0x112 PushS
	var_50_bool = var_20_string == var_49_string; // 0x113 Eq
	if(var_50_bool == 0) goto Label_281; // 0x114 JumpB
	var_51_float = 100.0; // 0x115 PushF
	var_7_float = var_19_int / var_19_int; // 0x116 Div2
	SetVolSounds(var_15_bool); // 0x117 Func
	
Label_282:
	var_52_int = 2; // 0x11a PushI
	var_53_bool = var_2_int == var_52_int; // 0x11b Eq
	if(var_53_bool == 0) goto Label_299; // 0x11c JumpB
	var_54_string = "sensivity_scrollbar"; // 0x11d PushS
	var_55_bool = var_20_string == var_54_string; // 0x11e Eq
	if(var_55_bool == 0) goto Label_294; // 0x11f JumpB
	var_56_float = 0; var_57_int = 0; // 0x120 PushV
	var_57_int = var_19_int; // 0x121 Mov
	func_49(var_56_float, var_57_int); // 0x122 NEW_2
	var_8_float = var_56_float; // 0x123 TMov
	goto Label_299; // 0x125 Jump
	
Label_294:
	var_63_string = "invert_mouse_check"; // 0x126 PushS
	var_64_bool = var_20_string == var_63_string; // 0x127 Eq
	if(var_64_bool == 0) goto Label_299; // 0x128 JumpB
	var_65_int = 0; // 0x129 PushI
	var_16_bool = var_19_int != var_65_int; // 0x12a Neq2
	
Label_190:
	var_66_string = "apply"; // 0xbe PushS
	var_67_bool = var_20_string == var_66_string; // 0xbf Eq
	if(var_67_bool == 0) goto Label_201; // 0xc0 JumpB
	EventDisable(200); // 0xc1 EventDisable
	func_82(var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_int, var_20_string, var_21_object); // 0xc3 NEW_2
	var_68_int = 1; // 0xc5 PushI
	SendMessageToParent(var_68_int); // 0xc6 Func
	goto Label_227; // 0xc8 Jump
	
Label_201:
	var_69_string = "video"; // 0xc9 PushS
	var_70_bool = var_20_string == var_69_string; // 0xca Eq
	if(var_70_bool == 0) goto Label_210; // 0xcb JumpB
	var_71_int = 0; // 0xcc PushV
	var_71_int = 0; // 0xcd MovI
	func_300(var_21_object, var_71_int); // 0xce NEW_2
	return 0; // 0xd0 Return
	
Label_210:
	var_147_string = "audio"; // 0xd2 PushS
	var_148_bool = var_20_string == var_147_string; // 0xd3 Eq
	if(var_148_bool == 0) goto Label_219; // 0xd4 JumpB
	var_149_int = 0; // 0xd5 PushV
	var_149_int = 1; // 0xd6 MovI
	func_300(var_21_object, var_149_int); // 0xd7 NEW_2
	return 0; // 0xd9 Return
	
Label_219:
	var_150_string = "controls"; // 0xdb PushS
	var_151_bool = var_20_string == var_150_string; // 0xdc Eq
	if(var_151_bool == 0) goto Label_227; // 0xdd JumpB
	var_152_int = 0; // 0xde PushV
	var_152_int = 2; // 0xdf MovI
	func_300(var_21_object, var_152_int); // 0xe0 NEW_2
	return 0; // 0xe2 Return
}


main(var_0_object, var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool)
{
	func_57(var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool); // 0x1 NEW_2
	var_19_string = "options_border.xml"; // 0x3 PushS
	var_20_bool = 0; // 0x4 PushB
	CreateWindow(var_19_string, var_20_bool, var_0_object); // 0x5 Func
	var_2_int = -1; // 0x7 TMovI
	var_21_int = 0; // 0x8 PushV
	var_21_int = 0; // 0x9 MovI
	func_300(var_18_bool, var_21_int); // 0xa NEW_2
	CaptureKeyboard(); // 0xc Func
	ProcessEvents(); // 0xe Func
	return 0; // 0x10 Return
}


func_33(var_28_float, var_29_int)
{
	var_30_float = 0.5; // 0x22 PushF
	var_31_float = 2.5; // 0x23 PushF
	var_32_float = var_31_float * var_29_int; // 0x24 Mult
	var_33_int = 100; // 0x25 PushI
	var_34_float = var_32_float / var_33_int; // 0x26 Div
	var_28_float = var_30_float + var_34_float; // 0x27 Add2
	return 0; // 0x28 Return
}


func_103(var_2_int, var_3_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float)
{
	SetGammaCorrection(var_11_float); // 0x67 Func
	EnableShadows(var_3_float); // 0x69 Func
	SetVolMaster(var_10_float); // 0x6b Func
	SetVolMusic(var_9_float); // 0x6d Func
	SetVolVoice(var_8_float); // 0x6f Func
	SetVolSounds(var_7_float); // 0x71 Func
	SetMouseSensivity(var_6_float); // 0x73 Func
	InvertMouse(var_2_int); // 0x75 Func
	return 0; // 0x77 Return
}


func_41(var_65_int, var_66_float)
{
	var_67_int = 100; // 0x2a PushI
	var_68_float = 0.1; // 0x2b PushF
	var_69_int = var_66_float - var_68_float; // 0x2c Sub
	var_70_float = var_67_int * var_69_int; // 0x2d Mult
	var_71_float = 4.9; // 0x2e PushF
	var_65_int = var_70_float / var_70_float; // 0x2f Div2
	return 0; // 0x30 Return
}


func_300(var_2_int, var_21_int)
{
	var_22_bool = var_2_int == var_21_int; // 0x12d Eq
	if(var_22_bool == 0) goto Label_304; // 0x12e JumpB
	return 0; // 0x12f Return
	
Label_304:
	var_2_int = var_21_int; // 0x130 TMov
	var_23_object = var_1_object; // 0x131 PushT
	if(var_23_object == 0) goto Label_309; // 0x132 JumpB
	DestroyWindow(); // 0x133 TObjFunc
	
Label_309:
	var_24_int = 0; // 0x135 PushI
	var_25_bool = var_21_int == var_24_int; // 0x136 Eq
	if(var_25_bool == 0) goto Label_329; // 0x137 JumpB
	var_26_string = "video_page.xml"; // 0x138 PushS
	var_27_bool = 0; // 0x139 PushB
	CreateWindow(var_26_string, var_27_bool, var_27_bool); // 0x13a Func
	var_28_int = 1; // 0x13c PushI
	var_29_string = "video"; // 0x13d PushS
	SendMessage(var_28_int, var_29_string); // 0x13e Func
	var_30_int = 0; // 0x140 PushI
	var_31_string = "audio"; // 0x141 PushS
	SendMessage(var_30_int, var_31_string); // 0x142 Func
	var_32_int = 0; // 0x144 PushI
	var_33_string = "controls"; // 0x145 PushS
	SendMessage(var_32_int, var_33_string); // 0x146 Func
	goto Label_368; // 0x148 Jump
	
Label_368:
	var_34_int = 0; // 0x170 PushV
	var_34_int = var_21_int; // 0x171 Mov
	func_120(var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_21_int, var_34_int); // 0x172 NEW_2
	return 0; // 0x174 Return
	
Label_329:
	var_77_int = 1; // 0x149 PushI
	var_78_bool = var_21_int == var_77_int; // 0x14a Eq
	if(var_78_bool == 0) goto Label_349; // 0x14b JumpB
	var_79_string = "audio_page.xml"; // 0x14c PushS
	var_80_bool = 0; // 0x14d PushB
	CreateWindow(var_79_string, var_80_bool, var_80_bool); // 0x14e Func
	var_81_int = 0; // 0x150 PushI
	var_82_string = "video"; // 0x151 PushS
	SendMessage(var_81_int, var_82_string); // 0x152 Func
	var_83_int = 1; // 0x154 PushI
	var_84_string = "audio"; // 0x155 PushS
	SendMessage(var_83_int, var_84_string); // 0x156 Func
	var_85_int = 0; // 0x158 PushI
	var_86_string = "controls"; // 0x159 PushS
	SendMessage(var_85_int, var_86_string); // 0x15a Func
	goto Label_368; // 0x15c Jump
	
Label_349:
	var_87_int = 2; // 0x15d PushI
	var_88_bool = var_21_int == var_87_int; // 0x15e Eq
	if(var_88_bool == 0) goto Label_368; // 0x15f JumpB
	var_89_int = 0; // 0x160 PushI
	var_90_string = "video"; // 0x161 PushS
	SendMessage(var_89_int, var_90_string); // 0x162 Func
	var_91_int = 0; // 0x164 PushI
	var_92_string = "audio"; // 0x165 PushS
	SendMessage(var_91_int, var_92_string); // 0x166 Func
	var_93_int = 1; // 0x168 PushI
	var_94_string = "controls"; // 0x169 PushS
	SendMessage(var_93_int, var_94_string); // 0x16a Func
	var_95_string = "control_page.xml"; // 0x16c PushS
	var_96_bool = 0; // 0x16d PushB
	CreateWindow(var_95_string, var_96_bool, var_96_bool); // 0x16e Func
}


func_49(var_56_float, var_57_int)
{
	var_58_float = 0.1; // 0x32 PushF
	var_59_float = 4.9; // 0x33 PushF
	var_60_float = var_59_float * var_57_int; // 0x34 Mult
	var_61_int = 100; // 0x35 PushI
	var_62_float = var_60_float / var_61_int; // 0x36 Div
	var_56_float = var_58_float + var_62_float; // 0x37 Add2
	return 0; // 0x38 Return
}


func_82(var_6_float, var_7_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_int)
{
	SetGammaCorrection(var_19_int); // 0x52 Func
	EnableShadows(var_7_float); // 0x54 Func
	SetVolMaster(var_18_bool); // 0x56 Func
	SetVolMusic(var_17_bool); // 0x58 Func
	SetVolVoice(var_16_bool); // 0x5a Func
	SetVolSounds(var_15_bool); // 0x5c Func
	SetMouseSensivity(var_14_float); // 0x5e Func
	InvertMouse(var_6_float); // 0x60 Func
	SaveConfig(); // 0x62 Func
	WriteBinds(); // 0x64 Func
	return 0; // 0x66 Return
}


func_120(var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_34_int)
{
	var_35_int = 0; // 0x79 PushI
	var_36_bool = var_34_int == var_35_int; // 0x7a Eq
	if(var_36_bool == 0) goto Label_140; // 0x7b JumpB
	var_37_int = 0; var_38_float = 0; // 0x7c PushV
	var_38_float = var_3_float; // 0x7d MovT
	func_25(var_37_int, var_38_float); // 0x7e NEW_2
	var_44_string = "gamma_scrollbar"; // 0x80 PushS
	SendMessage(var_37_int, var_44_string); // 0x81 Func
	var_45_bool = var_15_bool; // 0x83 PushT
	if(var_45_bool == 0) goto Label_135; // 0x84 JumpB
	var_46_int = 1; // 0x85 PushI
	goto Label_136; // 0x86 Jump
	
Label_136:
	var_47_string = "shadow_check"; // 0x88 PushS
	SendMessage(var_46_int, var_47_string); // 0x89 Func
	goto Label_182; // 0x8b Jump
	
Label_182:
	return 0; // 0xb6 Return
	
Label_135:
	var_48_int = 0; // 0x87 PushI
	
Label_140:
	var_49_int = 1; // 0x8c PushI
	var_50_bool = var_34_int == var_49_int; // 0x8d Eq
	if(var_50_bool == 0) goto Label_164; // 0x8e JumpB
	var_51_int = 100; // 0x8f PushI
	var_52_float = var_51_int * var_4_float; // 0x90 Mult
	var_53_string = "master_scrollbar"; // 0x91 PushS
	SendMessage(var_52_float, var_53_string); // 0x92 Func
	var_54_int = 100; // 0x94 PushI
	var_55_float = var_54_int * var_5_float; // 0x95 Mult
	var_56_string = "music_scrollbar"; // 0x96 PushS
	SendMessage(var_55_float, var_56_string); // 0x97 Func
	var_57_int = 100; // 0x99 PushI
	var_58_float = var_57_int * var_6_float; // 0x9a Mult
	var_59_string = "voice_scrollbar"; // 0x9b PushS
	SendMessage(var_58_float, var_59_string); // 0x9c Func
	var_60_int = 100; // 0x9e PushI
	var_61_float = var_60_int * var_7_float; // 0x9f Mult
	var_62_string = "sounds_scrollbar"; // 0xa0 PushS
	SendMessage(var_61_float, var_62_string); // 0xa1 Func
	goto Label_182; // 0xa3 Jump
	
Label_164:
	var_63_int = 2; // 0xa4 PushI
	var_64_bool = var_34_int == var_63_int; // 0xa5 Eq
	if(var_64_bool == 0) goto Label_182; // 0xa6 JumpB
	var_65_int = 0; var_66_float = 0; // 0xa7 PushV
	var_66_float = var_8_float; // 0xa8 MovT
	func_41(var_65_int, var_66_float); // 0xa9 NEW_2
	var_72_string = "sensivity_scrollbar"; // 0xab PushS
	SendMessage(var_65_int, var_72_string); // 0xac Func
	var_73_bool = var_16_bool; // 0xae PushT
	if(var_73_bool == 0) goto Label_178; // 0xaf JumpB
	var_74_int = 1; // 0xb0 PushI
	goto Label_179; // 0xb1 Jump
	
Label_179:
	var_75_string = "invert_mouse_check"; // 0xb3 PushS
	SendMessage(var_74_int, var_75_string); // 0xb4 Func
	
Label_178:
	var_76_int = 0; // 0xb2 PushI
}


func_57(var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool)
{
	GetGammaCorrection(var_16_bool); // 0x39 Func
	var_9_float = var_3_float; // 0x3b TMovT
	IsShadowsEnabled(var_2_int); // 0x3c Func
	var_15_bool = var_17_bool; // 0x3e TMovT
	GetVolMaster(var_15_bool); // 0x3f Func
	var_10_float = var_4_float; // 0x41 TMovT
	GetVolMusic(var_14_float); // 0x42 Func
	var_11_float = var_5_float; // 0x44 TMovT
	GetVolVoice(var_13_float); // 0x45 Func
	var_12_float = var_6_float; // 0x47 TMovT
	GetVolSounds(var_12_float); // 0x48 Func
	var_13_float = var_7_float; // 0x4a TMovT
	GetMouseSensivity(var_5_float); // 0x4b Func
	var_8_float = var_14_float; // 0x4d TMovT
	IsMouseInverted(var_1_object); // 0x4e Func
	var_16_bool = var_18_bool; // 0x50 TMovT
	return 0; // 0x51 Return
}


func_25(var_37_int, var_38_float)
{
	var_39_int = 100; // 0x1a PushI
	var_40_float = 0.5; // 0x1b PushF
	var_41_int = var_38_float - var_40_float; // 0x1c Sub
	var_42_float = var_39_int * var_41_int; // 0x1d Mult
	var_43_float = 2.5; // 0x1e PushF
	var_37_int = var_42_float / var_42_float; // 0x1f Div2
	return 0; // 0x20 Return
}


