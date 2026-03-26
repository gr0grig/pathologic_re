// @IMPORTS: CreateObjectVector/1,GetMainOutdoorScene/1,Hold/0,Trace/1,GetSceneByName/2,GetVariable/2,SetVariable/2,GetGameTime/1,SetTimeEvent/2,Trigger/2,PlaySound/1,ReleaseTimeEvent/1,CameraSwitchToNormal/0,AddActor/6,RemoveActor/1,FindActor/2,self/1,AddBlankActor/4,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2
// @STRINGS: W:pt_d5q01_sobor_guard1|W:pers_wasted_male|W:d5q01_sobor_guard1.xml|A:add|W:pt_d5q01_sobor_guard2|W:d5q01_sobor_guard2.xml|W:pt_d5q01_sobor_guard3|W:d5q01_sobor_guard3.xml|W:pt_d5q01_theater_guard|W:pers_whitemask|W:d5q01_theater_guard.xml|W:factory|W:factory@door1|W:ifactory_grid_door|W:pt_d5q01_Burah|W:NPC_Burah|W:d5q01_Burah.xml|W:pt_d5q01_PatrolBoss|W:pers_patrool|W:d5q01_PatrolBoss.xml|W:pt_d5q01_Patrol1|W:d5q01_Patrol.xml|W:pt_d5q01_Patrol2|W:d5q01_trigger_factory|W:d5q01PlayCutscene|W:d5q01|W:ifactory@door1|W:quest_d5_01_cutscene|W:cutscene_end|W:pt_d5q01_patrol_corpse1|W:dummy_dead_disp_b.xml|W:pt_d5q01_patrol_corpse2|W:pt_d5q01_grabitel_corpse1|W:pers_grabitel|W:pt_d5q01_grabitel_corpse2|W:pt_d5q01_patrol_survived|W:d5q01_PatrolCS.xml|W:burah_free|W:cleanup|W:factory_fight|W:attack|W:door_close|W:dead|A:size|A:get|A:IsDead|W:fail|W:completed|W:d5q01_corpse_girl|W:d5q01_girl_corpse.xml|W:d5q01_corpse1|W:d5q01_corpse.xml|W:d5q01_corpse2|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:Close|W:reputation|A:clear|A:Remove
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object params=0
// @EVENT_26: op=0x30 vars=string
// @EVENT_9: op=0x146 vars=int,float
// @EVENT_24: op=0x14e vars=int
// @PE: 0x146,0x14e,0x1cf,0x22f,0x299

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string)
{
	var_7_object = Obj(); var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_float = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_float = 0; var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0;
	Trace(var_6_string);
	var_28_bool = var_6_string == "factory";
	if(var_28_bool != 0) {
		var_29_string = ""; var_30_bool = 0;
		func_521("factory@door1", (bool)0);
		var_39_string = ""; var_40_bool = 0;
		func_538("ifactory_grid_door", (bool)1);
		GetSceneByName(var_17_object, "factory");
		var_51_object = Obj(); var_52_object = Obj(); var_53_string = ""; var_54_string = ""; var_55_string = "";
		var_17_object = var_52_object;
		func_485(var_51_object, var_52_object, "pt_d5q01_Burah", "NPC_Burah", "d5q01_Burah.xml");
		var_0_object = var_51_object;
		var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = "";
		var_17_object = var_70_object;
		func_485(var_69_object, var_70_object, "pt_d5q01_PatrolBoss", "pers_patrool", "d5q01_PatrolBoss.xml");
		@@@var_1_object:add(var_69_object);
		var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; var_78_string = "";
		var_17_object = var_75_object;
		func_485(var_74_object, var_75_object, "pt_d5q01_Patrol1", "pers_patrool", "d5q01_Patrol.xml");
		@@@var_1_object:add(var_74_object);
		var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = "";
		var_17_object = var_80_object;
		func_485(var_79_object, var_80_object, "pt_d5q01_Patrol2", "pers_patrool", "d5q01_Patrol.xml");
		@@@var_1_object:add(var_79_object);
		var_17_object = 0;
	} else {
		var_85_bool = var_6_string == "d5q01_trigger_factory";
		if(var_85_bool != 0) {
			GetVariable("d5q01PlayCutscene", var_18_int);
			var_87_int = var_18_int;
			if(var_87_int != 0) {
				GetVariable("d5q01", var_19_int);
				var_89_bool = 0; var_90_int = 0;
				var_19_int = var_90_int;
				func_665(var_89_bool, var_90_int);
				if(var_89_bool != 0) {
					var_95_string = ""; var_96_bool = 0;
					func_521("ifactory@door1", (bool)1);
					SetVariable("d5q01PlayCutscene", (int)0);
					var_99_object = Obj();
					var_99_object = var_1_object;
					func_604(var_99_object);
					var_110_object = Obj(); var_111_string = "";
					func_474(var_110_object, "quest_d5_01_cutscene");
				}
			}
			goto Label_309;
		}
		var_119_bool = var_6_string == "cutscene_end";
		if(var_119_bool != 0) {
			GetSceneByName(var_20_object, "factory");
			var_121_object = Obj(); var_122_object = Obj(); var_123_string = ""; var_124_string = ""; var_125_string = "";
			var_20_object = var_122_object;
			func_485(var_121_object, var_122_object, "pt_d5q01_patrol_corpse1", "pers_patrool", "dummy_dead_disp_b.xml");
			@@@var_1_object:add(var_121_object);
			var_126_object = Obj(); var_127_object = Obj(); var_128_string = ""; var_129_string = ""; var_130_string = "";
			var_20_object = var_127_object;
			func_485(var_126_object, var_127_object, "pt_d5q01_patrol_corpse2", "pers_patrool", "dummy_dead_disp_b.xml");
			@@@var_1_object:add(var_126_object);
			var_131_object = Obj(); var_132_object = Obj(); var_133_string = ""; var_134_string = ""; var_135_string = "";
			var_20_object = var_132_object;
			func_485(var_131_object, var_132_object, "pt_d5q01_grabitel_corpse1", "pers_grabitel", "dummy_dead_disp_b.xml");
			@@@var_1_object:add(var_131_object);
			var_136_object = Obj(); var_137_object = Obj(); var_138_string = ""; var_139_string = ""; var_140_string = "";
			var_20_object = var_137_object;
			func_485(var_136_object, var_137_object, "pt_d5q01_grabitel_corpse2", "pers_grabitel", "dummy_dead_disp_b.xml");
			@@@var_1_object:add(var_136_object);
			var_141_object = Obj(); var_142_object = Obj(); var_143_string = ""; var_144_string = ""; var_145_string = "";
			var_20_object = var_142_object;
			func_485(var_141_object, var_142_object, "pt_d5q01_patrol_survived", "pers_patrool", "d5q01_PatrolCS.xml");
			@@@var_1_object:add(var_141_object);
			var_20_object = 0;
			goto Label_309;
		}
		var_147_bool = var_6_string == "burah_free";
		if(var_147_bool != 0) {
			GetGameTime(var_21_float);
			var_149_bool = var_21_float >= (int)116;
			if(var_149_bool != 0) {
				func_338(var_24_object, var_25_bool, var_26_int);
			} else {
				SetTimeEvent((int)0, (int)116);
		}
			var_170_bool = var_6_string == "factory_fight";
			if(var_170_bool != 0) {
				var_171_string = ""; var_172_bool = 0;
				func_521("ifactory@door1", (bool)1);
				var_173_object = Obj(); var_174_string = "";
				var_173_object = var_1_object;
				func_646(var_173_object, "attack");
				PlaySound("door_close");
				var_186_bool = 0; var_187_object = Obj(); var_188_float = 0;
				func_416(Obj());
				var_189_object = var_187_object;
				func_559(var_186_bool, var_187_object, (float)-0.25);
				goto Label_309;
			}
			var_229_bool = var_6_string == "dead";
			if(var_229_bool != 0) {
				var_230_bool = 0; var_231_object = Obj(); var_232_float = 0;
				func_416(Obj());
				var_233_object = var_231_object;
				func_559(var_230_bool, var_231_object, (float)-0.25);
				@@@var_1_object:size(var_22_int);
				var_23_int = 0;

			Label_255:
				var_234_bool = var_23_int < var_22_int;
				if(var_234_bool != 0) {
					@@@var_1_object:get(var_24_object, var_23_int);
					@@var_24_object:IsDead(var_25_bool);
					var_235_bool = var_25_bool == 0; //@nz
					if(var_235_bool != 0) {
					} else {
						var_23_int = var_23_int + (int)1;
						goto Label_255;
			}
					var_241_bool = var_6_string == "cleanup";
					if(var_241_bool != 0) {
						GetVariable("d5q01", var_26_int);
						var_244_bool = var_26_int != (int)1000;
						if(var_244_bool != 0) {
							func_310();
						} else {
							func_361(var_22_int, var_23_int, Obj(), var_25_bool, var_26_int);
					}
						var_279_bool = var_6_string == "fail";
						if(var_279_bool != 0) {
							func_310();
							goto Label_309;
						}
						var_281_bool = var_6_string == "completed";
						if(var_281_bool == 0) goto Label_309;
						func_318();
					}
					func_404(var_26_int);
					goto Label_309;
				}
			}
			var_236_bool = var_23_int == var_22_int;
			if(var_236_bool != 0) {
				var_237_string = ""; var_238_bool = 0;
				func_521("ifactory@door1", (bool)0);
			}
			goto Label_309;
		}
		Trigger(var_0_object, "cleanup");
		var_165_string = ""; var_166_bool = 0;
		func_521("factory@door1", (bool)1);
		goto Label_309;
	}
Label_309:
	return 20;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	ReleaseTimeEvent((int)0);
	func_338(var_5_object, var_6_int, var_7_float);
	return 0;
}


