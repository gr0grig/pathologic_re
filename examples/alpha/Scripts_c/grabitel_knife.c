// @IMPORTS: CreateRigidBody/6,Attach/1,FindGeometry/2,Hold/0,SetDeathStateAndRemove/0,sync/0,Trace/1,ReportAttack/2,ReportHit/5,Trigger/2,GetScene/1
// @STRINGS: A:Enable|W:knife|A:SetRotation|W:Knife hit: |W:kill|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess
// @GLOBALS: 0:object:Owner,1:cvector:StartDirection,2:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_6: op=0x1e vars=
// @EVENT_10: op=0x23 vars=object,object,cvector,cvector
// @PE: 0x57,0xfc,0x103

task_0_event_6()
{
	SetDeathStateAndRemove();
	sync();
	return 0;
}


task_0_event_10(var_0_object, var_1_object, var_2_cvector, var_3_cvector)
{
	var_4_float = 0; var_5_float = 0;
	var_7_int = "Knife hit: " + var_1_object;
	Trace(var_7_int);
	var_8_object = GlobalVars[2];
	@@var_8_object:Enable((bool)0);
	SetDeathStateAndRemove();
	var_10_bool = 0; var_11_object = Obj();
	var_1_object = var_11_object;
	func_228(var_10_bool, var_11_object);
	var_44_bool = var_10_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 2;
	}
	var_45_float = 0; var_46_object = Obj(); var_47_float = 0; var_48_int = 0;
	var_1_object = var_46_object;
	func_107(var_45_float, var_46_object, (float)0.8999999761581421, (int)0);
	var_45_float = var_5_float;
	var_95_bool = 0; var_96_object = Obj();
	var_97_object = GlobalVars[0];
	var_97_object = var_96_object;
	func_228(var_95_bool, var_96_object);
	if(var_95_bool != 0) {
		var_98_object = GlobalVars[0];
		ReportAttack(var_1_object, var_98_object);
		var_99_float = var_5_float;
		if(var_99_float != 0) {
			var_100_object = GlobalVars[0];
			ReportHit(var_1_object, var_100_object, (int)1, var_5_float, (float)0.8999999761581421);
			var_103_bool = 0; var_104_object = Obj();
			var_1_object = var_104_object;
			func_171(var_103_bool, var_104_object);
			if(var_103_bool != 0) {
				var_113_object = GlobalVars[0];
				Trigger(var_113_object, "kill");
			}
		}
	}
	return 2;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	var_4_cvector = GlobalVars[1];
	var_6_object = GlobalVars[0];
	CreateRigidBody(var_1_object, CVector(0.0, 0.0, 0.0), (int)50, var_4_cvector, CVector(20.0, 20.0, 20.0), var_6_object);
	@@var_1_object:Enable((bool)1);
	var_8_object = GlobalVars[2];
	var_1_object = var_8_object;
	GlobalVars[2] = var_8_object;
	Attach(var_1_object);
	FindGeometry("knife", var_1_object);
	var_10_cvector = GlobalVars[1];
	@@var_1_object:SetRotation(var_10_cvector);
	@@var_1_object:Enable((bool)1);
	
