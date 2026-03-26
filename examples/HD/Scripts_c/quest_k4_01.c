// @IMPORTS: Hold/0,Trace/1,GetMainOutdoorScene/1,GetSceneByName/2,PlaySound/1,RemoveActor/1,AddActor/6,Trigger/2,GetVariable/2,SetVariable/2,self/1,CreateObjectVector/1,AddBlankActor/4,AddActorByType/6,FindActor/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:warehouse_gangster@door1|W:cot_alexandr@door1|W:init_volnica|W:pt_k4q01_grabitel|A:GetLocator|W:pers_grabitel|W:k4q01_grabitel.xml|A:AddStationaryActor|A:add|W:k4q01_grabitel_e.xml|W:grabitel_entrance_dead|A:Remove|W:warehouse_gangster|W:pt_britva|W:k4q01_britva.xml|W:door_open|W:cutscene|W:door_close|W:iwarehouse_gangster@door1|W:pt_k4q01_meshok|W:scripted_container|W:k4q01_meshok.xml|W:quest_k4_01_cutscene|W:cutscene_end|W:pt_britva_attack|W:k4q01_britva_attack.xml|W:pt_k4q01_rat|W:pers_rat|W:rat_indoor.xml|W:meshok_taken|W:warehouse_gangster_unload|W:cleanup|W:fail|W:completed|W:k4q01|W:.bin|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get|A:clear|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object,object,object,object params=0
// @EVENT_26: op=0x12 vars=string

task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_int = 0; var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0;
	Trace(var_5_string);
	var_37_bool = var_5_string == "init_volnica";
	if(var_37_bool != 0) {
		GetMainOutdoorScene(var_21_object);
		var_22_int = 1;

	Label_27:
		var_39_int = "pt_k4q01_grabitel" + var_22_int;
		@@var_21_object:GetLocator(var_39_int, var_23_bool, var_24_cvector, var_25_cvector);
		var_40_bool = var_23_bool == 0; //@nz
		if(var_40_bool != 0) {
		} else {
			@@var_21_object:AddStationaryActor(var_26_object, var_24_cvector, var_25_cvector, "pers_grabitel", "k4q01_grabitel.xml");
			@@@var_1_object:add(var_26_object);
			var_26_object = 0;
			var_22_int = var_22_int + (int)1;
			goto Label_27;
	}
		var_63_bool = var_5_string == "grabitel_entrance_dead";
		if(var_63_bool != 0) {
			var_64_string = ""; var_65_bool = 0;
			func_334("warehouse_gangster@door1", (bool)0);
			var_74_object = var_2_object;
			if(var_74_object != 0) {
				@@@var_2_object:Remove();
			}
			GetSceneByName(var_27_object, "warehouse_gangster");
			var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = "";
			var_27_object = var_77_object;
			func_280(var_76_object, var_77_object, "pt_britva", "pers_grabitel", "k4q01_britva.xml");
			var_4_object = var_76_object;
			PlaySound("door_open");
			var_27_object = 0;
			goto Label_207;
		}
		var_96_bool = var_5_string == "cutscene";
		if(var_96_bool != 0) {
			var_97_object = var_4_object;
			if(var_97_object != 0) {
				RemoveActor(var_4_object);
			}
			GetSceneByName(var_28_object, "warehouse_gangster");
			PlaySound("door_close");
			var_100_string = ""; var_101_bool = 0;
			func_334("iwarehouse_gangster@door1", (bool)1);
			var_102_object = Obj(); var_103_object = Obj(); var_104_string = ""; var_105_string = ""; var_106_string = "";
			var_28_object = var_103_object;
			func_298(var_102_object, var_103_object, "pt_k4q01_meshok", "scripted_container", "k4q01_meshok.xml");
			var_3_object = var_102_object;
			var_120_object = Obj(); var_121_string = "";
			func_269(var_120_object, "quest_k4_01_cutscene");
			var_28_object = 0;
			goto Label_207;
		}
		var_129_bool = var_5_string == "cutscene_end";
		if(var_129_bool != 0) {
			GetSceneByName(var_29_object, "warehouse_gangster");
			var_131_object = Obj(); var_132_object = Obj(); var_133_string = ""; var_134_string = ""; var_135_string = "";
			var_29_object = var_132_object;
			func_280(var_131_object, var_132_object, "pt_britva_attack", "pers_grabitel", "k4q01_britva_attack.xml");
			var_30_int = 1;

		Label_128:
			var_137_int = "pt_k4q01_rat" + var_30_int;
			@@var_29_object:GetLocator(var_137_int, var_31_bool, var_32_cvector, var_33_cvector);
			var_138_bool = var_31_bool == 0; //@nz
			if(var_138_bool != 0) {
			} else {
				AddActor(var_34_object, "pers_rat", var_29_object, var_32_cvector, var_33_cvector, "rat_indoor.xml");
				var_34_object = 0;
				var_30_int = var_30_int + (int)1;
				goto Label_128;
		}
			var_143_bool = var_5_string == "meshok_taken";
			if(var_143_bool != 0) {
				var_144_string = ""; var_145_bool = 0;
				func_334("iwarehouse_gangster@door1", (bool)0);
				func_372();
				PlaySound("door_open");
				goto Label_207;
			}
			var_171_bool = var_5_string == "warehouse_gangster_unload";
			if(var_171_bool != 0) {
				var_172_bool = var_0_bool;
				if(var_172_bool != 0) {
					var_173_string = ""; var_174_bool = 0;
					func_334("warehouse_gangster@door1", (bool)1);
					var_175_object = var_4_object;
					if(var_175_object != 0) {
						Trigger(var_4_object, "cleanup");
					}
				}
				goto Label_207;
			}
			var_178_bool = var_5_string == "fail";
			if(var_178_bool != 0) {
				func_208();
				goto Label_207;
			}
			var_204_bool = var_5_string == "completed";
			if(var_204_bool != 0) {
				func_216();
				goto Label_207;
			}
			var_208_bool = var_5_string == "cleanup";
			if(var_208_bool == 0) goto Label_207;
			GetVariable("k4q01", var_35_int);
			var_211_bool = var_35_int != (int)1000;
			if(var_211_bool != 0) {
				func_208();
				goto Label_207;
			}
			func_224(var_32_cvector, var_33_cvector, var_34_object, var_35_int);
		}
		var_0_bool = true;
		var_29_object = 0;
		goto Label_207;
	}
	var_41_object = Obj(); var_42_object = Obj(); var_43_string = ""; var_44_string = ""; var_45_string = "";
	var_21_object = var_42_object;
	func_316(var_41_object, var_42_object, "pt_k4q01_grabitel", "pers_grabitel", "k4q01_grabitel_e.xml");
	var_2_object = var_41_object;
	var_21_object = 0;
	goto Label_207;
	
