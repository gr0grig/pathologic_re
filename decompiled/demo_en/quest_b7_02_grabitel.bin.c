task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x6c PushV
	var_11_object = var_10_bool; // 0x6d Mov
	func_2165(); // 0x6e NEW_2
	return 0; // 0x70 Return
}


task_0_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x72 PushV
	var_14_object = var_10_bool; // 0x73 Mov
	var_15_object = var_11_object; // 0x74 Mov
	func_2167(var_15_object); // 0x75 NEW_2
	return 0; // 0x77 Return
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0x79 PushS
	var_12_bool = var_10_bool == var_11_string; // 0x7a Eq
	if(var_12_bool == 0) goto Label_125; // 0x7b JumpB
	var_0_bool = 1; // 0x7c TMovB
	
Label_125:
	return 0; // 0x7d Return
}


task_1_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0xb7 PushV
	var_11_object = var_10_bool; // 0xb8 Mov
	func_2165(); // 0xb9 NEW_2
	return 0; // 0xbb Return
}


task_1_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0xbd PushV
	var_14_object = var_10_bool; // 0xbe Mov
	var_15_object = var_11_object; // 0xbf Mov
	func_2167(var_15_object); // 0xc0 NEW_2
	return 0; // 0xc2 Return
}


task_1_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "kill"; // 0xc4 PushS
	var_12_bool = var_10_bool == var_11_string; // 0xc5 Eq
	if(var_12_bool == 0) goto Label_202; // 0xc6 JumpB
	var_13_bool = GlobalVars[0]; // 0xc7 PushGE
	var_13_bool = 1; // 0xc8 MovB
	GlobalVars[0] = var_13_bool; // 0xc9 PopGE
	
Label_202:
	return 0; // 0xca Return
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x360 PushV
	var_11_object = var_10_object; // 0x361 Mov
	func_2165(); // 0x362 NEW_2
	return 0; // 0x364 Return
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x366 PushV
	var_14_object = var_10_object; // 0x367 Mov
	var_15_object = var_11_object; // 0x368 Mov
	func_2167(var_15_object); // 0x369 NEW_2
	return 0; // 0x36b Return
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_11_string = "kill"; // 0x36d PushS
	var_12_bool = var_10_string == var_11_string; // 0x36e Eq
	if(var_12_bool == 0) goto Label_886; // 0x36f JumpB
	var_13_bool = GlobalVars[0]; // 0x370 PushGE
	var_13_bool = 1; // 0x371 MovB
	GlobalVars[0] = var_13_bool; // 0x372 PopGE
	func_950(var_10_string); // 0x374 NEW_2
	
Label_886:
	return 0; // 0x376 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_11_int = 1; // 0x3a9 PushI
	var_12_bool = var_10_int == var_11_int; // 0x3aa Eq
	if(var_12_bool == 0) goto Label_945; // 0x3ab JumpB
	var_13_object = Obj(); // 0x3ac PushV
	var_13_object = var_1_object; // 0x3ad MovT
	func_1946(var_13_object); // 0x3ae NEW_2
	goto Label_949; // 0x3b0 Jump
	
Label_949:
	return 0; // 0x3b5 Return
	
Label_945:
	var_18_int = 0; // 0x3b1 PushV
	var_18_int = var_10_int; // 0x3b2 Mov
	func_1094(var_9_bool, var_10_int, var_18_int); // 0x3b3 NEW_2
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x3c4 PushV
	var_11_bool = 0; // 0x3c5 MovB
	var_12_bool = var_1_object == var_10_object; // 0x3c6 Eq
	if(var_12_bool == 0) goto Label_971; // 0x3c7 JumpB
	var_13_bool = var_2_int == 0; // 0x3c8 Not
	if(var_13_bool == 0) goto Label_971; // 0x3c9 JumpB
	var_11_bool = 1; // 0x3ca MovB
	
Label_971:
	if(var_11_bool == 0) goto Label_977; // 0x3cb JumpB
	var_2_int = 1; // 0x3cc TMovB
	var_14_object = Obj(); // 0x3cd PushV
	var_14_object = var_10_object; // 0x3ce Mov
	func_1757(var_14_object); // 0x3cf NEW_2
	
Label_977:
	return 0; // 0x3d1 Return
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x3d3 PushV
	var_11_bool = 0; // 0x3d4 MovB
	var_12_bool = var_1_object == var_10_object; // 0x3d5 Eq
	if(var_12_bool == 0) goto Label_986; // 0x3d6 JumpB
	var_13_int = var_2_int; // 0x3d7 PushT
	if(var_13_int == 0) goto Label_986; // 0x3d8 JumpB
	var_11_bool = 1; // 0x3d9 MovB
	
Label_986:
	if(var_11_bool == 0) goto Label_991; // 0x3da JumpB
	var_2_int = 0; // 0x3db TMovB
	var_14_string = "head"; // 0x3dc PushS
	UnlookAsync(var_14_string); // 0x3dd Func
	
Label_991:
	return 0; // 0x3df Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object); // 0x459 Func
	return 0; // 0x45b Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_950(var_10_object); // 0x465 NEW_2
	var_15_object = Obj(); // 0x467 PushV
	var_15_object = var_10_object; // 0x468 Mov
	func_2201(); // 0x469 NEW_2
	return 0; // 0x46b Return
}


task_3_event_5(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	TaskCall(4); // 0x47b TaskCall
	func_1162(); // 0x47c NEW_2
	TaskReturn(); // 0x47d TaskReturn
	return 0; // 0x47f Return
}


task_3_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_11_string = "cleanup"; // 0x481 PushS
	var_12_bool = var_10_string == var_11_string; // 0x482 Eq
	if(var_12_bool == 0) goto Label_1161; // 0x483 JumpB
	var_13_object = Obj(); // 0x484 PushV
	func_1820(var_13_object); // 0x485 NEW_2
	RemoveActor(var_13_object); // 0x487 Func
	
Label_1161:
	return 0; // 0x489 Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x4cf PushV
	IsOverrideActive(var_12_bool); // 0x4d0 Func
	var_13_bool = var_12_bool == 0; // 0x4d2 Not
	if(var_13_bool == 0) goto Label_1240; // 0x4d3 JumpB
	var_14_object = Obj(); // 0x4d4 PushV
	var_14_object = var_10_object; // 0x4d5 Mov
	func_2013(var_14_object); // 0x4d6 NEW_2
	
Label_1240:
	return 2; // 0x4d8 Return
}


task_5_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x54f Return
}


task_5_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0; // 0x551 Return
}


task_5_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0; // 0x553 Return
}


event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_object = Obj(); // 0x855 PushV
	func_1820(var_10_object); // 0x856 NEW_2
	RemoveActor(var_10_object); // 0x858 Func
	Hold(); // 0x85a Func
	return 0; // 0x85c Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x87b PushV
	var_14_object = var_10_object; // 0x87c Mov
	var_15_int = var_11_int; // 0x87d Mov
	var_16_float = var_12_float; // 0x87e Mov
	func_1664(var_14_object, var_15_int, var_16_float); // 0x87f NEW_2
	return 0; // 0x881 Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x883 PushV
	var_16_object = var_10_object; // 0x884 Mov
	var_17_int = var_11_int; // 0x885 Mov
	var_18_float = var_12_float; // 0x886 Mov
	var_19_cvector = var_14_cvector; // 0x887 Mov
	var_20_cvector = var_15_cvector; // 0x888 Mov
	func_1732(var_18_float, var_19_cvector, var_20_cvector); // 0x889 NEW_2
	return 0; // 0x88b Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x88c PushV
	var_14_string = "health"; // 0x88d PushS
	var_15_bool = var_11_string == var_14_string; // 0x88e Eq
	if(var_15_bool == 0) goto Label_2200; // 0x88f JumpB
	var_16_string = "health"; // 0x890 PushS
	GetProperty(var_16_string, var_13_float); // 0x891 Func
	var_17_int = 0; // 0x893 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x894 LE
	if(var_18_bool == 0) goto Label_2200; // 0x895 JumpB
	SignalDeath(var_10_object); // 0x896 Func
	
Label_2200:
	return 2; // 0x898 Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x89a PushV
	var_11_object = var_10_object; // 0x89b Mov
	func_2141(var_11_object); // 0x89c NEW_2
	return 0; // 0x89e Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	Hold(); // 0x477 Func
	return 0; // 0x479 Return
}


func_0(var_0_bool, var_67_bool, var_68_object, var_187_object)
{
	var_70_object = Obj(); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_object = Obj(); var_74_cvector = CVector(0,0,0); var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_object = Obj(); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_object = Obj(); var_81_cvector = CVector(0,0,0); var_82_float = 0; var_83_cvector = CVector(0,0,0); // 0x0 PushV
	var_84_object = Obj(); // 0x1 PushV
	var_84_object = var_68_object; // 0x2 Mov
	func_1946(var_84_object); // 0x3 NEW_2
	var_0_bool = 0; // 0x5 TMovB
	var_89_bool = 0; var_90_object = Obj(); // 0x6 PushV
	var_90_object = var_68_object; // 0x7 Mov
	func_1611(var_90_object); // 0x8 NEW_2
	var_103_bool = 0; var_104_object = Obj(); // 0xa PushV
	var_104_object = var_68_object; // 0xb Mov
	func_1577(var_103_bool, var_104_object); // 0xc NEW_2
	var_105_bool = var_103_bool == 0; // 0xe Not
	if(var_105_bool == 0) goto Label_18; // 0xf JumpB
	var_67_bool = 0; // 0x10 MovB
	return 14; // 0x11 Return
	
Label_18:
	func_1955(); // 0x13 NEW_2
	Face(var_68_object); // 0x15 Func
	var_112_string = "all"; // 0x17 PushS
	var_113_string = "aattack_begin1"; // 0x18 PushS
	PlayAnimation(var_112_string, var_113_string); // 0x19 Func
	WaitForAnimEnd(); // 0x1b Func
	var_114_bool = 0; var_115_object = Obj(); // 0x1d PushV
	var_115_object = var_68_object; // 0x1e Mov
	func_1577(var_114_bool, var_115_object); // 0x1f NEW_2
	var_116_bool = var_114_bool == 0; // 0x21 Not
	if(var_116_bool == 0) goto Label_39; // 0x22 JumpB
	StopAsync(); // 0x23 Func
	var_67_bool = 0; // 0x25 MovB
	return 14; // 0x26 Return
	
Label_39:
	var_117_string = "all"; // 0x27 PushS
	var_118_string = "aattack_end1"; // 0x28 PushS
	PlayAnimation(var_117_string, var_118_string); // 0x29 Func
	GetScene(var_77_object); // 0x2b Func
	var_119_string = "knife"; // 0x2d PushS
	GetGeometryLocator(var_119_string, var_79_bool, var_78_cvector); // 0x2e Func
	var_120_string = "scripted"; // 0x30 PushS
	var_121_cvector = CVector(0.0, 0.0, 1.0); // 0x31 PushVec
	var_122_string = "grabitel_knife.xml"; // 0x32 PushS
	AddActorByType(var_80_object, var_120_string, var_77_object, var_78_cvector, var_121_cvector, var_122_string); // 0x33 Func
	var_123_string = "Owner"; // 0x35 PushS
	var_124_object = Obj(); // 0x36 PushV
	func_1820(var_124_object); // 0x37 NEW_2
	SetScriptProperty(var_123_string, var_124_object); // 0x39 ObjFunc
	var_125_string = "Target"; // 0x3b PushS
	SetScriptProperty(var_125_string, var_68_object); // 0x3c ObjFunc
	GetPosition(var_81_cvector); // 0x3e ObjFunc
	GetEyesHeight(var_82_float); // 0x40 ObjFunc
	var_126_float = GetByIndex(var_81_cvector, 1); // 0x42 PushE
	var_127_int = 10; // 0x43 PushI
	var_128_int = var_82_float - var_127_int; // 0x44 Sub
	var_126_float = var_126_float + var_128_int; // 0x45 Add2
	SetByIndex(var_81_cvector, 1) = var_126_float; // 0x46 PopE
	var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_float = 0; // 0x47 PushV
	var_130_cvector = var_78_cvector; // 0x48 Mov
	var_131_cvector = var_81_cvector; // 0x49 Mov
	var_132_float = 2000.0; // 0x4a MovF
	func_1972(var_129_cvector, var_130_cvector, var_131_cvector, var_132_float); // 0x4b NEW_2
	var_83_cvector = var_129_cvector; // 0x4c Mov
	var_180_string = "StartDirection"; // 0x4e PushS
	SetScriptProperty(var_180_string, var_83_cvector); // 0x4f ObjFunc
	WaitForAnimEnd(); // 0x51 Func
	StopAsync(); // 0x53 Func
	var_181_bool = var_0_bool; // 0x55 PushT
	if(var_181_bool == 0) goto Label_89; // 0x56 JumpB
	var_67_bool = 1; // 0x57 MovB
	return 14; // 0x58 Return
	
Label_89:
	var_182_bool = 0; var_183_object = Obj(); // 0x59 PushV
	var_183_object = var_68_object; // 0x5a Mov
	func_1577(var_182_bool, var_183_object); // 0x5b NEW_2
	var_184_bool = var_182_bool == 0; // 0x5d Not
	if(var_184_bool == 0) goto Label_97; // 0x5e JumpB
	var_67_bool = 0; // 0x5f MovB
	return 14; // 0x60 Return
	
Label_97:
	var_185_bool = 0; var_186_object = Obj(); // 0x61 PushV
	var_186_object = var_68_object; // 0x62 Mov
	TaskCall(1); // 0x63 TaskCall
	func_126(var_185_bool, var_186_object); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_67_bool = var_187_object; // 0x66 Mov
	return 14; // 0x68 Return
}


func_1536(var_33_bool)
{
	var_35_bool = 0; var_36_bool = 0; // 0x600 PushV
	IsDead(var_36_bool); // 0x601 ObjFunc
	var_33_bool = var_36_bool; // 0x603 Mov
	return 2; // 0x604 Return
}