task_0_event_24(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int)
{
	CameraSwitchToNormal();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj();
	CreateObjectVector(var_1_object);
	CreateObjectVector(var_5_object);
	GetMainOutdoorScene(var_7_object);
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = "";
	var_7_object = var_9_object;
	func_503(var_8_object, var_9_object, "pt_d5q01_sobor_guard1", "pers_wasted_male", "d5q01_sobor_guard1.xml");
	@@@var_5_object:add(var_8_object);
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = "";
	var_7_object = var_27_object;
	func_503(var_26_object, var_27_object, "pt_d5q01_sobor_guard2", "pers_wasted_male", "d5q01_sobor_guard2.xml");
	@@@var_5_object:add(var_26_object);
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = "";
	var_7_object = var_32_object;
	func_503(var_31_object, var_32_object, "pt_d5q01_sobor_guard3", "pers_wasted_male", "d5q01_sobor_guard3.xml");
	@@@var_5_object:add(var_31_object);
	var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = "";
	var_7_object = var_37_object;
	func_503(var_36_object, var_37_object, "pt_d5q01_theater_guard", "pers_whitemask", "d5q01_theater_guard.xml");
	@@@var_5_object:add(var_36_object);
	
Label_43:
	Hold();
	goto Label_43;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_646(var_173_object, var_174_string)
{
	var_175_int = 0; var_176_int = 0; var_177_object = Obj(); var_178_int = 0; var_179_int = 0; var_180_object = Obj();
	var_181_object = var_173_object;
	if(var_181_object != 0) {
		@@var_173_object:size(var_178_int);
		var_179_int = 0;

	Label_652:
		var_182_bool = var_179_int < var_178_int;
		if(var_182_bool != 0) {
			@@var_173_object:get(var_180_object, var_179_int);
			var_183_object = var_180_object;
			if(var_183_object != 0) {
				Trigger(var_180_object, var_174_string);
			}
			var_180_object = 0;
			var_179_int = var_179_int + (int)1;
			goto Label_652;
		}
	}
	return 6;
}


func_521(var_29_string, var_30_bool)
{
	var_31_object = Obj(); var_32_object = Obj();
	FindActor(var_32_object, var_29_string);
	var_33_bool = var_32_object == 0; //@nz
	if(var_33_bool != 0) {
		var_35_int = "Door " + var_29_string;
		var_37_int = var_35_int + " not found";
		Trace(var_37_int);
	} else {
		@@var_32_object:SetProperty("locked", var_30_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_457(var_275_object)
{
	var_276_object = Obj(); var_277_object = Obj();
	self(var_277_object);
	var_277_object = var_275_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_463(var_219_float, var_220_float, var_221_float, var_222_float)
{
	var_223_bool = var_220_float < var_221_float;
	if(var_223_bool != 0) {
		var_221_float = var_219_float;
		return 0;
	}
	var_224_bool = var_220_float > var_222_float;
	if(var_224_bool != 0) {
		var_222_float = var_219_float;
		return 0;
	}
	var_220_float = var_219_float;
	return 0;
}


func_338(var_2_object, var_3_object, var_4_object)
{
	var_9_object = Obj(); var_10_object = Obj();
	GetMainOutdoorScene(var_10_object);
	AddActor(var_2_object, "d5q01_corpse_girl", var_10_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d5q01_girl_corpse.xml");
	AddActor(var_3_object, "d5q01_corpse1", var_10_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d5q01_corpse.xml");
	AddActor(var_4_object, "d5q01_corpse2", var_10_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d5q01_corpse.xml");
	return 2;
}
EMIT "Stack[-1] = 0";


func_594(var_197_float)
{
	var_198_object = Obj(); var_199_object = Obj();
	CreateFloatVector(var_199_object);
	@@var_199_object:add(var_197_float);
	SendWorldWndMessage((int)16, var_199_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_404(var_5_object)
{
	EventDisable(26);
	EventDisable(9);
	var_264_object = Obj();
	var_264_object = var_5_object;
	func_625(var_264_object);
	var_275_object = Obj();
	func_457(var_275_object);
	RemoveActor(var_275_object);
	return 0;
}


func_665(var_89_bool, var_90_int)
{
	var_89_bool = 0;
	var_92_bool = var_90_int >= (int)1;
	if(var_92_bool != 0) {
		var_94_bool = var_90_int < (int)1000;
		if(var_94_bool != 0) {
			var_89_bool = 1;
		}
	}
	return 0;
}


func_538(var_39_string, var_40_bool)
{
	var_41_object = Obj(); var_42_object = Obj();
	FindActor(var_42_object, var_39_string);
	var_43_bool = var_42_object == 0; //@nz
	if(var_43_bool != 0) {
		var_45_int = "Door " + var_39_string;
		var_47_int = var_45_int + " not found";
		Trace(var_47_int);
	} else {
		var_48_bool = var_40_bool;
		if(var_48_bool != 0) {
			@@var_42_object:Close();
		}
		@@var_42_object:SetProperty("locked", var_40_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_474(var_110_object, var_111_string)
{
	var_112_object = Obj(); var_113_object = Obj(); var_114_object = Obj(); var_115_object = Obj();
	GetMainOutdoorScene(var_114_object);
	var_117_int = var_111_string + ".bin";
	AddBlankActor(var_115_object, var_114_object, var_111_string, var_117_int);
	var_115_object = var_110_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_604(var_99_object)
{
	var_100_int = 0; var_101_int = 0; var_102_object = Obj(); var_103_int = 0; var_104_int = 0; var_105_object = Obj();
	var_106_object = var_99_object;
	if(var_106_object != 0) {
		@@var_99_object:size(var_103_int);
		var_104_int = 0;

	Label_610:
		var_107_bool = var_104_int < var_103_int;
		if(var_107_bool != 0) {
			@@var_99_object:get(var_105_object, var_104_int);
			var_108_object = var_105_object;
			if(var_108_object != 0) {
				RemoveActor(var_105_object);
			}
			var_105_object = 0;
			var_104_int = var_104_int + (int)1;
			goto Label_610;
		}
		@@var_99_object:clear();
	}
	return 6;
}


func_416(var_189_object)
{
	var_190_object = Obj(); var_191_object = Obj();
	FindActor(var_191_object, "player");
	var_191_object = var_189_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_485(var_51_object, var_52_object, var_53_string, var_54_string, var_55_string)
{
	var_56_bool = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_object = Obj(); var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	@@var_52_object:GetLocator(var_53_string, var_60_bool, var_61_cvector, var_62_cvector);
	var_64_bool = var_60_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Locator " + var_53_string;
		var_68_int = var_66_int + " doesn't exist";
		Trace(var_68_int);
	} else {
		AddActor(Obj(), var_54_string, var_52_object, var_61_cvector, var_62_cvector, var_55_string);
	}
	var_63_object = var_51_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_423(var_209_bool, var_210_object, var_211_string)
{
	var_212_bool = 0; var_213_bool = 0;
	var_216_bool = IsFuncExist(var_210_object, "HasProperty", (int)2);
	var_217_bool = var_216_bool == 0; //@nz
	if(var_217_bool != 0) {
		var_209_bool = 0;
		return 2;
	}
	@@var_210_object:HasProperty(var_211_string, var_213_bool);
	var_213_bool = var_209_bool;
	return 2;
}


func_361(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_247_object = var_0_object;
	if(var_247_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_249_object = var_2_object;
	if(var_249_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_251_object = var_3_object;
	if(var_251_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_253_object = var_4_object;
	if(var_253_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_255_string = ""; var_256_bool = 0;
	func_538("ifactory_grid_door", (bool)0);
	var_257_object = Obj(); var_258_string = "";
	var_257_object = var_1_object;
	func_646(var_257_object, "cleanup");
	var_259_string = ""; var_260_bool = 0;
	func_521("factory@door1", (bool)1);
	SetVariable("d5q01PlayCutscene", (int)0);
	ReleaseTimeEvent((int)0);
	return 0;
}


func_559(var_186_bool, var_187_object, var_188_float)
{
	var_193_bool = var_187_object == 0; //@nz
	if(var_193_bool != 0) {
		var_186_bool = 0;
		return 0;
	}
	var_195_bool = var_188_float > (int)0;
	if(var_195_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_226_bool = var_188_float < (int)0;
		if(var_226_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_580;
		}
		var_186_bool = 0;
		return 0;
	}
Label_580:
	var_197_float = 0;
	var_188_float = var_197_float;
	func_594(var_197_float);
	var_201_bool = 0; var_202_object = Obj(); var_203_string = ""; var_204_float = 0; var_205_float = 0; var_206_float = 0;
	var_187_object = var_202_object;
	var_188_float = var_204_float;
	func_435(var_201_bool, var_202_object, "reputation", var_204_float, (float)0, (float)1);
	var_186_bool = 1;
	return 0;
	
}


func_625(var_264_object)
{
	var_265_int = 0; var_266_int = 0; var_267_object = Obj(); var_268_int = 0; var_269_int = 0; var_270_object = Obj();
	var_271_object = var_264_object;
	if(var_271_object != 0) {
		@@var_264_object:size(var_268_int);
		var_269_int = 0;

	Label_631:
		var_272_bool = var_269_int < var_268_int;
		if(var_272_bool != 0) {
			@@var_264_object:get(var_270_object, var_269_int);
			var_273_object = var_270_object;
			if(var_273_object != 0) {
				@@var_270_object:Remove();
			}
			var_270_object = 0;
			var_269_int = var_269_int + (int)1;
			goto Label_631;
		}
		@@var_264_object:clear();
	}
	return 6;
}


func_435(var_201_bool, var_202_object, var_203_string, var_204_float, var_205_float, var_206_float)
{
	var_207_float = 0; var_208_float = 0;
	var_209_bool = 0; var_210_object = Obj(); var_211_string = "";
	var_202_object = var_210_object;
	var_203_string = var_211_string;
	func_423(var_209_bool, var_210_object, var_211_string);
	var_218_bool = var_209_bool == 0; //@nz
	if(var_218_bool != 0) {
		var_201_bool = 0;
		return 2;
	}
	@@var_202_object:GetProperty(var_203_string, var_208_float);
	var_219_float = 0; var_220_float = 0; var_221_float = 0; var_222_float = 0;
	var_220_float = var_208_float + var_204_float;
	var_205_float = var_221_float;
	var_206_float = var_222_float;
	func_463(var_219_float, var_220_float, var_221_float, var_222_float);
	@@var_202_object:SetProperty(var_203_string, var_219_float);
	var_201_bool = 1;
	return 2;
}


func_310()
{
	SetVariable("d5q01", (int)-1);
	func_361(var_22_int, var_23_int, var_24_object, var_25_bool, var_26_int);
	return 0;
}


func_503(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj();
	@@var_9_object:GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	var_21_bool = var_17_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_23_int = "Locator " + var_10_string;
		var_25_int = var_23_int + " doesn't exist";
		Trace(var_25_int);
	} else {
		@@var_9_object:AddStationaryActor(Obj(), var_18_cvector, var_19_cvector, var_11_string, var_12_string);
	}
	var_20_object = var_8_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_318()
{
	SetVariable("d5q01", (int)1000);
	func_361(var_22_int, var_23_int, var_24_object, var_25_bool, var_26_int);
	return 0;
}


