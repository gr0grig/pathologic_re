// @IMPORTS: FogLinear/2,GetHeight/1,PlayGlobalSound/2,MovePoint/2,PlaySound/1,ReportHit/4,SetVisirVisibility/1,Sleep/1,RemoveActor/1,PutOnGrid/0,SetTimer/2,FindActor/2,GetPosition/1,Stop/0,FindPathTo/2,RotatePath/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,IsPlayerActor/2,GetScene/1,self/1,CreateFloatVector/1,SendWorldWndMessage/2,Hold/0
// @STRINGS: W:breath|A:GetPFPosition|W:attack|W:player|A:GetPosition|W:walk|W:run|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:add
// @RUN_OP: 0x44
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @TASK_1: vars= params=0
// @TASK_2: vars=bool,object params=2
// @EVENT_7: op=0x76 vars=int
// @EVENT_10: op=0xf8 vars=object
// @EVENT_41: op=0x103 vars=object
// @STANDALONE_EVENT_41: op=0x1ed vars=object
// @STANDALONE_EVENT_7: op=0x1ef vars=int
// @STANDALONE_EVENT_6: op=0x208 vars=
// @PE: 0x6b,0x76,0xe6,0xf8,0x103,0x10c,0x1d8,0x1ed,0x1ef

task_2_event_7(var_0_bool, var_1_object, var_2_int)
{
	var_3_int = 0;
	var_2_int = var_3_int;
	func_230(var_1_object, var_2_int, var_3_int);
	var_2_int = (int)0;
	func_495();
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_object)
{
	RequestClearPath(var_2_object);
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_object)
{
	func_252(var_2_object);
	var_2_object = Obj();
	func_493();
	return 0;
}


event_41(var_0_bool, var_1_object, var_2_object)
{
	return 0;
}


event_7(var_0_bool, var_1_object, var_2_int)
{
	var_4_bool = var_2_int == (int)10;
	if(var_4_bool != 0) {
		KillTimer((int)10);
		SetVisirVisibility((bool)0);
		FogLinear((int)0, (int)2);
		Sleep((int)2);
		var_10_object = Obj();
		func_462(var_10_object);
		RemoveActor(var_10_object);
		Hold();
	}
	return 0;
}