Label_25:
	Hold();
	goto Label_25;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_192(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj();
	var_20_bool = var_15_object == 0; //@ne
	if(var_20_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_21_bool = 0;
	var_21_bool = 0;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", (int)1);
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_15_object = var_26_object;
		func_187(var_25_bool, var_26_object);
		if(var_25_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	GetScene(var_18_object);
	var_29_bool = var_18_object == 0; //@ne
	if(var_29_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_15_object:GetScene(var_19_object);
	var_30_bool = var_18_object != var_19_object;
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_14_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_259(var_88_float, var_89_float, var_90_float, var_91_float)
{
	var_92_bool = var_89_float < var_90_float;
	if(var_92_bool != 0) {
		var_90_float = var_88_float;
		return 0;
	}
	var_93_bool = var_89_float > var_91_float;
	if(var_93_bool != 0) {
		var_91_float = var_88_float;
		return 0;
	}
	var_89_float = var_88_float;
	return 0;
}


func_228(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_192(var_14_bool, var_15_object);
	var_31_bool = var_14_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	var_11_object = var_33_object;
	func_95(var_32_bool, var_33_object, "noaccess");
	var_41_bool = var_32_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_10_bool = 1;
		return 2;
	}
	@@var_11_object:GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == (int)0;
	return 2;
}


func_107(var_45_float, var_46_object, var_47_float, var_48_int)
{
	var_49_int = 0; var_50_string = ""; var_51_int = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_int = 0; var_56_string = ""; var_57_int = 0; var_58_float = 0; var_59_float = 0; var_60_float = 0;
	var_61_bool = 0; var_62_object = Obj(); var_63_string = "";
	var_46_object = var_62_object;
	func_95(var_61_bool, var_62_object, "health");
	var_64_bool = var_61_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_45_float = 0.0;
		return 12;
	}
	var_65_bool = 0; var_66_object = Obj(); var_67_string = "";
	var_46_object = var_66_object;
	func_95(var_65_bool, var_66_object, "armor");
	var_68_bool = var_65_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_55_int = 0;
	} else {
			@@var_46_object:GetProperty("armor", var_55_int);
	}
	var_70_string = ""; var_71_int = 0;
	var_48_int = var_71_int;
	func_87(var_70_string, var_71_int);
	var_56_string = "armor_" + var_70_string;
	var_74_bool = 0; var_75_object = Obj(); var_76_string = "";
	var_46_object = var_75_object;
	var_56_string = var_76_string;
	func_95(var_74_bool, var_75_object, var_76_string);
	var_77_bool = var_74_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_57_int = 0;
	} else {
		@@var_46_object:GetProperty(var_56_string, var_57_int);

	}
	var_78_float = 0; var_79_float = 0; var_80_float = 0;
	var_81_int = var_55_int + var_57_int;
	var_79_float = var_81_int / (float)100.0;
	func_252(var_78_float, var_79_float, (float)1);
	var_78_float = var_58_float;
	@@var_46_object:GetProperty("health", var_59_float);
	var_86_int = (int)1 - var_58_float;
	var_60_float = var_47_float * var_86_int;
	var_88_float = 0; var_89_float = 0; var_90_float = 0; var_91_float = 0;
	var_89_float = var_59_float - var_60_float;
	func_259(var_88_float, var_89_float, (float)0, (float)1);
	@@var_46_object:SetProperty("health", var_88_float);
	var_60_float = var_45_float;
	return 12;
	
}


func_171(var_103_bool, var_104_object)
{
	var_105_float = 0; var_106_float = 0;
	var_107_bool = 0; var_108_object = Obj(); var_109_string = "";
	var_104_object = var_108_object;
	func_95(var_107_bool, var_108_object, "health");
	var_110_bool = var_107_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_103_bool = 0;
		return 2;
	}
	@@var_104_object:GetProperty("health", var_106_float);
	var_103_bool = var_106_float <= (float)0.0;
	return 2;
}


func_87(var_70_string, var_71_int)
{
	var_73_bool = var_71_int == (int)1;
	if(var_73_bool != 0) {
		var_70_string = "fire";
		return 0;
	}
	var_70_string = "phys";
	return 0;
}


func_187(var_25_bool, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	@@var_26_object:IsDead(var_28_bool);
	var_28_bool = var_25_bool;
	return 2;
}


func_252(var_78_float, var_79_float, var_80_float)
{
	var_83_bool = var_79_float < var_80_float;
	if(var_83_bool != 0) {
		var_79_float = var_78_float;
	} else {
		var_80_float = var_78_float;
	}
	return 0;
	
}


func_95(var_32_bool, var_33_object, var_34_string)
{
	var_35_bool = 0; var_36_bool = 0;
	var_39_bool = IsFuncExist(var_33_object, "HasProperty", (int)2);
	var_40_bool = var_39_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	@@var_33_object:HasProperty(var_34_string, var_36_bool);
	var_36_bool = var_32_bool;
	return 2;
}


