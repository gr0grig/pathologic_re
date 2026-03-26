// @IMPORTS: GetMainOutdoorScene/1,AddActor/6,Hold/0,Trace/1,GetSceneByName/2,Trigger/2,FindActor/2,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,CreateIntVector/1,CreateObjectVector/1,AddBlankActor/4,Trigger/3,GetInvItemByName/2
// @STRINGS: W:d3q01_graveyard_fire|W:d3q01_graveyard_fire.xml|W:cot_maria@door1|W:init_soldiers|W:pt_d11q01_soldier|W:pers_soldat|W:d11q01_soldier.xml|A:add|W:pt_d11q01_msoldier|W:pers_soldat_hand|W:d11q01_msoldier.xml|W:init_girl|W:shouse1_kabak|W:pt_d11q01_girl|W:pers_nudegirl|W:d11q01_girl.xml|W:remove_andrei|W:noandrei|W:restore_andrei|W:cleanup|W:soldier_attack|A:size|A:get|A:GetActor|A:Remove|W:teleport|W:player|A:RemoveAllItems|A:SelectWeapon|W:quest_d11_01_teleport|W:pt_d11q01_guard1|W:d11q01_guard1.xml|W:pt_d11q01_guard2|W:d11q01_guard2.xml|W:soldier_death|A:IsDead|W:burah_serum|A:AddItem|W:d11q01|W:fail|W:completed|W:volonteers_danko|W:disease|A:GetItemCount|A:GetItem|A:GetItemAmount|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:clear
// @RUN_OP: 0xb
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,bool,bool params=0
// @EVENT_26: op=0x40 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_bool, var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_int = 0; var_36_object = Obj(); var_37_int = 0; var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_bool = 0; var_51_bool = 0; var_52_int = 0;
	Trace(var_18_string);
	var_54_bool = var_18_string == "init_soldiers";
	if(var_54_bool != 0) {
		GetMainOutdoorScene(var_36_object);
		var_37_int = 1;

	Label_73:
		var_56_bool = var_37_int <= (int)10;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = "";
			var_36_object = var_58_object;
			var_59_string = "pt_d11q01_soldier" + var_37_int;
			func_501(var_57_object, var_58_object, var_59_string, "pers_soldat", "d11q01_soldier.xml");
			@@@var_1_object:add(var_57_object);
			var_37_int = var_37_int + (int)1;
			goto Label_73;
		}
		var_77_object = Obj(); var_78_object = Obj(); var_79_string = ""; var_80_string = ""; var_81_string = "";
		var_36_object = var_78_object;
		func_501(var_77_object, var_78_object, "pt_d11q01_msoldier", "pers_soldat_hand", "d11q01_msoldier.xml");
		var_2_object = var_77_object;
		var_36_object = 0;
	} else {
		var_83_bool = var_18_string == "init_girl";
		if(var_83_bool != 0) {
			GetSceneByName(var_38_object, "shouse1_kabak");
			var_85_object = Obj(); var_86_object = Obj(); var_87_string = ""; var_88_string = ""; var_89_string = "";
			var_38_object = var_86_object;
			func_483(var_85_object, var_86_object, "pt_d11q01_girl", "pers_nudegirl", "d11q01_girl.xml");
			var_0_object = var_85_object;
			var_38_object = 0;
			goto Label_367;
		}
		var_104_bool = var_18_string == "remove_andrei";
		if(var_104_bool != 0) {
			GetSceneByName(var_39_object, "shouse1_kabak");
			Trigger(var_39_object, "noandrei");
			var_39_object = 0;
			goto Label_367;
		}
		var_108_bool = var_18_string == "restore_andrei";
		if(var_108_bool != 0) {
			GetSceneByName(var_40_object, "shouse1_kabak");
			Trigger(var_40_object, "andrei");
			var_111_object = var_0_object;
			if(var_111_object != 0) {
				Trigger(var_0_object, "cleanup");
			}
			var_40_object = 0;
			goto Label_367;
		}
		var_114_bool = var_18_string == "soldier_attack";
		if(var_114_bool != 0) {
			@@@var_1_object:size(var_41_int);
			var_42_int = 0;

		Label_148:
			var_115_bool = var_42_int < var_41_int;
			if(var_115_bool != 0) {
				@@@var_1_object:get(var_43_object, var_42_int);
				var_116_object = var_43_object;
				if(var_116_object != 0) {
					@@var_43_object:GetActor(var_44_object);
					var_117_bool = var_44_object == 0; //@nz
					if(var_117_bool != 0) {
						@@var_43_object:Remove();
					} else {
						Trigger(var_44_object, "attack");
			}
					var_120_object = var_2_object;
					if(var_120_object != 0) {
						@@@var_2_object:GetActor(var_45_object);
						var_121_bool = var_45_object == 0; //@nz
						if(var_121_bool != 0) {
							@@@var_2_object:Remove();
						} else {
							Trigger(var_45_object, "attack");
		}
						var_124_bool = var_18_string == "teleport";
						if(var_124_bool != 0) {
							FindActor(var_46_object, "player");
							var_16_bool = true;
							var_126_object = var_46_object;
							if(var_126_object != 0) {
								var_127_object = Obj(); var_128_object = Obj(); var_129_int = 0; var_130_object = Obj();
								var_46_object = var_128_object;
								var_130_object = var_7_object;
								func_429(var_127_object, var_128_object, (int)0, var_130_object);
								var_6_object = var_127_object;
								var_146_object = Obj(); var_147_object = Obj(); var_148_int = 0; var_149_object = Obj();
								var_46_object = var_147_object;
								var_149_object = var_9_object;
								func_429(var_146_object, var_147_object, (int)1, var_149_object);
								var_8_object = var_146_object;
								var_150_object = Obj(); var_151_object = Obj(); var_152_int = 0; var_153_object = Obj();
								var_46_object = var_151_object;
								var_153_object = var_11_object;
								func_429(var_150_object, var_151_object, (int)2, var_153_object);
								var_10_object = var_150_object;
								var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0; var_157_object = Obj();
								var_46_object = var_155_object;
								var_157_object = var_13_object;
								func_429(var_154_object, var_155_object, (int)3, var_157_object);
								var_12_object = var_154_object;
								var_158_object = Obj(); var_159_object = Obj(); var_160_int = 0; var_161_object = Obj();
								var_46_object = var_159_object;
								var_161_object = var_15_object;
								func_429(var_158_object, var_159_object, (int)4, var_161_object);
								var_14_object = var_158_object;
								var_47_int = 0;

							Label_228:
								var_163_bool = var_47_int < (int)5;
								if(var_163_bool != 0) {
									@@var_46_object:RemoveAllItems(var_47_int);
									var_47_int = var_47_int + (int)1;
									goto Label_228;
								}
								@@var_46_object:SelectWeapon();
							}
							func_0(var_52_int);
							var_171_object = Obj(); var_172_string = "";
							func_472(var_171_object, "quest_d11_01_teleport");
							GetMainOutdoorScene(var_48_object);
							var_179_object = Obj(); var_180_object = Obj(); var_181_string = ""; var_182_string = ""; var_183_string = "";
							var_48_object = var_180_object;
							func_519(var_179_object, var_180_object, "pt_d11q01_guard1", "pers_soldat", "d11q01_guard1.xml");
							var_4_object = var_179_object;
							var_198_object = Obj(); var_199_object = Obj(); var_200_string = ""; var_201_string = ""; var_202_string = "";
							var_48_object = var_199_object;
							func_519(var_198_object, var_199_object, "pt_d11q01_guard2", "pers_soldat", "d11q01_guard2.xml");
							var_5_object = var_198_object;
							@@@var_2_object:Remove();
							var_203_object = Obj(); var_204_object = Obj(); var_205_string = ""; var_206_string = ""; var_207_string = "";
							var_48_object = var_204_object;
							func_501(var_203_object, var_204_object, "pt_d11q01_msoldier", "pers_soldat", "d11q01_soldier.xml");
							var_2_object = var_203_object;
							var_48_object = 0;
							var_46_object = 0;
							goto Label_367;
						}
						var_209_bool = var_18_string == "soldier_death";
						if(var_209_bool != 0) {
							var_210_bool = var_16_bool == 0; //@nz
							if(var_210_bool != 0) {
								return 34;
							}
							var_211_bool = var_17_bool;
							if(var_211_bool != 0) {
								return 34;
							}
							var_212_object = var_2_object;
							if(var_212_object != 0) {
								@@@var_2_object:GetActor(var_49_object);
								@@var_49_object:IsDead(var_50_bool);
								var_213_bool = var_50_bool;
								if(var_213_bool != 0) {
									var_214_object = Obj(); var_215_object = Obj(); var_216_object = Obj();
									var_49_object = var_214_object;
									var_215_object = var_6_object;
									var_216_object = var_7_object;
									func_593(var_214_object, var_215_object, var_216_object);
									var_230_object = Obj(); var_231_object = Obj(); var_232_object = Obj();
									var_49_object = var_230_object;
									var_231_object = var_8_object;
									var_232_object = var_9_object;
									func_593(var_230_object, var_231_object, var_232_object);
									var_233_object = Obj(); var_234_object = Obj(); var_235_object = Obj();
									var_49_object = var_233_object;
									var_234_object = var_10_object;
									var_235_object = var_11_object;
									func_593(var_233_object, var_234_object, var_235_object);
									var_236_object = Obj(); var_237_object = Obj(); var_238_object = Obj();
									var_49_object = var_236_object;
									var_237_object = var_12_object;
									var_238_object = var_13_object;
									func_593(var_236_object, var_237_object, var_238_object);
									var_239_object = Obj(); var_240_object = Obj(); var_241_object = Obj();
									var_49_object = var_239_object;
									var_240_object = var_14_object;
									var_241_object = var_15_object;
									func_593(var_239_object, var_240_object, var_241_object);
									var_242_int = 0; var_243_string = "";
									func_588(var_242_int, "burah_serum");
									@@var_49_object:AddItem(var_51_bool, var_242_int, (int)0, (int)1);
									var_17_bool = true;
								}
							}
							goto Label_367;
						}
						var_249_bool = var_18_string == "cleanup";
						if(var_249_bool != 0) {
							GetVariable("d11q01", var_52_int);
							var_252_bool = var_52_int != (int)1000;
							if(var_252_bool != 0) {
								func_368();
							} else {
								func_390(Obj(), var_50_bool, var_51_bool, var_52_int);
						}
							var_294_bool = var_18_string == "fail";
							if(var_294_bool != 0) {
								func_368();
								goto Label_367;
							}
							var_296_bool = var_18_string == "completed";
							if(var_296_bool == 0) goto Label_367;
							func_382();
						}
						func_409(var_51_bool, var_52_int);
						goto Label_367;
					}
					var_45_object = 0;
				}
				goto Label_367;
			}
			var_44_object = 0;
		}
		var_43_object = 0;
		var_42_int = var_42_int + (int)1;
		goto Label_148;
	}
