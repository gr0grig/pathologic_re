// @IMPORTS: Sleep/1,GetPosition/1,GetDirection/1,WaitForAnimEnd/0,PlayAnimation/2,GetScene/1,RemoveActor/1,RotateAsync/4,StopAsync/0,Rotate/2,SetTimer/2,MovePoint/3,KillTimer/1,Teleport/4,Stop/0,self/1,Trace/1,FindActor/2,Trigger/2,Hold/0
// @STRINGS: A:size|A:get|W:all|W:attack_begin|W:attack_end|W:pt_ratf|W:rats_manager|W:race_over|W:rotate_left|W:rotate_right|A:GetLocator|W:Locator '|W:' doesn't exist
// @GLOBALS: 0:object:Race,1:int:Index
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @TASK_1: vars= params=2
// @EVENT_7: op=0xaf vars=int
// @STANDALONE_EVENT_6: op=0xe6 vars=
// @PE: 0xaf

task_1_event_7(var_0_int)
{
	var_2_bool = var_0_int == (int)0;
	if(var_2_bool != 0) {
		Stop();
	}
	return 0;
}


event_6()
{
	var_0_object = Obj();
	func_187(var_0_object);
	RemoveActor(var_0_object);
	Hold();
	return 0;
}


main()
{
	var_0_cvector = CVector(0,0,0); var_1_cvector = CVector(0,0,0); var_2_int = 0; var_3_bool = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_bool = 0; var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_int = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_object = Obj();
	Sleep((int)1);
	GetPosition(var_9_cvector);
	GetDirection(var_10_cvector);
	var_19_cvector = CVector(0,0,0); var_20_bool = 0;
	var_22_float = var_10_cvector * (float)100.0;
	var_19_cvector = var_9_cvector + var_22_float;
	TaskCall(1);
	func_118(var_19_cvector, (bool)0);
	TaskReturn();
	var_11_int = 0;
	var_61_object = GlobalVars[0];
	@@var_61_object:size(var_13_int);
	var_14_int = 0;
	
Label_23:
	var_62_bool = var_14_int < var_13_int;
	if(var_62_bool != 0) {
		var_63_object = GlobalVars[0];
		@@var_63_object:get(var_15_int, var_14_int);
		var_64_bool = var_15_int != var_11_int;
		if(var_64_bool != 0) {
			var_16_bool = 0;
			var_65_bool = var_15_int < var_11_int;
			if(var_65_bool != 0) {
				var_66_bool = (bool)1;
				if(var_66_bool != 0) {
					var_16_bool = 1;
					var_12_bool = 0;
				}
			} else {
				var_75_bool = var_12_bool == 0; //@nz
				if(var_75_bool == 0) goto Label_42;
				var_16_bool = 1;
				var_12_bool = 1;
		}
			WaitForAnimEnd();
			PlayAnimation("all", "attack_begin");
			WaitForAnimEnd();
			PlayAnimation("all", "attack_end");
			WaitForAnimEnd();
			PlayAnimation("all", "attack_begin");
			WaitForAnimEnd();
			PlayAnimation("all", "attack_end");
			WaitForAnimEnd();
	}
		GetScene(var_17_object);
		var_84_cvector = CVector(0,0,0); var_85_bool = 0;
		var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_string = "";
		var_17_object = var_87_object;
		var_90_int = GlobalVars[1];
		var_88_string = "pt_ratf" + var_90_int;
		func_203(var_86_cvector, var_87_object, var_88_string);
		var_86_cvector = var_84_cvector;
		var_85_bool = !var_12_bool;
		TaskCall(1);
		func_118(var_84_cvector, var_85_bool);
		TaskReturn();
		var_100_bool = 0; var_101_string = ""; var_102_string = "";
		var_104_int = GlobalVars[1];
		var_102_string = "race_over" + var_104_int;
		func_218(var_100_bool, "rats_manager", var_102_string);
		Sleep((int)3);
		var_109_object = Obj();
		func_187(var_109_object);
		RemoveActor(var_109_object);
		var_67_cvector = CVector(0,0,0); var_68_bool = 0;
		var_70_float = var_10_cvector * (float)100.0;
		var_72_int = var_15_int + (int)1;
		var_73_float = var_70_float * var_72_int;
		var_67_cvector = var_9_cvector + var_73_float;
		var_16_bool = var_68_bool;
		TaskCall(1);
		func_118(var_67_cvector, var_68_bool);
		TaskReturn();
		var_15_int = var_11_int;
		goto Label_82;
		var_14_int = var_14_int + (int)1;
		goto Label_23;
	}
	return 18;
	
}
EMIT "Stack[-1] = 0";


func_193(var_50_cvector, var_51_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_51_cvector | var_51_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_50_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_50_cvector = var_51_cvector / var_56_float;
	return 2;
}


func_203(var_86_cvector, var_87_object, var_88_string)
{
	var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_cvector = CVector(0,0,0);
	@@var_87_object:GetLocator(var_88_string, var_93_bool, var_94_cvector);
	var_95_bool = var_93_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_97_int = "Locator '" + var_88_string;
		var_99_int = var_97_int + "' doesn't exist";
		Trace(var_99_int);
		var_86_cvector = CVector(0.0, 0.0, 0.0);
		return 4;
	}
	var_94_cvector = var_86_cvector;
	return 4;
}


func_182(var_52_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	var_54_cvector = var_52_cvector;
	return 2;
}


func_118(var_19_cvector, var_20_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_bool = 0; var_27_object = Obj(); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_object = Obj();
	var_33_bool = var_20_bool;
	if(var_33_bool != 0) {
		WaitForAnimEnd();
		GetPosition(var_28_cvector);
		var_29_cvector = var_19_cvector - var_28_cvector;
		var_34_float = GetByIndex(var_29_cvector, 0);
		var_35_float = GetByIndex(var_29_cvector, 2);
		RotateAsync(var_34_float, var_35_float, (float)6.2831854820251465, var_30_bool);
		var_38_bool = var_30_bool;
		if(var_38_bool != 0) {
			var_39_string = "rotate_left";
		} else {
			var_60_string = "rotate_right";
		}
		PlayAnimation("all", var_39_string);
		WaitForAnimEnd();
		StopAsync();
		var_40_float = GetByIndex(var_29_cvector, 0);
		var_41_float = GetByIndex(var_29_cvector, 2);
		Rotate(var_40_float, var_41_float);
	}
	SetTimer((int)0, (int)10);
	MovePoint(var_19_cvector, (bool)1, var_31_bool);
	KillTimer((int)0);
	var_46_bool = var_31_bool == 0; //@nz
	if(var_46_bool != 0) {
		GetScene(var_32_object);
		var_47_object = Obj();
		func_187(var_47_object);
		var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
		var_52_cvector = CVector(0,0,0);
		func_182(var_52_cvector);
		var_51_cvector = var_19_cvector - var_52_cvector;
		func_193(var_50_cvector, var_51_cvector);
		Teleport(var_47_object, var_32_object, var_19_cvector, var_50_cvector);
		var_32_object = 0;
	}
	return 10;
	
}


func_218(var_100_bool, var_101_string, var_102_string)
{
	var_105_object = Obj(); var_106_object = Obj();
	FindActor(var_106_object, var_101_string);
	var_107_bool = var_106_object == 0; //@ne
	if(var_107_bool != 0) {
		var_100_bool = 0;
		return 2;
	}
	Trigger(var_106_object, var_102_string);
	var_100_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_187(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj();
	self(var_49_object);
	var_49_object = var_47_object;
	return 2;
}
EMIT "Stack[-1] = 0";


