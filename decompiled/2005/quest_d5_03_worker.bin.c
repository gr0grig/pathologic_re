task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xaa PushI
	if(var_8_int == 0) goto Label_267; // 0xab JumpB
	func_565(); // 0xad NEW_2
	var_10_int = 13016; // 0xaf PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb0 Eq
	if(var_11_bool == 0) goto Label_183; // 0xb1 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb2 PushV
	var_12_object = var_1_object; // 0xb3 MovT
	var_13_object = var_0_object; // 0xb4 MovT
	func_617(); // 0xb5 NEW_2
	
Label_183:
	var_16_int = 13017; // 0xb7 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xb8 Eq
	if(var_17_bool == 0) goto Label_191; // 0xb9 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xba PushV
	var_18_object = var_1_object; // 0xbb MovT
	var_19_object = var_0_object; // 0xbc MovT
	func_617(); // 0xbd NEW_2
	
Label_191:
	var_20_int = 13013; // 0xbf PushI
	var_21_bool = var_6_int == var_20_int; // 0xc0 Eq
	if(var_21_bool == 0) goto Label_229; // 0xc1 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xc2 PushV
	var_23_object = var_1_object; // 0xc3 MovT
	func_623(var_23_object); // 0xc4 NEW_2
	if(var_22_bool == 0) goto Label_214; // 0xc6 JumpB
	var_30_string = ""; // 0xc7 PushV
	var_30_string = "Neutral"; // 0xc8 MovS
	func_147(var_7_bool, var_30_string); // 0xc9 NEW_2
	var_47_int = 511803; // 0xcb PushI
	SetMessage(var_47_int); // 0xcc TObjFunc
	ClearReplies(); // 0xce TObjFunc
	var_48_int = 511804; // 0xd0 PushI
	var_49_int = 13015; // 0xd1 PushI
	var_50_int = 13014; // 0xd2 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xd3 TObjFunc
	return 0; // 0xd5 Return
	