Label_367:
	return 34;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_bool, var_17_bool)
{
	var_18_object = Obj();
	func_466(var_18_object);
	var_1_object = var_18_object;
	var_21_object = Obj();
	func_466(var_21_object);
	var_6_object = var_21_object;
	var_22_object = Obj();
	func_460(var_22_object);
	var_7_object = var_22_object;
	var_25_object = Obj();
	func_466(var_25_object);
	var_8_object = var_25_object;
	var_26_object = Obj();
	func_460(var_26_object);
	var_9_object = var_26_object;
	var_27_object = Obj();
	func_466(var_27_object);
	var_10_object = var_27_object;
	var_28_object = Obj();
	func_460(var_28_object);
	var_11_object = var_28_object;
	var_29_object = Obj();
	func_466(var_29_object);
	var_12_object = var_29_object;
	var_30_object = Obj();
	func_460(var_30_object);
	var_13_object = var_30_object;
	var_31_object = Obj();
	func_466(var_31_object);
	var_14_object = var_31_object;
	var_32_object = Obj();
	func_460(var_32_object);
	var_15_object = var_32_object;
	var_33_string = ""; var_34_bool = 0;
	func_538("cot_maria@door1", (bool)1);
	
Label_60:
	Hold();
	goto Label_60;
}
EMIT "Return(); Pop(0)";


