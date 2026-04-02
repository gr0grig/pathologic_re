maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, int var_6_int)
	{
		var_5_bool = false;
		int var_9_int;
		func_157(var_9_int);
		var_6_int = var_9_int;
		@CreateObjectVector(var_4_object);
		@CreateStringVector(var_0_object);
		@CreateStringVector(var_1_object);
		@CreateBoolVector(var_2_object);
		func_176(var_0_object, var_1_object, var_2_object);
		int var_8_int;
		var_0_object->size(var_8_int); //@t
		if(var_8_int != 0)
			var_4_object->resize(var_8_int); //@t
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";

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
			func_133(var_33_object);
			var_33_object = var_32_object;
			func_166(var_31_object, var_32_object);
			var_31_object->SetProperty("day", var_6_int); //@t
			var_5_bool = true;
		}
		int var_19_int;
		var_0_object->size(var_19_int); //@t
		int var_20_int = 0;
	
		while(var_20_int < var_19_int) {
			var_0_object->get(var_21_string, var_20_int); //@t
			var_1_object->get(var_22_string, var_20_int); //@t
			var_23_object = null;
			var_2_object->get(var_24_bool, var_20_int); //@t
			if(!var_24_bool) { //@nz
				@Trace("strActorName: " + var_21_string);
				@Trace("strXMLName: " + var_22_string);
				object var_61_object; object var_62_object; string var_64_string; string var_65_string;
				object var_66_object;
				func_133(var_66_object);
				var_66_object = var_62_object;
				var_21_string = var_64_string;
				var_22_string = var_65_string;
				func_139(var_61_object, var_62_object, ("pt_k2s_svita" + (var_20_int + 1)), var_64_string, var_65_string);
				var_61_object = var_23_object;
				@Trace("setting property");
				var_23_object->SetProperty("index", var_20_int);
				@Trace("property set");
			}
			var_4_object->set(var_20_int, var_23_object); //@t
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
				var_2_object->set(var_12_int, var_14_bool); //@t
				@RemoveActor(var_13_object);
			}
			var_13_object = null;
			var_12_int += 1;
		}
	
	}

}


void func_133(object var_33_object)
{
	object var_35_object;
	@self(var_35_object);
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_166(object var_31_object, object var_32_object)
{
	object var_37_object;
	var_32_object = var_37_object;
	object var_36_object;
	func_139(var_36_object, var_37_object, "pt_k2s_npc", "NPC_Burah", "k2system_burah.xml");
	var_36_object = var_31_object;
}


void func_139(object var_36_object, object var_37_object, string var_38_string, string var_39_string, string var_40_string)
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
void func_176(object var_15_object, object var_16_object, object var_17_object)
{
	var_15_object->add("pers_butcher");
	var_16_object->add("k2system_butcher.xml");
	var_17_object->add(false);
	var_15_object->add("pers_morlok");
	var_16_object->add("k2system_morlok.xml");
	var_17_object->add(false);
	var_15_object->add("pers_morlok");
	var_16_object->add("k2system_morlok.xml");
	var_17_object->add(false);
}


void func_157(int var_9_int)
{
	float var_11_float;
	@GetGameTime(var_11_float);
	var_9_int = 1 + (var_11_float / 24);
}