func_1541(var_22_bool, var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x605 PushV
	var_28_bool = var_23_object == 0; // 0x606 NullEq
	if(var_28_bool == 0) goto Label_1546; // 0x607 JumpB
	var_22_bool = 0; // 0x608 MovB
	return 4; // 0x609 Return
	
Label_1546:
	var_29_bool = 0; // 0x60a PushV
	var_29_bool = 0; // 0x60b MovB
	var_30_string = "IsDead"; // 0x60c PushS
	var_31_int = 1; // 0x60d PushI
	var_32_bool = IsFuncExist(var_23_object, var_30_string, var_31_int); // 0x60e FuncExist
	if(var_32_bool == 0) goto Label_1558; // 0x60f JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0x610 PushV
	var_34_object = var_23_object; // 0x611 Mov
	func_1536(var_34_object); // 0x612 NEW_2
	if(var_33_bool == 0) goto Label_1558; // 0x614 JumpB
	var_29_bool = 1; // 0x615 MovB
	
Label_1558:
	if(var_29_bool == 0) goto Label_1561; // 0x616 JumpB
	var_22_bool = 0; // 0x617 MovB
	return 4; // 0x618 Return
	
Label_1561:
	GetScene(var_26_object); // 0x619 Func
	var_37_bool = var_26_object == 0; // 0x61b NullEq
	if(var_37_bool == 0) goto Label_1567; // 0x61c JumpB
	var_22_bool = 0; // 0x61d MovB
	return 4; // 0x61e Return
	
Label_1567:
	GetScene(var_27_object); // 0x61f ObjFunc
	var_38_bool = var_26_object != var_27_object; // 0x621 Neq
	if(var_38_bool == 0) goto Label_1573; // 0x622 JumpB
	var_22_bool = 0; // 0x623 MovB
	return 4; // 0x624 Return
	
Label_1573:
	var_22_bool = 1; // 0x625 MovB
	return 4; // 0x626 Return
}


func_2057(var_102_string)
{
	var_103_object = Obj(); var_104_int = 0; var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; var_108_bool = 0; // 0x809 PushV
	CreateInvItem(var_106_object); // 0x80a Func
	SetItemName(var_102_string); // 0x80c ObjFunc
	var_109_string = "Organ"; // 0x80e PushS
	var_110_int = 1; // 0x80f PushI
	SetProperty(var_109_string, var_110_int); // 0x810 ObjFunc
	GetItemID(var_107_int); // 0x812 ObjFunc
	var_111_int = 0; // 0x814 PushI
	var_112_int = 1; // 0x815 PushI
	AddItem(var_108_bool, var_106_object, var_111_int, var_112_int); // 0x816 Func
	return 6; // 0x818 Return
}


func_2074()
{
	var_96_int = 0; // 0x81a PushV
	func_2007(var_96_int); // 0x81b NEW_2
	var_100_int = 1; // 0x81d PushI
	var_101_bool = var_96_int != var_100_int; // 0x81e Neq
	if(var_101_bool == 0) goto Label_2081; // 0x81f JumpB
	return 0; // 0x820 Return
	
Label_2081:
	var_102_string = ""; // 0x821 PushV
	var_102_string = "liver"; // 0x822 MovS
	func_2057(var_102_string); // 0x823 NEW_2
	var_113_string = ""; // 0x825 PushV
	var_113_string = "kidney"; // 0x826 MovS
	func_2057(var_113_string); // 0x827 NEW_2
	var_114_string = ""; // 0x829 PushV
	var_114_string = "heart"; // 0x82a MovS
	func_2057(var_114_string); // 0x82b NEW_2
	var_115_string = ""; // 0x82d PushV
	var_115_string = "blood"; // 0x82e MovS
	func_2057(var_115_string); // 0x82f NEW_2
	return 0; // 0x831 Return
}


func_1577(var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0; // 0x629 PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x62a PushV
	var_23_object = var_19_object; // 0x62b Mov
	func_1541(var_22_bool, var_23_object); // 0x62c NEW_2
	var_39_bool = var_22_bool == 0; // 0x62e Not
	if(var_39_bool == 0) goto Label_1586; // 0x62f JumpB
	var_18_bool = 0; // 0x630 MovB
	return 2; // 0x631 Return
	
Label_1586:
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x632 PushV
	var_41_object = var_19_object; // 0x633 Mov
	var_42_string = "noaccess"; // 0x634 MovS
	func_1398(var_40_bool, var_41_object, var_42_string); // 0x635 NEW_2
	var_49_bool = var_40_bool == 0; // 0x637 Not
	if(var_49_bool == 0) goto Label_1595; // 0x638 JumpB
	var_18_bool = 1; // 0x639 MovB
	return 2; // 0x63a Return
	
Label_1595:
	var_50_string = "noaccess"; // 0x63b PushS
	GetProperty(var_50_string, var_21_int); // 0x63c ObjFunc
	var_51_int = 0; // 0x63e PushI
	var_18_bool = var_21_int == var_51_int; // 0x63f Eq2
	return 2; // 0x640 Return
}


func_2098()
{
	var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x832 PushV
	var_20_int = 0; // 0x833 PushI
	ClearSubContainer(var_20_int); // 0x834 Func
	var_21_int = 0; var_22_int = 0; // 0x836 PushV
	var_21_int = 300; // 0x837 MovI
	var_22_int = 750; // 0x838 MovI
	func_2026(var_21_int, var_22_int); // 0x839 NEW_2
	var_40_string = ""; var_41_int = 0; var_42_int = 0; // 0x83b PushV
	var_40_string = "Knife"; // 0x83c MovS
	var_41_int = 1; // 0x83d MovI
	var_42_int = 8; // 0x83e MovI
	func_1768(var_40_string, var_41_int, var_42_int); // 0x83f NEW_2
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x841 PushV
	var_51_string = "lockpick"; // 0x842 MovS
	var_52_int = 1; // 0x843 MovI
	var_53_int = 6; // 0x844 MovI
	func_1768(var_51_string, var_52_int, var_53_int); // 0x845 NEW_2
	var_54_int = 0; var_55_string = ""; // 0x847 PushV
	var_55_string = "grabitel_mark"; // 0x848 MovS
	func_2128(var_54_int, var_55_string); // 0x849 NEW_2
	var_56_int = 0; // 0x84b PushI
	var_57_int = 1; // 0x84c PushI
	AddItem(var_19_bool, var_54_int, var_56_int, var_57_int); // 0x84d Func
	return 4; // 0x84f Return
}


func_1601(var_93_bool, var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; // 0x641 PushV
	GetPosition(var_98_cvector); // 0x642 Func
	var_99_cvector = var_94_cvector - var_98_cvector; // 0x644 Sub2
	var_101_float = GetByIndex(var_99_cvector, 0); // 0x645 PushE
	var_102_float = GetByIndex(var_99_cvector, 2); // 0x646 PushE
	Rotate(var_101_float, var_102_float, var_100_bool); // 0x647 Func
	var_93_bool = var_100_bool; // 0x649 Mov
	return 6; // 0x64a Return
}


func_1094(var_0_bool, var_1_object, var_18_int)
{
	var_19_int = 0; // 0x447 PushI
	var_20_bool = var_18_int != var_19_int; // 0x448 Neq
	if(var_20_bool == 0) goto Label_1099; // 0x449 JumpB
	return 0; // 0x44a Return
	
Label_1099:
	var_21_bool = 0; var_22_object = Obj(); // 0x44b PushV
	var_22_object = var_1_object; // 0x44c MovT
	func_1132(var_21_bool, var_22_object); // 0x44d NEW_2
	var_57_bool = var_21_bool == 0; // 0x44f Not
	if(var_57_bool == 0) goto Label_1106; // 0x450 JumpB
	var_0_bool = 1; // 0x451 TMovB
	
Label_1106:
	var_58_int = 0; // 0x452 PushI
	KillTimer(var_58_int); // 0x453 Func
	Stop(); // 0x455 Func
	return 0; // 0x457 Return
}


func_1611(var_89_bool)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x64b PushV
	GetPosition(var_92_cvector); // 0x64c ObjFunc
	var_93_bool = 0; var_94_cvector = CVector(0,0,0); // 0x64e PushV
	var_94_cvector = var_92_cvector; // 0x64f Mov
	func_1601(var_93_bool, var_94_cvector); // 0x650 NEW_2
	var_89_bool = var_93_bool; // 0x651 Mov
	return 2; // 0x653 Return
}


func_2128(var_33_int, var_34_string)
{
	var_35_int = 0; var_36_int = 0; // 0x850 PushV
	GetInvItemByName(var_36_int, var_34_string); // 0x851 Func
	var_33_int = var_36_int; // 0x853 Mov
	return 2; // 0x854 Return
}


func_1620(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x654 PushV
	var_42_bool = var_27_object == 0; // 0x655 NullEq
	if(var_42_bool == 0) goto Label_1624; // 0x656 JumpB
	return 14; // 0x657 Return
	
Label_1624:
	IsDead(var_35_bool); // 0x658 Func
	var_43_bool = var_35_bool; // 0x65a Push
	if(var_43_bool == 0) goto Label_1629; // 0x65b JumpB
	return 14; // 0x65c Return
	
Label_1629:
	GetSecondaryAnimationType(var_36_int); // 0x65d Func
	var_44_int = 0; // 0x65f PushI
	var_45_bool = var_36_int < var_44_int; // 0x660 LT
	if(var_45_bool == 0) goto Label_1635; // 0x661 JumpB
	return 14; // 0x662 Return
	
Label_1635:
	GetPosition(var_37_cvector); // 0x663 ObjFunc
	GetPosition(var_38_cvector); // 0x665 Func
	GetDirection(var_39_cvector); // 0x667 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x669 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x66a PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x66b PushE
	var_48_float = var_46_float * var_47_float; // 0x66c Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x66d PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x66e PushE
	var_51_float = var_49_float * var_50_float; // 0x66f Mult
	var_52_int = var_48_float + var_51_float; // 0x670 Add
	var_53_int = 0; // 0x671 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x672 GE
	if(var_54_bool == 0) goto Label_1654; // 0x673 JumpB
	var_41_string = "fhit"; // 0x674 MovS
	goto Label_1655; // 0x675 Jump
	
Label_1655:
	var_55_string = "hit_react"; // 0x677 PushS
	var_56_string = "1"; // 0x678 PushS
	var_57_int = var_41_string + var_56_string; // 0x679 Add
	var_58_string = "2"; // 0x67a PushS
	var_59_int = var_41_string + var_58_string; // 0x67b Add
	var_60_int = -10; // 0x67c PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x67d Func
	return 14; // 0x67f Return
	
Label_1654:
	var_41_string = "bhit"; // 0x676 MovS
}


func_1116(var_0_bool)
{
	var_0_bool = 1; // 0x45c TMovB
	var_14_int = 0; // 0x45d PushI
	KillTimer(var_14_int); // 0x45e Func
	Stop(); // 0x460 Func
	return 0; // 0x462 Return
}


func_2141(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x85e PushV
	var_13_object = var_11_object; // 0x85f Mov
	func_1393(var_12_bool, var_13_object); // 0x860 NEW_2
	if(var_12_bool == 0) goto Label_2155; // 0x862 JumpB
	func_2098(); // 0x864 NEW_2
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x866 PushV
	var_59_object = var_11_object; // 0x867 Mov
	var_60_float = 0.03; // 0x868 MovF
	func_1891(var_58_bool, var_59_object, var_60_float); // 0x869 NEW_2
	
Label_2155:
	func_2074(); // 0x86c NEW_2
	var_116_object = Obj(); // 0x86e PushV
	var_116_object = var_11_object; // 0x86f Mov
	TaskCall(5); // 0x870 TaskCall
	func_1216(var_116_object); // 0x871 NEW_2
	TaskReturn(); // 0x872 TaskReturn
	return 0; // 0x874 Return
}


func_1132(var_310_bool, var_311_object)
{
	var_312_bool = 0; var_313_object = Obj(); // 0x46d PushV
	var_313_object = var_311_object; // 0x46e Mov
	func_1577(var_312_bool, var_313_object); // 0x46f NEW_2
	var_310_bool = var_312_bool; // 0x470 Mov
	return 0; // 0x472 Return
}


func_1139(var_328_string)
{
	var_328_string = "walk"; // 0x473 MovS
	return 0; // 0x474 Return
}


func_2165()
{
	return 0; // 0x876 Return
}


func_1141(var_329_string)
{
	var_329_string = "run"; // 0x475 MovS
	return 0; // 0x476 Return
}


func_2167(var_13_bool)
{
	var_13_bool = 0; // 0x878 MovB
	return 0; // 0x879 Return
}


func_126(var_185_bool, var_186_object)
{
	var_193_bool = GlobalVars[0]; // 0x7f PushGE
	var_193_bool = 0; // 0x80 MovB
	GlobalVars[0] = var_193_bool; // 0x81 PopGE
	var_194_object = Obj(); var_195_bool = 0; var_196_float = 0; // 0x82 PushV
	var_194_object = var_186_object; // 0x83 Mov
	var_195_bool = 1; // 0x84 MovB
	var_196_float = 200.0; // 0x85 MovF
	func_203(var_190_bool, var_191_float, var_192_int, var_185_bool, var_186_object, var_194_object, var_195_bool, var_196_float); // 0x86 NEW_2
	var_664_bool = 0; // 0x88 PushV
	var_664_bool = 0; // 0x89 MovB
	var_665_bool = GlobalVars[0]; // 0x8a PushGE
	if(var_665_bool == 0) goto Label_143; // 0x8b JumpB
	var_666_int = var_3_int; // 0x8c PushT
	if(var_666_int == 0) goto Label_143; // 0x8d JumpB
	var_664_bool = 1; // 0x8e MovB
	
Label_143:
	if(var_664_bool == 0) goto Label_150; // 0x8f JumpB
	var_667_string = "all"; // 0x90 PushS
	var_668_string = "attack_off"; // 0x91 PushS
	PlayAnimation(var_667_string, var_668_string); // 0x92 Func
	WaitForAnimEnd(); // 0x94 Func
	
Label_150:
	var_669_bool = GlobalVars[0]; // 0x96 PushGE
	var_185_bool = var_669_bool; // 0x97 Mov
	return 0; // 0x99 Return
}