event_6(var_0_bool, var_1_object)
{
	var_2_object = Obj();
	func_462(var_2_object);
	RemoveActor(var_2_object);
	Hold();
	return 0;
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	PutOnGrid();
	FogLinear((int)1, (int)1);
	SetTimer((int)10, (int)30);
	FindActor(var_3_object, "player");
	
Label_82:
	var_9_bool = 0; var_10_object = Obj();
	var_3_object = var_10_object;
	TaskCall(2);
	func_107(var_9_bool, var_10_object);
	TaskReturn();
	var_96_bool = var_11_bool == 0; //@nz
	if(var_96_bool != 0) {
		Sleep((float)0.5);
		goto Label_82;
	}
	var_98_object = Obj();
	var_3_object = var_98_object;
	TaskCall(0);
	func_0(var_98_object);
	TaskReturn();
	var_196_object = Obj();
	func_462(var_196_object);
	RemoveActor(var_196_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_0(var_98_object)
{
	var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_float = 0;
	FogLinear((int)1, (int)1);
	GetHeight(var_103_float);
	var_104_cvector = CVector(0.0, 0.0, 0.0);
	var_109_float = GetByIndex(var_104_cvector, 1);
	var_103_float = var_109_float;
	SetByIndex(var_104_cvector, 1) = var_109_float;
	PlayGlobalSound("breath", var_104_cvector);
	@@var_98_object:GetPFPosition(var_105_cvector);
	MovePoint(var_105_cvector, (int)500);
	var_112_bool = 0; var_113_object = Obj();
	var_98_object = var_113_object;
	func_438(var_112_bool, var_113_object);
	if(var_112_bool != 0) {
		var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
		func_279(CVector(0,0,0));
		var_117_cvector = var_115_cvector;
		var_120_cvector = CVector(0,0,0); var_121_object = Obj();
		var_98_object = var_121_object;
		func_284(var_120_cvector, var_121_object);
		var_120_cvector = var_116_cvector;
		func_468(var_114_float, var_115_cvector, var_116_cvector);
		var_127_bool = var_114_float <= (float)90000.0;
		if(var_127_bool != 0) {
			PlaySound("attack");
			var_129_float = 0; var_130_object = Obj(); var_131_float = 0;
			var_98_object = var_130_object;
			func_328(var_129_float, var_130_object, (float)0.25);
			var_129_float = var_106_float;
			ReportHit(var_98_object, (int)5, var_106_float, (float)0.25);
		}
	}
	SetVisirVisibility((bool)0);
	FogLinear((int)0, (int)2);
	Sleep((int)5);
	var_193_object = Obj();
	func_462(var_193_object);
	RemoveActor(var_193_object);
	return 8;
}


func_128(var_0_bool, var_1_object, var_13_bool, var_14_object, var_15_float, var_16_float, var_17_bool, var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; var_21_object = Obj(); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_object = Obj();
	var_0_bool = false;
	var_1_object = var_14_object;
	var_18_bool = var_28_bool;
	
Label_132:
	var_35_bool = 0; var_36_object = Obj();
	var_14_object = var_36_object;
	func_268(var_35_bool, var_36_object);
	var_71_bool = var_35_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_13_bool = 0;
		return 16;
	}
	@@var_14_object:GetPosition(var_30_cvector);
	GetPosition(var_31_cvector);
	var_32_cvector = var_30_cvector - var_31_cvector;
	var_33_float = var_32_cvector | var_32_cvector;
	var_72_bool = 0;
	var_72_bool = 0;
	var_74_bool = var_16_float > (int)0;
	if(var_74_bool != 0) {
		var_75_float = var_16_float * var_16_float;
		var_76_bool = var_33_float > var_75_float;
		if(var_76_bool != 0) {
			var_72_bool = 1;
		}
	}
	if(var_72_bool != 0) {
		Stop();
		var_13_bool = 0;
		return 16;
	}
	var_77_float = var_15_float * var_15_float;
	var_78_bool = var_33_float > var_77_float;
	if(var_78_bool != 0) {
		@@var_14_object:GetPFPosition(var_30_cvector);
		FindPathTo(var_34_object, var_30_cvector);
		var_79_bool = var_34_object != 0; //@nn
		if(var_79_bool != 0) {
			var_34_object = var_29_object;
			var_34_object = 0;
		}
		var_80_bool = var_29_object != 0; //@nn
		if(var_80_bool != 0) {
			var_81_bool = var_28_bool;
			if(var_81_bool == 0) goto Label_181;
			var_28_bool = 0;
			RotatePath(var_29_object, var_27_bool);
			var_82_bool = var_27_bool == 0; //@nz
			if(var_82_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_85_string = "";
				func_275(var_85_string);
				var_86_string = "";
				func_277(var_86_string);
				FollowPath(var_29_object, var_17_bool, var_27_bool, var_85_string, var_86_string);
				var_87_bool = var_27_bool == 0; //@nz
				if(var_87_bool != 0) {
					var_88_bool = var_0_bool;
					if(var_88_bool != 0) {
						var_29_object = 0;
						goto Label_228;
					EMIT "GOTO 0xc9";
					}
				} else {
					var_29_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_27_bool);
					var_91_bool = var_27_bool == 0; //@nz
					if(var_91_bool != 0) {
						var_92_bool = var_0_bool;
						if(var_92_bool != 0) {
							var_29_object = 0;
							goto Label_228;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_228;
	}
			var_34_object = 0;
			goto Label_226;

		Label_226:
			var_29_object = 0;

		}
		goto Label_132;
	}
Label_228:
	var_13_bool = !var_0_bool;
	return 16;
	
}


func_268(var_35_bool, var_36_object)
{
	var_37_bool = 0; var_38_object = Obj();
	var_36_object = var_38_object;
	func_438(var_37_bool, var_38_object);
	var_37_bool = var_35_bool;
	return 0;
}


func_397(var_52_bool, var_53_object)
{
	var_54_bool = 0; var_55_bool = 0;
	@@var_53_object:IsDead(var_55_bool);
	var_55_bool = var_52_bool;
	return 2;
}


func_402(var_41_bool, var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj();
	var_47_bool = var_42_object == 0; //@ne
	if(var_47_bool != 0) {
		var_41_bool = 0;
		return 4;
	}
	var_48_bool = 0;
	var_48_bool = 0;
	var_51_bool = IsFuncExist(var_42_object, "IsDead", (int)1);
	if(var_51_bool != 0) {
		var_52_bool = 0; var_53_object = Obj();
		var_42_object = var_53_object;
		func_397(var_52_bool, var_53_object);
		if(var_52_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		var_41_bool = 0;
		return 4;
	}
	GetScene(var_45_object);
	var_56_bool = var_45_object == 0; //@ne
	if(var_56_bool != 0) {
		var_41_bool = 0;
		return 4;
	}
	@@var_42_object:GetScene(var_46_object);
	var_57_bool = var_45_object != var_46_object;
	if(var_57_bool != 0) {
		var_41_bool = 0;
		return 4;
	}
	var_41_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_275(var_85_string)
{
	var_85_string = "walk";
	return 0;
}


func_277(var_86_string)
{
	var_86_string = "run";
	return 0;
}


func_279(var_117_cvector)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0);
	GetPosition(var_119_cvector);
	var_119_cvector = var_117_cvector;
	return 2;
}


func_284(var_120_cvector, var_121_object)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0);
	@@var_121_object:GetPosition(var_123_cvector);
	var_123_cvector = var_120_cvector;
	return 2;
}


func_289(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_bool = 0;
	IsPlayerActor(var_180_object, var_182_bool);
	var_182_bool = var_179_bool;
	return 2;
}


func_294(var_59_bool, var_60_object, var_61_string)
{
	var_62_bool = 0; var_63_bool = 0;
	var_66_bool = IsFuncExist(var_60_object, "HasProperty", (int)2);
	var_67_bool = var_66_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_59_bool = 0;
		return 2;
	}
	@@var_60_object:HasProperty(var_61_string, var_63_bool);
	var_63_bool = var_59_bool;
	return 2;
}