func_0(var_3_object)
{
	var_165_object = Obj(); var_166_object = Obj();
	GetMainOutdoorScene(var_166_object);
	AddActor(var_3_object, "d3q01_graveyard_fire", var_166_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d3q01_graveyard_fire.xml");
	return 2;
}
EMIT "Stack[-1] = 0";


func_454(var_290_object)
{
	var_291_object = Obj(); var_292_object = Obj();
	self(var_292_object);
	var_292_object = var_290_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_390(var_0_object, var_3_object, var_4_object, var_5_object)
{
	var_262_object = var_0_object;
	if(var_262_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_264_object = var_3_object;
	if(var_264_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_266_object = var_4_object;
	if(var_266_object != 0) {
		@@@var_4_object:Remove();
	}
	var_267_object = var_5_object;
	if(var_267_object != 0) {
		@@@var_5_object:Remove();
	}
	return 0;
}


func_519(var_179_object, var_180_object, var_181_string, var_182_string, var_183_string)
{
	var_184_bool = 0; var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_object = Obj(); var_188_bool = 0; var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_object = Obj();
	@@var_180_object:GetLocator(var_181_string, var_188_bool, var_189_cvector, var_190_cvector);
	var_192_bool = var_188_bool == 0; //@nz
	if(var_192_bool != 0) {
		var_194_int = "Locator " + var_181_string;
		var_196_int = var_194_int + " doesn't exist";
		Trace(var_196_int);
	} else {
		@@var_180_object:AddStationaryActor(Obj(), var_189_cvector, var_190_cvector, var_182_string, var_183_string, (bool)1);
	}
	var_191_object = var_179_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_460(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateIntVector(var_24_object);
	var_24_object = var_22_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_588(var_242_int, var_243_string)
{
	var_244_int = 0; var_245_int = 0;
	GetInvItemByName(var_245_int, var_243_string);
	var_245_int = var_242_int;
	return 2;
}


func_593(var_214_object, var_215_object, var_216_object)
{
	var_217_int = 0; var_218_int = 0; var_219_object = Obj(); var_220_int = 0; var_221_bool = 0; var_222_int = 0; var_223_int = 0; var_224_object = Obj(); var_225_int = 0; var_226_bool = 0;
	@@var_215_object:size(var_222_int);
	var_223_int = 0;
	
Label_597:
	var_227_bool = var_223_int < var_222_int;
	if(var_227_bool != 0) {
		@@var_215_object:get(var_224_object, var_223_int);
		@@var_216_object:get(var_225_int, var_223_int);
		@@var_214_object:AddItem(var_226_bool, var_224_object, (int)0, var_225_int);
		var_224_object = 0;
		var_223_int = var_223_int + (int)1;
		goto Label_597;
	}
	return 10;
}


func_466(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj();
	CreateObjectVector(var_20_object);
	var_20_object = var_18_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_472(var_171_object, var_172_string)
{
	var_173_object = Obj(); var_174_object = Obj(); var_175_object = Obj(); var_176_object = Obj();
	GetMainOutdoorScene(var_175_object);
	var_178_int = var_172_string + ".bin";
	AddBlankActor(var_176_object, var_175_object, var_172_string, var_178_int);
	var_176_object = var_171_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_409(var_1_object, var_2_object)
{
	EventDisable(26);
	var_268_object = Obj();
	var_268_object = var_1_object;
	func_567(var_268_object);
	var_279_object = var_2_object;
	if(var_279_object != 0) {
		@@@var_2_object:Remove();
	}
	var_280_string = ""; var_281_bool = 0;
	func_538("cot_maria@door1", (bool)0);
	var_290_object = Obj();
	func_454(var_290_object);
	RemoveActor(var_290_object);
	return 0;
}


func_538(var_33_string, var_34_bool)
{
	var_35_object = Obj(); var_36_object = Obj();
	FindActor(var_36_object, var_33_string);
	var_37_bool = var_36_object == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Door " + var_33_string;
		var_41_int = var_39_int + " not found";
		Trace(var_41_int);
	} else {
		@@var_36_object:SetProperty("locked", var_34_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_483(var_85_object, var_86_object, var_87_string, var_88_string, var_89_string)
{
	var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj();
	@@var_86_object:GetLocator(var_87_string, var_94_bool, var_95_cvector, var_96_cvector);
	var_98_bool = var_94_bool == 0; //@nz
	if(var_98_bool != 0) {
		var_100_int = "Locator " + var_87_string;
		var_102_int = var_100_int + " doesn't exist";
		Trace(var_102_int);
	} else {
		AddActor(Obj(), var_88_string, var_86_object, var_95_cvector, var_96_cvector, var_89_string);
	}
	var_97_object = var_85_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_555(var_253_bool, var_254_string, var_255_string, var_256_string)
{
	var_257_object = Obj(); var_258_object = Obj();
	FindActor(var_258_object, var_254_string);
	var_259_bool = var_258_object == 0; //@ne
	if(var_259_bool != 0) {
		var_253_bool = 0;
		return 2;
	}
	Trigger(var_258_object, var_255_string, var_256_string);
	var_253_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_429(var_127_object, var_128_object, var_129_int, var_130_object)
{
	var_131_object = Obj(); var_132_int = 0; var_133_int = 0; var_134_object = Obj(); var_135_int = 0; var_136_object = Obj(); var_137_int = 0; var_138_int = 0; var_139_object = Obj(); var_140_int = 0;
	func_466(Obj());
	var_141_object = var_136_object;
	@@var_128_object:GetItemCount(var_137_int, var_129_int);
	var_138_int = 0;
	
Label_437:
	var_144_bool = var_138_int < var_137_int;
	if(var_144_bool != 0) {
		@@var_128_object:GetItem(var_139_object, var_138_int, var_129_int);
		@@var_136_object:add(var_139_object);
		@@var_128_object:GetItemAmount(var_140_int, var_138_int, var_129_int);
		@@var_130_object:add(var_140_int);
		var_139_object = 0;
		var_138_int = var_138_int + (int)1;
		goto Label_437;
	}
	var_136_object = var_127_object;
	return 10;
}
EMIT "Stack[-5] = 0";


func_368()
{
	var_253_bool = 0; var_254_string = ""; var_255_string = ""; var_256_string = "";
	func_555(var_253_bool, "volonteers_danko", "disease", "andrei");
	SetVariable("d11q01", (int)-1);
	func_390(var_49_object, var_50_bool, var_51_bool, var_52_int);
	return 0;
}


func_501(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string)
{
	var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_object = Obj(); var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_object = Obj();
	@@var_58_object:GetLocator(var_59_string, var_67_bool, var_68_cvector, var_69_cvector);
	var_71_bool = var_67_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_73_int = "Locator " + var_59_string;
		var_75_int = var_73_int + " doesn't exist";
		Trace(var_75_int);
	} else {
		@@var_58_object:AddStationaryActor(Obj(), var_68_cvector, var_69_cvector, var_60_string, var_61_string);
	}
	var_70_object = var_57_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_567(var_268_object)
{
	var_269_int = 0; var_270_int = 0; var_271_object = Obj(); var_272_int = 0; var_273_int = 0; var_274_object = Obj();
	var_275_object = var_268_object;
	if(var_275_object != 0) {
		@@var_268_object:size(var_272_int);
		var_273_int = 0;

	Label_573:
		var_276_bool = var_273_int < var_272_int;
		if(var_276_bool != 0) {
			@@var_268_object:get(var_274_object, var_273_int);
			var_277_object = var_274_object;
			if(var_277_object != 0) {
				@@var_274_object:Remove();
			}
			var_274_object = 0;
			var_273_int = var_273_int + (int)1;
			goto Label_573;
		}
		@@var_268_object:clear();
	}
	return 6;
}


func_382()
{
	SetVariable("d11q01", (int)1000);
	func_390(var_49_object, var_50_bool, var_51_bool, var_52_int);
	return 0;
}


