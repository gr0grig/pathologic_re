maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, int var_6_int)
	{
		var_5_bool = false;
		int var_7_int;
		func_135(var_7_int);
		var_6_int = var_7_int;
		@CreateObjectVector(var_4_object);
		@CreateStringVector(var_0_object);
		@CreateStringVector(var_1_object);
		@CreateBoolVector(var_2_object);
		func_154(var_0_object, var_1_object, var_2_object);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, int var_6_int)
	{
		bool var_17_bool; int var_18_int; string var_21_string; string var_22_string; object var_23_object; bool var_24_bool;
		var_17_bool = false;
		bool var_16_bool;
		@HasProperty("inited", var_16_bool);
		if(var_16_bool != 0) {
			@GetProperty("inited", var_18_int);
			var_17_bool = var_18_int != 0;
		}
		if(!var_17_bool) { //@nz
		}
		if(!var_5_bool) { //@nz
			object var_31_object; object var_32_object;
			object var_33_object;
			func_111(var_33_object);
			var_33_object = var_32_object;
			func_144(var_31_object, var_32_object);
			var_31_object->SetProperty("day", var_6_int); //@t
			var_5_bool = true;
		}
		int var_19_int;
		var_0_object->size(var_19_int); //@t
		int var_20_int = 0;
	
		while(var_20_int < var_19_int) {
			var_0_object->get(var_21_string, var_20_int); //@t
			var_1_object->get(var_22_string, var_20_int); //@t
			var_2_object->get(var_24_bool, var_20_int); //@t
			if(!var_24_bool) { //@nz
				object var_57_object; object var_58_object; string var_60_string; string var_61_string;
				object var_62_object;
				func_111(var_62_object);
				var_62_object = var_58_object;
				var_21_string = var_60_string;
				var_22_string = var_61_string;
				func_117(var_57_object, var_58_object, ("pt_k2s_svita" + (var_20_int + 1)), var_60_string, var_61_string);
				var_57_object = var_23_object;
				var_23_object->SetProperty("index", var_20_int);
			}
			var_4_object->add(var_23_object); //@t
			var_23_object = null;
			var_20_int += 1;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, int var_6_int)
	{
		int var_11_int; object var_13_object; bool var_14_bool;
		var_4_object->size(var_11_int); //@t
		int var_12_int = 0;
	
		while(var_12_int < var_11_int) {
			var_4_object->get(var_13_object, var_12_int); //@t
			if(var_13_object != 0) {
				var_13_object->HasProperty("dead", var_14_bool);
				var_2_object->set(var_14_bool, var_12_int); //@t
				@RemoveActor(var_13_object);
			}
			var_13_object = null;
			var_12_int += 1;
		}
	
	}

}


void func_135(int var_7_int)
{
	float var_9_float;
	@GetGameTime(var_9_float);
	var_7_int = 1 + (var_9_float / 24);
}


void func_111(object var_33_object)
{
	object var_35_object;
	@self(var_35_object);
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_144(object var_31_object, object var_32_object)
{
	object var_37_object;
	var_32_object = var_37_object;
	object var_36_object;
	func_117(var_36_object, var_37_object, "pt_k2s_npc", "NPC_Bakalavr", "k2system_danko.xml");
	var_36_object = var_31_object;
}


void func_117(object var_36_object, object var_37_object, string var_38_string, string var_39_string, string var_40_string)
{
	bool var_45_bool; cvector var_46_cvector; cvector var_47_cvector;
	var_37_object->GetLocator(var_38_string, var_45_bool, var_46_cvector, var_47_cvector);
	if(!var_45_bool) //@nz
		@Trace(("Locator " + var_38_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_39_string, var_37_object, var_46_cvector, var_47_cvector, var_40_string);
	object var_48_object = var_36_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_154(object var_13_object, object var_14_object, object var_15_object)
{
	var_13_object->add("pers_wasted_male");
	var_14_object->add("k2system_wasted_male.xml");
	var_15_object->add(false);
	var_13_object->add("pers_wasted_male");
	var_14_object->add("k2system_wasted_male.xml");
	var_15_object->add(false);
	var_13_object->add("pers_patrool");
	var_14_object->add("k2system_patrol.xml");
	var_15_object->add(false);
}


