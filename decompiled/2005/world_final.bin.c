task_0_event_26(var_0_object, var_1_string)
{
	var_2_string = "world trigger "; // 0x2d PushS
	var_3_int = var_2_string + var_1_string; // 0x2e Add
	Trace(var_3_int); // 0x2f Func
	var_4_string = "open"; // 0x31 PushS
	var_5_bool = var_1_string == var_4_string; // 0x32 Eq
	if(var_5_bool == 0) goto Label_56; // 0x33 JumpB
	func_88(); // 0x35 NEW_2
	goto Label_64; // 0x37 Jump
	
Label_64:
	return 0; // 0x40 Return
	
Label_56:
	var_25_string = "exit"; // 0x38 PushS
	var_26_bool = var_1_string == var_25_string; // 0x39 Eq
	if(var_26_bool == 0) goto Label_64; // 0x3a JumpB
	RemoveWorld(); // 0x3b Func
	var_27_string = "gameover_credits.xml"; // 0x3d PushS
	GameOver(var_27_string); // 0x3e Func
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_string = "World inited"; // 0x1 PushS
	Trace(var_3_string); // 0x2 Func
	var_4_int = 0; // 0x4 PushI
	var_5_int = 4; // 0x5 PushI
	SetSaveProperty(var_4_int, var_5_int); // 0x6 Func
	func_22(var_2_object); // 0x9 NEW_2
	sync(); // 0xb Func
	var_20_string = "final_quest_actor"; // 0xd PushS
	var_21_string = "final_quest_actor.xml"; // 0xe PushS
	AddBlankActorFromXml(var_2_object, var_0_object, var_20_string, var_21_string); // 0xf Func
	
Label_17:
	Hold(); // 0x11 Func
	goto Label_17; // 0x13 Jump
}


func_88()
{
	var_6_string = "exiting from game"; // 0x58 PushS
	Trace(var_6_string); // 0x59 Func
	func_65(); // 0x5c NEW_2
	var_19_bool = 0; var_20_string = ""; var_21_string = ""; // 0x5e PushV
	var_20_string = "final_quest_actor"; // 0x5f MovS
	var_21_string = "whiten"; // 0x60 MovS
	func_100(var_19_bool, var_20_string, var_21_string); // 0x61 NEW_2
	return 0; // 0x63 Return
}


func_65()
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_bool = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_bool = 0; // 0x41 PushV
	var_13_int = 0; // 0x42 PushI
	GetGroupActors(var_10_object, var_13_int); // 0x43 TObjFunc
	var_14_string = "door begin"; // 0x45 PushS
	Trace(var_14_string); // 0x46 Func
	
Label_72:
	Next(var_12_bool, var_11_object); // 0x48 ObjFunc
	var_15_bool = var_12_bool; // 0x4a Push
	if(var_15_bool == 0) goto Label_85; // 0x4b JumpB
	var_16_object = var_10_object; // 0x4c Push
	if(var_16_object == 0) goto Label_84; // 0x4d JumpB
	var_17_string = "door"; // 0x4e PushS
	Trace(var_17_string); // 0x4f Func
	var_18_string = "open"; // 0x51 PushS
	Trigger(var_11_object, var_18_string); // 0x52 Func
	
Label_84:
	goto Label_72; // 0x54 Jump
	
Label_85:
	return 6; // 0x55 Return
}


func_100(var_19_bool, var_20_string, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x64 PushV
	FindActor(var_23_object, var_20_string); // 0x65 Func
	var_24_bool = var_23_object == 0; // 0x67 NullEq
	if(var_24_bool == 0) goto Label_107; // 0x68 JumpB
	var_19_bool = 0; // 0x69 MovB
	return 2; // 0x6a Return
	
Label_107:
	Trigger(var_23_object, var_21_string); // 0x6b Func
	var_19_bool = 1; // 0x6d MovB
	return 2; // 0x6e Return
}


func_22(var_0_object)
{
	var_6_object = Obj(); var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x16 PushV
	var_14_string = "player"; // 0x17 PushS
	FindActor(var_10_object, var_14_string); // 0x18 Func
	var_15_string = "final_theater"; // 0x1a PushS
	GetSceneByName(var_0_object, var_15_string); // 0x1b Func
	var_16_bool = var_0_object == 0; // 0x1d Not
	if(var_16_bool == 0) goto Label_35; // 0x1e JumpB
	var_17_string = "Final scene not found"; // 0x1f PushS
	Trace(var_17_string); // 0x20 Func
	return 8; // 0x22 Return
	
Label_35:
	var_18_string = "birth"; // 0x23 PushS
	GetLocator(var_18_string, var_11_bool, var_12_cvector, var_13_cvector); // 0x24 TObjFunc
	var_19_bool = var_11_bool; // 0x26 Push
	if(var_19_bool == 0) goto Label_42; // 0x27 JumpB
	Teleport(var_10_object, var_0_object, var_12_cvector, var_13_cvector); // 0x28 Func
	
Label_42:
	return 8; // 0x2a Return
}


