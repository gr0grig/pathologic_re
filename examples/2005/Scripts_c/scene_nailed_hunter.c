maintask task_0
{
	// @pe
	void init(object var_0_object, object var_1_object)
	{
		func_121();
		func_415(var_0_object, var_1_object);
	}

	void OnLoad(object var_0_object, object var_1_object)
	{
		int var_12_int; int var_13_int; int var_14_int; string var_15_string; string var_16_string; string var_17_string;
		if(!var_1_object) { //@nz
			object var_19_object;
			func_565(var_19_object);
			var_1_object = var_19_object;
		}
		if(!var_0_object) //@nz
			@CreateIntVector(var_0_object);
		func_603(var_1_object);
		int var_10_int;
		var_0_object->size(var_10_int); //@t
		int var_11_int = 0;
	
		while(var_11_int < var_10_int) {
			var_0_object->get(var_12_int, var_11_int); //@t
			var_0_object->get(var_13_int, (var_11_int + 1)); //@t
			var_0_object->get(var_14_int, (var_11_int + 2)); //@t
			string var_39_string; int var_40_int; int var_41_int;
			var_12_int = var_40_int;
			var_13_int = var_41_int;
			func_81(var_39_string, var_40_int, var_41_int);
			var_39_string = var_15_string;
			string var_48_string; int var_49_int; int var_50_int;
			var_12_int = var_49_int;
			var_14_int = var_50_int;
			func_97(var_50_int);
			var_48_string = var_16_string;
			string var_51_string; int var_52_int; int var_53_int;
			var_12_int = var_52_int;
			var_14_int = var_53_int;
			func_100(var_52_int, var_53_int);
			var_51_string = var_17_string;
			object var_58_object; object var_59_object; string var_60_string; string var_61_string; string var_62_string;
			object var_63_object;
			func_554(var_63_object);
			var_63_object = var_59_object;
			var_15_string = var_60_string;
			var_16_string = var_61_string;
			var_17_string = var_62_string;
			func_585(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string);
			var_1_object->add(var_58_object); //@t
			var_11_int += 3;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object)
	{
		int var_6_int; object var_8_object; bool var_9_bool;
		var_1_object->size(var_6_int); //@t
		int var_7_int = 0;
	
		for(;;) {
			if(var_7_int < var_6_int) {
				var_1_object->get(var_8_object, var_7_int); //@t
				if(var_8_object != null) {
					var_8_object->IsDead(var_9_bool);
					var_12_bool = !var_9_bool; //@nz
					if(var_12_bool == 0) goto Label_521;
					bool var_13_bool; object var_14_object;
					func_542(var_13_bool, var_14_object, "ToDie");
					if(!var_13_bool) //@nz
						var_7_int += 1;
					else
						@RemoveActor(var_14_object);
				var_1_object->remove(var_7_int); //@t
				var_0_object->remove((var_7_int * 3), ((var_7_int + 1) * 3)); //@t
				var_6_int += -1;
				var_8_object = null;
			}
			func_603(var_1_object);
			}
		}
	
	}

}


void func_0(object var_207_object)
{
	int var_217_int; float var_218_float; int var_225_int;
	@GetProperty("HunterCount", var_217_int);
	bool var_219_bool;
	@HasProperty("HunterProb", var_219_bool);
	if(var_219_bool != 0)
		@GetProperty("HunterProb", var_218_float);
	else
		var_218_float = 0.33;
	bool var_230_bool;
	func_560(var_230_bool, 0.33);
	if(!var_230_bool) { //@nz
	}
	int var_234_int;
	func_571(var_234_int, "pt_lmarauders");
	int var_220_int;
	@irand(var_220_int, var_234_int);
	var_207_object->add(0);
	var_207_object->add(var_220_int + 1);
	var_207_object->add(0);
	int var_248_int;
	func_571(var_248_int, "pt_umarauders");
	int var_221_int;
	var_248_int = var_221_int;
	object var_222_object;
	@CreateIntVector(var_222_object);
	var_222_object->resize(var_221_int);
	int var_223_int = 0;
	
	while(var_223_int < var_221_int) {
		var_222_object->set(var_223_int, var_223_int);
		var_223_int += 1;
	}
	
	int var_224_int = 0;
	
	while(var_224_int < (var_217_int + -1)) {
		@irand(var_225_int, var_221_int);
		var_222_object->get(var_220_int, var_225_int);
		var_207_object->add(1);
		var_207_object->add(var_220_int + 1);
		var_207_object->add(0);
		var_222_object->remove(var_225_int);
		var_221_int += -1;
		var_224_int += 1;
	}
	
	
}
EMIT "Stack[-4] = 0";


void func_199(bool var_161_bool)
{
	int var_166_int; bool var_167_bool; cvector var_168_cvector; cvector var_169_cvector;
	var_166_int = 1;
	
	for(;;) {
		@GetLocator(("pt_item_bottle" + var_166_int), var_167_bool, var_168_cvector, var_169_cvector);
		if(!var_167_bool) //@nz
			break;
		cvector var_173_cvector; cvector var_174_cvector; bool var_175_bool;
		var_168_cvector = var_173_cvector;
		var_169_cvector = var_174_cvector;
		var_161_bool = var_175_bool;
		func_379(var_173_cvector, var_174_cvector, var_175_bool);
		var_166_int += 1;
	}
}


void func_585(object var_58_object, object var_59_object, string var_60_string, string var_61_string, string var_62_string)
{
	bool var_70_bool; cvector var_71_cvector; cvector var_72_cvector;
	var_59_object->GetLocator(var_60_string, var_70_bool, var_71_cvector, var_72_cvector);
	if(!var_70_bool) //@nz
		@Trace(("Locator " + var_60_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_61_string, var_59_object, var_71_cvector, var_72_cvector, var_62_string);
	object var_73_object = var_58_object;
	
}
EMIT "Stack[-1] = 0";


void func_142(bool var_5_bool)
{
	int var_10_int; bool var_11_bool; cvector var_12_cvector; cvector var_13_cvector;
	var_10_int = 1;
	
	for(;;) {
		@GetLocator(("pt_item_food" + var_10_int), var_11_bool, var_12_cvector, var_13_cvector);
		if(!var_11_bool) //@nz
			break;
		cvector var_17_cvector; cvector var_18_cvector; bool var_19_bool;
		var_12_cvector = var_17_cvector;
		var_13_cvector = var_18_cvector;
		var_5_bool = var_19_bool;
		func_218(var_17_cvector, var_18_cvector, var_19_bool);
		var_10_int += 1;
	}
}


// @pe
void func_81(string var_39_string, int var_40_int, int var_41_int)
{
	if(var_40_int == 0) {
		var_39_string = "pt_lmarauders" + var_41_int;
		return 0;
	EMIT "GOTO 0x5f";
	}
	if(var_40_int == 1) {
		var_39_string = "pt_umarauders" + var_41_int;
		return 0;
	}
	var_39_string = "";
}


void func_277(cvector var_76_cvector, cvector var_77_cvector, bool var_78_bool)
{
	string var_88_string; object var_89_object; float var_90_float; float var_91_float; cvector var_92_cvector; object var_93_object; float var_94_float; float var_95_float; cvector var_96_cvector;
	float var_98_float;
	if(var_78_bool != 0)
		var_98_float = 0.05;
	else
		var_98_float = 0.2;
	bool var_97_bool;
	func_560(var_97_bool, var_98_float);
	if(var_97_bool != 0) {
		@RandOneOf(var_88_string, 8, 3, 3, 3, 2, 2, 1, "rusk", "dried_fish", "dried_meat", "smoked_meat", "fresh_fish", "fresh_meat", "tvirin");
		@RandVec2D(var_90_float, var_91_float);
		var_114_float = GetByIndex(var_92_cvector, 0);
		var_90_float = var_114_float;
		SetByIndex(var_92_cvector, 0) = var_114_float;
		var_115_float = GetByIndex(var_92_cvector, 1);
		SetByIndex(var_92_cvector, 1) = (float)0;
		var_116_float = GetByIndex(var_92_cvector, 2);
		var_91_float = var_116_float;
		SetByIndex(var_92_cvector, 2) = var_116_float;
		object var_118_object;
		func_554(var_118_object);
		@AddActorByType(var_89_object, "scripted_container", var_118_object, var_76_cvector, var_92_cvector, "item_plate.xml");
		object var_121_object;
		func_554(var_121_object);
		@AddActorByType(var_89_object, "scripted_container", var_121_object, (var_76_cvector + [0.0, 5.0, 0.0]), var_77_cvector, (("item_" + var_88_string) + "_steal.xml"));
		var_89_object = null;
	} else {
		bool var_128_bool;
		func_560(var_128_bool, 0.5);
		if(var_128_bool == 0) goto Label_359;
		@RandVec2D(var_94_float, var_95_float);
		var_130_float = GetByIndex(var_96_cvector, 0);
		var_94_float = var_130_float;
		SetByIndex(var_96_cvector, 0) = var_130_float;
		var_131_float = GetByIndex(var_96_cvector, 1);
		SetByIndex(var_96_cvector, 1) = (float)0;
		var_132_float = GetByIndex(var_96_cvector, 2);
		var_95_float = var_132_float;
		SetByIndex(var_96_cvector, 2) = var_132_float;
		object var_134_object;
		func_554(var_134_object);
		@AddActorByType(var_93_object, "scripted_container", var_134_object, var_76_cvector, var_96_cvector, "item_plate.xml");
		var_93_object = null;

	}
Label_359:
	
}


void func_218(cvector var_17_cvector, cvector var_18_cvector, bool var_19_bool)
{
	string var_26_string; object var_27_object; object var_28_object; float var_29_float; float var_30_float; cvector var_31_cvector;
	float var_33_float;
	if(var_19_bool != 0)
		var_33_float = 0.05;
	else
		var_33_float = 0.2;
	bool var_32_bool;
	func_560(var_32_bool, var_33_float);
	if(var_32_bool != 0) {
		@RandOneOf(var_26_string, 5, 5, 3, 2, 3, "bread", "bottle_water", "milk", "vegetables", "lemon");
		object var_48_object;
		func_554(var_48_object);
		@AddActorByType(var_27_object, "scripted_container", var_48_object, var_17_cvector, var_18_cvector, (("item_" + var_26_string) + "_steal.xml"));
		var_27_object = null;
	} else {
		bool var_55_bool;
		func_560(var_55_bool, 0.5);
		if(var_55_bool == 0) goto Label_276;
		@RandVec2D(var_29_float, var_30_float);
		var_57_float = GetByIndex(var_31_cvector, 0);
		var_29_float = var_57_float;
		SetByIndex(var_31_cvector, 0) = var_57_float;
		var_58_float = GetByIndex(var_31_cvector, 1);
		SetByIndex(var_31_cvector, 1) = (float)0;
		var_59_float = GetByIndex(var_31_cvector, 2);
		var_30_float = var_59_float;
		SetByIndex(var_31_cvector, 2) = var_59_float;
		object var_61_object;
		func_554(var_61_object);
		@AddActorByType(var_28_object, "scripted_container", var_61_object, var_17_cvector, var_31_cvector, "item_plate.xml");
		var_28_object = null;

	}
Label_276:
	
}


void func_603(object var_31_object)
{
	int var_35_int; int var_36_int; object var_37_object;
	if(var_31_object != 0) {
		var_31_object->size(var_35_int);
		var_36_int = 0;

		while(var_36_int < var_35_int) {
			var_31_object->get(var_37_object, var_36_int);
			if(var_37_object != 0)
				@RemoveActor(var_37_object);
			var_37_object = null;
			var_36_int += 1;
		}

		var_31_object->clear();
	}
}


void func_542(bool var_13_bool, object var_14_object, string var_15_string)
{
	var_20_bool = IsFuncExist(var_14_object, "HasProperty", 2);
	if(!var_20_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_17_bool;
	var_14_object->HasProperty(var_15_string, var_17_bool);
	var_17_bool = var_13_bool;
}


void func_415(object var_0_object, object var_1_object)
{
	if(!var_1_object) { //@nz
		object var_203_object;
		func_565(var_203_object);
		var_1_object = var_203_object;
	}
	if(!var_0_object) //@nz
		@CreateIntVector(var_0_object);
	func_0(var_0_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_161(bool var_64_bool)
{
	int var_69_int; bool var_70_bool; cvector var_71_cvector; cvector var_72_cvector;
	var_69_int = 1;
	
	for(;;) {
		@GetLocator(("pt_item_pfood" + var_69_int), var_70_bool, var_71_cvector, var_72_cvector);
		if(!var_70_bool) //@nz
			break;
		cvector var_76_cvector; cvector var_77_cvector; bool var_78_bool;
		var_71_cvector = var_76_cvector;
		var_72_cvector = var_77_cvector;
		var_64_bool = var_78_bool;
		func_277(var_76_cvector, var_77_cvector, var_78_bool);
		var_69_int += 1;
	}
}


// @pe
void func_97(string var_48_string)
{
	var_48_string = "pers_hunter";
}


// @pe
void func_100(string var_51_string, int var_52_int)
{
	if(var_52_int == 0) {
		var_51_string = "hunter.xml";
		return 0;
	EMIT "GOTO 0x70";
	}
	if(var_52_int == 1) {
		var_51_string = "hunter2.xml";
		return 0;
	}
	var_51_string = "";
}


void func_360(cvector var_149_cvector, cvector var_150_cvector, bool var_151_bool)
{
	object var_153_object;
	float var_155_float;
	if(var_151_bool != 0)
		var_155_float = 0.05;
	else
		var_155_float = 0.05;
	bool var_154_bool;
	func_560(var_154_bool, var_155_float);
	if(var_154_bool != 0) {
		object var_158_object;
		func_554(var_158_object);
		@AddActorByType(var_153_object, "scripted_container", var_158_object, var_149_cvector, var_150_cvector, "item_knife_steal.xml");
		var_153_object = null;
	}
	
}


void func_554(object var_48_object)
{
	object var_50_object;
	@self(var_50_object);
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


void func_560(bool var_32_bool, float var_33_float)
{
	float var_36_float;
	@rand(var_36_float);
	var_32_bool = var_36_float < var_33_float;
}


void func_379(cvector var_173_cvector, cvector var_174_cvector, bool var_175_bool)
{
	string var_178_string; object var_179_object;
	float var_181_float;
	if(var_175_bool != 0)
		var_181_float = 0.2;
	else
		var_181_float = 0.4;
	bool var_180_bool;
	func_560(var_180_bool, var_181_float);
	if(var_180_bool != 0) {
		@RandOneOf(var_178_string, 10, 15, 3, 3, 3, 1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
		object var_196_object;
		func_554(var_196_object);
		@AddActorByType(var_179_object, "scripted_container", var_196_object, var_173_cvector, var_174_cvector, (("item_" + var_178_string) + "_steal.xml"));
		var_179_object = null;
	}
	
}


void func_180(bool var_137_bool)
{
	int var_142_int; bool var_143_bool; cvector var_144_cvector; cvector var_145_cvector;
	var_142_int = 1;
	
	for(;;) {
		@GetLocator(("pt_item_knife" + var_142_int), var_143_bool, var_144_cvector, var_145_cvector);
		if(!var_143_bool) //@nz
			break;
		cvector var_149_cvector; cvector var_150_cvector; bool var_151_bool;
		var_144_cvector = var_149_cvector;
		var_145_cvector = var_150_cvector;
		var_137_bool = var_151_bool;
		func_360(var_149_cvector, var_150_cvector, var_151_bool);
		var_142_int += 1;
	}
}


void func_565(object var_203_object)
{
	object var_205_object;
	@CreateObjectVector(var_205_object);
	var_205_object = var_203_object;
}
EMIT "Stack[-1] = 0";


void func_121(void)
{
	bool var_3_bool;
	@GetProperty("nailed", var_3_bool);
	bool var_5_bool;
	var_3_bool = var_5_bool;
	func_142(var_5_bool);
	bool var_64_bool;
	var_3_bool = var_64_bool;
	func_161(var_64_bool);
	bool var_137_bool;
	var_3_bool = var_137_bool;
	func_180(var_137_bool);
	bool var_161_bool;
	var_3_bool = var_161_bool;
	func_199(var_161_bool);
}


void func_571(int var_234_int, string var_235_string)
{
	int var_238_int; bool var_239_bool;
	var_238_int = 1;
	
	for(;;) {
		@GetLocator((var_235_string + var_238_int), var_239_bool);
		if(!var_239_bool) //@nz
			break;
		var_238_int += 1;
	}
	var_234_int = var_238_int - 1;
}


