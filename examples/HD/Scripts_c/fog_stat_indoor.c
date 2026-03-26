// @IMPORTS: Sleep/1,GetHeight/1,PlayLoopedGlobalSound/3,FogLinear/2,ReportHit/4,GetPosition/1,FindActor/2,IsPlayerActor/2,IsLoaded/1,self/1,CreateFloatVector/1,SendWorldWndMessage/2,RemoveActor/1
// @STRINGS: W:attack|A:FadeOut|A:GetPosition|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity|A:add|W:cleanup|W:restore
// @GLOBALS: 0:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @TASK_1: vars= params=1
// @STANDALONE_EVENT_26: op=0x101 vars=string
// @STANDALONE_EVENT_6: op=0x119 vars=
// @PE: 0xd7,0xec,0xf9

event_26(var_0_string)
{
	var_1_bool = 0; var_2_bool = 0;
	var_4_bool = var_0_string == "cleanup";
	if(var_4_bool != 0) {
		var_5_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		IsLoaded(var_2_bool);
		var_6_bool = var_2_bool == 0; //@nz
		if(var_6_bool != 0) {
			var_7_object = Obj();
			func_209(var_7_object);
			RemoveActor(var_7_object);
		}
	} else {
		var_11_bool = var_0_string == "restore";
		if(var_11_bool == 0) goto Label_280;
		var_12_bool = GlobalVars[0];
		GlobalVars[0] = (bool)0;
	}
Label_280:
	return 2;
	
}


event_6()
{
	var_0_bool = GlobalVars[0];
	if(var_0_bool != 0) {
		var_1_object = Obj();
		func_209(var_1_object);
		RemoveActor(var_1_object);
	}
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	
Label_1:
	func_89(Obj());
	var_2_object = var_1_object;
	
Label_5:
	var_6_bool = 0; var_7_object = Obj();
	var_1_object = var_7_object;
	func_236(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		var_19_object = Obj();
		var_1_object = var_19_object;
		TaskCall(1);
		func_23(var_19_object);
		TaskReturn();
		goto Label_5;
	}
	Sleep((int)1);
	var_1_object = 0;
	goto Label_1;
}
EMIT "Return(); Pop(2)";


func_96(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_bool = 0;
	IsPlayerActor(var_98_object, var_100_bool);
	var_100_bool = var_97_bool;
	return 2;
}


func_226(var_101_float)
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateFloatVector(var_103_object);
	@@var_103_object:add(var_101_float);
	SendWorldWndMessage((int)14, var_103_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_101(var_48_bool, var_49_object, var_50_string)
{
	var_51_bool = 0; var_52_bool = 0;
	var_55_bool = IsFuncExist(var_49_object, "HasProperty", (int)2);
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_48_bool = 0;
		return 2;
	}
	@@var_49_object:HasProperty(var_50_string, var_52_bool);
	var_52_bool = var_48_bool;
	return 2;
}


func_249(var_36_bool, var_37_object)
{
	var_38_float = 0; var_39_object = Obj();
	var_37_object = var_39_object;
	func_81(var_38_float, var_39_object);
	var_36_bool = var_38_float < (float)40000.0;
	return 0;
}


func_135(var_41_float, var_42_object, var_43_float)
{
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0;
	var_48_bool = 0; var_49_object = Obj(); var_50_string = "";
	var_42_object = var_49_object;
	func_101(var_48_bool, var_49_object, "disease");
	var_57_bool = var_48_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_41_float = 0;
		return 4;
	}
	var_46_float = 0;
	var_58_bool = 0; var_59_object = Obj(); var_60_string = "";
	var_42_object = var_59_object;
	func_101(var_58_bool, var_59_object, "armor_disease");
	if(var_58_bool != 0) {
		@@var_42_object:GetProperty("armor_disease", var_46_float);
		var_46_float = var_46_float / (int)100;
	}
	var_63_bool = 0; var_64_object = Obj(); var_65_string = "";
	var_42_object = var_64_object;
	func_101(var_63_bool, var_64_object, "immunity");
	if(var_63_bool != 0) {
		@@var_42_object:GetProperty("immunity", var_47_float);
		var_46_float = var_46_float + var_47_float;
		var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; var_70_float = 0; var_71_float = 0; var_72_float = 0;
		var_42_object = var_68_object;
		var_70_float = -var_43_float;
		func_113(var_67_bool, var_68_object, "immunity", var_70_float, (float)0, (float)1);
	}
	var_86_bool = var_46_float >= (int)1;
	if(var_86_bool != 0) {
		var_41_float = 0.0;
		return 4;
	}
	var_88_int = (int)1 - var_46_float;
	var_90_float = var_88_int / (int)2;
	var_43_float = var_43_float * var_90_float;
	var_91_bool = 0; var_92_object = Obj(); var_93_string = ""; var_94_float = 0; var_95_float = 0; var_96_float = 0;
	var_42_object = var_92_object;
	var_43_float = var_94_float;
	func_113(var_91_bool, var_92_object, "disease", var_94_float, (float)0, (float)1);
	var_97_bool = 0; var_98_object = Obj();
	var_42_object = var_98_object;
	func_96(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		var_101_float = 0;
		var_43_float = var_101_float;
		func_226(var_101_float);
	}
	var_43_float = var_41_float;
	return 4;
}