Label_214:
	var_51_string = ""; // 0xd6 PushV
	var_51_string = "Neutral"; // 0xd7 MovS
	func_147(var_7_bool, var_51_string); // 0xd8 NEW_2
	var_52_int = 512549; // 0xda PushI
	SetMessage(var_52_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_53_int = 512550; // 0xdf PushI
	var_54_int = -1; // 0xe0 PushI
	var_55_int = 13719; // 0xe1 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_56_int = 13019; // 0xe5 PushI
	var_57_bool = var_6_int == var_56_int; // 0xe6 Eq
	if(var_57_bool == 0) goto Label_232; // 0xe7 JumpB
	
Label_232:
	var_58_int = 13015; // 0xe8 PushI
	var_59_bool = var_6_int == var_58_int; // 0xe9 Eq
	if(var_59_bool == 0) goto Label_255; // 0xea JumpB
	var_60_string = ""; // 0xeb PushV
	var_60_string = "Neutral"; // 0xec MovS
	func_147(var_7_bool, var_60_string); // 0xed NEW_2
	var_61_int = 511805; // 0xef PushI
	SetMessage(var_61_int); // 0xf0 TObjFunc
	ClearReplies(); // 0xf2 TObjFunc
	var_62_int = 511806; // 0xf4 PushI
	var_63_int = -1; // 0xf5 PushI
	var_64_int = 13016; // 0xf6 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xf7 TObjFunc
	var_65_int = 511807; // 0xf9 PushI
	var_66_int = -1; // 0xfa PushI
	var_67_int = 13017; // 0xfb PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xfc TObjFunc
	return 0; // 0xfe Return
	
Label_255:
	var_3_string = 1; // 0xff TMovB
	var_68_bool = 0; // 0x100 PushV
	func_660(var_68_bool); // 0x101 NEW_2
	if(var_68_bool == 0) goto Label_263; // 0x103 JumpB
	lshStopAnimation(); // 0x104 Func
	goto Label_265; // 0x106 Jump
	
Label_265:
	return 0; // 0x109 Return
	
Label_263:
	StopAnimation(); // 0x107 Func
	
Label_267:
	return 0; // 0x10b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_439(); // 0x117 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x119 PushV
	var_8_object = var_6_object; // 0x11a Mov
	func_268(var_6_object, var_7_int, var_8_object); // 0x11b NEW_2
	return 0; // 0x11d Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x148 PushS
	var_8_bool = var_6_string == var_7_string; // 0x149 Eq
	if(var_8_bool == 0) goto Label_334; // 0x14a JumpB
	func_307(var_6_string); // 0x14c NEW_2
	
Label_334:
	return 0; // 0x14e Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x14f Func
	sync(); // 0x151 Func
	return 0; // 0x153 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x154 PushV
	var_6_bool = 0; // 0x155 MovB
	var_7_object = var_0_object; // 0x156 PushT
	if(var_7_object == 0) goto Label_349; // 0x157 JumpB
	var_8_bool = 0; // 0x158 PushV
	func_356(var_8_bool); // 0x159 NEW_2
	if(var_8_bool == 0) goto Label_349; // 0x15b JumpB
	var_6_bool = 1; // 0x15c MovB
	
Label_349:
	if(var_6_bool == 0) goto Label_355; // 0x15d JumpB
	var_9_object = Obj(); // 0x15e PushV
	func_572(var_9_object); // 0x15f NEW_2
	RemoveActor(var_9_object); // 0x161 Func
	
Label_355:
	return 0; // 0x163 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x11e PushV
	
Label_287:
	var_8_bool = 0; // 0x11f PushV
	func_444(var_8_bool); // 0x120 NEW_2
	var_11_bool = var_8_bool == 0; // 0x122 Not
	if(var_11_bool == 0) goto Label_295; // 0x123 JumpB
	Hold(); // 0x124 Func
	goto Label_287; // 0x126 Jump
	
Label_295:
	var_12_int = 3; // 0x127 PushI
	rand(var_7_float, var_12_int); // 0x128 Func
	var_13_int = 3; // 0x12a PushI
	var_14_int = var_7_float + var_13_int; // 0x12b Add
	Sleep(var_14_int); // 0x12c Func
	func_358(); // 0x12f NEW_2
	goto Label_287; // 0x131 Jump
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0; // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	var_22_float = 70.0; // 0x4 MovF
	func_449(var_21_object, var_22_float); // 0x5 NEW_2
	var_66_bool = var_20_bool == 0; // 0x7 Not
	if(var_66_bool == 0) goto Label_11; // 0x8 JumpB
	var_9_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_16_object); // 0xb Func
	var_67_int = 0; // 0xd PushV
	func_654(var_67_int); // 0xe NEW_2
	SetNPCName(var_67_int); // 0x10 ObjFunc
	var_68_int = 0; // 0x12 PushV
	func_652(var_68_int); // 0x13 NEW_2
	SetNPCDescription(var_68_int); // 0x15 ObjFunc
	var_69_string = ""; // 0x17 PushV
	func_656(var_69_string); // 0x18 NEW_2
	SetPhoto(var_69_string); // 0x1a ObjFunc
	var_70_string = ""; // 0x1c PushV
	func_658(var_70_string); // 0x1d NEW_2
	SetPhoto2(var_70_string); // 0x1f ObjFunc
	var_71_int = 0; // 0x21 PushV
	func_635(var_71_int); // 0x22 NEW_2
	SetPlayerName(var_71_int); // 0x24 ObjFunc
	var_18_int = -1; // 0x26 MovI
	IsOverrideActive(var_17_bool); // 0x27 Func
	var_79_bool = var_17_bool; // 0x29 Push
	if(var_79_bool == 0) goto Label_45; // 0x2a JumpB
	var_9_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_16_object); // 0x2d Func
	var_80_object = Obj(); var_81_object = Obj(); // 0x2f PushV
	var_80_object = var_10_object; // 0x30 Mov
	var_81_object = var_16_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_19_bool); // 0x36 ObjFunc
	
