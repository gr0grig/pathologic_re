maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		if(!var_1_object) { //@nz
			object var_3_object;
			func_651(var_3_object);
			var_1_object = var_3_object;
		}
		if(!var_0_object) //@nz
			@CreateIntVector(var_0_object);
		func_275();
		func_0(var_0_object);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object, object var_1_object)
	{
		int var_12_int; int var_13_int; int var_14_int; string var_15_string; string var_16_string; string var_17_string;
		if(!var_1_object) { //@nz
			object var_19_object;
			func_651(var_19_object);
			var_1_object = var_19_object;
		}
		if(!var_0_object) //@nz
			@CreateIntVector(var_0_object);
		func_675(var_1_object);
		int var_10_int;
		var_0_object->size(var_10_int); //@t
		int var_11_int = 0;
	
		while(var_11_int < var_10_int) {
			var_0_object->get(var_12_int, var_11_int); //@t
			var_0_object->get(var_13_int, (var_11_int + 1)); //@t
			var_0_object->get(var_14_int, (var_11_int + 2)); //@t
			string var_38_string; int var_39_int; int var_40_int;
			var_12_int = var_39_int;
			var_13_int = var_40_int;
			func_65(var_38_string, var_39_int, var_40_int);
			var_38_string = var_15_string;
			string var_50_string; int var_51_int; int var_52_int;
			var_12_int = var_51_int;
			var_14_int = var_52_int;
			func_88(var_50_string, var_51_int, var_52_int);
			var_50_string = var_16_string;
			string var_83_string; int var_84_int; int var_85_int;
			var_12_int = var_84_int;
			var_14_int = var_85_int;
			func_171(var_83_string, var_84_int, var_85_int);
			var_83_string = var_17_string;
			object var_116_object; object var_117_object; string var_118_string; string var_119_string; string var_120_string;
			object var_121_object;
			func_640(var_121_object);
			var_121_object = var_117_object;
			var_15_string = var_118_string;
			var_16_string = var_119_string;
			var_17_string = var_120_string;
			func_657(var_116_object, var_117_object, var_118_string, var_119_string, var_120_string);
			var_1_object->add(var_116_object); //@t
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
					if(var_12_bool == 0) goto Label_607;
					bool var_13_bool; object var_14_object;
					func_628(var_13_bool, var_14_object, "ToDie");
					if(!var_13_bool) //@nz
						var_7_int += 1;
					else
						@RemoveActor(var_14_object);
				var_1_object->remove(var_7_int); //@t
				var_0_object->remove((var_7_int * 3), ((var_7_int + 1) * 3)); //@t
				var_6_int += -1;
				var_8_object = null;
			}
			func_675(var_1_object);
			}
		}
	
	}

}


void func_0(object var_175_object)
{
	int var_191_int; bool var_193_bool; cvector var_194_cvector; int var_195_int; int var_196_int; bool var_198_bool; cvector var_199_cvector; int var_200_int; int var_201_int; bool var_203_bool; cvector var_204_cvector; int var_205_int;
	var_191_int = 1;
	
	for(;;) {
		@GetLocator(("pt_child" + var_191_int), var_193_bool, var_194_cvector);
		if(!var_193_bool) { //@nz
		} else {
			var_175_object->add(0);
			var_175_object->add(var_191_int);
			@irand(var_195_int, 5);
			var_175_object->add(var_195_int);
			var_191_int += 1;
		}
		var_196_int = 1;

		for(;;) {
			@GetLocator(("pt_woman" + var_196_int), var_198_bool, var_199_cvector);
			if(!var_198_bool) { //@nz
			} else {
				var_175_object->add(1);
				var_175_object->add(var_196_int);
				@irand(var_200_int, 2);
				var_175_object->add(var_200_int);
				var_196_int += 1;
			}
			var_201_int = 1;

			for(;;) {
				@GetLocator(("pt_man" + var_201_int), var_203_bool, var_204_cvector);
				if(!var_203_bool) //@nz
					break;
				var_175_object->add(2);
				var_175_object->add(var_201_int);
				@irand(var_205_int, 5);
				var_175_object->add(var_205_int);
				var_201_int += 1;
			}

		}

	}
}


