// @IMPORTS: FindActor/2,WaitForAnimEnd/0,Sleep/1,GetPosition/1,Stop/0,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,Trace/1,Hold/0,StopGroup0/0,GetScene/1
// @STRINGS: W:player|W:fstop|W:fgo|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:Waiting for your orders!|W:Following you!|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:frun|W:fwalk
// @GLOBALS: 0:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_1000: op=0x1d vars=string,string
// @TASK_1: vars=bool,object,bool params=2
// @EVENT_1000: op=0x3b vars=string,string
// @EVENT_7: op=0xb5 vars=int
// @EVENT_10: op=0xc7 vars=object
// @EVENT_41: op=0xd2 vars=object
// @TASK_2: vars= params=0
// @EVENT_1000: op=0xef vars=string,string
// @STANDALONE_EVENT_41: op=0x149 vars=object
// @STANDALONE_EVENT_1000: op=0x14b vars=string,string
// @PE: 0x1d,0x2d,0x3b,0xb5,0xc7,0xd2,0xdb,0xef,0x149,0x14b

task_0_event_1000(var_0_string, var_1_string, var_2_bool, var_3_object, var_4_bool)
{
	var_6_bool = var_3_object == "fstop";
	if(var_6_bool != 0) {
		TaskCall(2);
		func_230();
		TaskReturn();
	} else {
		var_9_string = ""; var_10_string = "";
		var_3_object = var_9_string;
		var_4_bool = var_10_string;
		func_331();
	}
	return 0;
	
}


task_1_event_1000(var_0_bool, var_1_object, var_2_bool, var_3_string, var_4_string)
{
	var_6_bool = var_3_string == "fstop";
	if(var_6_bool != 0) {
		var_2_bool = true;
		func_203(var_4_string);
	} else {
		var_9_bool = var_3_string == "fgo";
		if(var_9_bool != 0) {
			var_2_bool = false;
			goto Label_78;
		}
		var_10_string = ""; var_11_string = "";
		var_3_string = var_10_string;
		var_4_string = var_11_string;
		func_331();
	}
Label_78:
	return 0;
	
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_int)
{
	var_5_bool = var_3_int != (int)0;
	if(var_5_bool != 0) {
		return 0;
	}
	var_6_bool = 0; var_7_object = Obj();
	var_7_object = var_1_object;
	func_219(var_6_bool, var_7_object);
	var_42_bool = var_6_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	RequestClearPath(var_3_object);
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	func_203(var_3_object);
	var_3_object = Obj();
	func_329();
	return 0;
}


task_2_event_1000(var_0_bool, var_1_object, var_2_bool, var_3_string, var_4_string)
{
	var_6_bool = var_3_string == "fgo";
	if(var_6_bool != 0) {
		StopGroup0();
	} else {
		var_7_string = ""; var_8_string = "";
		var_3_string = var_7_string;
		var_4_string = var_8_string;
		func_331();
	}
	return 0;
	
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	return 0;
}


event_1000(var_0_bool, var_1_object, var_2_bool, var_3_string, var_4_string)
{
	var_6_bool = var_3_string == "frun";
	if(var_6_bool != 0) {
		var_7_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
	} else {
		var_9_bool = var_3_string == "fwalk";
		if(var_9_bool == 0) goto Label_345;
		var_10_bool = GlobalVars[0];
		GlobalVars[0] = (bool)0;
	}
Label_345:
	return 0;
	
}


