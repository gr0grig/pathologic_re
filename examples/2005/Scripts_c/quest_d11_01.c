maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, bool var_16_bool, bool var_17_bool)
	{
		object var_18_object;
		func_466(var_18_object);
		var_1_object = var_18_object;
		object var_21_object;
		func_466(var_21_object);
		var_6_object = var_21_object;
		object var_22_object;
		func_460(var_22_object);
		var_7_object = var_22_object;
		object var_25_object;
		func_466(var_25_object);
		var_8_object = var_25_object;
		object var_26_object;
		func_460(var_26_object);
		var_9_object = var_26_object;
		object var_27_object;
		func_466(var_27_object);
		var_10_object = var_27_object;
		object var_28_object;
		func_460(var_28_object);
		var_11_object = var_28_object;
		object var_29_object;
		func_466(var_29_object);
		var_12_object = var_29_object;
		object var_30_object;
		func_460(var_30_object);
		var_13_object = var_30_object;
		object var_31_object;
		func_466(var_31_object);
		var_14_object = var_31_object;
		object var_32_object;
		func_460(var_32_object);
		var_15_object = var_32_object;
		func_538("cot_maria@door1", true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, bool var_16_bool, bool var_17_bool, string var_18_string)
	{
		object var_36_object; int var_37_int; object var_38_object; object var_39_object; object var_40_object; int var_41_int; int var_42_int; object var_43_object; object var_44_object; object var_45_object; object var_46_object; int var_47_int; object var_48_object; object var_49_object; bool var_50_bool; bool var_51_bool; int var_52_int;
		@Trace(var_18_string);
		if(var_18_string == "init_soldiers") {
			@GetMainOutdoorScene(var_36_object);
			var_37_int = 1;

			while(var_37_int <= 10) {
				object var_57_object; object var_58_object;
				var_36_object = var_58_object;
				func_501(var_57_object, var_58_object, ("pt_d11q01_soldier" + var_37_int), "pers_soldat", "d11q01_soldier.xml");
				var_1_object->add(var_57_object); //@t
				var_37_int += 1;
			}

			object var_77_object; object var_78_object;
			var_36_object = var_78_object;
			func_501(var_77_object, var_78_object, "pt_d11q01_msoldier", "pers_soldat_hand", "d11q01_msoldier.xml");
			var_2_object = var_77_object;
			var_36_object = null;
		} else if(var_18_string == "init_girl") {
				@GetSceneByName(var_38_object, "shouse1_kabak");
				object var_85_object; object var_86_object;
				var_38_object = var_86_object;
				func_483(var_85_object, var_86_object, "pt_d11q01_girl", "pers_nudegirl", "d11q01_girl.xml");
				var_0_object = var_85_object;
				var_38_object = null;
		}
	Label_367:
		for(;;) {
			return 34;

		}
	
		if(var_18_string == "remove_andrei") {
			@GetSceneByName(var_39_object, "shouse1_kabak");
			@Trigger(var_39_object, "noandrei");
			var_39_object = null;
		} else if(var_18_string == "restore_andrei") {
			@GetSceneByName(var_40_object, "shouse1_kabak");
			@Trigger(var_40_object, "andrei");
			if(var_0_object != 0)
				@Trigger(var_0_object, "cleanup");
			var_40_object = null;
		}
		if(var_18_string == "soldier_attack") {
			var_1_object->size(var_41_int); //@t
			var_42_int = 0;

			for(;;) {
				if(var_42_int < var_41_int) {
					var_1_object->get(var_43_object, var_42_int); //@t
					if(var_43_object != 0) {
						var_43_object->GetActor(var_44_object);
						if(!var_44_object) //@nz
							var_43_object->Remove();
						else
							@Trigger(var_44_object, "attack");
					if(var_2_object != 0) {
						var_2_object->GetActor(var_45_object); //@t
						if(!var_45_object) //@nz
							var_2_object->Remove(); //@t
						else
							@Trigger(var_45_object, "attack");
						if(var_18_string == "teleport") {
							@FindActor(var_46_object, "player");
							if(var_46_object != 0) {
								object var_127_object; object var_128_object;
								var_46_object = var_128_object;
								func_429(var_127_object, var_128_object, 0, var_7_object);
								object var_146_object; object var_147_object;
								var_46_object = var_147_object;
								func_429(var_146_object, var_147_object, 1, var_9_object);
								object var_150_object; object var_151_object;
								var_46_object = var_151_object;
								func_429(var_150_object, var_151_object, 2, var_11_object);
								object var_154_object; object var_155_object;
								var_46_object = var_155_object;
								func_429(var_154_object, var_155_object, 3, var_13_object);
								object var_158_object; object var_159_object;
								var_46_object = var_159_object;
								func_429(var_158_object, var_159_object, 4, var_15_object);
								var_47_int = 0;

								while(var_47_int < 5) {
									var_46_object->RemoveAllItems(var_47_int);
									var_47_int += 1;
								}

								var_46_object->SelectWeapon();
							}
							func_0(var_52_int);
							object var_171_object;
							func_472(var_171_object, "quest_d11_01_teleport");
							@GetMainOutdoorScene(var_48_object);
							object var_179_object; object var_180_object;
							var_48_object = var_180_object;
							func_519(var_179_object, var_180_object, "pt_d11q01_guard1", "pers_soldat", "d11q01_guard1.xml");
							var_4_object = var_179_object;
							object var_198_object; object var_199_object;
							var_48_object = var_199_object;
							func_519(var_198_object, var_199_object, "pt_d11q01_guard2", "pers_soldat", "d11q01_guard2.xml");
							var_5_object = var_198_object;
							var_2_object->Remove(); //@t
							object var_203_object; object var_204_object;
							var_48_object = var_204_object;
							func_501(var_203_object, var_204_object, "pt_d11q01_msoldier", "pers_soldat", "d11q01_soldier.xml");
							var_2_object = var_203_object;
							var_48_object = null;
							var_46_object = null;
						} else if(var_18_string == "soldier_death") {
							if(!true) //@nz
								return 34;
							if(var_17_bool != 0)
								return 34;
							if(var_2_object != 0) {
								var_2_object->GetActor(var_49_object); //@t
								var_49_object->IsDead(var_50_bool);
								if(var_50_bool != 0) {
									object var_214_object;
									var_49_object = var_214_object;
									func_593(var_214_object, var_127_object, var_7_object);
									object var_230_object;
									var_49_object = var_230_object;
									func_593(var_230_object, var_146_object, var_9_object);
									object var_233_object;
									var_49_object = var_233_object;
									func_593(var_233_object, var_150_object, var_11_object);
									object var_236_object;
									var_49_object = var_236_object;
									func_593(var_236_object, var_154_object, var_13_object);
									object var_239_object;
									func_593(var_239_object, var_158_object, var_15_object);
									int var_242_int;
									func_588(var_242_int, "burah_serum");
									var_239_object->AddItem(var_51_bool, var_242_int, 0, 1);
									var_17_bool = true;
								}
							}
						}
						if(var_18_string == "cleanup") {
							@GetVariable("d11q01", var_52_int);
							if(var_52_int != 1000)
								func_368();
							else
								func_390(Obj(), var_50_bool, var_51_bool, var_52_int);
							if(var_18_string == "fail") {
								func_368();
							} else if(var_18_string == "completed") {
								func_382();
							}
						}
						func_409(var_51_bool, var_52_int);
						goto Label_367;
					}
					var_45_object = null;
				}
				goto Label_367;
				}
				var_44_object = null;
			}
			var_43_object = null;
			var_42_int += 1;
		}
	
	}

}


