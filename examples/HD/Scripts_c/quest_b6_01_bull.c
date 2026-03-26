// @IMPORTS: Hold/0,StopGroup0/0,sync/0,GetScene/1,AddActor/5,RemoveEnvelope/0,RemoveRTEnvelope/0,irand/2,PlayAnimation/2,WaitForAnimEnd/0,StopAnimation/0,IsLoaded/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,GetDirection/1,PlayGlobalSound/2,self/1,HasAnimation/3,RemoveActor/1
// @STRINGS: W:b6q01_bull_envelope|W:all|W:idle|W:cleanup|W:restore
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xd
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x22 vars=
// @TASK_2: vars= params=0
// @EVENT_6: op=0x3b vars=
// @STANDALONE_EVENT_26: op=0xbc vars=string
// @STANDALONE_EVENT_6: op=0xd4 vars=
// @STANDALONE_EVENT_32: op=0xdc vars=
// @PE: 0xd,0x22,0x3b,0xa4

task_0_event_5()
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_6()
{
	func_212();
	return 0;
}


task_2_event_6()
{
	func_212();
	func_102();
	return 0;
}


event_26(var_0_string)
{
	var_1_bool = 0; var_2_bool = 0;
	var_4_bool = var_0_string == "cleanup";
	if(var_4_bool != 0) {
		var_5_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
		IsLoaded(var_2_bool);
		var_6_bool = var_2_bool == 0; //@nz
		if(var_6_bool != 0) {
			var_7_object = Obj();
			func_151(var_7_object);
			RemoveActor(var_7_object);
		}
	} else {
		var_11_bool = var_0_string == "restore";
		if(var_11_bool == 0) goto Label_211;
		var_12_bool = GlobalVars[1];
		GlobalVars[1] = (bool)0;
	}
Label_211:
	return 2;
	
}


event_6()
{
	var_0_bool = GlobalVars[1];
	if(var_0_bool != 0) {
		var_1_object = Obj();
		func_151(var_1_object);
		RemoveActor(var_1_object);
	}
	return 0;
}


event_32()
{
	var_0_object = GlobalVars[0];
	if(var_0_object != 0) {
		var_1_object = GlobalVars[0];
		RemoveActor(var_1_object);
	}
	return 0;
}


main()
{
	func_20();
	func_38();
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_12_bool = 0;
	func_105(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool == 1) goto Label_0;
	return 0;
}


func_66()
{
	var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_string = ""; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = "";
	irand(var_18_int, (int)3);
	var_23_bool = var_18_int == 0; //@nz
	if(var_23_bool != 0) {
		func_170((int)0);
		var_24_int = var_19_int;
		var_38_int = var_19_int;
		if(var_38_int != 0) {
			irand(var_20_int, var_19_int);
			var_39_string = ""; var_40_int = 0;
			var_20_int = var_40_int;
			func_164(var_39_string, var_40_int);
			var_39_string = var_21_string;
			PlayAnimation("all", var_21_string);
			var_45_string = "";
			var_21_string = var_45_string;
			func_110(var_45_string);
			WaitForAnimEnd();
		}
	} else {
		PlayAnimation("all", "idle");
		WaitForAnimEnd();
	}
	return 8;
	
}


func_164(var_39_string, var_40_int)
{
	var_43_int = var_40_int + (int)1;
	var_39_string = "idle" + var_43_int;
	return 0;
}


func_38()
{
	RemoveEnvelope();
	RemoveRTEnvelope();
	
Label_42:
	var_8_bool = 0;
	func_105(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	TaskCall(2);
	func_66();
	TaskReturn();
	goto Label_42;
}
EMIT "Return(); Pop(0)";


func_102()
{
	StopAnimation();
	return 0;
}


func_105(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_170(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_27_int = 0;
	
Label_172:
	var_30_string = ""; var_31_int = 0;
	var_31_int = var_27_int + (int)1;
	func_157(var_30_string, var_31_int);
	HasAnimation(var_28_bool, "all", var_30_string);
	var_36_bool = var_28_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_27_int = var_27_int + (int)1;
		goto Label_172;
	}
	var_27_int = var_24_int;
	return 4;
	
}


func_110(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	IsExisting3DSound(var_54_bool, var_45_string);
	var_62_bool = var_54_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_55_int = 0;

	Label_116:
		var_64_int = var_55_int + (int)1;
		var_65_int = var_45_string + var_64_int;
		IsExisting3DSound(var_56_bool, var_65_int);
		var_66_bool = var_56_bool == 0; //@nz
		if(var_66_bool != 0) {
		} else {
			var_55_int = var_55_int + (int)1;
			goto Label_116;
		}
		var_67_bool = var_55_int == 0; //@nz
		if(var_67_bool != 0) {
			return 16;
		}
		irand(var_57_int, var_55_int);
		var_69_int = var_57_int + (int)1;
		var_45_string = var_45_string + var_69_int;
	}
	Is3DSoundLoaded(var_58_bool, var_45_string);
	var_70_bool = var_58_bool;
	if(var_70_bool != 0) {
		GetEyesHeight(var_59_float);
		GetDirection(var_60_cvector);
		var_61_cvector = var_60_cvector * (int)50;
		var_72_float = GetByIndex(var_61_cvector, 1);
		var_72_float = var_72_float + var_59_float;
		SetByIndex(var_61_cvector, 1) = var_72_float;
		PlayGlobalSound(var_45_string, var_61_cvector);
	}
	return 16;
	
}


func_20()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj();
	GetScene(var_2_object);
	AddActor(var_3_object, "b6q01_bull_envelope", var_2_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_7_object = GlobalVars[0];
	var_3_object = var_7_object;
	GlobalVars[0] = var_7_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_151(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	self(var_3_object);
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_157(var_30_string, var_31_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_31_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_31_int;
	}
	var_34_string = var_30_string;
	return 2;
}


