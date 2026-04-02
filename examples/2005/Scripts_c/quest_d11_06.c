// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		object var_3_object;
		@GetMainOutdoorScene(var_3_object);
		@CreateObjectVector(var_0_object);
		object var_4_object; object var_5_object;
		var_3_object = var_5_object;
		func_196(var_4_object, var_5_object, "pt_d11q06_wastedmale1", "pers_wasted_male", "d11q06_wastedmale.xml");
		var_0_object->add(var_4_object); //@t
		object var_22_object; object var_23_object;
		var_3_object = var_23_object;
		func_196(var_22_object, var_23_object, "pt_d11q06_wastedmale2", "pers_wasted_male", "d11q06_wastedmale.xml");
		var_0_object->add(var_22_object); //@t
		object var_27_object; object var_28_object;
		var_3_object = var_28_object;
		func_196(var_27_object, var_28_object, "pt_d11q06_wastedmale3", "pers_wasted_male", "d11q06_wastedmale.xml");
		var_0_object->add(var_27_object); //@t
		object var_32_object; object var_33_object;
		var_3_object = var_33_object;
		func_196(var_32_object, var_33_object, "pt_d11q06_wastedmale4", "pers_wasted_male", "d11q06_wastedmale.xml");
		var_0_object->add(var_32_object); //@t
		object var_37_object; object var_38_object;
		var_3_object = var_38_object;
		func_196(var_37_object, var_38_object, "pt_d11q06_wastedgirl1", "pers_wasted_girl", "d11q06_wastedgirl.xml");
		var_0_object->add(var_37_object); //@t
		object var_42_object; object var_43_object;
		var_3_object = var_43_object;
		func_196(var_42_object, var_43_object, "pt_d11q06_wastedgirl2", "pers_wasted_girl", "d11q06_wastedgirl.xml");
		var_0_object->add(var_42_object); //@t
		func_148(11);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_4_object;
		@Trace(var_2_string);
		if(var_2_string == "place_maria") {
			@GetSceneByName(var_4_object, "crypt2");
			object var_8_object; object var_9_object;
			var_4_object = var_9_object;
			func_178(var_8_object, var_9_object, "pt_d11q06_maria", "NPC_Maria", "d11q06_maria.xml");
			var_1_object = var_8_object;
			var_4_object = null;
		} else if(var_2_string == "fail") {
				func_112();
		}
	Label_97:
		for(;;) {

		}
	
		if(!(var_2_string == "completed")) goto Label_97;
		func_120();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_98();
	}

}


void func_128(void)
{
}


void func_129(object var_0_object, object var_1_object)
{
	func_128();
	func_214(var_0_object);
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_66_object;
	func_172(var_66_object);
	@RemoveActor(var_66_object);
}


void func_98(void)
{
	int var_5_int;
	@GetVariable("d11q06", var_5_int);
	if(var_5_int != 1000)
		func_112();
	int var_4_int;
	func_129(var_4_int, var_5_int);
}


void func_196(object var_4_object, object var_5_object, string var_6_string, string var_7_string, string var_8_string)
{
	bool var_13_bool; cvector var_14_cvector; cvector var_15_cvector;
	var_5_object->GetLocator(var_6_string, var_13_bool, var_14_cvector, var_15_cvector);
	if(!var_13_bool) //@nz
		@Trace(("Locator " + var_6_string) + " doesn't exist");
	else
		var_5_object->AddStationaryActor(Obj(), var_14_cvector, var_15_cvector, var_7_string, var_8_string);
	object var_16_object = var_4_object;
	
}
EMIT "Stack[-1] = 0";


void func_172(object var_66_object)
{
	object var_68_object;
	@self(var_68_object);
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


void func_112(void)
{
	@SetVariable("d11q06", -1);
	func_128();
}


void func_178(object var_8_object, object var_9_object, string var_10_string, string var_11_string, string var_12_string)
{
	bool var_17_bool; cvector var_18_cvector; cvector var_19_cvector;
	var_9_object->GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	if(!var_17_bool) //@nz
		@Trace(("Locator " + var_10_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_11_string, var_9_object, var_18_cvector, var_19_cvector, var_12_string);
	object var_20_object = var_8_object;
	
}
EMIT "Stack[-1] = 0";


void func_148(int var_47_int)
{
	float var_48_float; float var_49_float;
	@GetGameTime(var_49_float);
	if(var_49_float >= (var_47_int * 24)) {
		func_129(var_48_float, var_49_float);
	} else {
		@SetTimeEvent(0, (var_47_int * 24));
		@Hold();
	}
	
}


void func_214(object var_53_object)
{
	int var_57_int; int var_58_int; object var_59_object;
	if(var_53_object != 0) {
		var_53_object->size(var_57_int);
		var_58_int = 0;

		while(var_58_int < var_57_int) {
			var_53_object->get(var_59_object, var_58_int);
			if(var_59_object != 0)
				var_59_object->Remove();
			var_59_object = null;
			var_58_int += 1;
		}

		var_53_object->clear();
	}
}


void func_120(void)
{
	@SetVariable("d11q06", 1000);
	func_128();
}


