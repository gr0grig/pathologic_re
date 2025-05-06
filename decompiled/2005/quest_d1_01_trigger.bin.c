task_0_event_24(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int)
{
	CameraSwitchToNormal(); // 0x22 Func
	return 0; // 0x24 Return
}


task_0_event_23(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_object = Obj(); var_9_bool = 0; var_10_object = Obj(); // 0x25 PushV
	var_11_bool = var_5_bool; // 0x26 PushT
	if(var_11_bool == 0) goto Label_41; // 0x27 JumpB
	return 4; // 0x28 Return
	
Label_41:
	IsPlayerActor(var_6_object, var_9_bool); // 0x29 Func
	var_12_bool = var_9_bool == 0; // 0x2b Not
	if(var_12_bool == 0) goto Label_46; // 0x2c JumpB
	return 4; // 0x2d Return
	
Label_46:
	var_5_bool = 1; // 0x2e TMovB
	var_13_string = "play"; // 0x2f PushS
	Trigger(var_13_string, var_13_string); // 0x30 Func
	var_14_string = "play"; // 0x32 PushS
	Trigger(var_10_object, var_14_string); // 0x33 Func
	var_15_string = "player"; // 0x35 PushS
	FindActor(var_10_object, var_15_string); // 0x36 Func
	func_250(); // 0x39 NEW_2
	var_18_object = Obj(); // 0x3b PushV
	var_18_object = var_10_object; // 0x3c Mov
	func_163(var_18_object); // 0x3d NEW_2
	var_32_string = "space"; // 0x3f PushS
	RegisterKeyCallback(var_32_string); // 0x40 Func
	var_33_string = "cs_d1q01.mot"; // 0x42 PushS
	CameraPlay(var_33_string); // 0x43 Func
	CameraWaitForPlayFinish(); // 0x45 Func
	var_34_string = "space"; // 0x47 PushS
	UnregisterKeyCallback(var_34_string); // 0x48 Func
	var_35_object = Obj(); // 0x4a PushV
	var_35_object = var_10_object; // 0x4b Mov
	func_186(var_35_object); // 0x4c NEW_2
	func_255(); // 0x4f NEW_2
	CameraSwitchToNormal(); // 0x51 Func
	var_48_bool = 0; var_49_string = ""; var_50_string = ""; // 0x53 PushV
	var_49_string = "quest_d1_01"; // 0x54 MovS
	var_50_string = "cutscene_end"; // 0x55 MovS
	func_238(var_48_bool, var_49_string, var_50_string); // 0x56 NEW_2
	sync(); // 0x58 Func
	RemoveActor(var_10_object); // 0x5a Func
	RemoveActor(var_9_bool); // 0x5c Func
	return 4; // 0x5e Return
}


task_0_event_32(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool)
{
	var_6_object = var_1_object; // 0x60 PushT
	if(var_6_object == 0) goto Label_100; // 0x61 JumpB
	RemoveActor(var_5_bool); // 0x62 Func
	
Label_100:
	var_7_object = var_2_object; // 0x64 PushT
	if(var_7_object == 0) goto Label_104; // 0x65 JumpB
	RemoveActor(var_4_object); // 0x66 Func
	
Label_104:
	var_8_object = var_3_object; // 0x68 PushT
	if(var_8_object == 0) goto Label_108; // 0x69 JumpB
	RemoveActor(var_3_object); // 0x6a Func
	
Label_108:
	var_9_object = var_4_object; // 0x6c PushT
	if(var_9_object == 0) goto Label_112; // 0x6d JumpB
	RemoveActor(var_2_object); // 0x6e Func
	
Label_112:
	return 0; // 0x70 Return
}


task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x75 PushV
	var_9_string = "cleanup"; // 0x76 PushS
	var_10_bool = var_6_string == var_9_string; // 0x77 Eq
	if(var_10_bool == 0) goto Label_140; // 0x78 JumpB
	var_0_bool = 1; // 0x79 TMovB
	IsLoaded(var_8_bool); // 0x7a Func
	var_11_bool = 0; // 0x7c PushV
	var_11_bool = 0; // 0x7d MovB
	var_12_bool = var_8_bool == 0; // 0x7e Not
	if(var_12_bool == 0) goto Label_133; // 0x7f JumpB
	var_13_bool = 0; // 0x80 PushV
	func_161(var_13_bool); // 0x81 NEW_2
	if(var_13_bool == 0) goto Label_133; // 0x83 JumpB
	var_11_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_11_bool == 0) goto Label_139; // 0x85 JumpB
	var_14_object = Obj(); // 0x86 PushV
	func_206(var_14_object); // 0x87 NEW_2
	RemoveActor(var_14_object); // 0x89 Func
	