main(var_0_bool, var_1_object, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj();
	var_5_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	FindActor(var_4_object, "player");
	
Label_7:
	var_7_bool = var_4_object != 0; //@nn
	if(var_7_bool != 0) {
		var_8_bool = 0; var_9_object = Obj();
		var_4_object = var_9_object;
		TaskCall(1);
		func_45(var_12_bool, var_8_bool, var_9_object);
		TaskReturn();
		if(var_10_bool != 0) {
			TaskCall(2);
			func_230();
			TaskReturn();
		}
		WaitForAnimEnd();
		Sleep((int)3);
		goto Label_7;
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_226(var_86_string)
{
	var_86_string = "walk";
	return 0;
}


func_228(var_87_string)
{
	var_87_string = "run";
	return 0;
}


func_230()
{
	Trace("Waiting for your orders!");
	Hold();
	Trace("Following you!");
	return 0;
}


func_264(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_bool = 0;
	@@var_54_object:IsDead(var_56_bool);
	var_56_bool = var_53_bool;
	return 2;
}


func_203(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_45(var_2_bool, var_8_bool, var_9_object)
{
	var_2_bool = false;
	var_13_bool = 0; var_14_object = Obj(); var_15_float = 0; var_16_float = 0; var_17_bool = 0; var_18_bool = 0;
	var_9_object = var_14_object;
	var_19_bool = GlobalVars[0];
	var_19_bool = var_17_bool;
	func_79(var_8_bool, var_9_object, var_13_bool, var_14_object, (float)200, (float)10000, var_17_bool, (bool)1);
	var_8_bool = var_2_bool;
	return 0;
}


func_269(var_42_bool, var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj();
	var_48_bool = var_43_object == 0; //@ne
	if(var_48_bool != 0) {
		var_42_bool = 0;
		return 4;
	}
	var_49_bool = 0;
	var_49_bool = 0;
	var_52_bool = IsFuncExist(var_43_object, "IsDead", (int)1);
	if(var_52_bool != 0) {
		var_53_bool = 0; var_54_object = Obj();
		var_43_object = var_54_object;
		func_264(var_53_bool, var_54_object);
		if(var_53_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		var_42_bool = 0;
		return 4;
	}
	GetScene(var_46_object);
	var_57_bool = var_46_object == 0; //@ne
	if(var_57_bool != 0) {
		var_42_bool = 0;
		return 4;
	}
	@@var_43_object:GetScene(var_47_object);
	var_58_bool = var_46_object != var_47_object;
	if(var_58_bool != 0) {
		var_42_bool = 0;
		return 4;
	}
	var_42_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_79(var_0_bool, var_1_object, var_13_bool, var_14_object, var_15_float, var_16_float, var_17_bool, var_18_bool)
{
	var_20_bool = 0; var_21_bool = 0; var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_object = Obj();
	var_0_bool = false;
	var_1_object = var_14_object;
	var_18_bool = var_29_bool;
	
Label_83:
	var_36_bool = 0; var_37_object = Obj();
	var_14_object = var_37_object;
	func_219(var_36_bool, var_37_object);
	var_72_bool = var_36_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_13_bool = 0;
		return 16;
	}
	@@var_14_object:GetPosition(var_31_cvector);
	GetPosition(var_32_cvector);
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_34_float = var_33_cvector | var_33_cvector;
	var_73_bool = 0;
	var_73_bool = 0;
	var_75_bool = var_16_float > (int)0;
	if(var_75_bool != 0) {
		var_76_float = var_16_float * var_16_float;
		var_77_bool = var_34_float > var_76_float;
		if(var_77_bool != 0) {
			var_73_bool = 1;
		}
	}
	if(var_73_bool != 0) {
		Stop();
		var_13_bool = 0;
		return 16;
	}
	var_78_float = var_15_float * var_15_float;
	var_79_bool = var_34_float > var_78_float;
	if(var_79_bool != 0) {
		@@var_14_object:GetPFPosition(var_31_cvector);
		FindPathTo(var_35_object, var_31_cvector);
		var_80_bool = var_35_object != 0; //@nn
		if(var_80_bool != 0) {
			var_35_object = var_30_object;
			var_35_object = 0;
		}
		var_81_bool = var_30_object != 0; //@nn
		if(var_81_bool != 0) {
			var_82_bool = var_29_bool;
			if(var_82_bool == 0) goto Label_132;
			var_29_bool = 0;
			RotatePath(var_30_object, var_28_bool);
			var_83_bool = var_28_bool == 0; //@nz
			if(var_83_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_86_string = "";
				func_226(var_86_string);
				var_87_string = "";
				func_228(var_87_string);
				FollowPath(var_30_object, var_17_bool, var_28_bool, var_86_string, var_87_string);
				var_88_bool = var_28_bool == 0; //@nz
				if(var_88_bool != 0) {
					var_89_bool = var_0_bool;
					if(var_89_bool != 0) {
						var_30_object = 0;
						goto Label_179;
					EMIT "GOTO 0x98";
					}
				} else {
					var_30_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_28_bool);
					var_92_bool = var_28_bool == 0; //@nz
					if(var_92_bool != 0) {
						var_93_bool = var_0_bool;
						if(var_93_bool != 0) {
							var_30_object = 0;
							goto Label_179;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_179;
	}
			var_35_object = 0;
			goto Label_177;

		Label_177:
			var_30_object = 0;

		}
		goto Label_83;
	}
Label_179:
	var_13_bool = !var_0_bool;
	return 16;
	
}


func_305(var_38_bool, var_39_object)
{
	var_40_int = 0; var_41_int = 0;
	var_42_bool = 0; var_43_object = Obj();
	var_39_object = var_43_object;
	func_269(var_42_bool, var_43_object);
	var_59_bool = var_42_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_38_bool = 0;
		return 2;
	}
	var_60_bool = 0; var_61_object = Obj(); var_62_string = "";
	var_39_object = var_61_object;
	func_252(var_60_bool, var_61_object, "noaccess");
	var_69_bool = var_60_bool == 0; //@nz
	if(var_69_bool != 0) {
		var_38_bool = 1;
		return 2;
	}
	@@var_39_object:GetProperty("noaccess", var_41_int);
	var_38_bool = var_41_int == (int)0;
	return 2;
}


func_219(var_36_bool, var_37_object)
{
	var_38_bool = 0; var_39_object = Obj();
	var_37_object = var_39_object;
	func_305(var_38_bool, var_39_object);
	var_38_bool = var_36_bool;
	return 0;
}


func_252(var_60_bool, var_61_object, var_62_string)
{
	var_63_bool = 0; var_64_bool = 0;
	var_67_bool = IsFuncExist(var_61_object, "HasProperty", (int)2);
	var_68_bool = var_67_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_60_bool = 0;
		return 2;
	}
	@@var_61_object:HasProperty(var_62_string, var_64_bool);
	var_64_bool = var_60_bool;
	return 2;
}