func_1664(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x680 PushV
	var_35_bool = 0; // 0x681 PushV
	var_35_bool = 0; // 0x682 MovB
	var_36_bool = 0; // 0x683 PushV
	var_36_bool = 0; // 0x684 MovB
	var_37_object = var_14_object; // 0x685 Push
	if(var_37_object == 0) goto Label_1675; // 0x686 JumpB
	var_38_int = 4; // 0x687 PushI
	var_39_bool = var_15_int != var_38_int; // 0x688 Neq
	if(var_39_bool == 0) goto Label_1675; // 0x689 JumpB
	var_36_bool = 1; // 0x68a MovB
	
Label_1675:
	if(var_36_bool == 0) goto Label_1680; // 0x68b JumpB
	var_40_int = 5; // 0x68c PushI
	var_41_bool = var_15_int != var_40_int; // 0x68d Neq
	if(var_41_bool == 0) goto Label_1680; // 0x68e JumpB
	var_35_bool = 1; // 0x68f MovB
	
Label_1680:
	if(var_35_bool == 0) goto Label_1727; // 0x690 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x691 PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x692 PushV
	var_45_object = var_14_object; // 0x693 Mov
	func_1378(var_45_object); // 0x694 NEW_2
	var_43_cvector = var_44_cvector; // 0x695 Mov
	func_1826(var_42_cvector, var_43_cvector); // 0x697 NEW_2
	var_26_cvector = var_42_cvector; // 0x698 Mov
	CreateVectorVector(var_27_object); // 0x69a Func
	var_28_int = 1; // 0x69c MovI
	
Label_1693:
	var_55_string = "hit"; // 0x69d PushS
	var_56_int = var_55_string + var_28_int; // 0x69e Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x69f Func
	var_57_bool = var_29_bool == 0; // 0x6a1 Not
	if(var_57_bool == 0) goto Label_1700; // 0x6a2 JumpB
	goto Label_1709; // 0x6a3 Jump
	
Label_1709:
	size(var_32_int); // 0x6ad ObjFunc
	var_58_int = var_32_int; // 0x6af Push
	if(var_58_int == 0) goto Label_1726; // 0x6b0 JumpB
	irand(var_33_int, var_32_int); // 0x6b1 Func
	get(var_34_cvector, var_33_int); // 0x6b3 ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x6b5 PushV
	var_59_object = var_14_object; // 0x6b6 Mov
	var_60_int = var_15_int; // 0x6b7 Mov
	var_61_float = var_16_float; // 0x6b8 Mov
	var_62_cvector = var_34_cvector; // 0x6b9 Mov
	var_63_cvector = -var_26_cvector; // 0x6ba Neg2
	func_1732(var_61_float, var_62_cvector, var_63_cvector); // 0x6bb NEW_2
	return 18; // 0x6bd Return
	
Label_1726:
	var_27_object = 0; // 0x6be SetNull
	
Label_1727:
	var_104_object = Obj(); // 0x6bf PushV
	var_104_object = var_14_object; // 0x6c0 Mov
	func_1620(var_104_object); // 0x6c1 NEW_2
	return 18; // 0x6c3 Return
	
Label_1700:
	var_105_int = var_31_cvector | var_26_cvector; // 0x6a4 Or
	var_106_float = 0.70711; // 0x6a5 PushF
	var_107_bool = var_105_int >= var_106_float; // 0x6a6 GE
	if(var_107_bool == 0) goto Label_1706; // 0x6a7 JumpB
	add(var_30_cvector); // 0x6a8 ObjFunc
	
Label_1706:
	var_108_int = 1; // 0x6aa PushI
	var_28_int = var_28_int + var_108_int; // 0x6ab Add2
	goto Label_1693; // 0x6ac Jump
}


func_643(var_3_int)
{
	var_3_int = 1; // 0x283 TMovB
	return 0; // 0x284 Return
}


func_645(var_632_bool, var_633_float)
{
	var_634_float = 0; var_635_bool = 0; var_636_float = 0; var_637_bool = 0; // 0x285 PushV
	rand(var_636_float); // 0x286 Func
	var_638_bool = var_636_float < var_633_float; // 0x288 LT
	if(var_638_bool == 0) goto Label_665; // 0x289 JumpB
	
Label_650:
	IsAnimationPlaying(var_637_bool); // 0x28a Func
	var_639_bool = var_637_bool == 0; // 0x28c Not
	if(var_639_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_664; // 0x28e Jump
	
Label_664:
	goto Label_670; // 0x298 Jump
	
Label_670:
	var_632_bool = 0; // 0x29e MovB
	return 4; // 0x29f Return
	
Label_655:
	var_640_bool = 0; // 0x28f PushV
	func_743(var_640_bool); // 0x290 NEW_2
	if(var_640_bool == 0) goto Label_661; // 0x292 JumpB
	var_632_bool = 1; // 0x293 MovB
	return 4; // 0x294 Return
	
Label_661:
	sync(); // 0x295 Func
	goto Label_650; // 0x297 Jump
	
Label_665:
	WaitForAnimEnd(); // 0x299 Func
	func_847(var_637_bool); // 0x29c NEW_2
}


func_1162()
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x48a PushV
	var_12_string = "player"; // 0x48b PushS
	FindActor(var_11_object, var_12_string); // 0x48c Func
	var_13_bool = var_11_object == 0; // 0x48e Not
	if(var_13_bool == 0) goto Label_1169; // 0x48f JumpB
	return 2; // 0x490 Return
	
Label_1169:
	var_14_bool = 0; var_15_object = Obj(); // 0x491 PushV
	var_15_object = var_11_object; // 0x492 Mov
	func_1179(var_10_object, var_11_object, var_14_bool, var_15_object); // 0x493 NEW_2
	var_678_int = 1; // 0x495 PushI
	Sleep(var_678_int); // 0x496 Func
	goto Label_1169; // 0x498 Jump
}


func_154(var_521_float)
{
	var_521_float = 0.15; // 0x9b MovF
	return 0; // 0x9c Return
}


func_1179(var_14_bool, var_15_object, var_69_bool, var_672_object)
{
	var_16_float = 0; var_17_float = 0; // 0x49b PushV
	var_18_bool = 0; var_19_object = Obj(); // 0x49c PushV
	var_19_object = var_15_object; // 0x49d Mov
	func_1577(var_18_bool, var_19_object); // 0x49e NEW_2
	var_52_bool = var_18_bool == 0; // 0x4a0 Not
	if(var_52_bool == 0) goto Label_1188; // 0x4a1 JumpB
	var_14_bool = 0; // 0x4a2 MovB
	return 2; // 0x4a3 Return
	
Label_1188:
	var_53_float = 0; var_54_object = Obj(); // 0x4a4 PushV
	var_54_object = var_15_object; // 0x4a5 Mov
	func_1385(var_54_object); // 0x4a6 NEW_2
	var_17_float = var_53_float; // 0x4a7 Mov
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_float = 0; // 0x4a9 PushV
	var_62_float = var_17_float; // 0x4aa Mov
	var_63_float = 250000.0; // 0x4ab MovF
	var_64_float = 3240000.0; // 0x4ac MovF
	func_1878(var_61_bool, var_62_float, var_63_float, var_64_float); // 0x4ad NEW_2
	if(var_61_bool == 0) goto Label_1208; // 0x4af JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0x4b0 PushV
	var_68_object = var_15_object; // 0x4b1 Mov
	TaskCall(0); // 0x4b2 TaskCall
	func_0(var_17_float, var_69_bool, var_67_bool, var_68_object); // 0x4b3 NEW_2
	TaskReturn(); // 0x4b4 TaskReturn
	var_14_bool = var_69_bool; // 0x4b5 Mov
	return 2; // 0x4b7 Return
	
Label_1208:
	var_670_bool = 0; var_671_object = Obj(); // 0x4b8 PushV
	var_671_object = var_15_object; // 0x4b9 Mov
	TaskCall(1); // 0x4ba TaskCall
	func_126(var_670_bool, var_671_object); // 0x4bb NEW_2
	TaskReturn(); // 0x4bc TaskReturn
	var_14_bool = var_672_object; // 0x4bd Mov
	return 2; // 0x4bf Return
}


func_157(var_528_int)
{
	var_528_int = 0; // 0x9e MovI
	return 0; // 0x9f Return
}


