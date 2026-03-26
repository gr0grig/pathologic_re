// @IMPORTS: DisableUpdate/0,SetVisibility/1,Hold/0,PlaySound/1,Trace/1,GetActorName/1,GetSceneByName/2,PlaySharedSound/1,Teleport/4,_strchr/3,_strsub/3,_strsub/4,CreateIntVector/1,SendWorldWndMessage/2,GetProperty/2
// @STRINGS: W:door_closed|W:Door is locked|W:Door is disease locked|W:Door is dead locked|W:@|W:Wrong door name|W:pt_|W:Destination scene '|W:' not found|A:GetLocator|W:door_open|W:Locator |W: not found in destination scene |A:add|W:dlocked
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xd vars=object

task_0_event_0(var_0_object)
{
	var_1_int = 0; var_2_string = ""; var_3_int = 0; var_4_string = ""; var_5_string = ""; var_6_object = Obj(); var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_int = 0; var_11_string = ""; var_12_int = 0; var_13_string = ""; var_14_string = ""; var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	func_151((int)0);
	var_19_int = var_10_int;
	var_24_bool = var_10_int == (int)0;
	if(var_24_bool != 0) {
		var_25_bool = 0;
		func_144(var_25_bool);
		if(var_25_bool != 0) {
			PlaySound("door_closed");
			var_31_int = 0;
			func_134((int)403);
			Trace("Door is locked");
			return 18;
		}
	} else {
			PlaySound("door_closed");
			var_71_bool = var_10_int == (int)1;
			if(var_71_bool != 0) {
				Trace("Door is disease locked");
				var_73_int = 0;
				func_134((int)401);
			} else {
				Trace("Door is dead locked");
				var_75_int = 0;
				func_134((int)402);
			}
			return 18;
	}
	GetActorName(var_11_string);
	var_36_int = 0; var_37_string = ""; var_38_string = "";
	var_11_string = var_37_string;
	func_119(var_36_int, var_37_string, "@");
	var_36_int = var_12_int;
	var_42_bool = var_12_int == (int)-1;
	if(var_42_bool != 0) {
		Trace("Wrong door name");
		return 18;
	}
	var_44_string = ""; var_45_string = ""; var_46_int = 0; var_47_int = 0;
	var_11_string = var_45_string;
	var_12_int = var_47_int;
	func_129(var_44_string, var_45_string, (int)0, var_47_int);
	var_44_string = var_13_string;
	var_51_string = ""; var_52_string = ""; var_53_int = 0;
	var_11_string = var_52_string;
	var_53_int = var_12_int + (int)1;
	func_124(var_51_string, var_52_string, var_53_int);
	var_14_string = "pt_" + var_51_string;
	GetSceneByName(var_15_object, var_13_string);
	var_57_bool = var_15_object == 0; //@ne
	if(var_57_bool != 0) {
		var_59_int = "Destination scene '" + var_13_string;
		var_61_int = var_59_int + "' not found";
		Trace(var_61_int);
		return 18;
	}
	@@var_15_object:GetLocator(var_14_string, var_16_bool, var_17_cvector, var_18_cvector);
	var_62_bool = var_16_bool;
	if(var_62_bool != 0) {
		PlaySharedSound("door_open");
		Teleport(var_0_object, var_15_object, var_17_cvector, var_18_cvector);
	} else {
		var_65_int = "Locator " + var_14_string;
		var_67_int = var_65_int + " not found in destination scene ";
		var_68_int = var_67_int + var_13_string;
		Trace(var_68_int);

	}
	return 18;
	
}
EMIT "Stack[-4] = 0";


main()
{
	DisableUpdate();
	func_6();
	return 0;
}


func_129(var_44_string, var_45_string, var_46_int, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	_strsub(var_49_string, var_45_string, var_46_int, var_47_int);
	var_49_string = var_44_string;
	return 2;
}


func_134(var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateIntVector(var_33_object);
	@@var_33_object:add(var_31_int);
	SendWorldWndMessage((int)200, var_33_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6()
{
	SetVisibility((bool)1);
	
Label_9:
	Hold();
	goto Label_9;
}
EMIT "Return(); Pop(0)";


func_144(var_25_bool)
{
	var_26_int = 0; var_27_int = 0;
	GetProperty("locked", var_27_int);
	var_25_bool = var_27_int != (int)0;
	return 2;
}


func_119(var_36_int, var_37_string, var_38_string)
{
	var_39_int = 0; var_40_int = 0;
	_strchr(var_40_int, var_37_string, var_38_string);
	var_40_int = var_36_int;
	return 2;
}


func_151(var_19_int)
{
	var_20_int = 0; var_21_int = 0;
	GetProperty("dlocked", var_21_int);
	var_21_int = var_19_int;
	return 2;
}


func_124(var_51_string, var_52_string, var_53_int)
{
	var_55_string = ""; var_56_string = "";
	_strsub(var_56_string, var_52_string, var_53_int);
	var_56_string = var_51_string;
	return 2;
}