Label_139:
	goto Label_144; // 0x8b Jump
	
Label_144:
	return 2; // 0x90 Return
	
Label_140:
	var_17_string = "restore"; // 0x8c PushS
	var_18_bool = var_6_string == var_17_string; // 0x8d Eq
	if(var_18_bool == 0) goto Label_144; // 0x8e JumpB
	var_0_bool = 0; // 0x8f TMovB
}


task_0_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool)
{
	var_6_bool = 0; // 0x91 PushV
	var_6_bool = 0; // 0x92 MovB
	var_7_bool = var_0_bool; // 0x93 PushT
	if(var_7_bool == 0) goto Label_154; // 0x94 JumpB
	var_8_bool = 0; // 0x95 PushV
	func_161(var_8_bool); // 0x96 NEW_2
	if(var_8_bool == 0) goto Label_154; // 0x98 JumpB
	var_6_bool = 1; // 0x99 MovB
	
Label_154:
	if(var_6_bool == 0) goto Label_160; // 0x9a JumpB
	var_9_object = Obj(); // 0x9b PushV
	func_206(var_9_object); // 0x9c NEW_2
	RemoveActor(var_9_object); // 0x9e Func
	
Label_160:
	return 0; // 0xa0 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_7_object); // 0x1 Func
	var_8_string = "cs_d1q01_morlok"; // 0x3 PushS
	var_9_string = "cs_play_all_trigger.bin"; // 0x4 PushS
	var_10_cvector = CVector(0.0, 0.0, 0.0); // 0x5 PushVec
	AddScriptedActor(var_10_cvector, var_8_string, var_9_string, var_7_object, var_10_cvector); // 0x6 Func
	var_11_string = "cs_d1q01_worker"; // 0x8 PushS
	var_12_string = "cs_play_all_trigger.bin"; // 0x9 PushS
	var_13_cvector = CVector(0.0, 0.0, 0.0); // 0xa PushVec
	AddScriptedActor(var_12_string, var_11_string, var_12_string, var_7_object, var_13_cvector); // 0xb Func
	var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; // 0xd PushV
	var_15_object = var_7_object; // 0xe Mov
	var_16_string = "d1q01_light"; // 0xf MovS
	var_17_string = "light_fire.xml"; // 0x10 MovS
	func_212(var_14_object, var_15_object, var_16_string, var_17_string); // 0x11 NEW_2
	var_3_object = var_14_object; // 0x12 TMov
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = ""; // 0x14 PushV
	var_23_object = var_7_object; // 0x15 Mov
	var_24_string = "pt_d1q01_fire"; // 0x16 MovS
	var_25_string = "scripted"; // 0x17 MovS
	var_26_string = "fire.xml"; // 0x18 MovS
	func_220(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string); // 0x19 NEW_2
	var_4_object = var_22_object; // 0x1a TMov
	func_113(); // 0x1d NEW_2
	return 2; // 0x1f Return
}


func_161(var_8_bool)
{
	var_8_bool = 1; // 0xa1 MovB
	return 0; // 0xa2 Return
}


func_163(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; // 0xa3 PushV
	var_23_bool = var_18_object == 0; // 0xa4 Not
	if(var_23_bool == 0) goto Label_167; // 0xa5 JumpB
	return 4; // 0xa6 Return
	
Label_167:
	var_24_string = "noaccess"; // 0xa7 PushS
	HasProperty(var_24_string, var_21_bool); // 0xa8 ObjFunc
	var_25_bool = var_21_bool; // 0xaa Push
	if(var_25_bool == 0) goto Label_181; // 0xab JumpB
	var_26_string = "noaccess"; // 0xac PushS
	GetProperty(var_26_string, var_22_int); // 0xad ObjFunc
	var_27_string = "noaccess"; // 0xaf PushS
	var_28_int = 1; // 0xb0 PushI
	var_29_int = var_22_int + var_28_int; // 0xb1 Add
	SetProperty(var_27_string, var_29_int); // 0xb2 ObjFunc
	goto Label_185; // 0xb4 Jump
	
Label_185:
	return 4; // 0xb9 Return
	
Label_181:
	var_30_string = "noaccess"; // 0xb5 PushS
	var_31_int = 1; // 0xb6 PushI
	SetProperty(var_30_string, var_31_int); // 0xb7 ObjFunc
}


