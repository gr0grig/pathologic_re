maintask task_0
{
	// @pe
	void init(object var_0_object, object var_1_object)
	{
		func_261();
		func_555(var_0_object, var_1_object);
	}

	void OnLoad(object var_0_object, object var_1_object)
	{
		int var_12_int; int var_13_int; int var_14_int; string var_15_string; string var_16_string; string var_17_string;
		if(!var_1_object) { //@nz
			object var_19_object;
			func_705(var_19_object);
			var_1_object = var_19_object;
		}
		if(!var_0_object) //@nz
			@CreateIntVector(var_0_object);
		func_729(var_1_object);
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
			func_65(var_39_string, var_40_int, var_41_int);
			var_39_string = var_15_string;
			string var_51_string; int var_52_int; int var_53_int;
			var_12_int = var_52_int;
			var_14_int = var_53_int;
			func_88(var_51_string, var_52_int, var_53_int);
			var_51_string = var_16_string;
			string var_84_string; int var_85_int; int var_86_int;
			var_12_int = var_85_int;
			var_14_int = var_86_int;
			func_171(var_84_string, var_85_int, var_86_int);
			var_84_string = var_17_string;
			object var_117_object; object var_118_object; string var_119_string; string var_120_string; string var_121_string;
			object var_122_object;
			func_694(var_122_object);
			var_122_object = var_118_object;
			var_15_string = var_119_string;
			var_16_string = var_120_string;
			var_17_string = var_121_string;
			func_711(var_117_object, var_118_object, var_119_string, var_120_string, var_121_string);
			var_1_object->add(var_117_object); //@t
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
					if(var_12_bool == 0) goto Label_661;
					bool var_13_bool; object var_14_object;
					func_682(var_13_bool, var_14_object, "ToDie");
					if(!var_13_bool) //@nz
						var_7_int += 1;
					else
						@RemoveActor(var_14_object);
				var_1_object->remove(var_7_int); //@t
				var_0_object->remove((var_7_int * 3), ((var_7_int + 1) * 3)); //@t
				var_6_int += -1;
				var_8_object = null;
			}
			func_729(var_1_object);
			}
		}
	
	}

}


void func_0(object var_207_object)
{
	int var_223_int; bool var_225_bool; cvector var_226_cvector; int var_227_int; int var_228_int; bool var_230_bool; cvector var_231_cvector; int var_232_int; int var_233_int; bool var_235_bool; cvector var_236_cvector; int var_237_int;
	var_223_int = 1;
	
	for(;;) {
		@GetLocator(("pt_child" + var_223_int), var_225_bool, var_226_cvector);
		if(!var_225_bool) { //@nz
		} else {
			var_207_object->add(0);
			var_207_object->add(var_223_int);
			@irand(var_227_int, 5);
			var_207_object->add(var_227_int);
			var_223_int += 1;
		}
		var_228_int = 1;

		for(;;) {
			@GetLocator(("pt_woman" + var_228_int), var_230_bool, var_231_cvector);
			if(!var_230_bool) { //@nz
			} else {
				var_207_object->add(1);
				var_207_object->add(var_228_int);
				@irand(var_232_int, 2);
				var_207_object->add(var_232_int);
				var_228_int += 1;
			}
			var_233_int = 1;

			for(;;) {
				@GetLocator(("pt_man" + var_233_int), var_235_bool, var_236_cvector);
				if(!var_235_bool) //@nz
					break;
				var_207_object->add(2);
				var_207_object->add(var_233_int);
				@irand(var_237_int, 5);
				var_207_object->add(var_237_int);
				var_233_int += 1;
			}

		}

	}
}


void func_320(bool var_137_bool)
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
		func_500(var_149_cvector, var_150_cvector, var_151_bool);
		var_142_int += 1;
	}
}


