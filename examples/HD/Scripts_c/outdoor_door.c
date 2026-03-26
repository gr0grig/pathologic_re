// @IMPORTS: DisableUpdate/0,SetVisibility/1,Hold/0,PlaySound/1,Trace/1,GetActorName/1,GetSceneByName/2,PlaySharedSound/1,Teleport/4,_strchr/3,_strsub/3,_strsub/4,GetProperty/2
// @STRINGS: W:door_closed|W:Door is locked|W:@|W:Wrong door name|W:pt_|W:Destination scene '|W:' not found|A:GetLocator|W:door_open|W:Locator |W: not found in destination scene 
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xd vars=object

task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_string = ""; var_4_string = ""; var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_string = ""; var_10_int = 0; var_11_string = ""; var_12_string = ""; var_13_object = Obj(); var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0);
	var_17_bool = 0;
	func_100(var_17_bool);
	if(var_17_bool != 0) {
		PlaySound("door_closed");
		Trace("Door is locked");
		return 16;
	}
	GetActorName(var_9_string);
	var_24_int = 0; var_25_string = ""; var_26_string = "";
	var_9_string = var_25_string;
	func_85(var_24_int, var_25_string, "@");
	var_24_int = var_10_int;
	var_30_bool = var_10_int == (int)-1;
	if(var_30_bool != 0) {
		Trace("Wrong door name");
		return 16;
	}
	var_32_string = ""; var_33_string = ""; var_34_int = 0; var_35_int = 0;
	var_9_string = var_33_string;
	var_10_int = var_35_int;
	func_95(var_32_string, var_33_string, (int)0, var_35_int);
	var_32_string = var_11_string;
	var_39_string = ""; var_40_string = ""; var_41_int = 0;
	var_9_string = var_40_string;
	var_41_int = var_10_int + (int)1;
	func_90(var_39_string, var_40_string, var_41_int);
	var_12_string = "pt_" + var_39_string;
	GetSceneByName(var_13_object, var_11_string);
	var_45_bool = var_13_object == 0; //@ne
	if(var_45_bool != 0) {
		var_47_int = "Destination scene '" + var_11_string;
		var_49_int = var_47_int + "' not found";
		Trace(var_49_int);
		return 16;
	}
	@@var_13_object:GetLocator(var_12_string, var_14_bool, var_15_cvector, var_16_cvector);
	var_50_bool = var_14_bool;
	if(var_50_bool != 0) {
		PlaySharedSound("door_open");
		Teleport(var_0_object, var_13_object, var_15_cvector, var_16_cvector);
	} else {
		var_53_int = "Locator " + var_12_string;
		var_55_int = var_53_int + " not found in destination scene ";
		var_56_int = var_55_int + var_11_string;
		Trace(var_56_int);
	}
	return 16;
	
}
EMIT "Stack[-4] = 0";


main()
{
	DisableUpdate();
	func_6();
	return 0;
}


func_100(var_17_bool)
{
	var_18_int = 0; var_19_int = 0;
	GetProperty("locked", var_19_int);
	var_17_bool = var_19_int != (int)0;
	return 2;
}


func_6()
{
	SetVisibility((bool)1);
	
Label_9:
	Hold();
	goto Label_9;
}
EMIT "Return(); Pop(0)";


func_85(var_24_int, var_25_string, var_26_string)
{
	var_27_int = 0; var_28_int = 0;
	_strchr(var_28_int, var_25_string, var_26_string);
	var_28_int = var_24_int;
	return 2;
}


func_90(var_39_string, var_40_string, var_41_int)
{
	var_43_string = ""; var_44_string = "";
	_strsub(var_44_string, var_40_string, var_41_int);
	var_44_string = var_39_string;
	return 2;
}


func_95(var_32_string, var_33_string, var_34_int, var_35_int)
{
	var_36_string = ""; var_37_string = "";
	_strsub(var_37_string, var_33_string, var_34_int, var_35_int);
	var_37_string = var_32_string;
	return 2;
}


