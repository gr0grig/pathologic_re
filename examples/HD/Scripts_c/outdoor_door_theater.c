// @IMPORTS: DisableUpdate/0,SetVisibility/1,Hold/0,PlaySound/1,Trace/1,GetActorName/1,GetSceneByName/2,PlaySharedSound/1,Teleport/4,_strchr/3,_strsub/3,_strsub/4,GetGameTime/1,GetProperty/2,GetVariable/2,SetVariable/2,PlayMovie/1
// @STRINGS: W:door_closed|W:Door is locked|W:@|W:Wrong door name|W:pt_|W:Destination scene '|W:' not found|A:GetLocator|W:door_open|W:Locator |W: not found in destination scene |W:Performance|W:NightMasks|W:.wmv
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x6 vars=object
// @PE: 0x6

task_0_event_0(var_0_object)
{
	var_1_bool = 0;
	func_137(var_1_bool);
	if(var_1_bool != 0) {
		func_161();
	}
	var_40_object = Obj();
	var_0_object = var_40_object;
	func_26(var_40_object);
	return 0;
}


main()
{
	DisableUpdate();
	func_19();
	return 0;
}


func_161()
{
	var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0;
	func_113((int)0);
	var_30_int = var_28_int;
	var_32_int = "Performance" + var_28_int;
	SetVariable(var_32_int, (int)1);
	var_36_int = var_28_int - (int)1;
	var_37_int = "NightMasks" + var_36_int;
	var_39_int = var_37_int + ".wmv";
	PlayMovie(var_39_int);
	return 4;
}


func_130(var_57_bool)
{
	var_58_int = 0; var_59_int = 0;
	GetProperty("locked", var_59_int);
	var_57_bool = var_59_int != (int)0;
	return 2;
}


func_98(var_64_int, var_65_string, var_66_string)
{
	var_67_int = 0; var_68_int = 0;
	_strchr(var_68_int, var_65_string, var_66_string);
	var_68_int = var_64_int;
	return 2;
}


func_122(var_8_int)
{
	var_9_float = 0; var_10_float = 0;
	GetGameTime(var_10_float);
	var_11_int = 0;
	var_10_float = var_11_int;
	var_8_int = var_11_int % (int)24;
	return 2;
}


func_103(var_79_string, var_80_string, var_81_int)
{
	var_83_string = ""; var_84_string = "";
	_strsub(var_84_string, var_80_string, var_81_int);
	var_84_string = var_79_string;
	return 2;
}


func_137(var_1_bool)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0;
	func_122((int)0);
	var_8_int = var_5_int;
	var_14_bool = var_5_int < (int)6;
	if(var_14_bool != 0) {
		func_113((int)0);
		var_15_int = var_6_int;
		var_22_bool = var_6_int > (int)1;
		if(var_22_bool != 0) {
			var_24_int = "Performance" + var_6_int;
			GetVariable(var_24_int, var_7_int);
			var_1_bool = var_7_int == (int)0;
			return 6;
		}
	}
	var_1_bool = 0;
	return 6;
}


func_108(var_72_string, var_73_string, var_74_int, var_75_int)
{
	var_76_string = ""; var_77_string = "";
	_strsub(var_77_string, var_73_string, var_74_int, var_75_int);
	var_77_string = var_72_string;
	return 2;
}


func_113(var_15_int)
{
	var_16_float = 0; var_17_float = 0;
	GetGameTime(var_17_float);
	var_19_int = 0;
	var_19_int = var_17_float / (int)24;
	var_15_int = (int)1 + var_19_int;
	return 2;
}


func_19()
{
	SetVisibility((bool)1);
	
Label_22:
	Hold();
	goto Label_22;
}
EMIT "Return(); Pop(0)";


func_26(var_40_object)
{
	var_41_string = ""; var_42_int = 0; var_43_string = ""; var_44_string = ""; var_45_object = Obj(); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; var_50_int = 0; var_51_string = ""; var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	var_57_bool = 0;
	func_130(var_57_bool);
	if(var_57_bool != 0) {
		PlaySound("door_closed");
		Trace("Door is locked");
		return 16;
	}
	GetActorName(var_49_string);
	var_64_int = 0; var_65_string = ""; var_66_string = "";
	var_49_string = var_65_string;
	func_98(var_64_int, var_65_string, "@");
	var_64_int = var_50_int;
	var_70_bool = var_50_int == (int)-1;
	if(var_70_bool != 0) {
		Trace("Wrong door name");
		return 16;
	}
	var_72_string = ""; var_73_string = ""; var_74_int = 0; var_75_int = 0;
	var_49_string = var_73_string;
	var_50_int = var_75_int;
	func_108(var_72_string, var_73_string, (int)0, var_75_int);
	var_72_string = var_51_string;
	var_79_string = ""; var_80_string = ""; var_81_int = 0;
	var_49_string = var_80_string;
	var_81_int = var_50_int + (int)1;
	func_103(var_79_string, var_80_string, var_81_int);
	var_52_string = "pt_" + var_79_string;
	GetSceneByName(var_53_object, var_51_string);
	var_85_bool = var_53_object == 0; //@ne
	if(var_85_bool != 0) {
		var_87_int = "Destination scene '" + var_51_string;
		var_89_int = var_87_int + "' not found";
		Trace(var_89_int);
		return 16;
	}
	@@var_53_object:GetLocator(var_52_string, var_54_bool, var_55_cvector, var_56_cvector);
	var_90_bool = var_54_bool;
	if(var_90_bool != 0) {
		PlaySharedSound("door_open");
		Teleport(var_40_object, var_53_object, var_55_cvector, var_56_cvector);
	} else {
		var_93_int = "Locator " + var_52_string;
		var_95_int = var_93_int + " not found in destination scene ";
		var_96_int = var_95_int + var_51_string;
		Trace(var_96_int);
	}
	return 16;
	
}
EMIT "Stack[-4] = 0";


