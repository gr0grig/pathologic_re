// @IMPORTS: Hold/0,Trace/1,FindActor/2,GetSceneByName/2,AddScriptedActor/6,GetMainOutdoorScene/1,AddActor/6,SetTimer/2,KillTimer/1,RemoveActor/1,Trigger/2,PlaySound/1,GetVariable/2,SetVariable/2,AddActorByType/6,self/1,CreateObjectVector/1,AddBlankActor/4
// @STRINGS: W:cot_alexandr@door1|W:warehouse_gangster@door1|W:rubin_unlock|W:warehouse_rubin@door1|W:iwarehouse_rubin_Stol|W:b4q01_sample|A:AddItem|W:place_rubin|W:warehouse_gangster|W:pt_b4q01_rubin|W:NPC_Rubin|W:b4q01_Rubin.xml|W:pt_b4q01_agony1|W:pers_unosha|W:b4q01_agony1.xml|W:pt_b4q01_agony2|W:pers_worker|W:b4q01_agony2.xml|W:b4q01_corpse|W:actor_disp.bin|W:wg_unload|W:pt_b4q01_patrol1|W:pers_patrool|W:b4q01_patrol.xml|A:add|W:pt_b4q01_patrol2|W:pt_b4q01_patrol3|W:pt_b4q01_patrol4|W:quest_b4_01_teleport|W:factory|W:pt_b4q01_patrol1_1|W:b4q01_fpatrol1.xml|W:pt_b4q01_patrol2_1|W:b4q01_fpatrol2.xml|W:b4q01_factory_corpse|W:b4q01_factory_corpse.xml|W:agony1_man.xml|W:pt_b4q01_fog|A:GetLocator|W:factory_unload|W:patrol_attack|W:ifactory_grid_door|W:patrol_dead|A:IsDead|W:ifactory@door1|W:door_open|W:cleanup|W:b4q01|W:fail|W:completed|A:RemoveItemByType|A:GetRandomPFPoint|W:b4q01_fog.xml|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object,object,object,object,object,object,object,object,object,bool params=0
// @EVENT_26: op=0x12 vars=string
// @EVENT_7: op=0x171 vars=int