void func_0(object var_3_object)
{
	object var_166_object;
	@GetMainOutdoorScene(var_166_object);
	@AddActor(var_3_object, "d3q01_graveyard_fire", var_166_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d3q01_graveyard_fire.xml");
}
EMIT "Stack[-1] = 0";


void func_454(object var_290_object)
{
	object var_292_object;
	@self(var_292_object);
	var_292_object = var_290_object;
}
EMIT "Stack[-1] = 0";


void func_390(object var_0_object, object var_3_object, object var_4_object, object var_5_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		var_4_object->Remove(); //@t
	if(var_5_object != 0)
		var_5_object->Remove(); //@t
}


void func_519(object var_179_object, object var_180_object, string var_181_string, string var_182_string, string var_183_string)
{
	bool var_188_bool; cvector var_189_cvector; cvector var_190_cvector;
	var_180_object->GetLocator(var_181_string, var_188_bool, var_189_cvector, var_190_cvector);
	if(!var_188_bool) //@nz
		@Trace(("Locator " + var_181_string) + " doesn't exist");
	else
		var_180_object->AddStationaryActor(Obj(), var_189_cvector, var_190_cvector, var_182_string, var_183_string, true);
	object var_191_object = var_179_object;
	
}
EMIT "Stack[-1] = 0";


void func_460(object var_22_object)
{
	object var_24_object;
	@CreateIntVector(var_24_object);
	var_24_object = var_22_object;
}
EMIT "Stack[-1] = 0";


void func_588(int var_242_int, string var_243_string)
{
	int var_245_int;
	@GetInvItemByName(var_245_int, var_243_string);
	var_245_int = var_242_int;
}


void func_593(object var_214_object, object var_215_object, object var_216_object)
{
	int var_222_int; object var_224_object; int var_225_int; bool var_226_bool;
	var_215_object->size(var_222_int);
	int var_223_int = 0;
	
	while(var_223_int < var_222_int) {
		var_215_object->get(var_224_object, var_223_int);
		var_216_object->get(var_225_int, var_223_int);
		var_214_object->AddItem(var_226_bool, var_224_object, 0, var_225_int);
		var_224_object = null;
		var_223_int += 1;
	}
	
}


void func_466(object var_18_object)
{
	object var_20_object;
	@CreateObjectVector(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_472(object var_171_object, string var_172_string)
{
	object var_175_object;
	@GetMainOutdoorScene(var_175_object);
	object var_176_object;
	@AddBlankActor(var_176_object, var_175_object, var_172_string, (var_172_string + ".bin"));
	var_176_object = var_171_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_409(object var_1_object, object var_2_object)
{
	func_567(var_1_object);
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	func_538("cot_maria@door1", false);
	object var_290_object;
	func_454(var_290_object);
	@RemoveActor(var_290_object);
}


void func_538(string var_33_string, bool var_34_bool)
{
	object var_36_object;
	@FindActor(var_36_object, var_33_string);
	if(!var_36_object) //@nz
		@Trace(("Door " + var_33_string) + " not found");
	else
		var_36_object->SetProperty("locked", var_34_bool);
	
}
EMIT "Stack[-1] = 0";


void func_483(object var_85_object, object var_86_object, string var_87_string, string var_88_string, string var_89_string)
{
	bool var_94_bool; cvector var_95_cvector; cvector var_96_cvector;
	var_86_object->GetLocator(var_87_string, var_94_bool, var_95_cvector, var_96_cvector);
	if(!var_94_bool) //@nz
		@Trace(("Locator " + var_87_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_88_string, var_86_object, var_95_cvector, var_96_cvector, var_89_string);
	object var_97_object = var_85_object;
	
}
EMIT "Stack[-1] = 0";


void func_555(bool var_253_bool, string var_254_string, string var_255_string, string var_256_string)
{
	object var_258_object;
	@FindActor(var_258_object, var_254_string);
	if(var_258_object == null)
		var_253_bool = false;
	@Trigger(var_258_object, var_255_string, var_256_string);
	var_253_bool = true;
}
EMIT "Stack[-1] = 0";


void func_429(object var_127_object, object var_128_object, int var_129_int, object var_130_object)
{
	object var_139_object; int var_140_int;
	object var_141_object;
	func_466(var_141_object);
	object var_136_object;
	var_141_object = var_136_object;
	int var_137_int;
	var_128_object->GetItemCount(var_137_int, var_129_int);
	int var_138_int = 0;
	
	while(var_138_int < var_137_int) {
		var_128_object->GetItem(var_139_object, var_138_int, var_129_int);
		var_136_object->add(var_139_object);
		var_128_object->GetItemAmount(var_140_int, var_138_int, var_129_int);
		var_130_object->add(var_140_int);
		var_139_object = null;
		var_138_int += 1;
	}
	
	var_136_object = var_127_object;
}
EMIT "Stack[-5] = 0";


void func_368(void)
{
	bool var_253_bool;
	func_555(var_253_bool, "volonteers_danko", "disease", "andrei");
	@SetVariable("d11q01", -1);
	func_390(var_49_object, var_50_bool, var_51_bool, var_52_int);
}


void func_501(object var_57_object, object var_58_object, string var_59_string, string var_60_string, string var_61_string)
{
	bool var_67_bool; cvector var_68_cvector; cvector var_69_cvector;
	var_58_object->GetLocator(var_59_string, var_67_bool, var_68_cvector, var_69_cvector);
	if(!var_67_bool) //@nz
		@Trace(("Locator " + var_59_string) + " doesn't exist");
	else
		var_58_object->AddStationaryActor(Obj(), var_68_cvector, var_69_cvector, var_60_string, var_61_string);
	object var_70_object = var_57_object;
	
}
EMIT "Stack[-1] = 0";


void func_567(object var_268_object)
{
	int var_272_int; int var_273_int; object var_274_object;
	if(var_268_object != 0) {
		var_268_object->size(var_272_int);
		var_273_int = 0;

		while(var_273_int < var_272_int) {
			var_268_object->get(var_274_object, var_273_int);
			if(var_274_object != 0)
				var_274_object->Remove();
			var_274_object = null;
			var_273_int += 1;
		}

		var_268_object->clear();
	}
}


void func_382(void)
{
	@SetVariable("d11q01", 1000);
	func_390(var_49_object, var_50_bool, var_51_bool, var_52_int);
}


