// @IMPORTS: CreateRigidBody/6,Attach/1,FindGeometry/2,Hold/0,RemoveActor/1,sync/0,ReportAttack/2,ReportHit/5,Trigger/2,IsPlayerActor/2,GetScene/1,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetVariable/2
// @STRINGS: A:Enable|W:knife|A:SetRotation|W:GetScene|W:kill|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:add|W:god_mode
// @GLOBALS: 0:object:Owner,1:cvector:StartDirection,2:object:Target,3:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_6: op=0x1e vars=
// @EVENT_10: op=0x26 vars=object,object,cvector,cvector
// @PE: 0x6f,0x13d,0x144

task_0_event_6()
{
	var_0_object = Obj();
	func_311(var_0_object);
	RemoveActor(var_0_object);
	sync();
	return 0;
}


task_0_event_10(var_0_object, var_1_object, var_2_cvector, var_3_cvector)
{
	var_4_float = 0; var_5_float = 0;
	var_6_object = GlobalVars[3];
	@@var_6_object:Enable((bool)0);
	var_8_object = Obj();
	func_311(var_8_object);
	RemoveActor(var_8_object);
	var_11_bool = 0;
	var_11_bool = 1;
	var_12_bool = 0;
	var_12_bool = 1;
	var_13_bool = var_1_object == 0; //@nz
	if(var_13_bool != 1) {
		var_16_bool = IsFuncExist(var_1_object, "GetScene", (int)1);
		var_17_bool = var_16_bool == 0; //@nz
		if(var_17_bool != 1) {
			var_12_bool = 0;
		}
	}
	if(var_12_bool != 1) {
		var_18_bool = 0; var_19_object = Obj();
		var_1_object = var_19_object;
		func_287(var_18_bool, var_19_object);
		var_52_bool = var_18_bool == 0; //@nz
		if(var_52_bool != 1) {
			var_11_bool = 0;
		}
	}
	if(var_11_bool != 0) {
		return 2;
	}
	var_53_float = 0; var_54_object = Obj(); var_55_float = 0; var_56_int = 0;
	var_1_object = var_54_object;
	func_142(var_53_float, var_54_object, (float)0.8999999761581421, (int)0);
	var_53_float = var_5_float;
	var_117_bool = 0; var_118_object = Obj();
	var_119_object = GlobalVars[0];
	var_119_object = var_118_object;
	func_287(var_117_bool, var_118_object);
	if(var_117_bool != 0) {
		var_120_object = GlobalVars[0];
		ReportAttack(var_1_object, var_120_object);
		var_121_float = var_5_float;
		if(var_121_float != 0) {
			var_122_object = GlobalVars[0];
			ReportHit(var_1_object, var_122_object, (int)1, var_5_float, (float)0.8999999761581421);
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_object = GlobalVars[2];
			var_127_bool = var_1_object == var_126_object;
			if(var_127_bool != 0) {
				var_128_bool = 0; var_129_object = Obj();
				var_1_object = var_129_object;
				func_215(var_128_bool, var_129_object);
				if(var_128_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				var_145_object = GlobalVars[0];
				Trigger(var_145_object, "kill");
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
	var_8_object = GlobalVars[3];
	var_1_object = var_8_object;
	GlobalVars[3] = var_8_object;
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


func_352(var_139_bool)
{
	var_140_bool = 0; var_141_bool = 0;
	GetVariable("god_mode", var_141_bool);
	var_141_bool = var_139_bool;
	return 2;
}


func_130(var_40_bool, var_41_object, var_42_string)
{
	var_43_bool = 0; var_44_bool = 0;
	var_47_bool = IsFuncExist(var_41_object, "HasProperty", (int)2);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_40_bool = 0;
		return 2;
	}
	@@var_41_object:HasProperty(var_42_string, var_44_bool);
	var_44_bool = var_40_bool;
	return 2;
}


func_324(var_98_float, var_99_float, var_100_float, var_101_float)
{
	var_102_bool = var_99_float < var_100_float;
	if(var_102_bool != 0) {
		var_100_float = var_98_float;
		return 0;
	}
	var_103_bool = var_99_float > var_101_float;
	if(var_103_bool != 0) {
		var_101_float = var_98_float;
		return 0;
	}
	var_99_float = var_98_float;
	return 0;
}


func_142(var_53_float, var_54_object, var_55_float, var_56_int)
{
	var_57_int = 0; var_58_string = ""; var_59_int = 0; var_60_float = 0; var_61_float = 0; var_62_float = 0; var_63_int = 0; var_64_string = ""; var_65_int = 0; var_66_float = 0; var_67_float = 0; var_68_float = 0;
	var_69_bool = 0; var_70_object = Obj(); var_71_string = "";
	var_54_object = var_70_object;
	func_130(var_69_bool, var_70_object, "health");
	var_72_bool = var_69_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_53_float = 0.0;
		return 12;
	}
	var_73_bool = 0; var_74_object = Obj(); var_75_string = "";
	var_54_object = var_74_object;
	func_130(var_73_bool, var_74_object, "armor");
	var_76_bool = var_73_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_63_int = 0;
	} else {
			@@var_54_object:GetProperty("armor", var_63_int);
	}
	var_78_string = ""; var_79_int = 0;
	var_56_int = var_79_int;
	func_111(var_78_string, var_79_int);
	var_64_string = "armor_" + var_78_string;
	var_84_bool = 0; var_85_object = Obj(); var_86_string = "";
	var_54_object = var_85_object;
	var_64_string = var_86_string;
	func_130(var_84_bool, var_85_object, var_86_string);
	var_87_bool = var_84_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_65_int = 0;
	} else {
		@@var_54_object:GetProperty(var_64_string, var_65_int);

	}
	var_88_float = 0; var_89_float = 0; var_90_float = 0;
	var_91_int = var_63_int + var_65_int;
	var_89_float = var_91_int / (float)100.0;
	func_317(var_88_float, var_89_float, (float)1);
	var_88_float = var_66_float;
	@@var_54_object:GetProperty("health", var_67_float);
	var_96_int = (int)1 - var_66_float;
	var_68_float = var_55_float * var_96_int;
	var_98_float = 0; var_99_float = 0; var_100_float = 0; var_101_float = 0;
	var_99_float = var_67_float - var_68_float;
	func_324(var_98_float, var_99_float, (float)0, (float)1);
	@@var_54_object:SetProperty("health", var_98_float);
	var_104_bool = 0; var_105_object = Obj();
	var_54_object = var_105_object;
	func_125(var_104_bool, var_105_object);
	if(var_104_bool != 0) {
		var_108_float = 0;
		var_108_float = -var_68_float;
		func_335(var_108_float);
	}
	var_68_float = var_53_float;
	return 12;
	
}


func_111(var_78_string, var_79_int)
{
	var_81_bool = var_79_int == (int)2;
	if(var_81_bool != 0) {
		var_78_string = "fire";
		return 0;
	EMIT "GOTO 0x7b";
	}
	var_83_bool = var_79_int == (int)1;
	if(var_83_bool != 0) {
		var_78_string = "bullet";
		return 0;
	}
	var_78_string = "phys";
	return 0;
}


func_335(var_108_float)
{
	var_109_object = Obj(); var_110_object = Obj();
	CreateFloatVector(var_110_object);
	@@var_110_object:add(var_108_float);
	var_112_bool = var_108_float < (int)0;
	if(var_112_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_110_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_125(var_104_bool, var_105_object)
{
	var_106_bool = 0; var_107_bool = 0;
	IsPlayerActor(var_105_object, var_107_bool);
	var_107_bool = var_104_bool;
	return 2;
}


func_246(var_33_bool, var_34_object)
{
	var_35_bool = 0; var_36_bool = 0;
	@@var_34_object:IsDead(var_36_bool);
	var_36_bool = var_33_bool;
	return 2;
}


func_311(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj();
	self(var_10_object);
	var_10_object = var_8_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_215(var_128_bool, var_129_object)
{
	var_130_float = 0; var_131_float = 0;
	var_132_bool = 0; var_133_object = Obj(); var_134_string = "";
	var_129_object = var_133_object;
	func_130(var_132_bool, var_133_object, "health");
	var_135_bool = var_132_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_128_bool = 0;
		return 2;
	}
	var_136_bool = 0;
	var_136_bool = 0;
	var_137_bool = 0; var_138_object = Obj();
	var_129_object = var_138_object;
	func_125(var_137_bool, var_138_object);
	if(var_137_bool != 0) {
		var_139_bool = 0;
		func_352(var_139_bool);
		if(var_139_bool != 0) {
			var_136_bool = 1;
		}
	}
	if(var_136_bool != 0) {
		var_128_bool = 0;
		return 2;
	}
	@@var_129_object:GetProperty("health", var_131_float);
	var_128_bool = var_131_float <= (float)0.0;
	return 2;
}


func_251(var_22_bool, var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	var_28_bool = var_23_object == 0; //@ne
	if(var_28_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	var_29_bool = 0;
	var_29_bool = 0;
	var_32_bool = IsFuncExist(var_23_object, "IsDead", (int)1);
	if(var_32_bool != 0) {
		var_33_bool = 0; var_34_object = Obj();
		var_23_object = var_34_object;
		func_246(var_33_bool, var_34_object);
		if(var_33_bool != 0) {
			var_29_bool = 1;
		}
	}
	if(var_29_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	GetScene(var_26_object);
	var_37_bool = var_26_object == 0; //@ne
	if(var_37_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	@@var_23_object:GetScene(var_27_object);
	var_38_bool = var_26_object != var_27_object;
	if(var_38_bool != 0) {
		var_22_bool = 0;
		return 4;
	}
	var_22_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_317(var_88_float, var_89_float, var_90_float)
{
	var_93_bool = var_89_float < var_90_float;
	if(var_93_bool != 0) {
		var_89_float = var_88_float;
	} else {
		var_90_float = var_88_float;
	}
	return 0;
	
}


func_287(var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_19_object = var_23_object;
	func_251(var_22_bool, var_23_object);
	var_39_bool = var_22_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	var_40_bool = 0; var_41_object = Obj(); var_42_string = "";
	var_19_object = var_41_object;
	func_130(var_40_bool, var_41_object, "noaccess");
	var_49_bool = var_40_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_18_bool = 1;
		return 2;
	}
	@@var_19_object:GetProperty("noaccess", var_21_int);
	var_18_bool = var_21_int == (int)0;
	return 2;
}