task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_string)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_int = 0; var_21_object = Obj(); var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_int = 0;
	Trace(var_11_string);
	var_31_bool = var_11_string == "rubin_unlock";
	if(var_31_bool != 0) {
		var_32_string = ""; var_33_bool = 0;
		func_437("warehouse_rubin@door1", (bool)0);
		FindActor(var_21_object, "iwarehouse_rubin_Stol");
		@@var_21_object:AddItem(var_22_bool, "b4q01_sample", (int)0);
		var_21_object = 0;
	} else {
		var_46_bool = var_11_string == "place_rubin";
		if(var_46_bool != 0) {
			GetSceneByName(var_23_object, "warehouse_gangster");
			var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = "";
			var_23_object = var_49_object;
			func_419(var_48_object, var_49_object, "pt_b4q01_rubin", "NPC_Rubin", "b4q01_Rubin.xml");
			var_1_object = var_48_object;
			var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; var_70_string = "";
			var_23_object = var_67_object;
			func_419(var_66_object, var_67_object, "pt_b4q01_agony1", "pers_unosha", "b4q01_agony1.xml");
			var_2_object = var_66_object;
			var_71_object = Obj(); var_72_object = Obj(); var_73_string = ""; var_74_string = ""; var_75_string = "";
			var_23_object = var_72_object;
			func_419(var_71_object, var_72_object, "pt_b4q01_agony2", "pers_worker", "b4q01_agony2.xml");
			var_3_object = var_71_object;
			AddScriptedActor(var_4_object, "b4q01_corpse", "actor_disp.bin", var_23_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
			var_80_string = ""; var_81_bool = 0;
			func_437("warehouse_gangster@door1", (bool)0);
			var_0_bool = true;
			var_23_object = 0;
			goto Label_273;
		}
		var_83_bool = var_11_string == "wg_unload";
		if(var_83_bool != 0) {
			var_84_bool = var_0_bool;
			if(var_84_bool != 0) {
				var_10_bool = true;
				func_290(var_25_object, var_26_bool, var_27_cvector, var_28_bool, var_29_int);
				var_94_string = ""; var_95_bool = 0;
				func_437("warehouse_gangster@door1", (bool)1);
				GetMainOutdoorScene(var_24_object);
				var_96_object = Obj(); var_97_object = Obj(); var_98_string = ""; var_99_string = ""; var_100_string = "";
				var_24_object = var_97_object;
				func_419(var_96_object, var_97_object, "pt_b4q01_patrol1", "pers_patrool", "b4q01_patrol.xml");
				@@@var_7_object:add(var_96_object);
				var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = "";
				var_24_object = var_102_object;
				func_419(var_101_object, var_102_object, "pt_b4q01_patrol2", "pers_patrool", "b4q01_patrol.xml");
				@@@var_7_object:add(var_101_object);
				var_106_object = Obj(); var_107_object = Obj(); var_108_string = ""; var_109_string = ""; var_110_string = "";
				var_24_object = var_107_object;
				func_419(var_106_object, var_107_object, "pt_b4q01_patrol3", "pers_patrool", "b4q01_patrol.xml");
				@@@var_7_object:add(var_106_object);
				var_111_object = Obj(); var_112_object = Obj(); var_113_string = ""; var_114_string = ""; var_115_string = "";
				var_24_object = var_112_object;
				func_419(var_111_object, var_112_object, "pt_b4q01_patrol4", "pers_patrool", "b4q01_patrol.xml");
				@@@var_7_object:add(var_111_object);
				var_116_object = Obj(); var_117_string = "";
				func_408(var_116_object, "quest_b4_01_teleport");
				GetSceneByName(var_24_object, "factory");
				var_125_object = Obj(); var_126_object = Obj(); var_127_string = ""; var_128_string = ""; var_129_string = "";
				var_24_object = var_126_object;
				func_419(var_125_object, var_126_object, "pt_b4q01_patrol1_1", "pers_patrool", "b4q01_fpatrol1.xml");
				var_8_object = var_125_object;
				var_130_object = Obj(); var_131_object = Obj(); var_132_string = ""; var_133_string = ""; var_134_string = "";
				var_24_object = var_131_object;
				func_419(var_130_object, var_131_object, "pt_b4q01_patrol2_1", "pers_patrool", "b4q01_fpatrol2.xml");
				var_9_object = var_130_object;
				AddActor(var_25_object, "b4q01_factory_corpse", var_24_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "b4q01_factory_corpse.xml");
				var_139_object = Obj(); var_140_object = Obj(); var_141_string = ""; var_142_string = ""; var_143_string = "";
				var_24_object = var_140_object;
				func_419(var_139_object, var_140_object, "pt_b4q01_agony1", "pers_unosha", "agony1_man.xml");
				var_5_object = var_139_object;
				var_144_object = Obj(); var_145_object = Obj(); var_146_string = ""; var_147_string = ""; var_148_string = "";
				var_24_object = var_145_object;
				func_419(var_144_object, var_145_object, "pt_b4q01_agony2", "pers_worker", "agony1_man.xml");
				var_6_object = var_144_object;
				SetTimer((int)0, (float)20.0);
				@@var_24_object:GetLocator("pt_b4q01_fog", var_26_bool, var_27_cvector);
				var_152_object = Obj(); var_153_cvector = CVector(0,0,0);
				var_24_object = var_152_object;
				var_27_cvector = var_153_cvector;
				func_388(var_152_object, var_153_cvector);
				var_25_object = 0;
				var_24_object = 0;
			}
			goto Label_273;
		}
		var_160_bool = var_11_string == "factory_unload";
		if(var_160_bool != 0) {
			KillTimer((int)0);
			var_162_bool = var_10_bool;
			if(var_162_bool != 0) {
				var_163_object = Obj();
				func_396(var_163_object);
				RemoveActor(var_163_object);
			}
			goto Label_273;
		}
		var_167_bool = var_11_string == "patrol_attack";
		if(var_167_bool != 0) {
			var_168_string = ""; var_169_bool = 0;
			func_437("ifactory_grid_door", (bool)0);
			Trigger(var_8_object, "attack");
			Trigger(var_9_object, "attack");
			goto Label_273;
		}
		var_173_bool = var_11_string == "patrol_dead";
		if(var_173_bool != 0) {
			@@@var_8_object:IsDead(var_28_bool);
			var_174_bool = var_28_bool;
			if(var_174_bool != 0) {
				@@@var_9_object:IsDead(var_28_bool);
				var_175_bool = var_28_bool;
				if(var_175_bool != 0) {
					var_176_string = ""; var_177_bool = 0;
					func_437("ifactory@door1", (bool)0);
					PlaySound("door_open");
				}
			}
			goto Label_273;
		}
		var_180_bool = var_11_string == "cleanup";
		if(var_180_bool != 0) {
			GetVariable("b4q01", var_29_int);
			var_183_bool = var_29_int != (int)1000;
			if(var_183_bool != 0) {
				func_274();
			} else {
				func_314(var_27_cvector, var_28_bool, var_29_int);
		}
			var_218_bool = var_11_string == "fail";
			if(var_218_bool != 0) {
				func_274();
				goto Label_273;
			}
			var_220_bool = var_11_string == "completed";
			if(var_220_bool == 0) goto Label_273;
			func_282();
		}
		goto Label_273;
	}
Label_273:
	return 18;
	
}


