// @IMPORTS: FindActor/2,WaitForAnimEnd/0,Sleep/1,GetPosition/1,Stop/0,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,GetScene/1
// @STRINGS: W:player|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @TASK_1: vars=bool,object params=6
// @EVENT_7: op=0x7e vars=int
// @EVENT_10: op=0x90 vars=object
// @EVENT_41: op=0x9b vars=object
// @STANDALONE_EVENT_41: op=0xfc vars=object
// @PE: 0x7e,0x90,0x9b,0xa4,0xfc

task_1_event_7(var_0_bool, var_1_object, var_2_int)
{
	var_4_bool = var_2_int != (int)0;
	if(var_4_bool != 0) {
		return 0;
	}
	var_5_bool = 0; var_6_object = Obj();
	var_6_object = var_1_object;
	func_164(var_5_bool, var_6_object);
	var_41_bool = var_5_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_1_event_10(var_0_bool, var_1_object, var_2_object)
{
	RequestClearPath(var_2_object);
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_object)
{
	func_148(var_2_object);
	var_2_object = Obj();
	func_252();
	return 0;
}


event_41(var_0_bool, var_1_object, var_2_object)
{
	return 0;
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	FindActor(var_3_object, "player");
	
Label_4:
	var_5_bool = var_3_object != 0; //@nn
	if(var_5_bool != 0) {
		var_6_bool = 0; var_7_object = Obj(); var_8_float = 0; var_9_float = 0; var_10_bool = 0; var_11_bool = 0;
		var_3_object = var_7_object;
		TaskCall(1);
		func_24(var_12_bool, var_13_object, var_6_bool, var_7_object, (float)200, (float)5000, (bool)1, (bool)1);
		TaskReturn();
		WaitForAnimEnd();
		Sleep((int)3);
		goto Label_4;
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_192(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj();
	var_42_bool = var_37_object == 0; //@ne
	if(var_42_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	var_43_bool = 0;
	var_43_bool = 0;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", (int)1);
	if(var_46_bool != 0) {
		var_47_bool = 0; var_48_object = Obj();
		var_37_object = var_48_object;
		func_187(var_47_bool, var_48_object);
		if(var_47_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	GetScene(var_40_object);
	var_51_bool = var_40_object == 0; //@ne
	if(var_51_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	@@var_37_object:GetScene(var_41_object);
	var_52_bool = var_40_object != var_41_object;
	if(var_52_bool != 0) {
		var_36_bool = 0;
		return 4;
	}
	var_36_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_164(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_228(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
	return 0;
}


func_228(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0;
	var_36_bool = 0; var_37_object = Obj();
	var_33_object = var_37_object;
	func_192(var_36_bool, var_37_object);
	var_53_bool = var_36_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_54_bool = 0; var_55_object = Obj(); var_56_string = "";
	var_33_object = var_55_object;
	func_175(var_54_bool, var_55_object, "noaccess");
	var_63_bool = var_54_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_32_bool = 1;
		return 2;
	}
	@@var_33_object:GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == (int)0;
	return 2;
}


func_171(var_80_string)
{
	var_80_string = "walk";
	return 0;
}


func_173(var_81_string)
{
	var_81_string = "run";
	return 0;
}


func_175(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0;
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", (int)2);
	var_62_bool = var_61_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	@@var_55_object:HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
	return 2;
}


func_148(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_24(var_0_bool, var_1_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_bool, var_11_bool)
{
	var_14_bool = 0; var_15_bool = 0; var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_object = Obj(); var_22_bool = 0; var_23_bool = 0; var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_object = Obj();
	var_0_bool = false;
	var_1_object = var_7_object;
	var_11_bool = var_23_bool;
	
Label_28:
	var_30_bool = 0; var_31_object = Obj();
	var_7_object = var_31_object;
	func_164(var_30_bool, var_31_object);
	var_66_bool = var_30_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_6_bool = 0;
		return 16;
	}
	@@var_7_object:GetPosition(var_25_cvector);
	GetPosition(var_26_cvector);
	var_27_cvector = var_25_cvector - var_26_cvector;
	var_28_float = var_27_cvector | var_27_cvector;
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_9_float > (int)0;
	if(var_69_bool != 0) {
		var_70_float = var_9_float * var_9_float;
		var_71_bool = var_28_float > var_70_float;
		if(var_71_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		Stop();
		var_6_bool = 0;
		return 16;
	}
	var_72_float = var_8_float * var_8_float;
	var_73_bool = var_28_float > var_72_float;
	if(var_73_bool != 0) {
		@@var_7_object:GetPFPosition(var_25_cvector);
		FindPathTo(var_29_object, var_25_cvector);
		var_74_bool = var_29_object != 0; //@nn
		if(var_74_bool != 0) {
			var_29_object = var_24_object;
			var_29_object = 0;
		}
		var_75_bool = var_24_object != 0; //@nn
		if(var_75_bool != 0) {
			var_76_bool = var_23_bool;
			if(var_76_bool == 0) goto Label_77;
			var_23_bool = 0;
			RotatePath(var_24_object, var_22_bool);
			var_77_bool = var_22_bool == 0; //@nz
			if(var_77_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_80_string = "";
				func_171(var_80_string);
				var_81_string = "";
				func_173(var_81_string);
				FollowPath(var_24_object, var_10_bool, var_22_bool, var_80_string, var_81_string);
				var_82_bool = var_22_bool == 0; //@nz
				if(var_82_bool != 0) {
					var_83_bool = var_0_bool;
					if(var_83_bool != 0) {
						var_24_object = 0;
						goto Label_124;
					EMIT "GOTO 0x61";
					}
				} else {
					var_24_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_22_bool);
					var_86_bool = var_22_bool == 0; //@nz
					if(var_86_bool != 0) {
						var_87_bool = var_0_bool;
						if(var_87_bool != 0) {
							var_24_object = 0;
							goto Label_124;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_124;
	}
			var_29_object = 0;
			goto Label_122;

		Label_122:
			var_24_object = 0;

		}
		goto Label_28;
	}
Label_124:
	var_6_bool = !var_0_bool;
	return 16;
	
}


func_187(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	@@var_48_object:IsDead(var_50_bool);
	var_50_bool = var_47_bool;
	return 2;
}