func_306(var_149_bool, var_150_object, var_151_string, var_152_float, var_153_float, var_154_float)
{
	var_155_float = 0; var_156_float = 0;
	var_157_bool = 0; var_158_object = Obj(); var_159_string = "";
	var_150_object = var_158_object;
	var_151_string = var_159_string;
	func_294(var_157_bool, var_158_object, var_159_string);
	var_160_bool = var_157_bool == 0; //@nz
	if(var_160_bool != 0) {
		var_149_bool = 0;
		return 2;
	}
	@@var_150_object:GetProperty(var_151_string, var_156_float);
	var_161_float = 0; var_162_float = 0; var_163_float = 0; var_164_float = 0;
	var_162_float = var_156_float + var_152_float;
	var_153_float = var_163_float;
	var_154_float = var_164_float;
	func_472(var_161_float, var_162_float, var_163_float, var_164_float);
	@@var_150_object:SetProperty(var_151_string, var_161_float);
	var_149_bool = 1;
	return 2;
}


func_438(var_37_bool, var_38_object)
{
	var_39_int = 0; var_40_int = 0;
	var_41_bool = 0; var_42_object = Obj();
	var_38_object = var_42_object;
	func_402(var_41_bool, var_42_object);
	var_58_bool = var_41_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	var_59_bool = 0; var_60_object = Obj(); var_61_string = "";
	var_38_object = var_60_object;
	func_294(var_59_bool, var_60_object, "noaccess");
	var_68_bool = var_59_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_37_bool = 1;
		return 2;
	}
	@@var_38_object:GetProperty("noaccess", var_40_int);
	var_37_bool = var_40_int == (int)0;
	return 2;
}