task_0_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_int)
{
	var_12_object = Obj(); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_cvector = CVector(0,0,0);
	var_17_bool = var_11_int != (int)0;
	if(var_17_bool != 0) {
		return 4;
	}
	GetSceneByName(var_14_object, "factory");
	@@var_14_object:GetRandomPFPoint(var_15_cvector, (int)0, (int)0);
	var_21_object = Obj(); var_22_cvector = CVector(0,0,0);
	var_14_object = var_21_object;
	var_15_cvector = var_22_cvector;
	func_388(var_21_object, var_22_cvector);
	return 4;
}
EMIT "Stack[-2] = 0";


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool)
{
	var_11_string = ""; var_12_bool = 0;
	func_437("cot_alexandr@door1", (bool)1);
	var_21_object = Obj();
	func_402(var_21_object);
	var_7_object = var_21_object;
	var_24_string = ""; var_25_bool = 0;
	func_437("warehouse_gangster@door1", (bool)1);
	
Label_14:
	Hold();
	goto Label_14;
}
EMIT "Return(); Pop(0)";


func_290(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_85_bool = var_0_bool;
	if(var_85_bool != 0) {
		var_86_object = var_1_object;
		if(var_86_object != 0) {
			Trigger(var_1_object, "cleanup");
		}
		var_88_object = var_2_object;
		if(var_88_object != 0) {
			Trigger(var_2_object, "cleanup");
		}
		var_90_object = var_3_object;
		if(var_90_object != 0) {
			Trigger(var_3_object, "cleanup");
		}
		var_92_object = var_4_object;
		if(var_92_object != 0) {
			Trigger(var_4_object, "cleanup");
		}
		var_0_bool = false;
	}
	return 0;
}