Label_56:
	var_139_bool = var_19_bool == 0; // 0x38 Not
	if(var_139_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_19_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_140_object = Obj(); // 0x3f PushV
	var_140_object = var_10_object; // 0x40 Mov
	func_517(); // 0x41 NEW_2
	StopDialog(var_16_object); // 0x43 Func
	GetReturnValue(var_18_int); // 0x45 ObjFunc
	var_9_int = var_18_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_449(var_20_bool, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; // 0x1c1 PushV
	GetPosition(var_33_cvector); // 0x1c2 ObjFunc
	GetEyesHeight(var_32_float); // 0x1c4 ObjFunc
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1c6 PushE
	var_41_float = var_41_float + var_32_float; // 0x1c7 Add2
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1c8 PopE
	GetPosition(var_34_cvector); // 0x1c9 Func
	GetEyesHeight(var_32_float); // 0x1cb Func
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x1cd PushE
	var_42_float = var_42_float + var_32_float; // 0x1ce Add2
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x1cf PopE
	var_35_cvector = var_33_cvector - var_34_cvector; // 0x1d0 Sub2
	var_43_float = GetByIndex(var_35_cvector, 1); // 0x1d1 PushE
	var_43_float = 0; // 0x1d2 MovI
	SetByIndex(var_35_cvector, 1) = var_43_float; // 0x1d3 PopE
	var_44_int = var_35_cvector | var_35_cvector; // 0x1d4 Or
	var_45_float = sqrt(var_44_int); // 0x1d5 Sqrt
	var_35_cvector = var_35_cvector / var_35_cvector; // 0x1d6 Div2
	var_36_cvector = -var_35_cvector; // 0x1d7 Neg2
	var_46_float = var_35_cvector * var_22_float; // 0x1d8 Mult
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x1d9 PushV
	var_49_cvector = CVector(0.0, 1.0, 0.0); // 0x1da PushVec
	var_48_cvector = var_36_cvector ^ var_49_cvector; // 0x1db Xor2
	func_578(var_47_cvector, var_48_cvector); // 0x1dc NEW_2
	var_55_int = 25; // 0x1de PushI
	var_56_float = var_47_cvector * var_55_int; // 0x1df Mult
	var_57_int = var_46_float + var_56_float; // 0x1e0 Add
	var_58_cvector = CVector(0.0, 10.0, 0.0); // 0x1e1 PushVec
	var_37_cvector = var_57_int - var_58_cvector; // 0x1e2 Sub2
	var_38_cvector = var_34_cvector + var_37_cvector; // 0x1e3 Add2
	IsOverrideActive(var_39_bool); // 0x1e4 Func
	var_59_bool = var_39_bool; // 0x1e6 Push
	if(var_59_bool == 0) goto Label_490; // 0x1e7 JumpB
	var_20_bool = 0; // 0x1e8 MovB
	return 18; // 0x1e9 Return
	
Label_490:
	StopWorld(); // 0x1ea Func
	CameraTransit(var_38_cvector, var_36_cvector); // 0x1ec Func
	var_60_float = GetByIndex(var_37_cvector, 0); // 0x1ee PushE
	var_61_float = GetByIndex(var_37_cvector, 2); // 0x1ef PushE
	Rotate(var_60_float, var_61_float); // 0x1f0 Func
	var_62_bool = 0; // 0x1f2 PushV
	func_660(var_62_bool); // 0x1f3 NEW_2
	if(var_62_bool == 0) goto Label_503; // 0x1f5 JumpB
	goto Label_511; // 0x1f6 Jump
	
Label_511:
	CameraWaitForPlayFinish(); // 0x1ff Func
	ResumeWorld(); // 0x201 Func
	var_20_bool = 1; // 0x203 MovB
	return 18; // 0x204 Return
	
Label_503:
	var_63_string = "head"; // 0x1f7 PushS
	HasAnimationTrack(var_40_bool, var_63_string); // 0x1f8 Func
	var_64_bool = var_40_bool; // 0x1fa Push
	if(var_64_bool == 0) goto Label_511; // 0x1fb JumpB
	var_65_string = "head"; // 0x1fc PushS
	LookAsyncCamera(var_65_string); // 0x1fd Func
}


func_578(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x242 PushV
	var_52_int = var_48_cvector | var_48_cvector; // 0x243 Or
	var_51_float = sqrt(var_52_int); // 0x244 Sqrt2
	var_53_float = 0.0; // 0x245 PushF
	var_54_bool = var_51_float < var_53_float; // 0x246 LT
	if(var_54_bool == 0) goto Label_586; // 0x247 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x248 MovV
	return 2; // 0x249 Return
	
Label_586:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x24a Div2
	return 2; // 0x24b Return
}


func_517()
{
	var_141_bool = 0; var_142_bool = 0; // 0x205 PushV
	CameraSwitchToNormal(); // 0x206 Func
	var_143_bool = 0; // 0x208 PushV
	func_660(var_143_bool); // 0x209 NEW_2
	if(var_143_bool == 0) goto Label_525; // 0x20b JumpB
	goto Label_533; // 0x20c Jump
	
Label_533:
	return 2; // 0x215 Return
	
Label_525:
	var_144_string = "head"; // 0x20d PushS
	HasAnimationTrack(var_142_bool, var_144_string); // 0x20e Func
	var_145_bool = var_142_bool; // 0x210 Push
	if(var_145_bool == 0) goto Label_533; // 0x211 JumpB
	var_146_string = "head"; // 0x212 PushS
	UnlookAsync(var_146_string); // 0x213 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_80_object, var_81_object)
{
	var_0_object = var_81_object; // 0x4b TMov
	var_1_object = var_80_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_86_int = 1; // 0x4e PushI
	if(var_86_int == 0) goto Label_117; // 0x4f JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x50 PushV
	var_88_object = var_1_object; // 0x51 MovT
	func_623(var_88_object); // 0x52 NEW_2
	if(var_87_bool == 0) goto Label_100; // 0x54 JumpB
	var_95_string = ""; // 0x55 PushV
	var_95_string = "Neutral"; // 0x56 MovS
	func_147(var_81_object, var_95_string); // 0x57 NEW_2
	var_112_int = 511803; // 0x59 PushI
	SetMessage(var_112_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_113_int = 511804; // 0x5e PushI
	var_114_int = 13015; // 0x5f PushI
	var_115_int = 13014; // 0x60 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x61 TObjFunc
	goto Label_117; // 0x63 Jump
	
Label_117:
	var_116_bool = 0; // 0x75 PushV
	func_660(var_116_bool); // 0x76 NEW_2
	if(var_116_bool == 0) goto Label_132; // 0x78 JumpB
	
Label_121:
	lshWaitForAnimEnd(); // 0x79 Func
	var_117_string = var_3_string; // 0x7b PushT
	if(var_117_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_131:
	goto Label_146; // 0x83 Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_126:
	var_118_string = ""; // 0x7e PushV
	var_118_string = var_2_object; // 0x7f MovT
	func_534(var_118_string); // 0x80 NEW_2
	goto Label_121; // 0x82 Jump
	
Label_132:
	var_129_string = "all"; // 0x84 PushS
	var_130_string = "idle"; // 0x85 PushS
	PlayAnimation(var_129_string, var_130_string); // 0x86 Func
	
Label_136:
	WaitForAnimEnd(); // 0x88 Func
	var_131_string = var_3_string; // 0x8a PushT
	if(var_131_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_141:
	var_132_string = "all"; // 0x8d PushS
	var_133_string = "idle"; // 0x8e PushS
	PlayAnimation(var_132_string, var_133_string); // 0x8f Func
	goto Label_136; // 0x91 Jump
	
Label_100:
	var_134_string = ""; // 0x64 PushV
	var_134_string = "Neutral"; // 0x65 MovS
	func_147(var_81_object, var_134_string); // 0x66 NEW_2
	var_135_int = 512549; // 0x68 PushI
	SetMessage(var_135_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_136_int = 512550; // 0x6d PushI
	var_137_int = -1; // 0x6e PushI
	var_138_int = 13719; // 0x6f PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x70 TObjFunc
	goto Label_117; // 0x72 Jump
}


func_268(var_7_int, var_8_object, var_11_object)
{
	var_9_int = 0; var_10_object = Obj(); // 0x10d PushV
	var_10_object = var_8_object; // 0x10e Mov
	TaskCall(0); // 0x10f TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x110 NEW_2
	TaskReturn(); // 0x111 TaskReturn
	var_7_int = var_11_object; // 0x112 Mov
	return 0; // 0x114 Return
}


func_652(var_68_int)
{
	var_68_int = 515568; // 0x28c MovI
	return 0; // 0x28d Return
}


func_654(var_67_int)
{
	var_67_int = 503353; // 0x28e MovI
	return 0; // 0x28f Return
}


func_588(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0; // 0x24c PushV
	GetVariable(var_90_string, var_92_int); // 0x24d Func
	var_89_int = var_92_int; // 0x24f Mov
	return 2; // 0x250 Return
}


func_656(var_69_string)
{
	var_69_string = "ui/NPC_Citizen1.png"; // 0x290 MovS
	return 0; // 0x291 Return
}


func_593(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x251 PushV
	var_40_string = "idle"; // 0x252 MovS
	var_41_int = var_38_int; // 0x253 Push
	if(var_41_int == 0) goto Label_598; // 0x254 JumpB
	var_40_string = var_40_string + var_38_int; // 0x255 Add2
	
Label_598:
	var_37_string = var_40_string; // 0x256 Mov
	return 2; // 0x257 Return
}


func_658(var_70_string)
{
	var_70_string = "ui/NPC_Citizen1_b.png"; // 0x292 MovS
	return 0; // 0x293 Return
}


func_147(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x94 PushV
	func_660(var_96_bool); // 0x95 NEW_2
	var_97_bool = var_96_bool == 0; // 0x97 Not
	if(var_97_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_98_bool = var_95_string == var_2_object; // 0x9a Eq
	if(var_98_bool == 0) goto Label_157; // 0x9b JumpB
	return 0; // 0x9c Return
	
Label_157:
	var_99_string = ""; var_100_bool = 0; // 0x9d PushV
	var_99_string = var_95_string; // 0x9e Mov
	var_101_string = ""; // 0x9f PushS
	var_102_bool = var_95_string == var_101_string; // 0xa0 Eq
	if(var_102_bool == 0) goto Label_164; // 0xa1 JumpB
	var_100_bool = 0; // 0xa2 MovB
	goto Label_165; // 0xa3 Jump
	
Label_165:
	func_550(var_99_string, var_100_bool); // 0xa5 NEW_2
	var_2_object = var_95_string; // 0xa7 TMov
	return 0; // 0xa8 Return
	
Label_164:
	var_100_bool = 1; // 0xa4 MovB
}


func_660(var_62_bool)
{
	var_62_bool = 0; // 0x294 MovB
	return 0; // 0x295 Return
}


func_534(var_118_string)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x216 PushV
	lshHasAnimation(var_122_bool, var_118_string); // 0x217 Func
	var_125_bool = var_122_bool; // 0x219 Push
	if(var_125_bool == 0) goto Label_545; // 0x21a JumpB
	lshGetAnimTimes(var_118_string, var_123_float, var_124_float); // 0x21b Func
	var_126_bool = 0; // 0x21d PushB
	lshPlayAnimation(var_123_float, var_124_float, var_126_bool); // 0x21e Func
	goto Label_549; // 0x220 Jump
	
Label_549:
	return 6; // 0x225 Return
	
Label_545:
	var_127_string = "Can't find lsh animation : "; // 0x221 PushS
	var_128_int = var_127_string + var_118_string; // 0x222 Add
	Trace(var_128_int); // 0x223 Func
}


func_600(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x258 PushV
	var_34_int = 0; // 0x259 MovI
	
Label_602:
	var_36_string = "all"; // 0x25a PushS
	var_37_string = ""; var_38_int = 0; // 0x25b PushV
	var_38_int = var_34_int; // 0x25c Mov
	func_593(var_37_string, var_38_int); // 0x25d NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x25f Func
	var_42_bool = var_35_bool == 0; // 0x261 Not
	if(var_42_bool == 0) goto Label_612; // 0x262 JumpB
	goto Label_615; // 0x263 Jump
	
Label_615:
	var_31_int = var_34_int; // 0x267 Mov
	return 4; // 0x268 Return
	
Label_612:
	var_43_int = 1; // 0x264 PushI
	var_34_int = var_34_int + var_43_int; // 0x265 Add2
	goto Label_602; // 0x266 Jump
}


func_356(var_8_bool)
{
	var_8_bool = 1; // 0x164 MovB
	return 0; // 0x165 Return
}


func_550(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x226 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x227 Func
	var_109_bool = var_106_bool; // 0x229 Push
	if(var_109_bool == 0) goto Label_560; // 0x22a JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x22b Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x22d Func
	goto Label_564; // 0x22f Jump
	
Label_564:
	return 6; // 0x234 Return
	
Label_560:
	var_110_string = "Can't find lsh animation : "; // 0x230 PushS
	var_111_int = var_110_string + var_99_string; // 0x231 Add
	Trace(var_111_int); // 0x232 Func
}


func_358()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x166 PushV
	WaitForAnimEnd(); // 0x167 Func
	var_29_bool = 0; // 0x169 PushV
	func_444(var_29_bool); // 0x16a NEW_2
	var_30_bool = var_29_bool == 0; // 0x16c Not
	if(var_30_bool == 0) goto Label_367; // 0x16d JumpB
	return 14; // 0x16e Return
	
Label_367:
	var_31_int = 0; // 0x16f PushV
	func_600(var_31_int); // 0x170 NEW_2
	var_22_int = var_31_int; // 0x171 Mov
	var_23_int = 0; // 0x173 MovI
	
Label_372:
	var_44_bool = 0; // 0x174 PushV
	var_44_bool = 0; // 0x175 MovB
	var_45_int = 5; // 0x176 PushI
	var_46_bool = var_23_int < var_45_int; // 0x177 LT
	if(var_46_bool == 0) goto Label_382; // 0x178 JumpB
	var_47_bool = 0; // 0x179 PushV
	func_444(var_47_bool); // 0x17a NEW_2
	if(var_47_bool == 0) goto Label_382; // 0x17c JumpB
	var_44_bool = 1; // 0x17d MovB
	
Label_382:
	if(var_44_bool == 0) goto Label_434; // 0x17e JumpB
	var_48_int = 3; // 0x17f PushI
	irand(var_24_int, var_48_int); // 0x180 Func
	var_49_int = 0; // 0x182 PushI
	var_50_bool = var_24_int == var_49_int; // 0x183 Eq
	if(var_50_bool == 0) goto Label_406; // 0x184 JumpB
	var_51_int = var_22_int; // 0x185 Push
	if(var_51_int == 0) goto Label_405; // 0x186 JumpB
	irand(var_25_int, var_22_int); // 0x187 Func
	var_52_string = "all"; // 0x189 PushS
	var_53_string = ""; var_54_int = 0; // 0x18a PushV
	var_54_int = var_25_int; // 0x18b Mov
	func_593(var_53_string, var_54_int); // 0x18c NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x18e Func
	WaitForAnimEnd(var_26_bool); // 0x190 Func
	var_55_bool = var_26_bool == 0; // 0x192 Not
	if(var_55_bool == 0) goto Label_405; // 0x193 JumpB
	goto Label_434; // 0x194 Jump
	
Label_434:
	ResetAAS(); // 0x1b2 Func
	return 14; // 0x1b4 Return
	
Label_405:
	goto Label_423; // 0x195 Jump
	
Label_423:
	var_56_bool = 0; // 0x1a7 PushV
	func_437(var_56_bool); // 0x1a8 NEW_2
	var_57_bool = var_56_bool == 0; // 0x1aa Not
	if(var_57_bool == 0) goto Label_429; // 0x1ab JumpB
	goto Label_434; // 0x1ac Jump
	
Label_429:
	ResetAAS(); // 0x1ad Func
	var_58_int = 1; // 0x1af PushI
	var_23_int = var_23_int + var_58_int; // 0x1b0 Add2
	goto Label_372; // 0x1b1 Jump
	
Label_406:
	var_59_int = 1; // 0x196 PushI
	var_60_bool = var_24_int == var_59_int; // 0x197 Eq
	if(var_60_bool == 0) goto Label_420; // 0x198 JumpB
	var_61_int = 4; // 0x199 PushI
	rand(var_27_float, var_61_int); // 0x19a Func
	var_62_int = 1; // 0x19c PushI
	var_63_int = var_27_float + var_62_int; // 0x19d Add
	Sleep(var_63_int, var_28_bool); // 0x19e Func
	var_64_bool = var_28_bool == 0; // 0x1a0 Not
	if(var_64_bool == 0) goto Label_419; // 0x1a1 JumpB
	goto Label_434; // 0x1a2 Jump
	
Label_419:
	goto Label_423; // 0x1a3 Jump
	
Label_420:
	var_65_int = var_23_int; // 0x1a4 Push
	if(var_65_int == 0) goto Label_423; // 0x1a5 JumpB
	goto Label_434; // 0x1a6 Jump
}


func_617()
{
	var_14_string = "ood5Prisoner1"; // 0x26a PushS
	var_15_int = 1; // 0x26b PushI
	SetVariable(var_14_string, var_15_int); // 0x26c Func
	return 0; // 0x26e Return
}


func_623(var_87_bool)
{
	var_89_int = 0; var_90_string = ""; // 0x270 PushV
	var_90_string = "ood5Prisoner1"; // 0x271 MovS
	func_588(var_89_int, var_90_string); // 0x272 NEW_2
	var_93_int = 0; // 0x274 PushI
	var_94_bool = var_89_int == var_93_int; // 0x275 Eq
	if(var_94_bool == 0) goto Label_633; // 0x276 JumpB
	var_87_bool = 1; // 0x277 MovB
	return 0; // 0x278 Return
	
Label_633:
	var_87_bool = 0; // 0x279 MovB
	return 0; // 0x27a Return
}


func_307(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x133 PushV
	var_0_object = 1; // 0x134 TMovB
	IsLoaded(var_10_bool); // 0x135 Func
	var_11_bool = 0; // 0x137 PushV
	var_11_bool = 0; // 0x138 MovB
	var_12_bool = var_10_bool == 0; // 0x139 Not
	if(var_12_bool == 0) goto Label_320; // 0x13a JumpB
	var_13_bool = 0; // 0x13b PushV
	func_356(var_13_bool); // 0x13c NEW_2
	if(var_13_bool == 0) goto Label_320; // 0x13e JumpB
	var_11_bool = 1; // 0x13f MovB
	
Label_320:
	if(var_11_bool == 0) goto Label_326; // 0x140 JumpB
	var_14_object = Obj(); // 0x141 PushV
	func_572(var_14_object); // 0x142 NEW_2
	RemoveActor(var_14_object); // 0x144 Func
	
Label_326:
	return 2; // 0x146 Return
}


func_565()
{
	var_9_bool = 0; // 0x235 PushV
	func_660(var_9_bool); // 0x236 NEW_2
	if(var_9_bool == 0) goto Label_571; // 0x238 JumpB
	lshStopSpeech(); // 0x239 Func
	
Label_571:
	return 0; // 0x23b Return
}


func_437(var_56_bool)
{
	var_56_bool = 1; // 0x1b5 MovB
	return 0; // 0x1b6 Return
}


func_439()
{
	StopAnimation(); // 0x1b7 Func
	StopGroup0(); // 0x1b9 Func
	return 0; // 0x1bb Return
}


func_635(var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x27b PushV
	var_74_string = "branch"; // 0x27c PushS
	GetVariable(var_74_string, var_73_int); // 0x27d Func
	var_75_int = 0; // 0x27f PushI
	var_76_bool = var_73_int == var_75_int; // 0x280 Eq
	if(var_76_bool == 0) goto Label_645; // 0x281 JumpB
	var_71_int = 1; // 0x282 MovI
	return 2; // 0x283 Return
	
Label_645:
	var_77_int = 1; // 0x285 PushI
	var_78_bool = var_73_int == var_77_int; // 0x286 Eq
	if(var_78_bool == 0) goto Label_650; // 0x287 JumpB
	var_71_int = 2; // 0x288 MovI
	return 2; // 0x289 Return
	
Label_650:
	var_71_int = 3; // 0x28a MovI
	return 2; // 0x28b Return
}


func_444(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1bc PushV
	IsLoaded(var_10_bool); // 0x1bd Func
	var_8_bool = var_10_bool; // 0x1bf Mov
	return 2; // 0x1c0 Return
}


func_572(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x23c PushV
	self(var_11_object); // 0x23d Func
	var_9_object = var_11_object; // 0x23f Mov
	return 2; // 0x240 Return
}