func_186(var_35_object)
{
	var_36_int = 0; var_37_int = 0; // 0xba PushV
	var_38_bool = var_35_object == 0; // 0xbb Not
	if(var_38_bool == 0) goto Label_190; // 0xbc JumpB
	return 2; // 0xbd Return
	
Label_190:
	var_39_string = "noaccess"; // 0xbe PushS
	GetProperty(var_39_string, var_37_int); // 0xbf ObjFunc
	var_40_int = 1; // 0xc1 PushI
	var_41_bool = var_37_int > var_40_int; // 0xc2 GT
	if(var_41_bool == 0) goto Label_202; // 0xc3 JumpB
	var_42_string = "noaccess"; // 0xc4 PushS
	var_43_int = 1; // 0xc5 PushI
	var_44_int = var_37_int - var_43_int; // 0xc6 Sub
	SetProperty(var_42_string, var_44_int); // 0xc7 ObjFunc
	goto Label_205; // 0xc9 Jump
	
Label_205:
	return 2; // 0xcd Return
	
Label_202:
	var_45_string = "noaccess"; // 0xca PushS
	RemoveProperty(var_45_string); // 0xcb ObjFunc
}


func_206(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0xce PushV
	self(var_11_object); // 0xcf Func
	var_9_object = var_11_object; // 0xd1 Mov
	return 2; // 0xd2 Return
}


func_238(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0xee PushV
	FindActor(var_52_object, var_49_string); // 0xef Func
	var_53_bool = var_52_object == 0; // 0xf1 NullEq
	if(var_53_bool == 0) goto Label_245; // 0xf2 JumpB
	var_48_bool = 0; // 0xf3 MovB
	return 2; // 0xf4 Return
	
Label_245:
	Trigger(var_52_object, var_50_string); // 0xf5 Func
	var_48_bool = 1; // 0xf7 MovB
	return 2; // 0xf8 Return
}


func_113()
{
	
Label_113:
	Hold(); // 0x71 Func
	goto Label_113; // 0x73 Jump
}


func_212(var_14_object, var_15_object, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0xd4 PushV
	var_20_cvector = CVector(0.0, 0.0, 0.0); // 0xd5 PushVec
	var_21_cvector = CVector(0.0, 0.0, 1.0); // 0xd6 PushVec
	AddActor(var_19_object, var_16_string, var_15_object, var_20_cvector, var_21_cvector, var_17_string); // 0xd7 Func
	var_14_object = var_19_object; // 0xd9 Mov
	return 2; // 0xda Return
}


func_250()
{
	var_16_float = 0.5; // 0xfa PushF
	var_17_float = 0.886; // 0xfb PushF
	SetSepia(var_16_float, var_17_float); // 0xfc Func
	return 0; // 0xfe Return
}


func_220(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string)
{
	var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); // 0xdc PushV
	GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector); // 0xdd ObjFunc
	var_35_bool = var_31_bool == 0; // 0xdf Not
	if(var_35_bool == 0) goto Label_233; // 0xe0 JumpB
	var_36_string = "Locator "; // 0xe1 PushS
	var_37_int = var_36_string + var_24_string; // 0xe2 Add
	var_38_string = " doesn't exist"; // 0xe3 PushS
	var_39_int = var_37_int + var_38_string; // 0xe4 Add
	Trace(var_39_int); // 0xe5 Func
	var_34_object = 0; // 0xe7 SetNull
	goto Label_235; // 0xe8 Jump
	
Label_235:
	var_22_object = var_34_object; // 0xeb Mov
	return 8; // 0xec Return
	
Label_233:
	AddActorByType(var_34_object, var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string); // 0xe9 Func
}


func_255()
{
	var_46_int = 0; // 0xff PushI
	var_47_int = 0; // 0x100 PushI
	SetSepia(var_46_int, var_47_int); // 0x101 Func
	return 0; // 0x103 Return
}