func_204(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_236(var_6_bool, var_7_object)
{
	var_6_bool = 0;
	var_8_object = var_7_object;
	if(var_8_object != 0) {
		var_9_float = 0; var_10_object = Obj();
		var_7_object = var_10_object;
		func_81(var_9_float, var_10_object);
		var_18_bool = var_9_float < (float)360000.0;
		if(var_18_bool != 0) {
			var_6_bool = 1;
		}
	}
	return 0;
}


func_113(var_67_bool, var_68_object, var_69_string, var_70_float, var_71_float, var_72_float)
{
	var_73_float = 0; var_74_float = 0;
	var_75_bool = 0; var_76_object = Obj(); var_77_string = "";
	var_68_object = var_76_object;
	var_69_string = var_77_string;
	func_101(var_75_bool, var_76_object, var_77_string);
	var_78_bool = var_75_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_67_bool = 0;
		return 2;
	}
	@@var_68_object:GetProperty(var_69_string, var_74_float);
	var_79_float = 0; var_80_float = 0; var_81_float = 0; var_82_float = 0;
	var_80_float = var_74_float + var_70_float;
	var_71_float = var_81_float;
	var_72_float = var_82_float;
	func_215(var_79_float, var_80_float, var_81_float, var_82_float);
	@@var_68_object:SetProperty(var_69_string, var_79_float);
	var_67_bool = 1;
	return 2;
}


func_81(var_9_float, var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0);
	GetPosition(var_14_cvector);
	@@var_10_object:GetPosition(var_15_cvector);
	var_16_cvector = var_15_cvector - var_14_cvector;
	var_9_float = var_16_cvector | var_16_cvector;
	return 6;
}


func_209(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	self(var_3_object);
	var_3_object = var_1_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_23(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_float = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_float = 0;
	GetHeight(var_24_float);
	var_25_cvector = CVector(0.0, 0.0, 0.0);
	var_28_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_28_float;
	SetByIndex(var_25_cvector, 1) = var_28_float;
	PlayLoopedGlobalSound(var_26_object, "attack", var_25_cvector);
	FogLinear((int)1, (int)1);
	
Label_37:
	var_32_bool = 0;
	func_204(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 8;
	}
	var_36_bool = 0; var_37_object = Obj();
	var_19_object = var_37_object;
	func_249(var_36_bool, var_37_object);
	if(var_36_bool != 0) {
		var_41_float = 0; var_42_object = Obj(); var_43_float = 0;
		var_19_object = var_42_object;
		func_135(var_41_float, var_42_object, (float)0.10000000149011612);
		var_41_float = var_27_float;
		ReportHit(var_19_object, (int)5, var_27_float, (float)0.10000000149011612);
	}
	Sleep((int)1);
	var_108_bool = 0; var_109_object = Obj();
	var_19_object = var_109_object;
	func_236(var_108_bool, var_109_object);
	var_110_bool = var_108_bool == 0; //@nz
	if(var_110_bool != 0) {
	} else {
		goto Label_37;
	}
	FogLinear((int)0, (int)1);
	@@var_26_object:FadeOut((int)1);
	Sleep((int)1);
	return 8;
	
}
EMIT "Stack[-2] = 0";


func_89(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, "player");
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_215(var_79_float, var_80_float, var_81_float, var_82_float)
{
	var_83_bool = var_80_float < var_81_float;
	if(var_83_bool != 0) {
		var_81_float = var_79_float;
		return 0;
	}
	var_84_bool = var_80_float > var_82_float;
	if(var_84_bool != 0) {
		var_82_float = var_79_float;
		return 0;
	}
	var_80_float = var_79_float;
	return 0;
}


