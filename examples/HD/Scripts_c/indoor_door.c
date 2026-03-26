// @IMPORTS: DisableUpdate/0,SetVisibility/1,Hold/0,PlaySound/1,Trace/1,GetActorName/1,GetMainOutdoorScene/1,GetScene/1,FindActor/2,PlaySharedSound/1,Teleport/4,_strchr/3,_strsub/3,GetProperty/2
// @STRINGS: W:door_closed|W:Door is locked|W:@|W:Wrong door name|W:No main outdoor scene|A:GetName|W:pt_|A:GetLocator|W:lp|A:GetProperty|W:Outdoor door was unlocked|A:SetProperty|W:door_open|W:HasProperty|A:HasProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x9 vars=object

task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = ""; var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_bool = 0; var_13_string = ""; var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; var_19_string = ""; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0;
	var_25_bool = 0;
	func_122(var_25_bool);
	if(var_25_bool != 0) {
		PlaySound("door_closed");
		Trace("Door is locked");
		return 24;
	}
	GetActorName(var_13_string);
	var_32_int = 0; var_33_string = ""; var_34_string = "";
	var_13_string = var_33_string;
	func_112(var_32_int, var_33_string, "@");
	var_32_int = var_14_int;
	var_38_bool = var_14_int == (int)-1;
	if(var_38_bool != 0) {
		Trace("Wrong door name");
		return 24;
	}
	GetMainOutdoorScene(var_15_object);
	var_40_bool = var_15_object == 0; //@ne
	if(var_40_bool != 0) {
		Trace("No main outdoor scene");
		return 24;
	}
	GetScene(var_16_object);
	@@var_16_object:GetName(var_17_string);
	var_42_string = ""; var_43_string = ""; var_44_int = 0;
	var_13_string = var_43_string;
	var_44_int = var_14_int + (int)1;
	func_117(var_42_string, var_43_string, var_44_int);
	var_42_string = var_18_string;
	var_49_int = "pt_" + var_17_string;
	var_51_int = var_49_int + "@";
	var_19_string = var_51_int + var_18_string;
	Trace(var_19_string);
	@@var_15_object:GetLocator(var_19_string, var_20_bool, var_21_cvector, var_22_cvector);
	var_52_bool = var_20_bool;
	if(var_52_bool != 0) {
		var_54_int = var_17_string + "@";
		var_55_int = var_54_int + var_18_string;
		FindActor(var_23_object, var_55_int);
		var_56_object = var_23_object;
		if(var_56_object != 0) {
			var_57_bool = 0; var_58_object = Obj(); var_59_string = "";
			var_23_object = var_58_object;
			func_100(var_57_bool, var_58_object, "lp");
			if(var_57_bool != 0) {
				@@var_23_object:GetProperty("lp", var_24_bool);
				var_67_bool = var_24_bool;
				if(var_67_bool != 0) {
					Trace("Outdoor door was unlocked");
					@@var_23_object:SetProperty("locked", (bool)0);
				}
			}
		}
		PlaySharedSound("door_open");
		Teleport(var_0_object, var_15_object, var_21_cvector, var_22_cvector);
		var_23_object = 0;
	}
	return 24;
}
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";


main()
{
	DisableUpdate();
	SetVisibility((bool)1);
	
Label_5:
	Hold();
	goto Label_5;
}
EMIT "Return(); Pop(0)";


func_112(var_32_int, var_33_string, var_34_string)
{
	var_35_int = 0; var_36_int = 0;
	_strchr(var_36_int, var_33_string, var_34_string);
	var_36_int = var_32_int;
	return 2;
}


func_122(var_25_bool)
{
	var_26_int = 0; var_27_int = 0;
	GetProperty("locked", var_27_int);
	var_25_bool = var_27_int != (int)0;
	return 2;
}


func_100(var_57_bool, var_58_object, var_59_string)
{
	var_60_bool = 0; var_61_bool = 0;
	var_64_bool = IsFuncExist(var_58_object, "HasProperty", (int)2);
	var_65_bool = var_64_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_57_bool = 0;
		return 2;
	}
	@@var_58_object:HasProperty(var_59_string, var_61_bool);
	var_61_bool = var_57_bool;
	return 2;
}


func_117(var_42_string, var_43_string, var_44_int)
{
	var_46_string = ""; var_47_string = "";
	_strsub(var_47_string, var_43_string, var_44_int);
	var_47_string = var_42_string;
	return 2;
}