func_672(var_0_bool, var_416_bool, var_417_float)
{
	var_418_bool = 0; var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_float = 0; var_423_bool = 0; var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_float = 0; // 0x2a0 PushV
	
Label_673:
	IsAnimationPlaying(var_423_bool); // 0x2a1 Func
	var_428_bool = var_423_bool == 0; // 0x2a3 Not
	if(var_428_bool == 0) goto Label_678; // 0x2a4 JumpB
	goto Label_710; // 0x2a5 Jump
	
Label_710:
	func_847(var_427_float); // 0x2c7 NEW_2
	var_416_bool = 0; // 0x2c9 MovB
	return 10; // 0x2ca Return
	
Label_678:
	var_429_bool = 0; // 0x2a6 PushV
	func_743(var_429_bool); // 0x2a7 NEW_2
	if(var_429_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_416_bool = 1; // 0x2aa MovB
	return 10; // 0x2ab Return
	
Label_684:
	var_472_bool = 0; var_473_object = Obj(); // 0x2ac PushV
	var_473_object = var_0_bool; // 0x2ad MovT
	func_1577(var_472_bool, var_473_object); // 0x2ae NEW_2
	var_474_bool = var_472_bool == 0; // 0x2b0 Not
	if(var_474_bool == 0) goto Label_692; // 0x2b1 JumpB
	var_416_bool = 0; // 0x2b2 MovB
	return 10; // 0x2b3 Return
	
Label_692:
	GetPFPosition(var_424_cvector); // 0x2b4 TObjFunc
	GetPFPosition(var_425_cvector); // 0x2b6 Func
	var_426_cvector = var_424_cvector - var_425_cvector; // 0x2b8 Sub2
	var_427_float = var_426_cvector | var_426_cvector; // 0x2b9 Or2
	var_475_float = var_417_float * var_417_float; // 0x2ba Mult
	var_476_bool = var_427_float < var_475_float; // 0x2bb LT
	if(var_476_bool == 0) goto Label_707; // 0x2bc JumpB
	var_477_bool = 0; var_478_float = 0; // 0x2bd PushV
	var_478_float = var_417_float; // 0x2be Mov
	func_506(var_427_float, var_477_bool, var_478_float); // 0x2bf NEW_2
	var_416_bool = 1; // 0x2c1 MovB
	return 10; // 0x2c2 Return
	
Label_707:
	sync(); // 0x2c3 Func
	goto Label_673; // 0x2c5 Jump
}


func_160(var_585_int)
{
	var_585_int = 1; // 0xa0 MovI
	return 0; // 0xa1 Return
}


func_162(var_586_object, var_587_float)
{
	var_588_bool = 0; // 0xa3 PushV
	var_588_bool = 0; // 0xa4 MovB
	var_589_int = 0; // 0xa5 PushI
	var_590_bool = var_587_float > var_589_int; // 0xa6 GT
	if(var_590_bool == 0) goto Label_174; // 0xa7 JumpB
	var_591_bool = 0; var_592_object = Obj(); // 0xa8 PushV
	var_592_object = var_586_object; // 0xa9 Mov
	func_1505(var_591_bool, var_592_object); // 0xaa NEW_2
	if(var_591_bool == 0) goto Label_174; // 0xac JumpB
	var_588_bool = 1; // 0xad MovB
	
Label_174:
	if(var_588_bool == 0) goto Label_181; // 0xae JumpB
	var_608_bool = GlobalVars[0]; // 0xaf PushGE
	var_608_bool = 1; // 0xb0 MovB
	GlobalVars[0] = var_608_bool; // 0xb1 PopGE
	func_643(var_587_float); // 0xb3 NEW_2
	
Label_181:
	return 0; // 0xb5 Return
}


func_1216(var_116_object)
{
	EventDisable(0); // 0x4c1 EventDisable
	var_117_object = Obj(); // 0x4c2 PushV
	var_117_object = var_116_object; // 0x4c3 Mov
	func_1241(var_117_object); // 0x4c4 NEW_2
	var_197_int = 50; // 0x4c6 PushI
	var_198_int = 40; // 0x4c7 PushI
	SetRTEnvelope(var_197_int, var_198_int); // 0x4c8 Func
	EventEnable(0); // 0x4ca EventEnable
	
Label_1227:
	Hold(); // 0x4cb Func
	goto Label_1227; // 0x4cd Jump
}


func_1732(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x6c4 PushV
	GetScene(var_23_object); // 0x6c5 Func
	var_25_string = "scripted"; // 0x6c7 PushS
	var_26_string = "blood_dir.xml"; // 0x6c8 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x6c9 Func
	var_27_object = Obj(); // 0x6cb PushV
	var_27_object = var_16_object; // 0x6cc Mov
	func_1620(var_27_object); // 0x6cd NEW_2
	return 4; // 0x6cf Return
}


func_203(var_0_bool, var_3_int, var_5_float, var_194_object, var_195_bool, var_196_float, var_265_bool, var_357_bool)
{
	var_197_float = 0; var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_bool = 0; var_201_bool = 0; var_202_float = 0; var_203_cvector = CVector(0,0,0); var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_bool = 0; var_207_float = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_bool = 0; var_212_bool = 0; var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_float = 0; // 0xcb PushV
	func_432(var_216_cvector, var_217_bool, var_218_float); // 0xcd NEW_2
	var_5_float = 0; // 0xcf TMovI
	var_241_string = "@GetAttackDistance"; // 0xd0 PushS
	var_242_int = 1; // 0xd1 PushI
	var_243_bool = IsFuncExist(var_194_object, var_241_string, var_242_int); // 0xd2 FuncExist
	if(var_243_bool == 0) goto Label_217; // 0xd3 JumpB
	GetAttackDistance(var_208_float); // 0xd4 ObjFunc
	var_244_int = 50; // 0xd6 PushI
	var_208_float = var_208_float + var_244_int; // 0xd7 Add2
	goto Label_218; // 0xd8 Jump
	
Label_218:
	var_245_int = 150; // 0xda PushI
	var_246_bool = var_208_float >= var_245_int; // 0xdb GE
	if(var_246_bool == 0) goto Label_222; // 0xdc JumpB
	var_208_float = 150; // 0xdd MovI
	
Label_222:
	var_3_int = 0; // 0xde TMovB
	var_0_bool = var_194_object; // 0xdf TMov
	IsPlayerActor(var_0_bool, var_211_bool); // 0xe0 Func
	var_247_bool = var_211_bool; // 0xe2 Push
	if(var_247_bool == 0) goto Label_236; // 0xe3 JumpB
	var_248_string = "attack"; // 0xe4 PushS
	PlayGlobalMusic(var_248_string); // 0xe5 Func
	var_249_object = Obj(); // 0xe7 PushV
	func_1820(var_249_object); // 0xe8 NEW_2
	SendPlayerEnemy(var_194_object, var_249_object); // 0xea Func
	
Label_236:
	var_250_bool = var_195_bool; // 0xec Push
	if(var_250_bool == 0) goto Label_240; // 0xed JumpB
	var_212_bool = 0; // 0xee MovB
	goto Label_241; // 0xef Jump
	
Label_241:
	var_251_float = 300.0; // 0xf1 PushF
	var_213_float = var_251_float + var_208_float; // 0xf2 Add2
	
Label_243:
	var_252_bool = 0; // 0xf3 PushV
	var_252_bool = 0; // 0xf4 MovB
	var_253_bool = 0; var_254_object = Obj(); // 0xf5 PushV
	var_254_object = var_0_bool; // 0xf6 MovT
	func_1577(var_253_bool, var_254_object); // 0xf7 NEW_2
	if(var_253_bool == 0) goto Label_253; // 0xf9 JumpB
	var_255_bool = var_3_int == 0; // 0xfa Not
	if(var_255_bool == 0) goto Label_253; // 0xfb JumpB
	var_252_bool = 1; // 0xfc MovB
	
Label_253:
	if(var_252_bool == 0) goto Label_415; // 0xfd JumpB
	func_847(var_218_float); // 0xff NEW_2
	GetPFPosition(var_209_cvector); // 0x101 TObjFunc
	GetPFPosition(var_210_cvector); // 0x103 Func
	var_214_cvector = var_209_cvector - var_210_cvector; // 0x105 Sub2
	var_215_float = var_214_cvector | var_214_cvector; // 0x106 Or2
	var_257_float = var_213_float * var_213_float; // 0x107 Mult
	var_258_bool = var_215_float >= var_257_float; // 0x108 GE
	if(var_258_bool == 0) goto Label_281; // 0x109 JumpB
	var_259_bool = 0; var_260_object = Obj(); var_261_float = 0; var_262_float = 0; var_263_bool = 0; var_264_bool = 0; // 0x10a PushV
	var_260_object = var_0_bool; // 0x10b MovT
	var_261_float = var_208_float; // 0x10c Mov
	var_262_float = 3000.0; // 0x10d MovF
	var_263_bool = 1; // 0x10e MovB
	var_264_bool = 0; // 0x10f MovB
	TaskCall(2); // 0x110 TaskCall
	func_887(var_267_bool, var_259_bool, var_260_object, var_261_float, var_262_float, var_263_bool, var_264_bool); // 0x111 NEW_2
	TaskReturn(); // 0x112 TaskReturn
	var_342_bool = var_265_bool == 0; // 0x114 Not
	if(var_342_bool == 0) goto Label_279; // 0x115 JumpB
	goto Label_415; // 0x116 Jump
	
Label_415:
	WaitForAnimEnd(); // 0x19f Func
	var_343_int = var_3_int; // 0x1a1 PushT
	if(var_343_int == 0) goto Label_420; // 0x1a2 JumpB
	return 22; // 0x1a3 Return
	
Label_420:
	var_344_string = "all"; // 0x1a4 PushS
	var_345_string = "attack_off"; // 0x1a5 PushS
	PlayAnimation(var_344_string, var_345_string); // 0x1a6 Func
	WaitForAnimEnd(); // 0x1a8 Func
	var_346_bool = var_211_bool; // 0x1aa Push
	if(var_346_bool == 0) goto Label_431; // 0x1ab JumpB
	var_347_float = 2.0; // 0x1ac PushF
	Sleep(var_347_float); // 0x1ad Func
	
Label_431:
	return 22; // 0x1af Return
	
Label_279:
	var_212_bool = 0; // 0x117 MovB
	goto Label_414; // 0x118 Jump
	
Label_414:
	goto Label_243; // 0x19e Jump
	
Label_281:
	var_348_float = var_196_float * var_196_float; // 0x119 Mult
	var_349_bool = var_215_float >= var_348_float; // 0x11a GE
	if(var_349_bool == 0) goto Label_406; // 0x11b JumpB
	GetPFPosition(var_216_cvector); // 0x11c TObjFunc
	CanReachByPF(var_217_bool, var_216_cvector); // 0x11e Func
	var_350_bool = var_217_bool == 0; // 0x120 Not
	if(var_350_bool == 0) goto Label_305; // 0x121 JumpB
	var_351_bool = 0; var_352_object = Obj(); var_353_float = 0; var_354_float = 0; var_355_bool = 0; var_356_bool = 0; // 0x122 PushV
	var_352_object = var_0_bool; // 0x123 MovT
	var_353_float = var_208_float; // 0x124 Mov
	var_354_float = 3000.0; // 0x125 MovF
	var_355_bool = 1; // 0x126 MovB
	var_356_bool = 0; // 0x127 MovB
	TaskCall(2); // 0x128 TaskCall
	func_887(var_359_bool, var_351_bool, var_352_object, var_353_float, var_354_float, var_355_bool, var_356_bool); // 0x129 NEW_2
	TaskReturn(); // 0x12a TaskReturn
	var_360_bool = var_357_bool == 0; // 0x12c Not
	if(var_360_bool == 0) goto Label_303; // 0x12d JumpB
	goto Label_415; // 0x12e Jump
	
Label_303:
	var_212_bool = 0; // 0x12f MovB
	goto Label_243; // 0x130 Jump
	
Label_305:
	var_361_bool = var_212_bool == 0; // 0x131 Not
	if(var_361_bool == 0) goto Label_330; // 0x132 JumpB
	var_362_object = Obj(); // 0x133 PushV
	var_362_object = var_0_bool; // 0x134 MovT
	func_1746(); // 0x135 NEW_2
	var_371_string = "all"; // 0x137 PushS
	var_372_string = "attack_on"; // 0x138 PushS
	PlayAnimation(var_371_string, var_372_string); // 0x139 Func
	WaitForAnimEnd(); // 0x13b Func
	func_847(var_218_float); // 0x13e NEW_2
	StopAsync(); // 0x140 Func
	var_212_bool = 1; // 0x142 MovB
	var_373_bool = 0; var_374_object = Obj(); // 0x143 PushV
	var_374_object = var_0_bool; // 0x144 MovT
	func_1577(var_373_bool, var_374_object); // 0x145 NEW_2
	var_375_bool = var_373_bool == 0; // 0x147 Not
	if(var_375_bool == 0) goto Label_330; // 0x148 JumpB
	goto Label_415; // 0x149 Jump
	
Label_330:
	rand(var_218_float); // 0x14a Func
	var_376_bool = 0; // 0x14c PushV
	var_376_bool = 1; // 0x14d MovB
	var_377_float = 0.2; // 0x14e PushF
	var_378_bool = var_218_float < var_377_float; // 0x14f LT
	if(var_378_bool == 0) goto Label_342; // 0x150 JumpB
	var_379_bool = 0; // 0x151 PushV
	func_804(var_376_bool, var_379_bool); // 0x152 NEW_2
	if(var_379_bool == 0) goto Label_342; // 0x154 JumpB
	var_376_bool = 0; // 0x155 MovB
	
Label_342:
	if(var_376_bool == 0) goto Label_359; // 0x156 JumpB
	Face(var_0_bool); // 0x157 Func
	func_852(); // 0x15a NEW_2
	var_414_string = "all"; // 0x15c PushS
	var_415_string = "attack_stay"; // 0x15d PushS
	PlayAnimation(var_414_string, var_415_string); // 0x15e Func
	var_416_bool = 0; var_417_float = 0; // 0x160 PushV
	var_417_float = var_196_float; // 0x161 Mov
	func_672(var_218_float, var_416_bool, var_417_float); // 0x162 NEW_2
	StopAsync(); // 0x164 Func
	goto Label_405; // 0x166 Jump
	
Label_405:
	goto Label_414; // 0x195 Jump
	
Label_359:
	Face(var_0_bool); // 0x167 Func
	var_648_string = "all"; // 0x169 PushS
	var_649_string = "fjump"; // 0x16a PushS
	PlayAnimation(var_648_string, var_649_string); // 0x16b Func
	WaitForAnimEnd(); // 0x16d Func
	func_847(var_218_float); // 0x170 NEW_2
	var_650_cvector = CVector(0.0, 0.0, 0.0); // 0x172 PushVec
	SetSpeed(var_650_cvector); // 0x173 Func
	Stop(); // 0x175 Func
	StopAsync(); // 0x177 Func
	var_651_bool = 0; // 0x179 PushV
	func_804(var_218_float, var_651_bool); // 0x17a NEW_2
	var_652_bool = var_651_bool == 0; // 0x17c Not
	if(var_652_bool == 0) goto Label_405; // 0x17d JumpB
	var_653_bool = 0; var_654_object = Obj(); // 0x17e PushV
	var_654_object = var_0_bool; // 0x17f MovT
	func_1577(var_653_bool, var_654_object); // 0x180 NEW_2
	var_655_bool = var_653_bool == 0; // 0x182 Not
	if(var_655_bool == 0) goto Label_389; // 0x183 JumpB
	goto Label_415; // 0x184 Jump
	
Label_389:
	GetPFPosition(var_209_cvector); // 0x185 TObjFunc
	GetPFPosition(var_210_cvector); // 0x187 Func
	var_214_cvector = var_209_cvector - var_210_cvector; // 0x189 Sub2
	var_215_float = var_214_cvector | var_214_cvector; // 0x18a Or2
	var_656_float = var_196_float * var_196_float; // 0x18b Mult
	var_657_bool = var_215_float < var_656_float; // 0x18c LT
	if(var_657_bool == 0) goto Label_405; // 0x18d JumpB
	var_658_bool = 0; var_659_float = 0; // 0x18e PushV
	var_659_float = var_196_float; // 0x18f Mov
	func_506(var_218_float, var_658_bool, var_659_float); // 0x190 NEW_2
	var_660_bool = var_658_bool == 0; // 0x192 Not
	if(var_660_bool == 0) goto Label_405; // 0x193 JumpB
	goto Label_415; // 0x194 Jump
	
Label_406:
	var_661_bool = 0; var_662_float = 0; // 0x196 PushV
	var_662_float = var_196_float; // 0x197 Mov
	func_506(var_218_float, var_661_bool, var_662_float); // 0x198 NEW_2
	var_663_bool = var_661_bool == 0; // 0x19a Not
	if(var_663_bool == 0) goto Label_413; // 0x19b JumpB
	goto Label_415; // 0x19c Jump
	
Label_413:
	var_212_bool = 1; // 0x19d MovB
	
Label_240:
	var_212_bool = 1; // 0xf0 MovB
	
Label_217:
	var_208_float = var_196_float; // 0xd9 Mov
}


func_715(var_0_bool, var_431_bool)
{
	var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0; var_436_float = 0; var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0; var_441_float = 0; // 0x2cb PushV
	var_442_bool = 0; var_443_object = Obj(); // 0x2cc PushV
	var_443_object = var_0_bool; // 0x2cd MovT
	func_1577(var_442_bool, var_443_object); // 0x2ce NEW_2
	var_444_bool = var_442_bool == 0; // 0x2d0 Not
	if(var_444_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_431_bool = 0; // 0x2d2 MovB
	return 10; // 0x2d3 Return
	
Label_724:
	var_445_bool = 0; // 0x2d4 PushV
	func_804(var_441_float, var_445_bool); // 0x2d5 NEW_2
	if(var_445_bool == 0) goto Label_741; // 0x2d7 JumpB
	GetPFPosition(var_437_cvector); // 0x2d8 TObjFunc
	GetPFPosition(var_438_cvector); // 0x2da Func
	var_439_cvector = var_437_cvector - var_438_cvector; // 0x2dc Sub2
	var_440_float = var_439_cvector | var_439_cvector; // 0x2dd Or2
	GetAttackDistance(var_441_float); // 0x2de TObjFunc
	var_446_int = 50; // 0x2e0 PushI
	var_441_float = var_441_float + var_446_int; // 0x2e1 Add2
	var_447_float = var_441_float * var_441_float; // 0x2e2 Mult
	var_431_bool = var_440_float <= var_447_float; // 0x2e3 LE2
	return 10; // 0x2e4 Return
	
Label_741:
	var_431_bool = 0; // 0x2e5 MovB
	return 10; // 0x2e6 Return
}


func_1746()
{
	var_363_cvector = CVector(0,0,0); var_364_cvector = CVector(0,0,0); var_365_cvector = CVector(0,0,0); var_366_cvector = CVector(0,0,0); var_367_cvector = CVector(0,0,0); var_368_cvector = CVector(0,0,0); // 0x6d2 PushV
	GetPosition(var_366_cvector); // 0x6d3 ObjFunc
	GetPosition(var_367_cvector); // 0x6d5 Func
	var_368_cvector = var_366_cvector - var_367_cvector; // 0x6d7 Sub2
	var_369_float = GetByIndex(var_368_cvector, 0); // 0x6d8 PushE
	var_370_float = GetByIndex(var_368_cvector, 2); // 0x6d9 PushE
	RotateAsync(var_369_float, var_370_float); // 0x6da Func
	return 6; // 0x6dc Return
}


func_1241(var_117_object)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_string = ""; var_123_object = Obj(); var_124_bool = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_string = ""; var_133_object = Obj(); var_134_bool = 0; var_135_bool = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); // 0x4d9 PushV
	var_138_bool = var_117_object == 0; // 0x4da NullEq
	if(var_138_bool == 0) goto Label_1249; // 0x4db JumpB
	var_139_string = ""; // 0x4dc PushV
	var_139_string = "fdie"; // 0x4dd MovS
	func_1332(var_139_string); // 0x4de NEW_2
	goto Label_1331; // 0x4e0 Jump
	
Label_1331:
	return 20; // 0x533 Return
	
Label_1249:
	GetPosition(var_128_cvector); // 0x4e1 ObjFunc
	GetPosition(var_129_cvector); // 0x4e3 Func
	GetDirection(var_130_cvector); // 0x4e5 Func
	var_131_cvector = var_129_cvector - var_128_cvector; // 0x4e7 Sub2
	var_171_float = GetByIndex(var_131_cvector, 0); // 0x4e8 PushE
	var_172_float = GetByIndex(var_130_cvector, 0); // 0x4e9 PushE
	var_173_float = var_171_float * var_172_float; // 0x4ea Mult
	var_174_float = GetByIndex(var_131_cvector, 2); // 0x4eb PushE
	var_175_float = GetByIndex(var_130_cvector, 2); // 0x4ec PushE
	var_176_float = var_174_float * var_175_float; // 0x4ed Mult
	var_177_int = var_173_float + var_176_float; // 0x4ee Add
	var_178_int = 0; // 0x4ef PushI
	var_179_bool = var_177_int >= var_178_int; // 0x4f0 GE
	if(var_179_bool == 0) goto Label_1268; // 0x4f1 JumpB
	var_132_string = "fdie"; // 0x4f2 MovS
	goto Label_1269; // 0x4f3 Jump
	
Label_1269:
	RemoveRTEnvelope(); // 0x4f5 Func
	SetDeathState(); // 0x4f7 Func
	Stop(); // 0x4f9 Func
	StopAsync(); // 0x4fb Func
	var_133_object = var_117_object; // 0x4fd Mov
	var_180_string = "GetScriptProperty"; // 0x4fe PushS
	var_181_int = 2; // 0x4ff PushI
	var_182_bool = IsFuncExist(var_117_object, var_180_string, var_181_int); // 0x500 FuncExist
	if(var_182_bool == 0) goto Label_1293; // 0x501 JumpB
	var_183_string = "Owner"; // 0x502 PushS
	HasScriptProperty(var_134_bool, var_183_string); // 0x503 ObjFunc
	var_184_bool = var_134_bool; // 0x505 Push
	if(var_184_bool == 0) goto Label_1293; // 0x506 JumpB
	var_185_string = "Owner"; // 0x507 PushS
	GetScriptProperty(var_133_object, var_185_string); // 0x508 ObjFunc
	var_186_bool = var_133_object == 0; // 0x50a NullEq
	if(var_186_bool == 0) goto Label_1293; // 0x50b JumpB
	var_133_object = var_117_object; // 0x50c Mov
	
Label_1293:
	var_187_string = "@GetEyesHeight"; // 0x50d PushS
	var_188_int = 1; // 0x50e PushI
	var_189_bool = IsFuncExist(var_133_object, var_187_string, var_188_int); // 0x50f FuncExist
	if(var_189_bool == 0) goto Label_1308; // 0x510 JumpB
	GetEyesHeight(var_136_float); // 0x511 ObjFunc
	var_137_cvector = CVector(0.0, 0.0, 0.0); // 0x513 MovV
	var_190_float = GetByIndex(var_137_cvector, 1); // 0x514 PushE
	var_190_float = var_136_float; // 0x515 Mov
	SetByIndex(var_137_cvector, 1) = var_190_float; // 0x516 PopE
	var_191_string = "head"; // 0x517 PushS
	LookAsync(var_117_object, var_191_string, var_137_cvector); // 0x518 Func
	var_135_bool = 1; // 0x51a MovB
	goto Label_1309; // 0x51b Jump
	
Label_1309:
	var_192_string = ""; // 0x51d PushV
	var_192_string = var_132_string; // 0x51e Mov
	func_1779(var_192_string); // 0x51f NEW_2
	var_193_string = "all"; // 0x521 PushS
	PlayAnimation(var_193_string, var_132_string); // 0x522 Func
	WaitForAnimEnd(); // 0x524 Func
	var_194_bool = var_135_bool; // 0x526 Push
	if(var_194_bool == 0) goto Label_1325; // 0x527 JumpB
	StopAsync(); // 0x528 Func
	var_195_string = "head"; // 0x52a PushS
	UnlookAsync(var_195_string); // 0x52b Func
	
Label_1325:
	var_196_string = "all"; // 0x52d PushS
	LockAnimationEnd(var_196_string, var_132_string); // 0x52e Func
	RemoveEnvelope(); // 0x530 Func
	var_133_object = 0; // 0x532 SetNull
	
Label_1308:
	var_135_bool = 0; // 0x51c MovB
	
Label_1268:
	var_132_string = "bdie"; // 0x4f4 MovS
}


