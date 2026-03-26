// @IMPORTS: Hold/0,IsPlayerActor/2,GetActorName/1,Trace/1,GetMainOutdoorScene/1,GetScene/1,Teleport/4,_strchr/3,_strsub/3,GetProperty/2
// @STRINGS: W:@|W:Wrong door name|W:No main outdoor scene|A:GetName|W:pt_|A:GetLocator|W:locked
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_23: op=0x4 vars=object

task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_int = 0; var_4_object = Obj(); var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_bool = 0; var_12_string = ""; var_13_int = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	IsPlayerActor(var_0_object, var_11_bool);
	var_21_bool = var_11_bool == 0; //@nz
	if(var_21_bool != 0) {
		return 20;
	}
	var_22_bool = 0;
	func_74(var_22_bool);
	if(var_22_bool != 0) {
		return 20;
	}
	GetActorName(var_12_string);
	var_27_int = 0; var_28_string = ""; var_29_string = "";
	var_12_string = var_28_string;
	func_64(var_27_int, var_28_string, "@");
	var_27_int = var_13_int;
	var_33_bool = var_13_int == (int)-1;
	if(var_33_bool != 0) {
		Trace("Wrong door name");
		return 20;
	}
	GetMainOutdoorScene(var_14_object);
	var_35_bool = var_14_object == 0; //@ne
	if(var_35_bool != 0) {
		Trace("No main outdoor scene");
		return 20;
	}
	GetScene(var_15_object);
	@@var_15_object:GetName(var_16_string);
	var_38_int = "pt_" + var_16_string;
	var_40_int = var_38_int + "@";
	var_41_string = ""; var_42_string = ""; var_43_int = 0;
	var_12_string = var_42_string;
	var_43_int = var_13_int + (int)1;
	func_69(var_41_string, var_42_string, var_43_int);
	var_17_string = var_40_int + var_41_string;
	Trace(var_17_string);
	@@var_14_object:GetLocator(var_17_string, var_18_bool, var_19_cvector, var_20_cvector);
	var_47_bool = var_18_bool;
	if(var_47_bool != 0) {
		Teleport(var_0_object, var_14_object, var_19_cvector, var_20_cvector);
	}
	return 20;
}
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_64(var_27_int, var_28_string, var_29_string)
{
	var_30_int = 0; var_31_int = 0;
	_strchr(var_31_int, var_28_string, var_29_string);
	var_31_int = var_27_int;
	return 2;
}


func_74(var_22_bool)
{
	var_23_int = 0; var_24_int = 0;
	GetProperty("locked", var_24_int);
	var_22_bool = var_24_int != (int)0;
	return 2;
}


func_69(var_41_string, var_42_string, var_43_int)
{
	var_45_string = ""; var_46_string = "";
	_strsub(var_46_string, var_42_string, var_43_int);
	var_46_string = var_41_string;
	return 2;
}


