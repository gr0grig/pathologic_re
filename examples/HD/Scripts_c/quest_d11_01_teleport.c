// @IMPORTS: GetMainOutdoorScene/1,FindActor/2,GetSceneByName/2,Teleport/4,sync/0,SetVariable/2,RemoveActor/1,self/1,Trace/1,AddActor/6,CreateFloatVector/1,SendWorldWndMessage/2,ModDarkenLevel/1,sync/1
// @STRINGS: W:player|W:storojka|W:birth|A:GetLocator|W:pt_d11q01_teleport|W:health|A:GetProperty|A:SetProperty|W:tiredness|W:pt_d11q01_dog1|W:pers_dog|W:d11q01_dog.xml|W:pt_d11q01_dog2|W:pt_d11q01_dog3|W:d11q01SoldierAttack|W:Locator |W: doesn't exist|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_bool = 0; var_3_object = Obj(); var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_float = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_bool = 0; var_11_object = Obj(); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_float = 0;
	GetMainOutdoorScene(var_8_object);
	var_16_float = 0; var_17_float = 0; var_18_float = 0;
	func_130((float)0, (float)1, (float)1.0);
	FindActor(var_9_object, "player");
	var_31_object = var_9_object;
	if(var_31_object != 0) {
		GetSceneByName(var_11_object, "storojka");
		@@var_11_object:GetLocator("birth", var_10_bool, var_12_cvector, var_13_cvector);
		Teleport(var_9_object, var_11_object, var_12_cvector, var_13_cvector);
		sync();
		@@var_8_object:GetLocator("pt_d11q01_teleport", var_10_bool, var_12_cvector, var_13_cvector);
		Teleport(var_9_object, var_8_object, var_12_cvector, var_13_cvector);
		@@var_9_object:GetProperty("health", var_14_float);
		var_37_bool = var_14_float > (float)0.20000000298023224;
		if(var_37_bool != 0) {
			@@var_9_object:SetProperty("health", (float)0.20000000298023224);
		}
		@@var_9_object:GetProperty("tiredness", var_15_float);
		var_42_bool = var_15_float > (float)0.6000000238418579;
		if(var_42_bool != 0) {
			@@var_9_object:SetProperty("tiredness", (float)0.6000000238418579);
			var_45_float = 0;
			var_45_float = (float)0.6000000238418579 - var_15_float;
			func_120(var_45_float);
		}
		var_11_object = 0;
	}
	sync();
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = "";
	var_8_object = var_51_object;
	func_102(var_50_object, var_51_object, "pt_d11q01_dog1", "pers_dog", "d11q01_dog.xml");
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = "";
	var_8_object = var_69_object;
	func_102(var_68_object, var_69_object, "pt_d11q01_dog2", "pers_dog", "d11q01_dog.xml");
	var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = "";
	var_8_object = var_74_object;
	func_102(var_73_object, var_74_object, "pt_d11q01_dog3", "pers_dog", "d11q01_dog.xml");
	var_78_float = 0; var_79_float = 0; var_80_float = 0;
	func_130((float)1, (float)0, (float)5.0);
	SetVariable("d11q01SoldierAttack", (int)1);
	var_83_object = Obj();
	func_96(var_83_object);
	RemoveActor(var_83_object);
	return 16;
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";


func_120(var_45_float)
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateFloatVector(var_48_object);
	@@var_48_object:add(var_45_float);
	SendWorldWndMessage((int)11, var_48_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_130(var_16_float, var_17_float, var_18_float)
{
	var_19_bool = 0; var_20_float = 0; var_21_float = 0; var_22_bool = 0; var_23_float = 0; var_24_float = 0;
	var_22_bool = var_17_float > var_16_float;
	var_25_int = var_17_float - var_16_float;
	var_23_float = var_25_int / var_18_float;
	
Label_134:
	var_26_bool = var_22_bool;
	if(var_26_bool != 0) {
		var_27_bool = var_16_float < var_17_float;
	} else {
		var_29_bool = var_17_float < var_16_float;
	}
	if(var_27_bool != 0) {
		ModDarkenLevel(var_16_float);
		sync(var_24_float);
		var_28_float = var_24_float * var_23_float;
		var_16_float = var_16_float + var_28_float;
		goto Label_134;
	}
	ModDarkenLevel(var_17_float);
	return 6;
	
}


func_96(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj();
	self(var_85_object);
	var_85_object = var_83_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_102(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	@@var_51_object:GetLocator(var_52_string, var_59_bool, var_60_cvector, var_61_cvector);
	var_63_bool = var_59_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_65_int = "Locator " + var_52_string;
		var_67_int = var_65_int + " doesn't exist";
		Trace(var_67_int);
	} else {
		AddActor(Obj(), var_53_string, var_51_object, var_60_cvector, var_61_cvector, var_54_string);
	}
	var_62_object = var_50_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