func_1757(var_276_object)
{
	var_277_float = 0; var_278_cvector = CVector(0,0,0); var_279_float = 0; var_280_cvector = CVector(0,0,0); // 0x6dd PushV
	GetEyesHeight(var_279_float); // 0x6de ObjFunc
	var_280_cvector = CVector(0.0, 0.0, 0.0); // 0x6e0 MovV
	var_281_float = GetByIndex(var_280_cvector, 1); // 0x6e1 PushE
	var_281_float = var_279_float; // 0x6e2 Mov
	SetByIndex(var_280_cvector, 1) = var_281_float; // 0x6e3 PopE
	var_282_string = "head"; // 0x6e4 PushS
	LookAsync(var_276_object, var_282_string, var_280_cvector); // 0x6e5 Func
	return 4; // 0x6e7 Return
}


func_743(var_429_bool)
{
	var_430_bool = 0; // 0x2e7 PushV
	var_430_bool = 0; // 0x2e8 MovB
	var_431_bool = 0; // 0x2e9 PushV
	func_715(var_430_bool, var_431_bool); // 0x2ea NEW_2
	if(var_431_bool == 0) goto Label_754; // 0x2ec JumpB
	var_448_bool = 0; // 0x2ed PushV
	func_759(var_429_bool, var_430_bool, var_448_bool); // 0x2ee NEW_2
	if(var_448_bool == 0) goto Label_754; // 0x2f0 JumpB
	var_430_bool = 1; // 0x2f1 MovB
	
Label_754:
	if(var_430_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_429_bool = 1; // 0x2f3 MovB
	return 0; // 0x2f4 Return
	
Label_757:
	var_429_bool = 0; // 0x2f5 MovB
	return 0; // 0x2f6 Return
}


func_1768(var_40_string, var_41_int, var_42_int)
{
	var_43_bool = 0; var_44_bool = 0; // 0x6e8 PushV
	var_45_bool = 0; var_46_int = 0; var_47_int = 0; // 0x6e9 PushV
	var_46_int = var_41_int; // 0x6ea Mov
	var_47_int = var_42_int; // 0x6eb Mov
	func_1886(var_45_bool, var_46_int, var_47_int); // 0x6ec NEW_2
	if(var_45_bool == 0) goto Label_1778; // 0x6ee JumpB
	var_50_int = 0; // 0x6ef PushI
	AddItem(var_44_bool, var_40_string, var_50_int); // 0x6f0 Func
	
Label_1778:
	return 2; // 0x6f2 Return
}


func_1779(var_140_string)
{
	var_141_bool = 0; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_bool = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_bool = 0; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_bool = 0; var_154_float = 0; var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); // 0x6f3 PushV
	IsExisting3DSound(var_149_bool, var_140_string); // 0x6f4 Func
	var_157_bool = var_149_bool == 0; // 0x6f6 Not
	if(var_157_bool == 0) goto Label_1804; // 0x6f7 JumpB
	var_150_int = 0; // 0x6f8 MovI
	
Label_1785:
	var_158_int = 1; // 0x6f9 PushI
	var_159_int = var_150_int + var_158_int; // 0x6fa Add
	var_160_int = var_140_string + var_159_int; // 0x6fb Add
	IsExisting3DSound(var_151_bool, var_160_int); // 0x6fc Func
	var_161_bool = var_151_bool == 0; // 0x6fe Not
	if(var_161_bool == 0) goto Label_1793; // 0x6ff JumpB
	goto Label_1796; // 0x700 Jump
	
Label_1796:
	var_162_bool = var_150_int == 0; // 0x704 Not
	if(var_162_bool == 0) goto Label_1799; // 0x705 JumpB
	return 16; // 0x706 Return
	
Label_1799:
	irand(var_152_int, var_150_int); // 0x707 Func
	var_163_int = 1; // 0x709 PushI
	var_164_int = var_152_int + var_163_int; // 0x70a Add
	var_140_string = var_140_string + var_164_int; // 0x70b Add2
	
Label_1804:
	Is3DSoundLoaded(var_153_bool, var_140_string); // 0x70c Func
	var_165_bool = var_153_bool; // 0x70e Push
	if(var_165_bool == 0) goto Label_1819; // 0x70f JumpB
	GetEyesHeight(var_154_float); // 0x710 Func
	GetDirection(var_155_cvector); // 0x712 Func
	var_166_int = 50; // 0x714 PushI
	var_156_cvector = var_155_cvector * var_166_int; // 0x715 Mult2
	var_167_float = GetByIndex(var_156_cvector, 1); // 0x716 PushE
	var_167_float = var_167_float + var_154_float; // 0x717 Add2
	SetByIndex(var_156_cvector, 1) = var_167_float; // 0x718 PopE
	PlayGlobalSound(var_140_string, var_156_cvector); // 0x719 Func
	
Label_1819:
	return 16; // 0x71b Return
	
Label_1793:
	var_168_int = 1; // 0x701 PushI
	var_150_int = var_150_int + var_168_int; // 0x702 Add2
	goto Label_1785; // 0x703 Jump
}


func_759(var_0_bool, var_4_bool, var_448_bool)
{
	var_449_object = Obj(); var_450_bool = 0; var_451_float = 0; var_452_cvector = CVector(0,0,0); var_453_cvector = CVector(0,0,0); var_454_object = Obj(); var_455_bool = 0; var_456_float = 0; var_457_cvector = CVector(0,0,0); var_458_cvector = CVector(0,0,0); // 0x2f7 PushV
	GetScene(var_454_object); // 0x2f8 Func
	var_455_bool = 0; // 0x2fa MovB
	
Label_763:
	var_459_cvector = CVector(0,0,0); var_460_object = Obj(); // 0x2fb PushV
	var_460_object = var_0_bool; // 0x2fc MovT
	func_1378(var_460_object); // 0x2fd NEW_2
	var_465_int = -var_459_cvector; // 0x2ff Neg
	FindDirLength(var_456_float, var_465_int, var_456_float); // 0x300 Func
	var_466_bool = var_456_float < var_4_bool; // 0x302 LT
	if(var_466_bool == 0) goto Label_773; // 0x303 JumpB
	goto Label_801; // 0x304 Jump
	
Label_801:
	var_448_bool = var_455_bool; // 0x321 Mov
	return 10; // 0x322 Return
	
Label_773:
	Face(var_0_bool); // 0x305 Func
	var_467_string = "all"; // 0x307 PushS
	var_468_string = "bjump"; // 0x308 PushS
	PlayAnimation(var_467_string, var_468_string); // 0x309 Func
	GetPFPosition(var_457_cvector); // 0x30b TObjFunc
	GetPFPosition(var_458_cvector); // 0x30d Func
	WaitForAnimEnd(); // 0x30f Func
	func_847(var_458_cvector); // 0x312 NEW_2
	StopAsync(); // 0x314 Func
	var_469_cvector = CVector(0.0, 0.0, 0.0); // 0x316 PushVec
	SetSpeed(var_469_cvector); // 0x317 Func
	var_455_bool = 1; // 0x319 MovB
	var_470_bool = 0; // 0x31a PushV
	func_715(var_458_cvector, var_470_bool); // 0x31b NEW_2
	var_471_bool = var_470_bool == 0; // 0x31d Not
	if(var_471_bool == 0) goto Label_800; // 0x31e JumpB
	goto Label_801; // 0x31f Jump
	
Label_800:
	goto Label_763; // 0x320 Jump
}


func_1820(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x71c PushV
	self(var_12_object); // 0x71d Func
	var_10_object = var_12_object; // 0x71f Mov
	return 2; // 0x720 Return
}


func_1826(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x722 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x723 Or
	var_51_float = sqrt(var_52_int); // 0x724 Sqrt2
	var_53_float = 0.0; // 0x725 PushF
	var_54_bool = var_51_float < var_53_float; // 0x726 LT
	if(var_54_bool == 0) goto Label_1834; // 0x727 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x728 MovV
	return 2; // 0x729 Return
	
Label_1834:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x72a Div2
	return 2; // 0x72b Return
}


func_804(var_0_bool, var_379_bool)
{
	var_380_bool = 0; var_381_bool = 0; // 0x324 PushV
	var_382_string = "IsAttacking"; // 0x325 PushS
	var_383_int = 1; // 0x326 PushI
	var_384_bool = IsFuncExist(var_0_bool, var_382_string, var_383_int); // 0x327 FuncExist
	if(var_384_bool == 0) goto Label_813; // 0x328 JumpB
	IsAttacking(var_381_bool); // 0x329 TObjFunc
	var_379_bool = var_381_bool; // 0x32b Mov
	return 2; // 0x32c Return
	
Label_813:
	var_379_bool = 0; // 0x32d MovB
	return 2; // 0x32e Return
}


func_1836(var_562_float, var_563_float, var_564_float)
{
	var_567_bool = var_563_float < var_564_float; // 0x72d LT
	if(var_567_bool == 0) goto Label_1841; // 0x72e JumpB
	var_562_float = var_563_float; // 0x72f Mov
	goto Label_1842; // 0x730 Jump
	
Label_1842:
	return 0; // 0x732 Return
	
Label_1841:
	var_562_float = var_564_float; // 0x731 Mov
}


func_815(var_2_int, var_5_float)
{
	var_492_float = 0; var_493_int = 0; var_494_float = 0; var_495_int = 0; // 0x32f PushV
	var_496_bool = var_2_int == 0; // 0x330 Not
	if(var_496_bool == 0) goto Label_819; // 0x331 JumpB
	return 4; // 0x332 Return
	
Label_819:
	var_497_float = var_5_float; // 0x333 PushT
	if(var_497_float == 0) goto Label_827; // 0x334 JumpB
	var_498_int = -1; // 0x335 PushI
	var_5_float = var_5_float + var_498_int; // 0x336 Add2
	var_499_int = 0; // 0x337 PushI
	var_500_bool = var_5_float > var_499_int; // 0x338 GT
	if(var_500_bool == 0) goto Label_827; // 0x339 JumpB
	return 4; // 0x33a Return
	
Label_827:
	rand(var_494_float); // 0x33b Func
	var_501_float = 0; // 0x33d PushV
	func_861(var_501_float); // 0x33e NEW_2
	var_502_bool = var_494_float < var_501_float; // 0x340 LT
	if(var_502_bool == 0) goto Label_846; // 0x341 JumpB
	irand(var_495_int, var_494_float); // 0x342 Func
	var_503_int = 1; // 0x344 PushI
	var_495_int = var_495_int + var_503_int; // 0x345 Add2
	var_504_string = "attack"; // 0x346 PushS
	var_505_int = var_504_string + var_495_int; // 0x347 Add
	Speak(var_505_int); // 0x348 Func
	var_506_int = 0; // 0x34a PushV
	func_859(var_506_int); // 0x34b NEW_2
	var_5_float = var_506_int; // 0x34c TMov
	
Label_846:
	return 4; // 0x34e Return
}


func_1843(var_149_float, var_150_float, var_151_float, var_152_float)
{
	var_153_float = var_151_float * var_151_float; // 0x734 Mult
	var_154_int = 4; // 0x735 PushI
	var_155_float = var_154_int * var_150_float; // 0x736 Mult
	var_156_float = var_155_float * var_152_float; // 0x737 Mult
	var_149_float = var_153_float - var_156_float; // 0x738 Sub2
	return 0; // 0x739 Return
}


func_1332(var_139_string)
{
	RemoveRTEnvelope(); // 0x535 Func
	SetDeathState(); // 0x537 Func
	Stop(); // 0x539 Func
	StopAsync(); // 0x53b Func
	StopSecondaryAnimation(); // 0x53d Func
	var_140_string = ""; // 0x53f PushV
	var_140_string = var_139_string; // 0x540 Mov
	func_1779(var_140_string); // 0x541 NEW_2
	var_169_string = "all"; // 0x543 PushS
	PlayAnimation(var_169_string, var_139_string); // 0x544 Func
	WaitForAnimEnd(); // 0x546 Func
	var_170_string = "all"; // 0x548 PushS
	LockAnimationEnd(var_170_string, var_139_string); // 0x549 Func
	RemoveEnvelope(); // 0x54b Func
	return 0; // 0x54d Return
}


