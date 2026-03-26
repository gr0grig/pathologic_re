// @IMPORTS: SetVisibility/1,Hold/0,PlaySound/1,Trace/1,GetActorName/1,GetMainOutdoorScene/1,GetScene/1,PlaySharedSound/1,Teleport/4,_strchr/3,_strsub/3,GetProperty/2
// @STRINGS: W:door_closed|W:Door is locked|W:@|W:Wrong door name|W:No main outdoor scene|A:GetName|W:pt_|A:GetLocator|W:door_open
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x7 vars=object

task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_string = ""; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_string = ""; var_15_string = ""; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	var_19_bool = 0;
	func_81(var_19_bool);
	if(var_19_bool != 0) {
		PlaySound("door_closed");
		Trace("Door is locked");
		return 18;
	}
	GetActorName(var_10_string);
	var_26_int = 0; var_27_string = ""; var_28_string = "";
	var_10_string = var_27_string;
	func_71(var_26_int, var_27_string, "@");
	var_26_int = var_11_int;
	var_32_bool = var_11_int == (int)-1;
	if(var_32_bool != 0) {
		Trace("Wrong door name");
		return 18;
	}
	GetMainOutdoorScene(var_12_object);
	var_34_bool = var_12_object == 0; //@ne
	if(var_34_bool != 0) {
		Trace("No main outdoor scene");
		return 18;
	}
	GetScene(var_13_object);
	@@var_13_object:GetName(var_14_string);
	var_37_int = "pt_" + var_14_string;
	var_39_int = var_37_int + "@";
	var_40_string = ""; var_41_string = ""; var_42_int = 0;
	var_10_string = var_41_string;
	var_42_int = var_11_int + (int)1;
	func_76(var_40_string, var_41_string, var_42_int);
	var_15_string = var_39_int + var_40_string;
	Trace(var_15_string);
	@@var_12_object:GetLocator(var_15_string, var_16_bool, var_17_cvector, var_18_cvector);
	var_46_bool = var_16_bool;
	if(var_46_bool != 0) {
		PlaySharedSound("door_open");
		Teleport(var_0_object, var_12_object, var_17_cvector, var_18_cvector);
	}
	return 18;
}
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


main()
{
	SetVisibility((bool)1);
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_81(var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	GetProperty("locked", var_21_int);
	var_19_bool = var_21_int != (int)0;
	return 2;
}


func_76(var_40_string, var_41_string, var_42_int)
{
	var_44_string = ""; var_45_string = "";
	_strsub(var_45_string, var_41_string, var_42_int);
	var_45_string = var_40_string;
	return 2;
}


func_71(var_26_int, var_27_string, var_28_string)
{
	var_29_int = 0; var_30_int = 0;
	_strchr(var_30_int, var_27_string, var_28_string);
	var_30_int = var_26_int;
	return 2;
}


