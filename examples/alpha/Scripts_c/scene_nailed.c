maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		if(!var_1_object) { //@nz
			object var_3_object;
			func_408(var_3_object);
			var_1_object = var_3_object;
		}
		if(!var_0_object) //@nz
			@CreateIntVector(var_0_object);
		func_32();
		object var_175_object = var_0_object;
		func_0();
	
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
			func_408(var_19_object);
			var_1_object = var_19_object;
		}
		if(!var_0_object) //@nz
			@CreateIntVector(var_0_object);
		func_432(var_1_object);
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
			func_2(var_40_int);
			var_38_string = var_15_string;
			string var_41_string; int var_42_int; int var_43_int;
			var_12_int = var_42_int;
			var_14_int = var_43_int;
			func_5(var_43_int);
			var_41_string = var_16_string;
			string var_44_string; int var_45_int; int var_46_int;
			var_12_int = var_45_int;
			var_14_int = var_46_int;
			func_8(var_46_int);
			var_44_string = var_17_string;
			object var_47_object; object var_48_object; string var_49_string; string var_50_string; string var_51_string;
			object var_52_object;
			func_397(var_52_object);
			var_52_object = var_48_object;
			var_15_string = var_49_string;
			var_16_string = var_50_string;
			var_17_string = var_51_string;
			func_414(var_47_object, var_48_object, var_49_string, var_50_string, var_51_string);
			var_1_object->add(var_47_object); //@t
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
					if(var_12_bool == 0) goto Label_364;
					bool var_13_bool; object var_14_object;
					func_385(var_13_bool, var_14_object, "ToDie");
					if(!var_13_bool) //@nz
						var_7_int += 1;
					else
						@RemoveActor(var_14_object);
				var_1_object->remove(var_7_int); //@t
				var_0_object->remove((var_7_int * 3), ((var_7_int + 1) * 3)); //@t
				var_6_int += -1;
				var_8_object = null;
			}
			func_432(var_1_object);
			}
		}
	
	}

}


// @pe
void func_0(void)
{
}


void func_129(cvector var_22_cvector, cvector var_23_cvector, bool var_24_bool)
{
	string var_27_string; object var_28_object;
	float var_30_float;
	if(var_24_bool != 0)
		var_30_float = 0.1;
	else
		var_30_float = 0.2;
	bool var_29_bool;
	func_403(var_29_bool, var_30_float);
	if(var_29_bool != 0) {
		@RandOneOf(var_27_string, 5, 5, 3, 2, 3, "bread", "bottle_water", "milk", "vegetables", "lemon");
		object var_45_object;
		func_397(var_45_object);
		@AddActorByType(var_28_object, "scripted_container", var_45_object, var_22_cvector, var_23_cvector, (("item_" + var_27_string) + "_steal.xml"));
		var_28_object = null;
	}
	
}


// @pe
void func_2(string var_38_string)
{
	var_38_string = "";
}


void func_385(bool var_13_bool, object var_14_object, string var_15_string)
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


// @pe
void func_5(string var_41_string)
{
	var_41_string = "";
}


// @pe
void func_8(string var_44_string)
{
	var_44_string = "";
}


void func_72(bool var_53_bool)
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
		func_163(var_65_cvector, var_66_cvector, var_67_bool);
		var_58_int += 1;
	}
}


void func_397(object var_45_object)
{
	object var_47_object;
	@self(var_47_object);
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_403(bool var_29_bool, float var_30_float)
{
	float var_33_float;
	@rand(var_33_float);
	var_29_bool = var_33_float < var_30_float;
}


void func_408(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_91(bool var_110_bool)
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
		func_221(var_122_cvector, var_123_cvector, var_124_bool);
		var_115_int += 1;
	}
}


void func_221(cvector var_122_cvector, cvector var_123_cvector, bool var_124_bool)
{
	object var_126_object;
	float var_128_float;
	if(var_124_bool != 0)
		var_128_float = 0.1;
	else
		var_128_float = 0.1;
	bool var_127_bool;
	func_403(var_127_bool, var_128_float);
	if(var_127_bool != 0) {
		object var_131_object;
		func_397(var_131_object);
		@AddActorByType(var_126_object, "scripted_container", var_131_object, var_122_cvector, var_123_cvector, "item_knife_steal.xml");
		var_126_object = null;
	}
	
}


void func_414(object var_47_object, object var_48_object, string var_49_string, string var_50_string, string var_51_string)
{
	bool var_59_bool; cvector var_60_cvector; cvector var_61_cvector;
	var_48_object->GetLocator(var_49_string, var_59_bool, var_60_cvector, var_61_cvector);
	if(!var_59_bool) //@nz
		@Trace(("Locator " + var_49_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_50_string, var_48_object, var_60_cvector, var_61_cvector, var_51_string);
	object var_62_object = var_47_object;
	
}
EMIT "Stack[-1] = 0";


void func_32(void)
{
	bool var_8_bool;
	@GetProperty("nailed", var_8_bool);
	bool var_10_bool;
	var_8_bool = var_10_bool;
	func_53(var_10_bool);
	bool var_53_bool;
	var_8_bool = var_53_bool;
	func_72(var_53_bool);
	bool var_110_bool;
	var_8_bool = var_110_bool;
	func_91(var_110_bool);
	bool var_134_bool;
	var_8_bool = var_134_bool;
	func_110(var_134_bool);
}


void func_163(cvector var_65_cvector, cvector var_66_cvector, bool var_67_bool)
{
	string var_73_string; object var_74_object; float var_75_float; float var_76_float; cvector var_77_cvector;
	float var_79_float;
	if(var_67_bool != 0)
		var_79_float = 0.1;
	else
		var_79_float = 0.2;
	bool var_78_bool;
	func_403(var_78_bool, var_79_float);
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
		func_397(var_99_object);
		@AddActorByType(var_74_object, "scripted_container", var_99_object, var_65_cvector, var_77_cvector, "item_plate.xml");
		object var_102_object;
		func_397(var_102_object);
		@AddActorByType(var_74_object, "scripted_container", var_102_object, (var_65_cvector + [0.0, 5.0, 0.0]), var_66_cvector, (("item_" + var_73_string) + "_steal.xml"));
		var_74_object = null;
	}
	
}


void func_110(bool var_134_bool)
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
		func_240(var_146_cvector, var_147_cvector, var_148_bool);
		var_139_int += 1;
	}
}


void func_432(object var_31_object)
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


void func_240(cvector var_146_cvector, cvector var_147_cvector, bool var_148_bool)
{
	string var_151_string; object var_152_object;
	float var_154_float;
	if(var_148_bool != 0)
		var_154_float = 0.2;
	else
		var_154_float = 0.4;
	bool var_153_bool;
	func_403(var_153_bool, var_154_float);
	if(var_153_bool != 0) {
		@RandOneOf(var_151_string, 10, 15, 3, 3, 3, 1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
		object var_169_object;
		func_397(var_169_object);
		@AddActorByType(var_152_object, "scripted_container", var_169_object, var_146_cvector, var_147_cvector, (("item_" + var_151_string) + "_steal.xml"));
		var_152_object = null;
	}
	
}


void func_53(bool var_10_bool)
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
		func_129(var_22_cvector, var_23_cvector, var_24_bool);
		var_15_int += 1;
	}
}