func_1850(var_163_float, var_164_float, var_165_float, var_167_float)
{
	var_168_float = 0; var_169_float = 0; // 0x73a PushV
	var_170_int = -var_165_float; // 0x73b Neg
	var_171_int = var_170_int - var_167_float; // 0x73c Sub
	var_172_int = 2; // 0x73d PushI
	var_173_float = var_172_int * var_164_float; // 0x73e Mult
	var_169_float = var_171_int / var_171_int; // 0x73f Div2
	var_174_int = 0; // 0x740 PushI
	var_175_bool = var_169_float > var_174_int; // 0x741 GT
	if(var_175_bool == 0) goto Label_1861; // 0x742 JumpB
	var_163_float = var_169_float; // 0x743 Mov
	return 2; // 0x744 Return
	
Label_1861:
	var_176_int = -var_165_float; // 0x745 Neg
	var_177_int = var_176_int + var_167_float; // 0x746 Add
	var_178_int = 2; // 0x747 PushI
	var_179_float = var_178_int * var_164_float; // 0x748 Mult
	var_163_float = var_177_int / var_177_int; // 0x749 Div2
	return 2; // 0x74a Return
}


func_1867(var_87_float, var_88_float, var_89_float, var_90_float)
{
	var_91_bool = var_88_float < var_89_float; // 0x74c LT
	if(var_91_bool == 0) goto Label_1872; // 0x74d JumpB
	var_87_float = var_89_float; // 0x74e Mov
	return 0; // 0x74f Return
	
Label_1872:
	var_92_bool = var_88_float > var_90_float; // 0x750 GT
	if(var_92_bool == 0) goto Label_1876; // 0x751 JumpB
	var_87_float = var_90_float; // 0x752 Mov
	return 0; // 0x753 Return
	
Label_1876:
	var_87_float = var_88_float; // 0x754 Mov
	return 0; // 0x755 Return
}


func_847(var_0_bool)
{
	var_256_object = Obj(); // 0x34f PushV
	var_256_object = var_0_bool; // 0x350 MovT
	func_1946(var_256_object); // 0x351 NEW_2
	return 0; // 0x353 Return
}


func_852()
{
	var_385_string = ""; // 0x354 PushV
	var_385_string = "attack_stay"; // 0x355 MovS
	func_1779(var_385_string); // 0x356 NEW_2
	return 0; // 0x358 Return
}


func_1364(var_552_string, var_553_int)
{
	var_554_int = 2; // 0x555 PushI
	var_555_bool = var_553_int == var_554_int; // 0x556 Eq
	if(var_555_bool == 0) goto Label_1371; // 0x557 JumpB
	var_552_string = "fire"; // 0x558 MovS
	return 0; // 0x559 Return
	
Label_1371:
	var_556_int = 1; // 0x55b PushI
	var_557_bool = var_553_int == var_556_int; // 0x55c Eq
	if(var_557_bool == 0) goto Label_1376; // 0x55d JumpB
	var_552_string = "bullet"; // 0x55e MovS
	return 0; // 0x55f Return
	
Label_1376:
	var_552_string = "phys"; // 0x560 MovS
	return 0; // 0x561 Return
}


func_1878(var_61_bool, var_62_float, var_63_float, var_64_float)
{
	var_61_bool = 0; // 0x757 MovB
	var_65_bool = var_62_float >= var_63_float; // 0x758 GE
	if(var_65_bool == 0) goto Label_1885; // 0x759 JumpB
	var_66_bool = var_62_float <= var_64_float; // 0x75a LE
	if(var_66_bool == 0) goto Label_1885; // 0x75b JumpB
	var_61_bool = 1; // 0x75c MovB
	
Label_1885:
	return 0; // 0x75d Return
}


func_857(var_631_bool)
{
	var_631_bool = 1; // 0x359 MovB
	return 0; // 0x35a Return
}


func_859(var_506_int)
{
	var_506_int = 1; // 0x35b MovI
	return 0; // 0x35c Return
}


func_861(var_501_float)
{
	var_501_float = 0.5; // 0x35d MovF
	return 0; // 0x35e Return
}


func_1886(var_45_bool, var_46_int, var_47_int)
{
	var_48_int = 0; var_49_int = 0; // 0x75e PushV
	irand(var_49_int, var_47_int); // 0x75f Func
	var_45_bool = var_49_int < var_46_int; // 0x761 LT2
	return 2; // 0x762 Return
}


func_1378(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x562 PushV
	GetPosition(var_48_cvector); // 0x563 Func
	GetPosition(var_49_cvector); // 0x565 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x567 Sub2
	return 4; // 0x568 Return
}


func_1891(var_58_bool, var_59_object, var_60_float)
{
	var_61_bool = var_59_object == 0; // 0x764 Not
	if(var_61_bool == 0) goto Label_1896; // 0x765 JumpB
	var_58_bool = 0; // 0x766 MovB
	return 0; // 0x767 Return
	
Label_1896:
	var_62_int = 0; // 0x768 PushI
	var_63_bool = var_60_float > var_62_int; // 0x769 GT
	if(var_63_bool == 0) goto Label_1903; // 0x76a JumpB
	var_64_int = 8; // 0x76b PushI
	SendWorldWndMessage(var_64_int); // 0x76c Func
	goto Label_1912; // 0x76e Jump
	
Label_1912:
	var_65_float = 0; // 0x778 PushV
	var_65_float = var_60_float; // 0x779 Mov
	func_1936(var_65_float); // 0x77a NEW_2
	var_69_bool = 0; var_70_object = Obj(); var_71_string = ""; var_72_float = 0; var_73_float = 0; var_74_float = 0; // 0x77c PushV
	var_70_object = var_59_object; // 0x77d Mov
	var_71_string = "reputation"; // 0x77e MovS
	var_72_float = var_60_float; // 0x77f Mov
	var_73_float = 0; // 0x780 MovI
	var_74_float = 1; // 0x781 MovI
	func_1410(var_69_bool, var_70_object, var_71_string, var_72_float, var_73_float, var_74_float); // 0x782 NEW_2
	var_58_bool = 1; // 0x784 MovB
	return 0; // 0x785 Return
	
Label_1903:
	var_93_int = 0; // 0x76f PushI
	var_94_bool = var_60_float < var_93_int; // 0x770 LT
	if(var_94_bool == 0) goto Label_1910; // 0x771 JumpB
	var_95_int = 9; // 0x772 PushI
	SendWorldWndMessage(var_95_int); // 0x773 Func
	goto Label_1912; // 0x775 Jump
	
Label_1910:
	var_58_bool = 0; // 0x776 MovB
	return 0; // 0x777 Return
}


func_1385(var_53_float)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x569 PushV
	GetPosition(var_58_cvector); // 0x56a Func
	GetPosition(var_59_cvector); // 0x56c ObjFunc
	var_60_cvector = var_59_cvector - var_58_cvector; // 0x56e Sub2
	var_53_float = var_60_cvector | var_60_cvector; // 0x56f Or2
	return 6; // 0x570 Return
}


func_1393(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x571 PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x572 Func
	var_12_bool = var_15_bool; // 0x574 Mov
	return 2; // 0x575 Return
}


func_1398(var_77_bool, var_78_object, var_79_string)
{
	var_80_bool = 0; var_81_bool = 0; // 0x576 PushV
	var_82_string = "HasProperty"; // 0x577 PushS
	var_83_int = 2; // 0x578 PushI
	var_84_bool = IsFuncExist(var_78_object, var_82_string, var_83_int); // 0x579 FuncExist
	var_85_bool = var_84_bool == 0; // 0x57a Not
	if(var_85_bool == 0) goto Label_1406; // 0x57b JumpB
	var_77_bool = 0; // 0x57c MovB
	return 2; // 0x57d Return
	
Label_1406:
	HasProperty(var_79_string, var_81_bool); // 0x57e ObjFunc
	var_77_bool = var_81_bool; // 0x580 Mov
	return 2; // 0x581 Return
}


func_887(var_2_int, var_259_bool, var_260_object, var_261_float, var_262_float, var_263_bool, var_264_bool)
{
	var_268_bool = 0; var_269_bool = 0; var_270_bool = 0; var_271_bool = 0; // 0x377 PushV
	var_272_object = Obj(); // 0x378 PushV
	var_272_object = var_260_object; // 0x379 Mov
	func_1946(var_272_object); // 0x37a NEW_2
	var_273_int = 1; // 0x37c PushI
	var_274_int = 5; // 0x37d PushI
	SetTimer(var_273_int, var_274_int); // 0x37e Func
	CanSee(var_270_bool, var_260_object); // 0x380 Func
	var_275_bool = var_270_bool; // 0x382 Push
	if(var_275_bool == 0) goto Label_906; // 0x383 JumpB
	var_2_int = 1; // 0x384 TMovB
	var_276_object = Obj(); // 0x385 PushV
	var_276_object = var_260_object; // 0x386 Mov
	func_1757(var_276_object); // 0x387 NEW_2
	goto Label_907; // 0x389 Jump
	
Label_907:
	var_283_bool = 0; var_284_object = Obj(); // 0x38b PushV
	var_284_object = var_260_object; // 0x38c Mov
	func_1393(var_283_bool, var_284_object); // 0x38d NEW_2
	if(var_283_bool == 0) goto Label_917; // 0x38f JumpB
	var_287_object = Obj(); // 0x390 PushV
	func_1820(var_287_object); // 0x391 NEW_2
	SendPlayerEnemy(var_260_object, var_287_object); // 0x393 Func
	
Label_917:
	var_288_bool = 0; var_289_object = Obj(); var_290_float = 0; var_291_float = 0; var_292_bool = 0; var_293_bool = 0; // 0x395 PushV
	var_289_object = var_260_object; // 0x396 Mov
	var_290_float = var_261_float; // 0x397 Mov
	var_291_float = var_262_float; // 0x398 Mov
	var_292_bool = var_263_bool; // 0x399 Mov
	var_293_bool = var_264_bool; // 0x39a Mov
	func_992(var_270_bool, var_271_bool, var_288_bool, var_289_object, var_290_float, var_291_float, var_292_bool, var_293_bool); // 0x39b NEW_2
	var_271_bool = var_288_bool; // 0x39c Mov
	var_339_int = var_2_int; // 0x39e PushT
	if(var_339_int == 0) goto Label_931; // 0x39f JumpB
	var_340_string = "head"; // 0x3a0 PushS
	UnlookAsync(var_340_string); // 0x3a1 Func
	
Label_931:
	var_341_int = 1; // 0x3a3 PushI
	KillTimer(var_341_int); // 0x3a4 Func
	var_259_bool = var_271_bool; // 0x3a6 Mov
	return 4; // 0x3a7 Return
	
Label_906:
	var_2_int = 0; // 0x38a TMovB
}


func_1410(var_69_bool, var_70_object, var_71_string, var_72_float, var_73_float, var_74_float)
{
	var_75_float = 0; var_76_float = 0; // 0x582 PushV
	var_77_bool = 0; var_78_object = Obj(); var_79_string = ""; // 0x583 PushV
	var_78_object = var_70_object; // 0x584 Mov
	var_79_string = var_71_string; // 0x585 Mov
	func_1398(var_77_bool, var_78_object, var_79_string); // 0x586 NEW_2
	var_86_bool = var_77_bool == 0; // 0x588 Not
	if(var_86_bool == 0) goto Label_1420; // 0x589 JumpB
	var_69_bool = 0; // 0x58a MovB
	return 2; // 0x58b Return
	
Label_1420:
	GetProperty(var_71_string, var_76_float); // 0x58c ObjFunc
	var_87_float = 0; var_88_float = 0; var_89_float = 0; var_90_float = 0; // 0x58e PushV
	var_88_float = var_76_float + var_72_float; // 0x58f Add2
	var_89_float = var_73_float; // 0x590 Mov
	var_90_float = var_74_float; // 0x591 Mov
	func_1867(var_87_float, var_88_float, var_89_float, var_90_float); // 0x592 NEW_2
	SetProperty(var_71_string, var_87_float); // 0x594 ObjFunc
	var_69_bool = 1; // 0x596 MovB
	return 2; // 0x597 Return
}


func_1926(var_580_float)
{
	var_581_object = Obj(); var_582_object = Obj(); // 0x786 PushV
	CreateFloatVector(var_582_object); // 0x787 Func
	add(var_580_float); // 0x789 ObjFunc
	var_583_int = 15; // 0x78b PushI
	SendWorldWndMessage(var_583_int, var_582_object); // 0x78c Func
	return 2; // 0x78e Return
}


func_1936(var_65_float)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x790 PushV
	CreateFloatVector(var_67_object); // 0x791 Func
	add(var_65_float); // 0x793 ObjFunc
	var_68_int = 16; // 0x795 PushI
	SendWorldWndMessage(var_68_int, var_67_object); // 0x796 Func
	return 2; // 0x798 Return
}