void func_705(object var_203_object)
{
	object var_205_object;
	@CreateObjectVector(var_205_object);
	var_205_object = var_203_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_65(string var_39_string, int var_40_int, int var_41_int)
{
	if(var_40_int == 0) {
		var_39_string = "pt_child" + var_41_int;
		return 0;
	EMIT "GOTO 0x56";
	}
	if(var_40_int == 1) {
		var_39_string = "pt_woman" + var_41_int;
		return 0;
	EMIT "GOTO 0x56";
	}
	if(var_40_int == 2) {
		var_39_string = "pt_man" + var_41_int;
		return 0;
	}
	var_39_string = "";
}


void func_261(void)
{
	bool var_3_bool;
	@GetProperty("nailed", var_3_bool);
	bool var_5_bool;
	var_3_bool = var_5_bool;
	func_282(var_5_bool);
	bool var_64_bool;
	var_3_bool = var_64_bool;
	func_301(var_64_bool);
	bool var_137_bool;
	var_3_bool = var_137_bool;
	func_320(var_137_bool);
	bool var_161_bool;
	var_3_bool = var_161_bool;
	func_339(var_161_bool);
}


void func_519(cvector var_173_cvector, cvector var_174_cvector, bool var_175_bool)
{
	string var_178_string; object var_179_object;
	float var_181_float;
	if(var_175_bool != 0)
		var_181_float = 0.2;
	else
		var_181_float = 0.4;
	bool var_180_bool;
	func_700(var_180_bool, var_181_float);
	if(var_180_bool != 0) {
		@RandOneOf(var_178_string, 10, 15, 3, 3, 3, 1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
		object var_196_object;
		func_694(var_196_object);
		@AddActorByType(var_179_object, "scripted_container", var_196_object, var_173_cvector, var_174_cvector, (("item_" + var_178_string) + "_steal.xml"));
		var_179_object = null;
	}
	
}


void func_711(object var_117_object, object var_118_object, string var_119_string, string var_120_string, string var_121_string)
{
	bool var_129_bool; cvector var_130_cvector; cvector var_131_cvector;
	var_118_object->GetLocator(var_119_string, var_129_bool, var_130_cvector, var_131_cvector);
	if(!var_129_bool) //@nz
		@Trace(("Locator " + var_119_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_120_string, var_118_object, var_130_cvector, var_131_cvector, var_121_string);
	object var_132_object = var_117_object;
	
}
EMIT "Stack[-1] = 0";


void func_339(bool var_161_bool)
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
		func_519(var_173_cvector, var_174_cvector, var_175_bool);
		var_166_int += 1;
	}
}


// @pe
void func_88(string var_51_string, int var_52_int, int var_53_int)
{
	if(var_52_int == 0) {
		if(var_53_int == 0) {
			var_51_string = "pers_littleboy";
			return 0;
		EMIT "GOTO 0x79";
		}
		if(var_53_int == 1) {
			var_51_string = "pers_littlegirl";
			return 0;
		EMIT "GOTO 0x79";
		}
		if(var_53_int == 2) {
			var_51_string = "pers_boy";
			return 0;
		EMIT "GOTO 0x79";
		}
		if(var_53_int == 3) {
			var_51_string = "pers_girl";
			return 0;
		EMIT "GOTO 0x79";
		}
		if(var_53_int == 4) {
			var_51_string = "pers_girl";
			return 0;
		}
	} else if(var_52_int == 1) {
			if(var_53_int == 0) {
				var_51_string = "pers_woman";
				return 0;
			EMIT "GOTO 0x88";
			}
			if(var_53_int == 1) {
				var_51_string = "pers_wasted_girl";
				return 0;
			}
	}
Label_169:
	for(;;) {
		var_51_string = "";
		return 0;

	}
	
	if(!(var_52_int == 2)) goto Label_169;
	if(var_53_int == 0) {
		var_51_string = "pers_unosha";
		return 0;
	EMIT "GOTO 0xa9";
	}
	if(var_53_int == 1) {
		var_51_string = "pers_unosha";
		return 0;
	EMIT "GOTO 0xa9";
	}
	if(var_53_int == 2) {
		var_51_string = "pers_worker";
		return 0;
	EMIT "GOTO 0xa9";
	}
	if(var_53_int == 3) {
		var_51_string = "pers_worker";
		return 0;
	EMIT "GOTO 0xa9";
	}
	if(!(var_53_int == 4)) goto Label_169;
	var_51_string = "pers_wasted_male";
}


void func_729(object var_31_object)
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


void func_282(bool var_5_bool)
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
		func_358(var_17_cvector, var_18_cvector, var_19_bool);
		var_10_int += 1;
	}
}


void func_417(cvector var_76_cvector, cvector var_77_cvector, bool var_78_bool)
{
	string var_88_string; object var_89_object; float var_90_float; float var_91_float; cvector var_92_cvector; object var_93_object; float var_94_float; float var_95_float; cvector var_96_cvector;
	float var_98_float;
	if(var_78_bool != 0)
		var_98_float = 0.05;
	else
		var_98_float = 0.2;
	bool var_97_bool;
	func_700(var_97_bool, var_98_float);
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
		func_694(var_118_object);
		@AddActorByType(var_89_object, "scripted_container", var_118_object, var_76_cvector, var_92_cvector, "item_plate.xml");
		object var_121_object;
		func_694(var_121_object);
		@AddActorByType(var_89_object, "scripted_container", var_121_object, (var_76_cvector + [0.0, 5.0, 0.0]), var_77_cvector, (("item_" + var_88_string) + "_steal.xml"));
		var_89_object = null;
	} else {
		bool var_128_bool;
		func_700(var_128_bool, 0.5);
		if(var_128_bool == 0) goto Label_499;
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
		func_694(var_134_object);
		@AddActorByType(var_93_object, "scripted_container", var_134_object, var_76_cvector, var_96_cvector, "item_plate.xml");
		var_93_object = null;

	}