void func_640(object var_45_object)
{
	object var_47_object;
	@self(var_47_object);
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_65(string var_38_string, int var_39_int, int var_40_int)
{
	if(var_39_int == 0) {
		var_38_string = "pt_child" + var_40_int;
		return 0;
	EMIT "GOTO 0x56";
	}
	if(var_39_int == 1) {
		var_38_string = "pt_woman" + var_40_int;
		return 0;
	EMIT "GOTO 0x56";
	}
	if(var_39_int == 2) {
		var_38_string = "pt_man" + var_40_int;
		return 0;
	}
	var_38_string = "";
}


void func_646(bool var_29_bool, float var_30_float)
{
	float var_33_float;
	@rand(var_33_float);
	var_29_bool = var_33_float < var_30_float;
}


void func_651(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_334(bool var_110_bool)
{
	int var_115_int; bool var_116_bool; cvector var_117_cvector; cvector var_118_cvector;
	var_115_int = 1;
	
	for(;;) {
		@GetLocator(("pt_item_knife" + var_115_int), var_116_bool, var_117_cvector, var_118_cvector);
		if(!var_116_bool) //@nz
			break;
		cvector var_122_cvector; cvector var_123_cvector; bool var_124_bool;
		var_117_cvector = var_122_cvector;
		var_118_cvector = var_123_cvector;
		var_110_bool = var_124_bool;
		func_464(var_122_cvector, var_123_cvector, var_124_bool);
		var_115_int += 1;
	}
}


void func_464(cvector var_122_cvector, cvector var_123_cvector, bool var_124_bool)
{
	object var_126_object;
	float var_128_float;
	if(var_124_bool != 0)
		var_128_float = 0.1;
	else
		var_128_float = 0.1;
	bool var_127_bool;
	func_646(var_127_bool, var_128_float);
	if(var_127_bool != 0) {
		object var_131_object;
		func_640(var_131_object);
		@AddActorByType(var_126_object, "scripted_container", var_131_object, var_122_cvector, var_123_cvector, "item_knife_steal.xml");
		var_126_object = null;
	}
	
}


void func_657(object var_116_object, object var_117_object, string var_118_string, string var_119_string, string var_120_string)
{
	bool var_128_bool; cvector var_129_cvector; cvector var_130_cvector;
	var_117_object->GetLocator(var_118_string, var_128_bool, var_129_cvector, var_130_cvector);
	if(!var_128_bool) //@nz
		@Trace(("Locator " + var_118_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_119_string, var_117_object, var_129_cvector, var_130_cvector, var_120_string);
	object var_131_object = var_116_object;
	
}
EMIT "Stack[-1] = 0";


void func_275(void)
{
	bool var_8_bool;
	@GetProperty("nailed", var_8_bool);
	bool var_10_bool;
	var_8_bool = var_10_bool;
	func_296(var_10_bool);
	bool var_53_bool;
	var_8_bool = var_53_bool;
	func_315(var_53_bool);
	bool var_110_bool;
	var_8_bool = var_110_bool;
	func_334(var_110_bool);
	bool var_134_bool;
	var_8_bool = var_134_bool;
	func_353(var_134_bool);
}


void func_406(cvector var_65_cvector, cvector var_66_cvector, bool var_67_bool)
{
	string var_73_string; object var_74_object; float var_75_float; float var_76_float; cvector var_77_cvector;
	float var_79_float;
	if(var_67_bool != 0)
		var_79_float = 0.1;
	else
		var_79_float = 0.2;
	bool var_78_bool;
	func_646(var_78_bool, var_79_float);
	if(var_78_bool != 0) {
		@RandOneOf(var_73_string, 8, 3, 3, 3, 2, 2, 1, "rusk", "dried_fish", "dried_meat", "smoked_meat", "fresh_fish", "fresh_meat", "tvirin");
		@RandVec2D(var_75_float, var_76_float);
		var_95_float = GetByIndex(var_77_cvector, 0);
		var_75_float = var_95_float;
		SetByIndex(var_77_cvector, 0) = var_95_float;
		var_96_float = GetByIndex(var_77_cvector, 1);
		SetByIndex(var_77_cvector, 1) = (float)0;
		var_97_float = GetByIndex(var_77_cvector, 2);
		var_76_float = var_97_float;
		SetByIndex(var_77_cvector, 2) = var_97_float;
		object var_99_object;
		func_640(var_99_object);
		@AddActorByType(var_74_object, "scripted_container", var_99_object, var_65_cvector, var_77_cvector, "item_plate.xml");
		object var_102_object;
		func_640(var_102_object);
		@AddActorByType(var_74_object, "scripted_container", var_102_object, (var_65_cvector + [0.0, 5.0, 0.0]), var_66_cvector, (("item_" + var_73_string) + "_steal.xml"));
		var_74_object = null;
	}
	
}


// @pe
void func_88(string var_50_string, int var_51_int, int var_52_int)
{
	if(var_51_int == 0) {
		if(var_52_int == 0) {
			var_50_string = "pers_littleboy";
			return 0;
		EMIT "GOTO 0x79";
		}
		if(var_52_int == 1) {
			var_50_string = "pers_littlegirl";
			return 0;
		EMIT "GOTO 0x79";
		}
		if(var_52_int == 2) {
			var_50_string = "pers_boy";
			return 0;
		EMIT "GOTO 0x79";
		}
		if(var_52_int == 3) {
			var_50_string = "pers_girl";
			return 0;
		EMIT "GOTO 0x79";
		}
		if(var_52_int == 4) {
			var_50_string = "pers_girl";
			return 0;
		}
	} else if(var_51_int == 1) {
			if(var_52_int == 0) {
				var_50_string = "pers_woman";
				return 0;
			EMIT "GOTO 0x88";
			}
			if(var_52_int == 1) {
				var_50_string = "pers_wasted_girl";
				return 0;
			}
	}
Label_169:
	for(;;) {
		var_50_string = "";
		return 0;

	}
	
	if(!(var_51_int == 2)) goto Label_169;
	if(var_52_int == 0) {
		var_50_string = "pers_unosha";
		return 0;
	EMIT "GOTO 0xa9";
	}
	if(var_52_int == 1) {
		var_50_string = "pers_unosha";
		return 0;
	EMIT "GOTO 0xa9";
	}
	if(var_52_int == 2) {
		var_50_string = "pers_worker";
		return 0;
	EMIT "GOTO 0xa9";
	}
	if(var_52_int == 3) {
		var_50_string = "pers_worker";
		return 0;
	EMIT "GOTO 0xa9";
	}
	if(!(var_52_int == 4)) goto Label_169;
	var_50_string = "pers_wasted_male";
}


void func_353(bool var_134_bool)
{
	int var_139_int; bool var_140_bool; cvector var_141_cvector; cvector var_142_cvector;
	var_139_int = 1;
	
	for(;;) {
		@GetLocator(("pt_item_bottle" + var_139_int), var_140_bool, var_141_cvector, var_142_cvector);
		if(!var_140_bool) //@nz
			break;
		cvector var_146_cvector; cvector var_147_cvector; bool var_148_bool;
		var_141_cvector = var_146_cvector;
		var_142_cvector = var_147_cvector;
		var_134_bool = var_148_bool;
		func_483(var_146_cvector, var_147_cvector, var_148_bool);
		var_139_int += 1;
	}
}


void func_675(object var_31_object)
{
	int var_35_int; object var_37_object;
	var_31_object->size(var_35_int);
	int var_36_int = 0;
	
	while(var_36_int < var_35_int) {
		var_31_object->get(var_37_object, var_36_int);
		if(var_37_object != 0)
			@RemoveActor(var_37_object);
		var_37_object = null;
		var_36_int += 1;
	}
	
	var_31_object->clear();
}


void func_483(cvector var_146_cvector, cvector var_147_cvector, bool var_148_bool)
{
	string var_151_string; object var_152_object;
	float var_154_float;
	if(var_148_bool != 0)
		var_154_float = 0.2;
	else
		var_154_float = 0.4;
	bool var_153_bool;
	func_646(var_153_bool, var_154_float);
	if(var_153_bool != 0) {
		@RandOneOf(var_151_string, 10, 15, 3, 3, 3, 1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
		object var_169_object;
		func_640(var_169_object);
		@AddActorByType(var_152_object, "scripted_container", var_169_object, var_146_cvector, var_147_cvector, (("item_" + var_151_string) + "_steal.xml"));
		var_152_object = null;
	}
	
}


void func_296(bool var_10_bool)
{
	int var_15_int; bool var_16_bool; cvector var_17_cvector; cvector var_18_cvector;
	var_15_int = 1;
	
	for(;;) {
		@GetLocator(("pt_item_food" + var_15_int), var_16_bool, var_17_cvector, var_18_cvector);
		if(!var_16_bool) //@nz
			break;
		cvector var_22_cvector; cvector var_23_cvector; bool var_24_bool;
		var_17_cvector = var_22_cvector;
		var_18_cvector = var_23_cvector;
		var_10_bool = var_24_bool;
		func_372(var_22_cvector, var_23_cvector, var_24_bool);
		var_15_int += 1;
	}
}


// @pe
void func_171(string var_83_string, int var_84_int, int var_85_int)
{
	if(var_84_int == 0) {
		if(var_85_int == 0) {
			var_83_string = "ilittleboy.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		if(var_85_int == 1) {
			var_83_string = "ilittlegirl.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		if(var_85_int == 2) {
			var_83_string = "iboy.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		if(var_85_int == 3) {
			var_83_string = "igirl.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		if(var_85_int == 4) {
			var_83_string = "igirl2.xml";
			return 0;
		}
	} else if(var_84_int == 1) {
			if(var_85_int == 0) {
				var_83_string = "iwoman.xml";
				return 0;
			EMIT "GOTO 0xdb";
			}
			if(var_85_int == 1) {
				var_83_string = "iwasted_girl.xml";
				return 0;
			}
	}
Label_252:
	for(;;) {
		var_83_string = "";
		return 0;

	}
	
	if(!(var_84_int == 2)) goto Label_252;
	if(var_85_int == 0) {
		var_83_string = "iunosha.xml";
		return 0;
	EMIT "GOTO 0xfc";
	}
	if(var_85_int == 1) {
		var_83_string = "iunosha2.xml";
		return 0;
	EMIT "GOTO 0xfc";
	}
	if(var_85_int == 2) {
		var_83_string = "iworker.xml";
		return 0;
	EMIT "GOTO 0xfc";
	}
	if(var_85_int == 3) {
		var_83_string = "iworker2.xml";
		return 0;
	EMIT "GOTO 0xfc";
	}
	if(!(var_85_int == 4)) goto Label_252;
	var_83_string = "iwasted_male.xml";
}


void func_372(cvector var_22_cvector, cvector var_23_cvector, bool var_24_bool)
{
	string var_27_string; object var_28_object;
	float var_30_float;
	if(var_24_bool != 0)
		var_30_float = 0.1;
	else
		var_30_float = 0.2;
	bool var_29_bool;
	func_646(var_29_bool, var_30_float);
	if(var_29_bool != 0) {
		@RandOneOf(var_27_string, 5, 5, 3, 2, 3, "bread", "bottle_water", "milk", "vegetables", "lemon");
		object var_45_object;
		func_640(var_45_object);
		@AddActorByType(var_28_object, "scripted_container", var_45_object, var_22_cvector, var_23_cvector, (("item_" + var_27_string) + "_steal.xml"));
		var_28_object = null;
	}
	
}


void func_628(bool var_13_bool, object var_14_object, string var_15_string)
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


void func_315(bool var_53_bool)
{
	int var_58_int; bool var_59_bool; cvector var_60_cvector; cvector var_61_cvector;
	var_58_int = 1;
	
	for(;;) {
		@GetLocator(("pt_item_pfood" + var_58_int), var_59_bool, var_60_cvector, var_61_cvector);
		if(!var_59_bool) //@nz
			break;
		cvector var_65_cvector; cvector var_66_cvector; bool var_67_bool;
		var_60_cvector = var_65_cvector;
		var_61_cvector = var_66_cvector;
		var_53_bool = var_67_bool;
		func_406(var_65_cvector, var_66_cvector, var_67_bool);
		var_58_int += 1;
	}
}