func_1432(var_524_float, var_525_object, var_526_float, var_527_int)
{
	var_531_int = 0; var_532_string = ""; var_533_int = 0; var_534_float = 0; var_535_float = 0; var_536_float = 0; var_537_int = 0; var_538_string = ""; var_539_int = 0; var_540_float = 0; var_541_float = 0; var_542_float = 0; // 0x598 PushV
	var_543_bool = 0; var_544_object = Obj(); var_545_string = ""; // 0x599 PushV
	var_544_object = var_525_object; // 0x59a Mov
	var_545_string = "health"; // 0x59b MovS
	func_1398(var_543_bool, var_544_object, var_545_string); // 0x59c NEW_2
	var_546_bool = var_543_bool == 0; // 0x59e Not
	if(var_546_bool == 0) goto Label_1442; // 0x59f JumpB
	var_524_float = 0.0; // 0x5a0 MovF
	return 12; // 0x5a1 Return
	
Label_1442:
	var_547_bool = 0; var_548_object = Obj(); var_549_string = ""; // 0x5a2 PushV
	var_548_object = var_525_object; // 0x5a3 Mov
	var_549_string = "armor"; // 0x5a4 MovS
	func_1398(var_547_bool, var_548_object, var_549_string); // 0x5a5 NEW_2
	var_550_bool = var_547_bool == 0; // 0x5a7 Not
	if(var_550_bool == 0) goto Label_1451; // 0x5a8 JumpB
	var_537_int = 0; // 0x5a9 MovI
	goto Label_1454; // 0x5aa Jump
	
Label_1454:
	var_551_string = "armor_"; // 0x5ae PushS
	var_552_string = ""; var_553_int = 0; // 0x5af PushV
	var_553_int = var_527_int; // 0x5b0 Mov
	func_1364(var_552_string, var_553_int); // 0x5b1 NEW_2
	var_538_string = var_551_string + var_552_string; // 0x5b3 Add2
	var_558_bool = 0; var_559_object = Obj(); var_560_string = ""; // 0x5b4 PushV
	var_559_object = var_525_object; // 0x5b5 Mov
	var_560_string = var_538_string; // 0x5b6 Mov
	func_1398(var_558_bool, var_559_object, var_560_string); // 0x5b7 NEW_2
	var_561_bool = var_558_bool == 0; // 0x5b9 Not
	if(var_561_bool == 0) goto Label_1469; // 0x5ba JumpB
	var_539_int = 0; // 0x5bb MovI
	goto Label_1471; // 0x5bc Jump
	
Label_1471:
	var_562_float = 0; var_563_float = 0; var_564_float = 0; // 0x5bf PushV
	var_565_int = var_537_int + var_539_int; // 0x5c0 Add
	var_566_float = 100.0; // 0x5c1 PushF
	var_563_float = var_565_int / var_565_int; // 0x5c2 Div2
	var_564_float = 1; // 0x5c3 MovI
	func_1836(var_562_float, var_563_float, var_564_float); // 0x5c4 NEW_2
	var_540_float = var_562_float; // 0x5c5 Mov
	var_568_string = "health"; // 0x5c7 PushS
	GetProperty(var_568_string, var_541_float); // 0x5c8 ObjFunc
	var_569_int = 1; // 0x5ca PushI
	var_570_int = var_569_int - var_540_float; // 0x5cb Sub
	var_542_float = var_526_float * var_570_int; // 0x5cc Mult2
	var_571_string = "health"; // 0x5cd PushS
	var_572_float = 0; var_573_float = 0; var_574_float = 0; var_575_float = 0; // 0x5ce PushV
	var_573_float = var_541_float - var_542_float; // 0x5cf Sub2
	var_574_float = 0; // 0x5d0 MovI
	var_575_float = 1; // 0x5d1 MovI
	func_1867(var_572_float, var_573_float, var_574_float, var_575_float); // 0x5d2 NEW_2
	SetProperty(var_571_string, var_572_float); // 0x5d4 ObjFunc
	var_578_bool = 0; var_579_object = Obj(); // 0x5d6 PushV
	var_579_object = var_525_object; // 0x5d7 Mov
	func_1393(var_578_bool, var_579_object); // 0x5d8 NEW_2
	if(var_578_bool == 0) goto Label_1503; // 0x5da JumpB
	var_580_float = 0; // 0x5db PushV
	var_580_float = -var_542_float; // 0x5dc Neg2
	func_1926(var_580_float); // 0x5dd NEW_2
	
Label_1503:
	var_524_float = var_542_float; // 0x5df Mov
	return 12; // 0x5e0 Return
	
Label_1469:
	GetProperty(var_538_string, var_539_int); // 0x5bd ObjFunc
	
Label_1451:
	var_584_string = "armor"; // 0x5ab PushS
	GetProperty(var_584_string, var_537_int); // 0x5ac ObjFunc
}


func_1946(var_84_object)
{
	var_85_bool = 0; var_86_bool = 0; // 0x79a PushV
	IsPlayerActor(var_84_object, var_86_bool); // 0x79b Func
	var_87_bool = var_86_bool; // 0x79d Push
	if(var_87_bool == 0) goto Label_1954; // 0x79e JumpB
	var_88_string = "attack"; // 0x79f PushS
	PlayGlobalMusic(var_88_string); // 0x7a0 Func
	
Label_1954:
	return 2; // 0x7a2 Return
}


func_1955()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x7a3 PushV
	GetScene(var_107_object); // 0x7a4 Func
	var_108_string = "battle"; // 0x7a6 PushS
	var_109_object = Obj(); // 0x7a7 PushV
	func_1820(var_109_object); // 0x7a8 NEW_2
	BroadcastMessage(var_108_string, var_109_object, var_107_object); // 0x7aa Func
	return 2; // 0x7ac Return
}


func_1966(var_602_bool)
{
	var_603_bool = 0; var_604_bool = 0; // 0x7ae PushV
	var_605_string = "god_mode"; // 0x7af PushS
	GetVariable(var_605_string, var_604_bool); // 0x7b0 Func
	var_602_bool = var_604_bool; // 0x7b2 Mov
	return 2; // 0x7b3 Return
}


