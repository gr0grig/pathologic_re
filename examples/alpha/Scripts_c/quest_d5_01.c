// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,GetVariable/2,SetVariable/2,AddScriptedActor/5,FindActor/2,RegisterKeyCallback/1,CameraPlay/1,CameraWaitForPlayFinish/0,UnregisterKeyCallback/1,RemoveActor/1,CameraSwitchToNormal/0,GetGameTime/1,SetTimeEvent/2,Trigger/2,PlaySound/1,ReleaseTimeEvent/1,GetMainOutdoorScene/1,irand/2,AddActor/6,CreateObjectVector/1
// @STRINGS: W:factory|W:factory@door1|W:ifactory_grid_door|W:pt_d5q01_Burah|W:NPC_Burah|W:d5q01_Burah.xml|W:pt_d5q01_PatrolBoss|W:pers_patrool|W:d5q01_PatrolBoss.xml|A:add|W:pt_d5q01_Patrol1|W:d5q01_Patrol.xml|W:pt_d5q01_Patrol2|W:d5q01_trigger_factory|W:d5q01PlayCutscene|W:d5q01|W:ifactory@door1|W:cs_factory_grabitel1|W:cs_play_all.bin|W:cs_factory_grabitel2|W:cs_factory_patrol1|W:cs_factory_patrol2|W:cs_factory_patrol3|A:ForceGeometryLoad|W:player|W:space|W:cs_factory1.mot|W:pt_d5q01_patrol_corpse1|W:dummy_dead_b.xml|W:pt_d5q01_patrol_corpse2|W:pt_d5q01_grabitel_corpse1|W:pers_grabitel|W:pt_d5q01_grabitel_corpse2|W:pt_d5q01_patrol_survived|W:d5q01_PatrolCS.xml|W:burah_free|W:cleanup|W:factory_fight|W:attack|W:door_close|W:dead|A:size|A:get|A:IsDead|W:fail|W:completed|W:Girl location: |W:d5q01_girl_corpse|W:d5q01_girl_corpse.xml|A:clear|W:noaccess|A:HasProperty|A:GetProperty|A:SetProperty|A:RemoveProperty|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:Close
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object params=0
// @EVENT_26: op=0x8 vars=string
// @EVENT_9: op=0x139 vars=int,float
// @EVENT_24: op=0x141 vars=int
// @PE: 0x139,0x141,0x20d

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_float = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_int = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_int = 0; var_31_int = 0; var_32_object = Obj(); var_33_bool = 0;
	Trace(var_3_string);
	var_35_bool = var_3_string == "factory";
	if(var_35_bool != 0) {
		var_36_string = ""; var_37_bool = 0;
		func_455("factory@door1", (bool)0);
		var_46_string = ""; var_47_bool = 0;
		func_471("ifactory_grid_door", (bool)1);
		GetSceneByName(var_19_object, "factory");
		var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = "";
		var_19_object = var_58_object;
		func_437(var_57_object, var_58_object, "pt_d5q01_Burah", "NPC_Burah", "d5q01_Burah.xml");
		var_0_object = var_57_object;
		var_75_object = Obj(); var_76_object = Obj(); var_77_string = ""; var_78_string = ""; var_79_string = "";
		var_19_object = var_76_object;
		func_437(var_75_object, var_76_object, "pt_d5q01_PatrolBoss", "pers_patrool", "d5q01_PatrolBoss.xml");
		@@@var_1_object:add(var_75_object);
		var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = "";
		var_19_object = var_81_object;
		func_437(var_80_object, var_81_object, "pt_d5q01_Patrol1", "pers_patrool", "d5q01_Patrol.xml");
		@@@var_1_object:add(var_80_object);
		var_85_object = Obj(); var_86_object = Obj(); var_87_string = ""; var_88_string = ""; var_89_string = "";
		var_19_object = var_86_object;
		func_437(var_85_object, var_86_object, "pt_d5q01_Patrol2", "pers_patrool", "d5q01_Patrol.xml");
		@@@var_1_object:add(var_85_object);
		var_19_object = 0;
	} else {
		var_91_bool = var_3_string == "d5q01_trigger_factory";
		if(var_91_bool != 0) {
			GetVariable("d5q01PlayCutscene", var_20_int);
			var_93_int = var_20_int;
			if(var_93_int != 0) {
				GetVariable("d5q01", var_21_int);
				var_95_bool = 0; var_96_int = 0;
				var_21_int = var_96_int;
				func_525(var_95_bool, var_96_int);
				if(var_95_bool != 0) {
					var_101_string = ""; var_102_bool = 0;
					func_455("ifactory@door1", (bool)1);
					GetSceneByName(var_22_object, "factory");
					SetVariable("d5q01PlayCutscene", (int)0);
					var_106_object = Obj();
					var_106_object = var_1_object;
					func_489(var_106_object);
					AddScriptedActor(var_23_object, "cs_factory_grabitel1", "cs_play_all.bin", var_22_object, CVector(0.0, 0.0, 0.0));
					AddScriptedActor(var_24_object, "cs_factory_grabitel2", "cs_play_all.bin", var_22_object, CVector(0.0, 0.0, 0.0));
					AddScriptedActor(var_25_object, "cs_factory_patrol1", "cs_play_all.bin", var_22_object, CVector(0.0, 0.0, 0.0));
					AddScriptedActor(var_26_object, "cs_factory_patrol2", "cs_play_all.bin", var_22_object, CVector(0.0, 0.0, 0.0));
					AddScriptedActor(var_27_object, "cs_factory_patrol3", "cs_play_all.bin", var_22_object, CVector(0.0, 0.0, 0.0));
					@@var_25_object:ForceGeometryLoad();
					@@var_26_object:ForceGeometryLoad();
					@@var_27_object:ForceGeometryLoad();
					FindActor(var_28_object, "player");
					var_132_object = Obj();
					var_28_object = var_132_object;
					func_388(var_132_object);
					RegisterKeyCallback("space");
					CameraPlay("cs_factory1.mot");
					CameraWaitForPlayFinish();
					UnregisterKeyCallback("space");
					var_149_object = Obj();
					var_28_object = var_149_object;
					func_411(var_149_object);
					RemoveActor(var_23_object);
					RemoveActor(var_24_object);
					RemoveActor(var_25_object);
					RemoveActor(var_26_object);
					RemoveActor(var_27_object);
					var_160_object = Obj(); var_161_object = Obj(); var_162_string = ""; var_163_string = ""; var_164_string = "";
					var_22_object = var_161_object;
					func_437(var_160_object, var_161_object, "pt_d5q01_patrol_corpse1", "pers_patrool", "dummy_dead_b.xml");
					@@@var_1_object:add(var_160_object);
					var_165_object = Obj(); var_166_object = Obj(); var_167_string = ""; var_168_string = ""; var_169_string = "";
					var_22_object = var_166_object;
					func_437(var_165_object, var_166_object, "pt_d5q01_patrol_corpse2", "pers_patrool", "dummy_dead_b.xml");
					@@@var_1_object:add(var_165_object);
					var_170_object = Obj(); var_171_object = Obj(); var_172_string = ""; var_173_string = ""; var_174_string = "";
					var_22_object = var_171_object;
					func_437(var_170_object, var_171_object, "pt_d5q01_grabitel_corpse1", "pers_grabitel", "dummy_dead_b.xml");
					@@@var_1_object:add(var_170_object);
					var_175_object = Obj(); var_176_object = Obj(); var_177_string = ""; var_178_string = ""; var_179_string = "";
					var_22_object = var_176_object;
					func_437(var_175_object, var_176_object, "pt_d5q01_grabitel_corpse2", "pers_grabitel", "dummy_dead_b.xml");
					@@@var_1_object:add(var_175_object);
					var_180_object = Obj(); var_181_object = Obj(); var_182_string = ""; var_183_string = ""; var_184_string = "";
					var_22_object = var_181_object;
					func_437(var_180_object, var_181_object, "pt_d5q01_patrol_survived", "pers_patrool", "d5q01_PatrolCS.xml");
					@@@var_1_object:add(var_180_object);
					CameraSwitchToNormal();
					var_28_object = 0;
					var_27_object = 0;
					var_26_object = 0;
					var_25_object = 0;
					var_24_object = 0;
					var_23_object = 0;
					var_22_object = 0;
				}
			}
			goto Label_296;
		}
		var_186_bool = var_3_string == "burah_free";
		if(var_186_bool != 0) {
			GetGameTime(var_29_float);
			var_188_bool = var_29_float >= (int)117;
			if(var_188_bool != 0) {
				func_325(var_33_bool);
			} else {
				SetTimeEvent((int)0, (int)117);
		}
			var_212_bool = var_3_string == "factory_fight";
			if(var_212_bool != 0) {
				var_213_string = ""; var_214_bool = 0;
				func_455("ifactory@door1", (bool)1);
				var_215_object = Obj(); var_216_string = "";
				var_215_object = var_1_object;
				func_508(var_215_object, "attack");
				PlaySound("door_close");
				goto Label_296;
			}
			var_228_bool = var_3_string == "dead";
			if(var_228_bool != 0) {
				@@@var_1_object:size(var_30_int);
				var_31_int = 0;

			Label_262:
				var_229_bool = var_31_int < var_30_int;
				if(var_229_bool != 0) {
					@@@var_1_object:get(var_32_object, var_31_int);
					@@var_32_object:IsDead(var_33_bool);
					var_230_bool = var_33_bool == 0; //@nz
					if(var_230_bool != 0) {
					} else {
						var_32_object = 0;
						var_31_int = var_31_int + (int)1;
						goto Label_262;
			}
					var_236_bool = var_3_string == "fail";
					if(var_236_bool != 0) {
						func_297();
						goto Label_296;
					}
					var_253_bool = var_3_string == "completed";
					if(var_253_bool == 0) goto Label_296;
					func_305();
				}
			}
			var_231_bool = var_31_int == var_30_int;
			if(var_231_bool != 0) {
				var_232_string = ""; var_233_bool = 0;
				func_455("ifactory@door1", (bool)0);
			}
			goto Label_296;
		}
		Trigger(var_0_object, "cleanup");
		var_207_string = ""; var_208_bool = 0;
		func_455("factory@door1", (bool)1);
		goto Label_296;
	}