Label_499:
	
}


void func_358(cvector var_17_cvector, cvector var_18_cvector, bool var_19_bool)
{
	string var_26_string; object var_27_object; object var_28_object; float var_29_float; float var_30_float; cvector var_31_cvector;
	float var_33_float;
	if(var_19_bool != 0)
		var_33_float = 0.05;
	else
		var_33_float = 0.2;
	bool var_32_bool;
	func_700(var_32_bool, var_33_float);
	if(var_32_bool != 0) {
		@RandOneOf(var_26_string, 5, 5, 3, 2, 3, "bread", "bottle_water", "milk", "vegetables", "lemon");
		object var_48_object;
		func_694(var_48_object);
		@AddActorByType(var_27_object, "scripted_container", var_48_object, var_17_cvector, var_18_cvector, (("item_" + var_26_string) + "_steal.xml"));
		var_27_object = null;
	} else {
		bool var_55_bool;
		func_700(var_55_bool, 0.5);
		if(var_55_bool == 0) goto Label_416;
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
		func_694(var_61_object);
		@AddActorByType(var_28_object, "scripted_container", var_61_object, var_17_cvector, var_31_cvector, "item_plate.xml");
		var_28_object = null;

	}
Label_416:
	
}


void func_682(bool var_13_bool, object var_14_object, string var_15_string)
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


void func_555(object var_0_object, object var_1_object)
{
	if(!var_1_object) { //@nz
		object var_203_object;
		func_705(var_203_object);
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


// @pe
void func_171(string var_84_string, int var_85_int, int var_86_int)
{
	if(var_85_int == 0) {
		if(var_86_int == 0) {
			var_84_string = "ilittleboy.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		if(var_86_int == 1) {
			var_84_string = "ilittlegirl.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		if(var_86_int == 2) {
			var_84_string = "iboy.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		if(var_86_int == 3) {
			var_84_string = "igirl.xml";
			return 0;
		EMIT "GOTO 0xcc";
		}
		if(var_86_int == 4) {
			var_84_string = "igirl2.xml";
			return 0;
		}
	} else if(var_85_int == 1) {
			if(var_86_int == 0) {
				var_84_string = "iwoman.xml";
				return 0;
			EMIT "GOTO 0xdb";
			}
			if(var_86_int == 1) {
				var_84_string = "iwasted_girl.xml";
				return 0;
			}
	}
Label_252:
	for(;;) {
		var_84_string = "";
		return 0;

	}
	
	if(!(var_85_int == 2)) goto Label_252;
	if(var_86_int == 0) {
		var_84_string = "iunosha.xml";
		return 0;
	EMIT "GOTO 0xfc";
	}
	if(var_86_int == 1) {
		var_84_string = "iunosha2.xml";
		return 0;
	EMIT "GOTO 0xfc";
	}
	if(var_86_int == 2) {
		var_84_string = "iworker.xml";
		return 0;
	EMIT "GOTO 0xfc";
	}
	if(var_86_int == 3) {
		var_84_string = "iworker2.xml";
		return 0;
	EMIT "GOTO 0xfc";
	}
	if(!(var_86_int == 4)) goto Label_252;
	var_84_string = "iwasted_male.xml";
}


void func_301(bool var_64_bool)
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
		func_417(var_76_cvector, var_77_cvector, var_78_bool);
		var_69_int += 1;
	}
}


void func_500(cvector var_149_cvector, cvector var_150_cvector, bool var_151_bool)
{
	object var_153_object;
	float var_155_float;
	if(var_151_bool != 0)
		var_155_float = 0.05;
	else
		var_155_float = 0.05;
	bool var_154_bool;
	func_700(var_154_bool, var_155_float);
	if(var_154_bool != 0) {
		object var_158_object;
		func_694(var_158_object);
		@AddActorByType(var_153_object, "scripted_container", var_158_object, var_149_cvector, var_150_cvector, "item_knife_steal.xml");
		var_153_object = null;
	}
	
}


void func_694(object var_48_object)
{
	object var_50_object;
	@self(var_50_object);
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


void func_700(bool var_32_bool, float var_33_float)
{
	float var_36_float;
	@rand(var_36_float);
	var_32_bool = var_36_float < var_33_float;
}