func_419(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string)
{
	var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj(); var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_object = Obj();
	@@var_49_object:GetLocator(var_50_string, var_57_bool, var_58_cvector, var_59_cvector);
	var_61_bool = var_57_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_63_int = "Locator " + var_50_string;
		var_65_int = var_63_int + " doesn't exist";
		Trace(var_65_int);
	} else {
		AddActor(Obj(), var_51_string, var_49_object, var_58_cvector, var_59_cvector, var_52_string);
	}
	var_60_object = var_48_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_388(var_21_object, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj();
	AddActorByType(var_24_object, "fog", var_21_object, var_22_cvector, CVector(0.0, 0.0, 1.0), "b4q01_fog.xml");
	return 2;
}
EMIT "Stack[-1] = 0";


func_454(var_198_object, var_199_string)
{
	var_200_int = 0; var_201_int = 0; var_202_object = Obj(); var_203_int = 0; var_204_int = 0; var_205_object = Obj();
	var_206_object = var_198_object;
	if(var_206_object != 0) {
		@@var_198_object:size(var_203_int);
		var_204_int = 0;

	Label_460:
		var_207_bool = var_204_int < var_203_int;
		if(var_207_bool != 0) {
			@@var_198_object:get(var_205_object, var_204_int);
			var_208_object = var_205_object;
			if(var_208_object != 0) {
				Trigger(var_205_object, var_199_string);
			}
			var_205_object = 0;
			var_204_int = var_204_int + (int)1;
			goto Label_460;
		}
	}
	return 6;
}


func_282()
{
	SetVariable("b4q01", (int)1000);
	func_314(var_27_cvector, var_28_bool, var_29_int);
	return 0;
}


func_396(var_163_object)
{
	var_164_object = Obj(); var_165_object = Obj();
	self(var_165_object);
	var_165_object = var_163_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_402(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateObjectVector(var_23_object);
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_274()
{
	SetVariable("b4q01", (int)-1);
	func_314(var_27_cvector, var_28_bool, var_29_int);
	return 0;
}


func_437(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, var_11_string);
	var_15_bool = var_14_object == 0; //@nz
	if(var_15_bool != 0) {
		var_17_int = "Door " + var_11_string;
		var_19_int = var_17_int + " not found";
		Trace(var_19_int);
	} else {
		@@var_14_object:SetProperty("locked", var_12_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_408(var_116_object, var_117_string)
{
	var_118_object = Obj(); var_119_object = Obj(); var_120_object = Obj(); var_121_object = Obj();
	GetMainOutdoorScene(var_120_object);
	var_123_int = var_117_string + ".bin";
	AddBlankActor(var_121_object, var_120_object, var_117_string, var_123_int);
	var_121_object = var_116_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_314(var_5_object, var_6_object, var_7_object)
{
	var_186_object = Obj(); var_187_int = 0; var_188_object = Obj(); var_189_int = 0;
	var_190_bool = var_10_bool;
	if(var_190_bool != 0) {
		return 4;
	}
	EventDisable(26);
	KillTimer((int)0);
	var_192_string = ""; var_193_bool = 0;
	func_437("warehouse_rubin@door1", (bool)0);
	var_194_string = ""; var_195_bool = 0;
	func_437("ifactory@door1", (bool)0);
	FindActor(var_188_object, "iwarehouse_rubin_Stol");
	@@var_188_object:RemoveItemByType(var_189_int, "b4q01_sample");
	func_290(var_29_int, var_186_object, var_187_int, var_188_object, var_189_int);
	var_198_object = Obj(); var_199_string = "";
	var_198_object = var_7_object;
	func_454(var_198_object, "cleanup");
	var_7_object = 0;
	var_210_object = var_5_object;
	if(var_210_object != 0) {
		Trigger(var_5_object, "cleanup");
	}
	var_212_object = var_6_object;
	if(var_212_object != 0) {
		Trigger(var_6_object, "cleanup");
	}
	var_214_string = ""; var_215_bool = 0;
	func_437("warehouse_gangster@door1", (bool)0);
	var_216_object = Obj();
	func_396(var_216_object);
	RemoveActor(var_216_object);
	return 4;
}
EMIT "Stack[-2] = 0";


