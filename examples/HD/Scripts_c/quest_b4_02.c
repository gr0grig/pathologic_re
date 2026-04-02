// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		@SetVariable("b4q02", 1);
		object var_6_object;
		func_196(var_6_object);
		var_3_object = var_6_object;
		func_166(4);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_12_object; object var_13_object; object var_14_object; int var_15_int; bool var_16_bool; cvector var_17_cvector; cvector var_18_cvector;
		@Trace(var_4_string);
		if(var_4_string == "place_boy") {
			@GetMainOutdoorScene(var_12_object);
			object var_21_object; object var_22_object;
			func_220(var_21_object, var_22_object, "pt_b4q02_boy", "pers_boy", "b4q02_boy.xml");
			var_0_object = var_21_object;
			@GetSceneByName(var_22_object, "house5_unoin03r");
			object var_40_object; object var_41_object;
			var_12_object = var_41_object;
			func_202(var_40_object, var_41_object, "pt_b4q02_samopal", "scripted_container", "b4q02_samopal.xml");
			var_1_object = var_40_object;
			object var_58_object; object var_59_object;
			var_12_object = var_59_object;
			func_202(var_58_object, var_59_object, "pt_b4q02_samopal_ammo", "scripted_container", "b4q02_samopal_ammo.xml");
			var_2_object = var_58_object;
			var_12_object = null;
		} else {
				if(var_4_string == "boy_run") {
					@GetMainOutdoorScene(var_14_object);
					var_15_int = 1;

				Label_56:
					var_14_object->GetLocator(("pt_b4q02_grabitel" + var_15_int), var_16_bool, var_17_cvector, var_18_cvector);
					if(!var_16_bool) { //@nz
					} else {
						var_14_object->AddStationaryActor(var_13_object, var_17_cvector, var_18_cvector, "pers_grabitel", "b4q02_grabitel.xml", true);
						var_3_object->add(var_13_object); //@t
						var_15_int += 1;
						goto Label_56;
				}
					if(var_4_string == "ammo_or_samopal_taken") {
						func_259();
						func_133();
					} else if(var_4_string == "house_load") {
					} else if(var_4_string == "fail") {
						func_125();
					} else if(var_4_string == "completed") {
						func_133();
					}
				}
				var_0_object->GetActor(var_13_object); //@t
				if(!var_13_object) //@nz
					var_0_object->Remove(); //@t
				else
					@Trigger(var_13_object, "run");

				var_14_object = null;
				var_13_object = null;
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		func_114();
	}

}


void func_259(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 215, 2, 518578);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_285(var_81_bool, var_82_object, 213);
}
EMIT "Stack[-1] = 0";


void func_196(object var_6_object)
{
	object var_8_object;
	@CreateObjectVector(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


void func_133(void)
{
	@SetVariable("b4q02", 1000);
	func_141(var_15_int, var_16_bool, var_17_cvector, var_18_cvector);
}


void func_166(int var_9_int)
{
	float var_10_float; float var_11_float;
	@GetGameTime(var_11_float);
	if(var_11_float >= (var_9_int * 24)) {
		func_141(var_3_object, var_9_int, var_10_float, var_11_float);
	} else {
		@SetTimeEvent(0, (var_9_int * 24));
		@Hold();
	}
	
}


void func_202(object var_40_object, object var_41_object, string var_42_string, string var_43_string, string var_44_string)
{
	bool var_49_bool; cvector var_50_cvector; cvector var_51_cvector;
	var_41_object->GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector);
	if(!var_49_bool) //@nz
		@Trace(("Locator " + var_42_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string);
	object var_52_object = var_40_object;
	
}
EMIT "Stack[-1] = 0";


void func_141(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	func_238(var_3_object);
	object var_31_object;
	func_190(var_31_object);
	@RemoveActor(var_31_object);
}


void func_238(object var_20_object)
{
	int var_24_int; int var_25_int; object var_26_object;
	if(var_20_object != 0) {
		var_20_object->size(var_24_int);
		var_25_int = 0;

		while(var_25_int < var_24_int) {
			var_20_object->get(var_26_object, var_25_int);
			if(var_26_object != 0)
				var_26_object->Remove();
			var_26_object = null;
			var_25_int += 1;
		}

		var_20_object->clear();
	}
}


void func_272(object var_90_object)
{
	object var_92_object;
	@GetDiaryRoot(var_92_object);
	if(!var_92_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_90_object = false;
	}
	var_92_object = var_90_object;
}
EMIT "Stack[-1] = 0";


void func_114(void)
{
	int var_7_int;
	@GetVariable("b4q02", var_7_int);
	if(var_7_int != 1000)
		func_125();
}


void func_285(bool var_81_bool, object var_82_object, int var_83_int)
{
	object var_90_object;
	func_272(var_90_object);
	object var_87_object;
	var_90_object = var_87_object;
	object var_88_object;
	var_87_object->Find(var_83_int, var_88_object);
	if(!var_88_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_83_int);
		var_81_bool = false;
	}
	var_88_object->AddChild(var_82_object);
	@SendWorldWndMessage(7);
	int var_89_int;
	var_82_object->GetCategory(var_89_int);
	@SetDiarySection(var_89_int);
	var_81_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_220(object var_21_object, object var_22_object, string var_23_string, string var_24_string, string var_25_string)
{
	bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	var_22_object->GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector);
	if(!var_30_bool) //@nz
		@Trace(("Locator " + var_23_string) + " doesn't exist");
	else
		var_22_object->AddStationaryActor(Obj(), var_31_cvector, var_32_cvector, var_24_string, var_25_string);
	object var_33_object = var_21_object;
	
}
EMIT "Stack[-1] = 0";


void func_125(void)
{
	@SetVariable("b4q02", -1);
	func_141(var_4_int, var_5_float, var_6_int, var_7_int);
}


void func_190(object var_31_object)
{
	object var_33_object;
	@self(var_33_object);
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