func_432(var_1_object, var_2_int, var_4_bool)
{
	var_219_bool = 0; var_220_bool = 0; var_221_cvector = CVector(0,0,0); var_222_bool = 0; var_223_bool = 0; var_224_cvector = CVector(0,0,0); // 0x1b0 PushV
	var_1_object = 0; // 0x1b1 TMovI
	
Label_434:
	var_225_string = "all"; // 0x1b2 PushS
	var_226_string = "attack_begin"; // 0x1b3 PushS
	var_227_int = 1; // 0x1b4 PushI
	var_228_int = var_1_object + var_227_int; // 0x1b5 Add
	var_229_int = var_226_string + var_228_int; // 0x1b6 Add
	HasAnimation(var_222_bool, var_225_string, var_229_int); // 0x1b7 Func
	var_230_bool = var_222_bool == 0; // 0x1b9 Not
	if(var_230_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_447; // 0x1bb Jump
	
Label_447:
	var_2_int = 0; // 0x1bf TMovI
	
Label_448:
	var_231_string = "attack"; // 0x1c0 PushS
	var_232_int = 1; // 0x1c1 PushI
	var_233_int = var_2_int + var_232_int; // 0x1c2 Add
	var_234_int = var_231_string + var_233_int; // 0x1c3 Add
	IsExisting3DSound(var_223_bool, var_234_int); // 0x1c4 Func
	var_235_bool = var_223_bool == 0; // 0x1c6 Not
	if(var_235_bool == 0) goto Label_457; // 0x1c7 JumpB
	goto Label_460; // 0x1c8 Jump
	
Label_460:
	var_236_string = "all"; // 0x1cc PushS
	var_237_string = "bjump"; // 0x1cd PushS
	GetAnimationOffset(var_224_cvector, var_236_string, var_237_string); // 0x1ce Func
	var_238_float = GetByIndex(var_224_cvector, 2); // 0x1d0 PushE
	var_4_bool = -var_238_float; // 0x1d1 Neg2
	return 6; // 0x1d2 Return
	
Label_457:
	var_239_int = 1; // 0x1c9 PushI
	var_2_int = var_2_int + var_239_int; // 0x1ca Add2
	goto Label_448; // 0x1cb Jump
	
Label_444:
	var_240_int = 1; // 0x1bc PushI
	var_1_object = var_1_object + var_240_int; // 0x1bd Add2
	goto Label_434; // 0x1be Jump
}


func_1972(var_129_cvector, var_130_cvector, var_131_cvector, var_132_float)
{
	var_133_cvector = CVector(0,0,0); var_134_float = 0; var_135_float = 0; var_136_float = 0; var_137_float = 0; var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_float = 0; var_141_float = 0; var_142_float = 0; var_143_float = 0; var_144_float = 0; // 0x7b4 PushV
	var_139_cvector = var_131_cvector - var_130_cvector; // 0x7b5 Sub2
	var_140_float = 250000; // 0x7b6 MovI
	var_145_float = GetByIndex(var_139_cvector, 1); // 0x7b7 PushE
	var_146_int = 1000; // 0x7b8 PushI
	var_147_float = var_145_float * var_146_int; // 0x7b9 Mult
	var_148_float = var_132_float * var_132_float; // 0x7ba Mult
	var_141_float = var_147_float - var_148_float; // 0x7bb Sub2
	var_142_float = var_139_cvector | var_139_cvector; // 0x7bc Or2
	var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_float = 0; // 0x7bd PushV
	var_150_float = var_140_float; // 0x7be Mov
	var_151_float = var_141_float; // 0x7bf Mov
	var_152_float = var_142_float; // 0x7c0 Mov
	func_1843(var_149_float, var_150_float, var_151_float, var_152_float); // 0x7c1 NEW_2
	var_143_float = var_149_float; // 0x7c2 Mov
	var_157_int = 0; // 0x7c4 PushI
	var_158_bool = var_143_float < var_157_int; // 0x7c5 LT
	if(var_158_bool == 0) goto Label_1993; // 0x7c6 JumpB
	var_144_float = 1; // 0x7c7 MovI
	goto Label_2001; // 0x7c8 Jump
	
Label_2001:
	var_159_cvector = CVector(0.0, 500.0, 0.0); // 0x7d1 PushVec
	var_160_float = var_159_cvector * var_144_float; // 0x7d2 Mult
	var_161_float = var_160_float * var_144_float; // 0x7d3 Mult
	var_162_int = var_139_cvector + var_161_float; // 0x7d4 Add
	var_129_cvector = var_162_int / var_162_int; // 0x7d5 Div2
	return 12; // 0x7d6 Return
	
Label_1993:
	var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_float = 0; // 0x7c9 PushV
	var_164_float = var_140_float; // 0x7ca Mov
	var_165_float = var_141_float; // 0x7cb Mov
	var_166_float = var_142_float; // 0x7cc Mov
	var_167_float = sqrt(var_143_float); // 0x7cd Sqrt2
	func_1850(var_164_float, var_165_float, var_166_float, var_167_float); // 0x7ce NEW_2
	var_144_float = sqrt(var_163_float); // 0x7d0 Sqrt2
}


func_950(var_2_int)
{
	var_11_int = 1; // 0x3b6 PushI
	KillTimer(var_11_int); // 0x3b7 Func
	var_12_int = var_2_int; // 0x3b9 PushT
	if(var_12_int == 0) goto Label_959; // 0x3ba JumpB
	var_2_int = 0; // 0x3bb TMovB
	var_13_string = "head"; // 0x3bc PushS
	UnlookAsync(var_13_string); // 0x3bd Func
	
Label_959:
	func_1116(var_10_object); // 0x3c0 NEW_2
	return 0; // 0x3c2 Return
}


func_467(var_0_bool, var_510_float, var_511_int)
{
	var_512_object = Obj(); var_513_float = 0; var_514_float = 0; var_515_object = Obj(); var_516_float = 0; var_517_float = 0; // 0x1d3 PushV
	var_518_float = 0.9; // 0x1d4 PushF
	var_519_float = var_510_float * var_518_float; // 0x1d5 Mult
	GetVictim(var_519_float, var_515_object); // 0x1d6 Func
	ReportAttack(var_0_bool); // 0x1d8 Func
	var_520_bool = var_515_object == var_0_bool; // 0x1da Eq
	if(var_520_bool == 0) goto Label_504; // 0x1db JumpB
	var_521_float = 0; var_522_object = Obj(); var_523_int = 0; // 0x1dc PushV
	var_522_object = var_515_object; // 0x1dd Mov
	var_523_int = var_511_int; // 0x1de Mov
	func_154(var_523_int); // 0x1df NEW_2
	var_516_float = var_521_float; // 0x1e0 Mov
	var_524_float = 0; var_525_object = Obj(); var_526_float = 0; var_527_int = 0; // 0x1e2 PushV
	var_525_object = var_515_object; // 0x1e3 Mov
	var_526_float = var_516_float; // 0x1e4 Mov
	var_528_int = 0; var_529_object = Obj(); var_530_int = 0; // 0x1e5 PushV
	var_529_object = var_515_object; // 0x1e6 Mov
	var_530_int = var_511_int; // 0x1e7 Mov
	func_157(var_530_int); // 0x1e8 NEW_2
	var_527_int = var_528_int; // 0x1e9 Mov
	func_1432(var_524_float, var_525_object, var_526_float, var_527_int); // 0x1eb NEW_2
	var_517_float = var_524_float; // 0x1ec Mov
	var_585_int = 0; // 0x1ee PushV
	func_160(var_585_int); // 0x1ef NEW_2
	ReportHit(var_0_bool, var_585_int, var_517_float, var_516_float); // 0x1f1 Func
	var_586_object = Obj(); var_587_float = 0; // 0x1f3 PushV
	var_586_object = var_515_object; // 0x1f4 Mov
	var_587_float = var_517_float; // 0x1f5 Mov
	func_162(var_586_object, var_587_float); // 0x1f6 NEW_2
	
Label_504:
	return 6; // 0x1f8 Return
}


func_2007(var_96_int)
{
	var_97_int = 0; var_98_int = 0; // 0x7d7 PushV
	var_99_string = "branch"; // 0x7d8 PushS
	GetVariable(var_99_string, var_98_int); // 0x7d9 Func
	var_96_int = var_98_int; // 0x7db Mov
	return 2; // 0x7dc Return
}


func_2013(var_14_object)
{
	var_15_int = 0; // 0x7de PushV
	func_2007(var_15_int); // 0x7df NEW_2
	var_19_int = 1; // 0x7e1 PushI
	var_20_bool = var_15_int == var_19_int; // 0x7e2 Eq
	if(var_20_bool == 0) goto Label_2023; // 0x7e3 JumpB
	WorkWithCorpse(var_14_object); // 0x7e4 Func
	goto Label_2025; // 0x7e6 Jump
	
Label_2025:
	return 0; // 0x7e9 Return
	
Label_2023:
	Barter(var_14_object); // 0x7e7 Func
}


func_992(var_0_bool, var_1_object, var_288_bool, var_289_object, var_290_float, var_291_float, var_292_bool, var_293_bool)
{
	var_294_bool = 0; var_295_bool = 0; var_296_object = Obj(); var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_object = Obj(); var_302_bool = 0; var_303_bool = 0; var_304_object = Obj(); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_object = Obj(); // 0x3e0 PushV
	var_0_bool = 0; // 0x3e1 TMovB
	var_1_object = var_289_object; // 0x3e2 TMov
	var_303_bool = var_293_bool; // 0x3e3 Mov
	
Label_996:
	var_310_bool = 0; var_311_object = Obj(); // 0x3e4 PushV
	var_311_object = var_289_object; // 0x3e5 Mov
	func_1132(var_310_bool, var_311_object); // 0x3e6 NEW_2
	var_314_bool = var_310_bool == 0; // 0x3e8 Not
	if(var_314_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_288_bool = 0; // 0x3ea MovB
	return 16; // 0x3eb Return
	
Label_1004:
	GetPosition(var_305_cvector); // 0x3ec ObjFunc
	GetPosition(var_306_cvector); // 0x3ee Func
	var_307_cvector = var_305_cvector - var_306_cvector; // 0x3f0 Sub2
	var_308_float = var_307_cvector | var_307_cvector; // 0x3f1 Or2
	var_315_bool = 0; // 0x3f2 PushV
	var_315_bool = 0; // 0x3f3 MovB
	var_316_int = 0; // 0x3f4 PushI
	var_317_bool = var_291_float > var_316_int; // 0x3f5 GT
	if(var_317_bool == 0) goto Label_1019; // 0x3f6 JumpB
	var_318_float = var_291_float * var_291_float; // 0x3f7 Mult
	var_319_bool = var_308_float > var_318_float; // 0x3f8 GT
	if(var_319_bool == 0) goto Label_1019; // 0x3f9 JumpB
	var_315_bool = 1; // 0x3fa MovB
	
Label_1019:
	if(var_315_bool == 0) goto Label_1024; // 0x3fb JumpB
	Stop(); // 0x3fc Func
	var_288_bool = 0; // 0x3fe MovB
	return 16; // 0x3ff Return
	
Label_1024:
	var_320_float = var_290_float * var_290_float; // 0x400 Mult
	var_321_bool = var_308_float > var_320_float; // 0x401 GT
	if(var_321_bool == 0) goto Label_1086; // 0x402 JumpB
	GetPFPosition(var_305_cvector); // 0x403 ObjFunc
	FindPathTo(var_309_object, var_305_cvector); // 0x405 Func
	var_322_bool = var_309_object != 0; // 0x407 NullNeq
	if(var_322_bool == 0) goto Label_1035; // 0x408 JumpB
	var_304_object = var_309_object; // 0x409 Mov
	var_309_object = 0; // 0x40a SetNull
	
Label_1035:
	var_323_bool = var_304_object != 0; // 0x40b NullNeq
	if(var_323_bool == 0) goto Label_1068; // 0x40c JumpB
	var_324_bool = var_303_bool; // 0x40d Push
	if(var_324_bool == 0) goto Label_1045; // 0x40e JumpB
	var_303_bool = 0; // 0x40f MovB
	RotatePath(var_304_object, var_302_bool); // 0x410 Func
	var_325_bool = var_302_bool == 0; // 0x412 Not
	if(var_325_bool == 0) goto Label_1045; // 0x413 JumpB
	goto Label_1092; // 0x414 Jump
	
Label_1092:
	var_288_bool = !var_0_bool; // 0x444 Not2
	return 16; // 0x445 Return
	
Label_1045:
	var_326_int = 0; // 0x415 PushI
	var_327_float = 0.3; // 0x416 PushF
	SetTimer(var_326_int, var_327_float); // 0x417 Func
	var_328_string = ""; // 0x419 PushV
	func_1139(var_328_string); // 0x41a NEW_2
	var_329_string = ""; // 0x41c PushV
	func_1141(var_329_string); // 0x41d NEW_2
	FollowPath(var_304_object, var_292_bool, var_302_bool, var_328_string, var_329_string); // 0x41f Func
	var_330_bool = var_302_bool == 0; // 0x421 Not
	if(var_330_bool == 0) goto Label_1066; // 0x422 JumpB
	var_331_bool = var_0_bool; // 0x423 PushT
	if(var_331_bool == 0) goto Label_1064; // 0x424 JumpB
	var_304_object = 0; // 0x425 SetNull
	goto Label_1092; // 0x426 Jump
	
Label_1064:
	goto Label_1091; // 0x428 Jump
	
Label_1091:
	goto Label_996; // 0x443 Jump
	
Label_1066:
	var_304_object = 0; // 0x42a SetNull
	goto Label_1084; // 0x42b Jump
	
Label_1084:
	var_309_object = 0; // 0x43c SetNull
	goto Label_1090; // 0x43d Jump
	
Label_1090:
	var_304_object = 0; // 0x442 SetNull
	
Label_1068:
	var_332_int = 0; // 0x42c PushI
	KillTimer(var_332_int); // 0x42d Func
	var_333_float = 0.5; // 0x42f PushF
	Sleep(var_333_float, var_302_bool); // 0x430 Func
	var_334_bool = var_302_bool == 0; // 0x432 Not
	if(var_334_bool == 0) goto Label_1080; // 0x433 JumpB
	var_335_bool = var_0_bool; // 0x434 PushT
	if(var_335_bool == 0) goto Label_1080; // 0x435 JumpB
	var_304_object = 0; // 0x436 SetNull
	goto Label_1092; // 0x437 Jump
	
Label_1080:
	var_336_int = 0; // 0x438 PushI
	var_337_float = 0.3; // 0x439 PushF
	SetTimer(var_336_int, var_337_float); // 0x43a Func
	
Label_1086:
	var_338_int = 0; // 0x43e PushI
	KillTimer(var_338_int); // 0x43f Func
	goto Label_1092; // 0x441 Jump
}


func_1505(var_591_bool, var_592_object)
{
	var_593_float = 0; var_594_float = 0; // 0x5e1 PushV
	var_595_bool = 0; var_596_object = Obj(); var_597_string = ""; // 0x5e2 PushV
	var_596_object = var_592_object; // 0x5e3 Mov
	var_597_string = "health"; // 0x5e4 MovS
	func_1398(var_595_bool, var_596_object, var_597_string); // 0x5e5 NEW_2
	var_598_bool = var_595_bool == 0; // 0x5e7 Not
	if(var_598_bool == 0) goto Label_1515; // 0x5e8 JumpB
	var_591_bool = 0; // 0x5e9 MovB
	return 2; // 0x5ea Return
	
Label_1515:
	var_599_bool = 0; // 0x5eb PushV
	var_599_bool = 0; // 0x5ec MovB
	var_600_bool = 0; var_601_object = Obj(); // 0x5ed PushV
	var_601_object = var_592_object; // 0x5ee Mov
	func_1393(var_600_bool, var_601_object); // 0x5ef NEW_2
	if(var_600_bool == 0) goto Label_1527; // 0x5f1 JumpB
	var_602_bool = 0; // 0x5f2 PushV
	func_1966(var_602_bool); // 0x5f3 NEW_2
	if(var_602_bool == 0) goto Label_1527; // 0x5f5 JumpB
	var_599_bool = 1; // 0x5f6 MovB
	
Label_1527:
	if(var_599_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_591_bool = 0; // 0x5f8 MovB
	return 2; // 0x5f9 Return
	
Label_1530:
	var_606_string = "health"; // 0x5fa PushS
	GetProperty(var_606_string, var_594_float); // 0x5fb ObjFunc
	var_607_float = 0.0; // 0x5fd PushF
	var_591_bool = var_594_float <= var_607_float; // 0x5fe LE2
	return 2; // 0x5ff Return
}


func_2026(var_21_int, var_22_int)
{
	var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x7ea PushV
	var_27_bool = var_21_int > var_22_int; // 0x7eb GT
	if(var_27_bool == 0) goto Label_2033; // 0x7ec JumpB
	var_28_string = "GenerateMoney: iMin > iMax"; // 0x7ed PushS
	Trace(var_28_string); // 0x7ee Func
	return 4; // 0x7f0 Return
	
Label_2033:
	var_25_int = 0; // 0x7f1 MovI
	var_29_bool = var_21_int != var_22_int; // 0x7f2 Neq
	if(var_29_bool == 0) goto Label_2040; // 0x7f3 JumpB
	var_30_int = var_22_int - var_21_int; // 0x7f4 Sub
	irand(var_25_int, var_30_int); // 0x7f5 Func
	goto Label_2044; // 0x7f7 Jump
	
Label_2044:
	var_25_int = var_25_int + var_21_int; // 0x7fc Add2
	var_31_int = 0; // 0x7fd PushI
	var_32_bool = var_25_int == var_31_int; // 0x7fe Eq
	if(var_32_bool == 0) goto Label_2049; // 0x7ff JumpB
	return 4; // 0x800 Return
	
Label_2049:
	var_33_int = 0; var_34_string = ""; // 0x801 PushV
	var_34_string = "Money"; // 0x802 MovS
	func_2128(var_33_int, var_34_string); // 0x803 NEW_2
	var_37_int = 0; // 0x805 PushI
	AddItem(var_26_bool, var_33_int, var_37_int, var_25_int); // 0x806 Func
	return 4; // 0x808 Return
	
Label_2040:
	var_38_int = 0; // 0x7f8 PushI
	var_39_bool = var_21_int == var_38_int; // 0x7f9 Eq
	if(var_39_bool == 0) goto Label_2044; // 0x7fa JumpB
	return 4; // 0x7fb Return
}


func_506(var_0_bool, var_477_bool, var_478_float)
{
	var_479_int = 0; var_480_bool = 0; var_481_int = 0; var_482_string = ""; var_483_int = 0; var_484_bool = 0; var_485_int = 0; var_486_string = ""; // 0x1fa PushV
	func_847(var_486_string); // 0x1fc NEW_2
	irand(var_483_int, var_486_string); // 0x1fe Func
	var_487_int = 1; // 0x200 PushI
	var_483_int = var_483_int + var_487_int; // 0x201 Add2
	Face(var_0_bool); // 0x202 Func
	var_488_bool = 1; // 0x204 PushB
	SetAttackState(var_488_bool); // 0x205 Func
	func_1955(); // 0x208 NEW_2
	var_489_string = "all"; // 0x20a PushS
	var_490_string = "attack_begin"; // 0x20b PushS
	var_491_int = var_490_string + var_483_int; // 0x20c Add
	PlayAnimation(var_489_string, var_491_int); // 0x20d Func
	WaitForAnimEnd(); // 0x20f Func
	func_815(var_485_int, var_486_string); // 0x212 NEW_2
	var_507_bool = 0; var_508_object = Obj(); // 0x214 PushV
	var_508_object = var_0_bool; // 0x215 MovT
	func_1577(var_507_bool, var_508_object); // 0x216 NEW_2
	var_509_bool = var_507_bool == 0; // 0x218 Not
	if(var_509_bool == 0) goto Label_542; // 0x219 JumpB
	StopAsync(); // 0x21a Func
	var_477_bool = 0; // 0x21c MovB
	return 8; // 0x21d Return
	
Label_542:
	var_510_float = 0; var_511_int = 0; // 0x21e PushV
	var_510_float = var_478_float; // 0x21f Mov
	var_511_int = var_483_int; // 0x220 Mov
	func_467(var_486_string, var_510_float, var_511_int); // 0x221 NEW_2
	var_609_string = "all"; // 0x223 PushS
	var_610_string = "attack_middle"; // 0x224 PushS
	var_611_int = var_610_string + var_483_int; // 0x225 Add
	HasAnimation(var_484_bool, var_609_string, var_611_int); // 0x226 Func
	var_612_bool = var_484_bool; // 0x228 Push
	if(var_612_bool == 0) goto Label_623; // 0x229 JumpB
	func_1955(); // 0x22b NEW_2
	var_613_string = "all"; // 0x22d PushS
	var_614_string = "attack_middle"; // 0x22e PushS
	var_615_int = var_614_string + var_483_int; // 0x22f Add
	PlayAnimation(var_613_string, var_615_int); // 0x230 Func
	WaitForAnimEnd(); // 0x232 Func
	func_847(var_486_string); // 0x235 NEW_2
	var_616_bool = 0; var_617_object = Obj(); // 0x237 PushV
	var_617_object = var_0_bool; // 0x238 MovT
	func_1577(var_616_bool, var_617_object); // 0x239 NEW_2
	var_618_bool = var_616_bool == 0; // 0x23b Not
	if(var_618_bool == 0) goto Label_577; // 0x23c JumpB
	StopAsync(); // 0x23d Func
	var_477_bool = 0; // 0x23f MovB
	return 8; // 0x240 Return
	
Label_577:
	var_619_float = 0; var_620_int = 0; // 0x241 PushV
	var_619_float = var_478_float; // 0x242 Mov
	var_620_int = var_483_int; // 0x243 Mov
	func_467(var_486_string, var_619_float, var_620_int); // 0x244 NEW_2
	var_485_int = 1; // 0x246 MovI
	
Label_583:
	var_621_string = "attack_middle"; // 0x247 PushS
	var_622_int = var_621_string + var_483_int; // 0x248 Add
	var_623_string = "_"; // 0x249 PushS
	var_624_int = var_622_int + var_623_string; // 0x24a Add
	var_486_string = var_624_int + var_485_int; // 0x24b Add2
	var_625_string = "all"; // 0x24c PushS
	HasAnimation(var_484_bool, var_625_string, var_486_string); // 0x24d Func
	var_626_bool = var_484_bool == 0; // 0x24f Not
	if(var_626_bool == 0) goto Label_594; // 0x250 JumpB
	goto Label_623; // 0x251 Jump
	
Label_623:
	var_627_bool = 0; // 0x26f PushB
	SetAttackState(var_627_bool); // 0x270 Func
	var_628_string = "all"; // 0x272 PushS
	var_629_string = "attack_end"; // 0x273 PushS
	var_630_int = var_629_string + var_483_int; // 0x274 Add
	PlayAnimation(var_628_string, var_630_int); // 0x275 Func
	var_631_bool = 0; // 0x277 PushV
	func_857(var_631_bool); // 0x278 NEW_2
	if(var_631_bool == 0) goto Label_641; // 0x27a JumpB
	var_632_bool = 0; var_633_float = 0; // 0x27b PushV
	var_633_float = 0.45; // 0x27c MovF
	func_645(var_632_bool, var_633_float); // 0x27d NEW_2
	StopAsync(); // 0x27f Func
	
Label_641:
	var_477_bool = 1; // 0x281 MovB
	return 8; // 0x282 Return
	
Label_594:
	func_1955(); // 0x253 NEW_2
	var_641_string = "all"; // 0x255 PushS
	PlayAnimation(var_641_string, var_486_string); // 0x256 Func
	WaitForAnimEnd(); // 0x258 Func
	func_847(var_486_string); // 0x25b NEW_2
	var_642_bool = 0; var_643_object = Obj(); // 0x25d PushV
	var_643_object = var_0_bool; // 0x25e MovT
	func_1577(var_642_bool, var_643_object); // 0x25f NEW_2
	var_644_bool = var_642_bool == 0; // 0x261 Not
	if(var_644_bool == 0) goto Label_615; // 0x262 JumpB
	StopAsync(); // 0x263 Func
	var_477_bool = 0; // 0x265 MovB
	return 8; // 0x266 Return
	
Label_615:
	var_645_float = 0; var_646_int = 0; // 0x267 PushV
	var_645_float = var_478_float; // 0x268 Mov
	var_646_int = var_483_int; // 0x269 Mov
	func_467(var_486_string, var_645_float, var_646_int); // 0x26a NEW_2
	var_647_int = 1; // 0x26c PushI
	var_485_int = var_485_int + var_647_int; // 0x26d Add2
	goto Label_583; // 0x26e Jump
}