Label_296:
	return 30;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	ReleaseTimeEvent((int)0);
	func_325(var_4_float);
	return 0;
}


task_0_event_24(var_0_object, var_1_object, var_2_object, var_3_int)
{
	CameraSwitchToNormal();
	return 0;
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj();
	func_431(var_3_object);
	var_1_object = var_3_object;
	
Label_4:
	Hold();
	goto Label_4;
}
EMIT "Return(); Pop(0)";


func_388(var_132_object)
{
	var_133_bool = 0; var_134_int = 0; var_135_bool = 0; var_136_int = 0;
	var_137_bool = var_132_object == 0; //@nz
	if(var_137_bool != 0) {
		return 4;
	}
	@@var_132_object:HasProperty("noaccess", var_135_bool);
	var_139_bool = var_135_bool;
	if(var_139_bool != 0) {
		@@var_132_object:GetProperty("noaccess", var_136_int);
		var_143_int = var_136_int + (int)1;
		@@var_132_object:SetProperty("noaccess", var_143_int);
	} else {
		@@var_132_object:SetProperty("noaccess", (int)1);
	}
	return 4;
	
}


func_325(var_2_object)
{
	var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_int = 0;
	GetMainOutdoorScene(var_8_object);
	irand(var_9_int, (int)2);
	var_13_int = var_9_int + (int)1;
	var_14_int = "Girl location: " + var_13_int;
	Trace(var_14_int);
	var_17_int = var_9_int + (int)1;
	var_18_int = "d5q01_girl_corpse" + var_17_int;
	AddActor(var_2_object, var_18_int, var_8_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d5q01_girl_corpse.xml");
	Trigger(var_2_object, "cleanup");
	return 4;
}
EMIT "Stack[-2] = 0";


func_455(var_36_string, var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindActor(var_39_object, var_36_string);
	var_40_bool = var_39_object == 0; //@nz
	if(var_40_bool != 0) {
		var_42_int = "Door " + var_36_string;
		var_44_int = var_42_int + " not found";
		Trace(var_44_int);
	}
	@@var_39_object:SetProperty("locked", var_37_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_489(var_106_object)
{
	var_107_int = 0; var_108_int = 0; var_109_object = Obj(); var_110_int = 0; var_111_int = 0; var_112_object = Obj();
	@@var_106_object:size(var_110_int);
	var_111_int = 0;
	
Label_493:
	var_113_bool = var_111_int < var_110_int;
	if(var_113_bool != 0) {
		@@var_106_object:get(var_112_object, var_111_int);
		var_114_object = var_112_object;
		if(var_114_object != 0) {
			RemoveActor(var_112_object);
		}
		var_112_object = 0;
		var_111_int = var_111_int + (int)1;
		goto Label_493;
	}
	@@var_106_object:clear();
	return 6;
}


func_297()
{
	SetVariable("d5q01", (int)-1);
	func_351(var_31_int, var_32_object, var_33_bool);
	return 0;
}


func_525(var_95_bool, var_96_int)
{
	var_95_bool = 0;
	var_98_bool = var_96_int >= (int)1;
	if(var_98_bool != 0) {
		var_100_bool = var_96_int < (int)1000;
		if(var_100_bool != 0) {
			var_95_bool = 1;
		}
	}
	return 0;
}


func_431(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_305()
{
	SetVariable("d5q01", (int)1000);
	func_351(var_31_int, var_32_object, var_33_bool);
	return 0;
}


func_437(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string)
{
	var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_object = Obj(); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj();
	@@var_58_object:GetLocator(var_59_string, var_66_bool, var_67_cvector, var_68_cvector);
	var_70_bool = var_66_bool == 0; //@nz
	if(var_70_bool != 0) {
		var_72_int = "Locator " + var_59_string;
		var_74_int = var_72_int + " doesn't exist";
		Trace(var_74_int);
	} else {
		AddActor(Obj(), var_60_string, var_58_object, var_67_cvector, var_68_cvector, var_61_string);
	}
	var_69_object = var_57_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_471(var_46_string, var_47_bool)
{
	var_48_object = Obj(); var_49_object = Obj();
	FindActor(var_49_object, var_46_string);
	var_50_bool = var_49_object == 0; //@nz
	if(var_50_bool != 0) {
		var_52_int = "Door " + var_46_string;
		var_54_int = var_52_int + " not found";
		Trace(var_54_int);
	}
	@@var_49_object:Close();
	@@var_49_object:SetProperty("locked", var_47_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_411(var_149_object)
{
	var_150_int = 0; var_151_int = 0;
	var_152_bool = var_149_object == 0; //@nz
	if(var_152_bool != 0) {
		return 2;
	}
	@@var_149_object:GetProperty("noaccess", var_151_int);
	var_155_bool = var_151_int > (int)1;
	if(var_155_bool != 0) {
		var_158_int = var_151_int - (int)1;
		@@var_149_object:SetProperty("noaccess", var_158_int);
	} else {
		@@var_149_object:RemoveProperty("noaccess");
	}
	return 2;
	
}


func_508(var_215_object, var_216_string)
{
	var_217_int = 0; var_218_int = 0; var_219_object = Obj(); var_220_int = 0; var_221_int = 0; var_222_object = Obj();
	@@var_215_object:size(var_220_int);
	var_221_int = 0;
	
Label_512:
	var_223_bool = var_221_int < var_220_int;
	if(var_223_bool != 0) {
		@@var_215_object:get(var_222_object, var_221_int);
		var_224_object = var_222_object;
		if(var_224_object != 0) {
			Trigger(var_222_object, var_216_string);
		}
		var_222_object = 0;
		var_221_int = var_221_int + (int)1;
		goto Label_512;
	}
	return 6;
}


func_351(var_0_object, var_1_object, var_2_object)
{
	EventDisable(26);
	EventDisable(9);
	var_239_object = var_0_object;
	if(var_239_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_241_object = var_2_object;
	if(var_241_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_243_string = ""; var_244_bool = 0;
	func_471("ifactory_grid_door", (bool)0);
	var_245_object = Obj(); var_246_string = "";
	var_245_object = var_1_object;
	func_508(var_245_object, "cleanup");
	@@@var_1_object:clear();
	var_247_string = ""; var_248_bool = 0;
	func_455("factory@door1", (bool)1);
	SetVariable("d5q01PlayCutscene", (int)0);
	ReleaseTimeEvent((int)0);
	return 0;
}


