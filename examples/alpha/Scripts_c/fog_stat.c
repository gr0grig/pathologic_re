// @IMPORTS: Sleep/1,GetHeight/1,PlayLoopedGlobalSound/3,FogLinear/2,ReportHit/4,GetPosition/1,FindActor/2
// @STRINGS: W:attack|A:FadeOut|A:GetPosition|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @TASK_1: vars= params=1
// @PE: 0xbb,0xc6,0xd3

main()
{
	var_0_object = Obj(); var_1_object = Obj();
	
Label_1:
	func_83(Obj());
	var_2_object = var_1_object;
	
Label_5:
	var_6_bool = 0; var_7_object = Obj();
	var_1_object = var_7_object;
	func_198(var_6_bool, var_7_object);
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


func_102(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float)
{
	var_79_float = 0; var_80_float = 0;
	var_81_bool = 0; var_82_object = Obj(); var_83_string = "";
	var_74_object = var_82_object;
	var_75_string = var_83_string;
	func_90(var_81_bool, var_82_object, var_83_string);
	var_84_bool = var_81_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_73_bool = 0;
		return 2;
	}
	@@var_74_object:GetProperty(var_75_string, var_80_float);
	var_85_float = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0;
	var_86_float = var_80_float + var_76_float;
	var_77_float = var_87_float;
	var_78_float = var_88_float;
	func_187(var_85_float, var_86_float, var_87_float, var_88_float);
	@@var_74_object:SetProperty(var_75_string, var_85_float);
	var_73_bool = 1;
	return 2;
}


func_198(var_6_bool, var_7_object)
{
	var_6_bool = 0;
	var_8_object = var_7_object;
	if(var_8_object != 0) {
		var_9_float = 0; var_10_object = Obj();
		var_7_object = var_10_object;
		func_75(var_9_float, var_10_object);
		var_18_bool = var_9_float < (float)160000.0;
		if(var_18_bool != 0) {
			var_6_bool = 1;
		}
	}
	return 0;
}


func_75(var_9_float, var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0);
	GetPosition(var_14_cvector);
	@@var_10_object:GetPosition(var_15_cvector);
	var_16_cvector = var_15_cvector - var_14_cvector;
	var_9_float = var_16_cvector | var_16_cvector;
	return 6;
}


func_83(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, "player");
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_211(var_32_bool, var_33_object)
{
	var_34_float = 0; var_35_object = Obj();
	var_33_object = var_35_object;
	func_75(var_34_float, var_35_object);
	var_32_bool = var_34_float < (float)40000.0;
	return 0;
}


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
	var_32_bool = 0; var_33_object = Obj();
	var_19_object = var_33_object;
	func_211(var_32_bool, var_33_object);
	if(var_32_bool != 0) {
		var_37_float = 0; var_38_object = Obj(); var_39_float = 0;
		var_19_object = var_38_object;
		func_124(var_37_float, var_38_object, (float)0.10000000149011612);
		var_37_float = var_27_float;
		ReportHit(var_19_object, (int)5, var_27_float, (float)0.10000000149011612);
	}
	Sleep((int)1);
	var_96_bool = 0; var_97_object = Obj();
	var_19_object = var_97_object;
	func_198(var_96_bool, var_97_object);
	var_98_bool = var_96_bool == 0; //@nz
	if(var_98_bool != 0) {
	} else {
		goto Label_37;
	}
	FogLinear((int)0, (int)1);
	@@var_26_object:FadeOut((int)1);
	Sleep((int)1);
	return 8;
	
}
EMIT "Stack[-2] = 0";


func_90(var_46_bool, var_47_object, var_48_string)
{
	var_49_bool = 0; var_50_bool = 0;
	var_53_bool = IsFuncExist(var_47_object, "HasProperty", (int)2);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	@@var_47_object:HasProperty(var_48_string, var_50_bool);
	var_50_bool = var_46_bool;
	return 2;
}


func_187(var_85_float, var_86_float, var_87_float, var_88_float)
{
	var_89_bool = var_86_float < var_87_float;
	if(var_89_bool != 0) {
		var_87_float = var_85_float;
		return 0;
	}
	var_90_bool = var_86_float > var_88_float;
	if(var_90_bool != 0) {
		var_88_float = var_85_float;
		return 0;
	}
	var_86_float = var_85_float;
	return 0;
}


func_124(var_37_float, var_38_object, var_39_float)
{
	var_40_int = 0; var_41_float = 0; var_42_float = 0; var_43_int = 0; var_44_float = 0; var_45_float = 0;
	var_46_bool = 0; var_47_object = Obj(); var_48_string = "";
	var_38_object = var_47_object;
	func_90(var_46_bool, var_47_object, "disease");
	var_55_bool = var_46_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_37_float = 0;
		return 6;
	}
	var_56_bool = 0; var_57_object = Obj(); var_58_string = "";
	var_38_object = var_57_object;
	func_90(var_56_bool, var_57_object, "armor_disease");
	if(var_56_bool != 0) {
		@@var_38_object:GetProperty("armor_disease", var_43_int);
		var_61_bool = var_43_int < (int)100;
		if(var_61_bool != 0) {
			var_64_float = var_43_int / (float)100.0;
			var_65_int = (int)1 - var_64_float;
			var_39_float = var_39_float * var_65_int;
		} else {
					var_37_float = 0;
					return 6;
		}
	}
	var_66_bool = 0; var_67_object = Obj(); var_68_string = "";
	var_38_object = var_67_object;
	func_90(var_66_bool, var_67_object, "immunity");
	if(var_66_bool != 0) {
		@@var_38_object:GetProperty("immunity", var_45_float);
		var_70_bool = var_45_float < var_39_float;
		if(var_70_bool != 0) {
			@@var_38_object:SetProperty("immunity", (int)0);
			var_44_float = var_39_float - var_45_float;
		} else {
			var_92_int = var_45_float - var_39_float;
			@@var_38_object:SetProperty("immunity", var_92_int);
			var_39_float = var_37_float;
			return 6;

		}
	}
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; var_76_float = 0; var_77_float = 0; var_78_float = 0;
	var_38_object = var_74_object;
	var_44_float = var_76_float;
	func_102(var_73_bool, var_74_object, "disease", var_76_float, (float)0, (float)1);
	var_39_float = var_37_float;
	return 6;
	
}