Label_207:
	return 30;
	
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj();
	func_263(var_5_object);
	var_1_object = var_5_object;
	var_8_string = ""; var_9_bool = 0;
	func_334("warehouse_gangster@door1", (bool)1);
	var_18_string = ""; var_19_bool = 0;
	func_334("cot_alexandr@door1", (bool)0);
	
Label_14:
	Hold();
	goto Label_14;
}
EMIT "Return(); Pop(0)";


func_224(var_1_object, var_2_object, var_3_object, var_4_object)
{
	EventDisable(26);
	var_181_object = var_1_object;
	if(var_181_object != 0) {
		var_182_object = Obj();
		var_182_object = var_1_object;
		func_351(var_182_object);
		var_1_object = 0;
	}
	var_193_object = var_2_object;
	if(var_193_object != 0) {
		@@@var_2_object:Remove();
	}
	var_194_object = var_3_object;
	if(var_194_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_196_object = var_4_object;
	if(var_196_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_198_string = ""; var_199_bool = 0;
	func_334("iwarehouse_gangster@door1", (bool)0);
	var_200_object = Obj();
	func_257(var_200_object);
	RemoveActor(var_200_object);
	return 0;
}


func_257(var_200_object)
{
	var_201_object = Obj(); var_202_object = Obj();
	self(var_202_object);
	var_202_object = var_200_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_385(var_160_object)
{
	var_161_object = Obj(); var_162_object = Obj();
	GetDiaryRoot(var_162_object);
	var_163_bool = var_162_object == 0; //@nz
	if(var_163_bool != 0) {
		Trace("Can't retrieve diary root");
		var_160_object = 0;
		return 2;
	}
	var_162_object = var_160_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_263(var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj();
	CreateObjectVector(var_7_object);
	var_7_object = var_5_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_298(var_102_object, var_103_object, var_104_string, var_105_string, var_106_string)
{
	var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_object = Obj();
	@@var_103_object:GetLocator(var_104_string, var_111_bool, var_112_cvector, var_113_cvector);
	var_115_bool = var_111_bool == 0; //@nz
	if(var_115_bool != 0) {
		var_117_int = "Locator " + var_104_string;
		var_119_int = var_117_int + " doesn't exist";
		Trace(var_119_int);
	} else {
		AddActorByType(Obj(), var_105_string, var_103_object, var_112_cvector, var_113_cvector, var_106_string);
	}
	var_114_object = var_102_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_269(var_120_object, var_121_string)
{
	var_122_object = Obj(); var_123_object = Obj(); var_124_object = Obj(); var_125_object = Obj();
	GetMainOutdoorScene(var_124_object);
	var_127_int = var_121_string + ".bin";
	AddBlankActor(var_125_object, var_124_object, var_121_string, var_127_int);
	var_125_object = var_120_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_334(var_8_string, var_9_bool)
{
	var_10_object = Obj(); var_11_object = Obj();
	FindActor(var_11_object, var_8_string);
	var_12_bool = var_11_object == 0; //@nz
	if(var_12_bool != 0) {
		var_14_int = "Door " + var_8_string;
		var_16_int = var_14_int + " not found";
		Trace(var_16_int);
	} else {
		@@var_11_object:SetProperty("locked", var_9_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_398(var_151_bool, var_152_object, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0; var_157_object = Obj(); var_158_object = Obj(); var_159_int = 0;
	func_385(Obj());
	var_160_object = var_157_object;
	@@var_157_object:Find(var_153_int, var_158_object);
	var_165_bool = var_158_object == 0; //@nz
	if(var_165_bool != 0) {
		var_167_int = "Can't find diary parent with id: " + var_153_int;
		Trace(var_167_int);
		var_151_bool = 0;
		return 6;
	}
	@@var_158_object:AddChild(var_152_object);
	SendWorldWndMessage((int)7);
	@@var_152_object:GetCategory(var_159_int);
	SetDiarySection(var_159_int);
	var_151_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_208()
{
	SetVariable("k4q01", (int)-1);
	func_224(var_32_cvector, var_33_cvector, var_34_object, var_35_int);
	return 0;
}


func_216()
{
	SetVariable("k4q01", (int)1000);
	func_224(var_32_cvector, var_33_cvector, var_34_object, var_35_int);
	return 0;
}


func_372()
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateDiaryEntry(var_147_object, (int)373, (int)1, (int)525730);
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0;
	var_147_object = var_152_object;
	func_398(var_151_bool, var_152_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_280(var_76_object, var_77_object, var_78_string, var_79_string, var_80_string)
{
	var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_bool = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_object = Obj();
	@@var_77_object:GetLocator(var_78_string, var_85_bool, var_86_cvector, var_87_cvector);
	var_89_bool = var_85_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_91_int = "Locator " + var_78_string;
		var_93_int = var_91_int + " doesn't exist";
		Trace(var_93_int);
	} else {
		AddActor(Obj(), var_79_string, var_77_object, var_86_cvector, var_87_cvector, var_80_string);
	}
	var_88_object = var_76_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_316(var_41_object, var_42_object, var_43_string, var_44_string, var_45_string)
{
	var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_object = Obj(); var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_object = Obj();
	@@var_42_object:GetLocator(var_43_string, var_50_bool, var_51_cvector, var_52_cvector);
	var_54_bool = var_50_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_56_int = "Locator " + var_43_string;
		var_58_int = var_56_int + " doesn't exist";
		Trace(var_58_int);
	} else {
		@@var_42_object:AddStationaryActor(Obj(), var_51_cvector, var_52_cvector, var_44_string, var_45_string);
	}
	var_53_object = var_41_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_351(var_182_object)
{
	var_183_int = 0; var_184_int = 0; var_185_object = Obj(); var_186_int = 0; var_187_int = 0; var_188_object = Obj();
	var_189_object = var_182_object;
	if(var_189_object != 0) {
		@@var_182_object:size(var_186_int);
		var_187_int = 0;

	Label_357:
		var_190_bool = var_187_int < var_186_int;
		if(var_190_bool != 0) {
			@@var_182_object:get(var_188_object, var_187_int);
			var_191_object = var_188_object;
			if(var_191_object != 0) {
				@@var_188_object:Remove();
			}
			var_188_object = 0;
			var_187_int = var_187_int + (int)1;
			goto Label_357;
		}
		@@var_182_object:clear();
	}
	return 6;
}