func_328(var_129_float, var_130_object, var_131_float)
{
	var_132_float = 0; var_133_float = 0; var_134_float = 0; var_135_float = 0;
	var_136_bool = 0; var_137_object = Obj(); var_138_string = "";
	var_130_object = var_137_object;
	func_294(var_136_bool, var_137_object, "disease");
	var_139_bool = var_136_bool == 0; //@nz
	if(var_139_bool != 0) {
		var_129_float = 0;
		return 4;
	}
	var_134_float = 0;
	var_140_bool = 0; var_141_object = Obj(); var_142_string = "";
	var_130_object = var_141_object;
	func_294(var_140_bool, var_141_object, "armor_disease");
	if(var_140_bool != 0) {
		@@var_130_object:GetProperty("armor_disease", var_134_float);
		var_134_float = var_134_float / (int)100;
	}
	var_145_bool = 0; var_146_object = Obj(); var_147_string = "";
	var_130_object = var_146_object;
	func_294(var_145_bool, var_146_object, "immunity");
	if(var_145_bool != 0) {
		@@var_130_object:GetProperty("immunity", var_135_float);
		var_134_float = var_134_float + var_135_float;
		var_149_bool = 0; var_150_object = Obj(); var_151_string = ""; var_152_float = 0; var_153_float = 0; var_154_float = 0;
		var_130_object = var_150_object;
		var_152_float = -var_131_float;
		func_306(var_149_bool, var_150_object, "immunity", var_152_float, (float)0, (float)1);
	}
	var_168_bool = var_134_float >= (int)1;
	if(var_168_bool != 0) {
		var_129_float = 0.0;
		return 4;
	}
	var_170_int = (int)1 - var_134_float;
	var_172_float = var_170_int / (int)2;
	var_131_float = var_131_float * var_172_float;
	var_173_bool = 0; var_174_object = Obj(); var_175_string = ""; var_176_float = 0; var_177_float = 0; var_178_float = 0;
	var_130_object = var_174_object;
	var_131_float = var_176_float;
	func_306(var_173_bool, var_174_object, "disease", var_176_float, (float)0, (float)1);
	var_179_bool = 0; var_180_object = Obj();
	var_130_object = var_180_object;
	func_289(var_179_bool, var_180_object);
	if(var_179_bool != 0) {
		var_183_float = 0;
		var_131_float = var_183_float;
		func_483(var_183_float);
	}
	var_131_float = var_129_float;
	return 4;
}


func_462(var_193_object)
{
	var_194_object = Obj(); var_195_object = Obj();
	self(var_195_object);
	var_195_object = var_193_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_468(var_114_float, var_115_cvector, var_116_cvector)
{
	var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0);
	var_125_cvector = var_116_cvector - var_115_cvector;
	var_114_float = var_125_cvector | var_125_cvector;
	return 2;
}


func_472(var_161_float, var_162_float, var_163_float, var_164_float)
{
	var_165_bool = var_162_float < var_163_float;
	if(var_165_bool != 0) {
		var_163_float = var_161_float;
		return 0;
	}
	var_166_bool = var_162_float > var_164_float;
	if(var_166_bool != 0) {
		var_164_float = var_161_float;
		return 0;
	}
	var_162_float = var_161_float;
	return 0;
}


func_483(var_183_float)
{
	var_184_object = Obj(); var_185_object = Obj();
	CreateFloatVector(var_185_object);
	@@var_185_object:add(var_183_float);
	SendWorldWndMessage((int)14, var_185_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_230(var_0_bool, var_1_object, var_3_int)
{
	var_5_bool = var_3_int != (int)0;
	if(var_5_bool != 0) {
		return 0;
	}
	var_6_bool = 0; var_7_object = Obj();
	var_7_object = var_1_object;
	func_268(var_6_bool, var_7_object);
	var_42_bool = var_6_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_107(var_9_bool, var_10_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_float = 0; var_16_float = 0; var_17_bool = 0; var_18_bool = 0;
	var_10_object = var_14_object;
	func_128(var_9_bool, var_10_object, var_13_bool, var_14_object, (float)150, (float)0, (bool)0, (bool)0);
	var_13_bool = var_9_bool;
	return 0;
}


func_252(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


